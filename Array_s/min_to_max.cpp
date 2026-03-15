class Solution {
public:
    int countNonMinimum(vector<int>& nums) {
        // write your code here
            int cnt=0;
            int n=nums.size();
            int min_num=*std::min_element(nums.begin(), nums.end());
            for(int i=0;i<n;i++){
                if(nums[i]==min_num)
                    cnt+=1;
            }
            
            return n-cnt;
    }
     
};
