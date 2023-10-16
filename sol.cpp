class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int index = i;
            while (index < n && s[index] == s[i]) {
                if (s[i] == 'I') {
                    ans.push_back(low);
                    low++;
                } else {
                    ans.push_back(high);
                    high--;
                }
                index++;
            }
            i = index - 1;
        }
        assert(low == high);
        ans.push_back(low);
        return ans;
    }
};
