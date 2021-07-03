// Problem link: https://leetcode.com/problems/find-the-duplicate-number/
//Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        //move the slow and fast pointers in tortoise method
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        //Finding duplicate number after second collision
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
