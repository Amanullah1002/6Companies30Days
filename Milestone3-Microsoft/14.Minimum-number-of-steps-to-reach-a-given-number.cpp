/*
Submitted by Amanullah Khan
*/

#include <bits/stdc++.h>
using namespace std;

int minSteps(int target){
        int steps = 0;
        int sum = 0;
        while(sum < target)
        {
            sum += steps;
            steps++;
        }
        
        while((sum - target) % 2 == 1)
        {
            sum += steps;
            steps++;
        }
        return steps - 1;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        cout<<minSteps(D)<<"\n";
    }
    return 0;
}