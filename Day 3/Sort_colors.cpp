//Problem link: https://leetcode.com/problems/sort-colors
//Time Complexity: O(N)
//Space Complexity: O(1)
//Used: Dutch National Flag Algorithm



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid <= high){
            switch(nums[mid]){
                
                //if the element is 0
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                //if the element is 1
                case 1:
                    mid++;
                    break;
                    
                //if the element is 2
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};
