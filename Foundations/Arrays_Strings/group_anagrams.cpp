class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        for (auto& str : strs) {

            string key = str;
            sort(key.begin(), key.end());

            mp[key].push_back(str);
        }

        for (auto& group : mp) {
            res.push_back(move(group.second));
        }

        return res;

        //=====================================================

        //     vector<vector<string>> res;
        //     unordered_map<string, vector<string>> mp;
        //     for (auto& w : strs) {
        //         string key = buildKey(w);
        //         mp[key].push_back(w);
        //     }

        //     for (auto& group : mp) {
        //         res.push_back(move(group.second));
        //     }

        //     return res;
        // }

        // string buildKey(const string& word) {
        //     int freq[26] = {0};
        //     for (char c : word) {
        //         freq[c - 'a']++;
        //     }
        //     string key;
        //     for (int i = 0; i < 26; i++) {
        //         key += to_string(freq[i]) + "#"; // delimiter to avoid
        //         ambiguity
        //     }
        //     return key;
        
        }
    };
