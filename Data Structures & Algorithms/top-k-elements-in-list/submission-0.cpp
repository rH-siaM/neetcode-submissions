class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> count;
        for (int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        vector<pair<int, int>> freq;
        for (pair<int, int> item : count) {
            freq.push_back({item.first, item.second});
        }

        sort(freq.begin(), freq.end(), [](auto a, auto b)
        {
            return a.second > b.second;
        }
        );

        vector<int> answer;
        for (int i=0; i<k; i++){
            answer.push_back(freq[i].first);
        }
        
        return answer;
    }
};
