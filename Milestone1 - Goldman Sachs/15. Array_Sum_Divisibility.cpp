/*
Problem Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
Submitted by Amanullah Khan
*/

#include <bits/stdc++.h>
using namespace std;


bool canPair(vector<int> nums, int k) {
        vector<int> vec(k,0);
        for(int i=0;i<nums.size();i++){
            int x = nums[i]%k;
            if(x == 0){
                if(vec[x]==0)vec[x]++; 
                else
                    vec[x]--;
                continue;
            }
            if(vec[x]==0){
                vec[k-x]++;
            }
            else{
                vec[x]--;
            }
        }
        for(int i=0;i<k;i++){
            if(vec[i]>0)return false;
        }
        return true;
    }


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) 
		{
			cin >> nums[i];	
		}
        bool ans = canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
} 
