class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxhold = INT_MIN;
        int hold=0;
        int left = 0;
        int right = n-1;
        while(left<right){
          if(height[left]<=height[right]){
            hold = height[left]*(right-left);
             maxhold = max(maxhold,hold);
             left++;
          }
          else{
            hold = height[right]*(right-left);
             maxhold = max(maxhold,hold);
             right--;
          }

        }
        return maxhold;


    }
};
