#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[nums[i]];
        }
        
        return ans;
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> res = s.buildArray(v);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
