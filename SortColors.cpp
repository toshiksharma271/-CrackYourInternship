class Solution {
public:
    void sortColors(vector<int>& nums) {
      //this problem can be solve using dutch national flag algorithm
      //(also known as 3-way partitioning)
      int low=0;int mid=0;int high=nums.size()-1;
      while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
      }

    }
};
