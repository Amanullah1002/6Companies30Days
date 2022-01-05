/*
Problem Link: https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1
Submitted by Amanullah Khan
*/

#include <iostream>
using namespace std;

    int findPosition(int N , int M , int K) {
        while(--M) {
            K++;
            if(K == N+1) {
                K = 1;
            }
        }
        return K;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        
        cin>>n>>m>>k;
        cout << findPosition(n,m,k) <<"\n";
    }
    return 0;
} 
