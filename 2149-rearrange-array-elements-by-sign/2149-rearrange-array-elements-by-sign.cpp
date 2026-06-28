class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
        }
        int posindex=1;
        int negindex=0;
        nums[0]=positive[0];
        for(int i=1;i<nums.size();i++){
            if(i%2==0){
                nums[i]=positive[posindex];
                posindex++;
            }
            else{
                nums[i]=negative[negindex];
                negindex++;
            }
        }
        return nums;
    }
};