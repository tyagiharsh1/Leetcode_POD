// You are given an array of integers nums. Return the length of the longest 
// subarray
//  of nums which is either 
// strictly increasing
//  or 
// strictly decreasing
// .

 

// Example 1:

// Input: nums = [1,4,3,3,2]

// Output: 2

// Explanation:

// The strictly increasing subarrays of nums are [1], [2], [3], [3], [4], and [1,4].

// The strictly decreasing subarrays of nums are [1], [2], [3], [3], [4], [3,2], and [4,3].

// Hence, we return 2.

// Example 2:

// Input: nums = [3,3,3,3]

// Output: 1

// Explanation:

// The strictly increasing subarrays of nums are [3], [3], [3], and [3].

// The strictly decreasing subarrays of nums are [3], [3], [3], and [3].

// Hence, we return 1.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incr=1;
        int decr=1;
        int maxi=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i])
            {
                incr++;
                decr=1;
            }
            else if(nums[i-1]>nums[i])
            {
                decr++;
                incr=1;
            }
            else
            {
                decr=1;
                incr=1;
            }
            maxi=max(maxi,max(decr,incr));
        }
        return maxi;

    }
};