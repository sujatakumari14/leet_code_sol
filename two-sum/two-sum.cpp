class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator itr1,itr2;
        vector<int> v;
        int flag=0;
        
        for(itr1=nums.begin();itr1!=nums.end();itr1++)
        {
            for(itr2=itr1+1;itr2!=nums.end();itr2++)
            {
                int sum=*itr1+*itr2;
                if(sum==target)
                {
                    flag=1;
                    v.push_back(itr1-nums.begin());
                    v.push_back(itr2-nums.begin());
                    break;
                }
               
                if(flag==1)
                    break;
            }
        }
        return v;
        
    }
};