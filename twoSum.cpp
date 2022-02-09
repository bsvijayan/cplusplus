vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>intMap;
        vector<int>resultVec;
        int balance;
        for(int i=0;i<nums.size();i++ )
        {
            balance=target-nums[i];
            auto it=intMap.find(balance);
            if( it==intMap.end())
                intMap.insert(std::pair<int,int>(nums[i],i));
            else
            {      
                resultVec.push_back(i);
                resultVec.push_back(intMap[balance]);
             
            }
       
        }
        return resultVec;
    }
};

--
Take life as it comes
 
