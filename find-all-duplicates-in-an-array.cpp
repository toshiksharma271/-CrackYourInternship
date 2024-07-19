$ brute

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        vector<int>hm(n+1,0);
        for(int i=0;i<n;i++){
            hm[nums[i]]++;
            if(hm[nums[i]]==2){
                v.push_back(nums[i]);
            }
        }
        return v;
        
    }
};

$ optimal

#define pb push_back
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
           int num = abs(nums[i]);
           int index = num-1;
           if(nums[index]<0){
            v.pb(num);
           }
           else{
            nums[index]*=-1;
           }
        }
        return v;

    }
};

