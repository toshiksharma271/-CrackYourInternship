#brute 
# better (binary search)
# optimal (slow and fast pointer approach)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])return nums[i];
        }
        return 0;
    }
};

# better (binary search)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 1;
        int right = n-1;
        while(left<right){
            int mid = (left+right)/2;
            int count = 0;
            for(auto it:nums){
                if(it<=mid){
                    count++;
                }
            }
            if(count>mid){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;

        
        
        return 0;
    }
};

# optimal (slow and fast pointer approach)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        slow = nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};

