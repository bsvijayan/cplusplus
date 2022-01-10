/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>intSet;
        for( int i =0 ;i < nums.size() ; i++ )
        {
            if ( intSet.insert(nums[i]).second == false ) 
            
                return nums[i];
        }
        return -1;
    }
};
