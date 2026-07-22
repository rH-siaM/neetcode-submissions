class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()){
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};
        int size = s1.size();

        for (int i=0; i<size; i++) {
            freq1[s1[i]-'a']++;
        }

        for (int right=0; right<s2.size(); right++) {
            freq2[s2[right]-'a']++;

            if (right >= size) {
                freq2[s2[right - size] - 'a']--;
            }

             bool same = true;
            for (int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i]) {
                    same = false;
                    break;
                }
            }

            if (same)
                return true;

        }
        return false;

    }
};
