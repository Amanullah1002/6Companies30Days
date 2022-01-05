/*
Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/
Sumitted by: Amanullah Khan
*/
#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int len = nums.size(), sum = 0;
        
        for(int right = 0, left = 0; right < len; right++){
            sum += nums[right];
            
            while(sum >= target){
                minLen = min(minLen, (right-left+1));
                sum -= nums[left];
                left++;
            }
        }
        return minLen != INT_MAX ? minLen : 0;
    }
    
int main()
{
	int target=7;
	vector<int> nums {2,3,1,2,4,3};
	minSubArrayLen(target,nums);
	
	return 0;
}
