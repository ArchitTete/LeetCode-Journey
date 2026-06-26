class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Creating a result conatiner 
        vector<vector<int>>result;
        //sorting arr
        sort(nums.begin(),nums.end());
        int n =nums.size();
        // fix one element i
        for(int i =0;i<n-2;i++){
            //skip duplicates form 1st element 
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int left =i+1;
            int right=n-1;
            int sum = -nums[i];
            while (left < right){
                int s= nums[left]+nums[right];
                if(s==sum){
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    //skipping duplicate of left 
                    while(left<right && nums[left]==nums[left-1])
                    left++;
                    //skipping duplicate of right
                    while(left<right&&nums[right]==nums[right+1])
                    right--;
                }
                else if (s<sum){
                    left++;
                }
                else{
                    right--;
                }
          
            }
        }
        return result;
    }
};