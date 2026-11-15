class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7, e = 1, o = 0, p = 0, res = 0;
        for (int x : arr) {
            p ^= x & 1;
            if (p) {
                res = (res + e) % MOD;
                o++;
            } else {
                res = (res + o) % MOD;
                e++;
            }
        }
        return res;
    }
};
