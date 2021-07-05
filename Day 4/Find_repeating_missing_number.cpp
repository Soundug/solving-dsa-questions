//Problem link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#

//First Approach: Using Count Sort
//Time Complexity: O(N)
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *answer = new int(2);
        int freq[n+1] = {0};
            
        for(int i=0; i<n; i++)
        {
            freq[arr[i]]++;
        }
        for(int i=0; i<=n; i++)
        {
            if(freq[i] > 1)
            {
                answer[0] = i;
            }
            if(freq[i] == 0)
            {
                answer[1] = i;
            }
        }
        return answer;
        }
};

//Second Approach: Using XOR method
//Time Complexity: O(5N)
class Solution{
public:
    int *findTwoElement(int *arr, int n, int *x, int *y) {
        // code here
        int xor1;
        
        int set_bit_no;
        int i;
        *x = 0;
        *y = 0;
        
        xor1 = arr[0];
        
        for(int i=1; i<n; i++)
            xor1 = xor1 ^ i;
            
        set_bit_no = xor1 & (~xor1 - 1);
        
        for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no)
            /* arr[i] belongs to first set */
            *x = *x ^ arr[i];
  
        else
            /* arr[i] belongs to second set*/
            *y = *y ^ arr[i];
    }
        for (i = 1; i <= n; i++) 
        {
            if (i & set_bit_no)
                /* i belongs to first set */
                *x = *x ^ i;
  
            else
                /* i belongs to second set*/
                *y = *y ^ i;
        }
  
    /* *x and *y hold the desired
        output elements */
    }
};
