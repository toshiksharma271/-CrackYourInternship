class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int>mappi;
        for(int i=0;i<size;i++){
            int remaining_number = target - nums[i];
            if(mappi.find(remaining_number)!=mappi.end()){
                return {i,mappi[remaining_number]};
            }
            mappi[nums[i]] = i;
        }
      
        return {0,0};
    }
};
