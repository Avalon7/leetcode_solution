ass Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result;
        //size too small
        if(nums.size() < 2)
            return result;
        std::unordered_map<int, int> values;
        for(int i = 0; i < nums.size(); i++){
            //store values from vector to hash_map
            values[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            int res_value = target - nums[i];
            if(values.find(res_value) != values.end()){
                int index = values[res_value];
                if(index == i)
                    continue;
                result.push_back(i);
                result.push_back(index);
                return result;
            }
        }
    }
};

