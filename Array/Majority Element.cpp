class Solution {
public:
    int majorityElement(vector<int>& nums) {

       int sizeOfArray = nums.size();

       unordered_map<int, int> naina;

       for(int i=0; i<nums.size(); i++){
        naina[nums[i]]++;
       }
       for(auto &num : naina){
          if(num.second>sizeOfArray/2){
            return num.first;
          }
       }
       return -1;
    }
};
