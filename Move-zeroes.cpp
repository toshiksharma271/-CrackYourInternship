class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
       int L=0,R=0;
       while(true){
        if(R==nums.size()||L==nums.size()){
            break;
        }
        if(nums[R]!=0){
            swap(nums[L],nums[R]);
            L++;
            R++;
        }
        else{
            R++;
        }
       }
    }
};
