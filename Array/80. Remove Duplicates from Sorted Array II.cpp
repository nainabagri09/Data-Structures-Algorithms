class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0; //index of valid array
        for(int n:nums) // take every element in loop(n=current number)
        {
            //if element is less than (i<2),
            //or if the current number is diffrent from nums[i-2]
            if(i<2 || n!=nums[i-2])
            {
                nums[i++]=n; //put valid nummer to array and increase by one
            }
        }
        return i; //total counts of valid elements
    }
};
