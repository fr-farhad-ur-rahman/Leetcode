#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution{
public:
    vector <int> getConcatenation(vector <int>& nums){
        vector <int> ans;

        for(int i = 0; i < nums.size() * 2; i++){
            ans.push_back(nums[i % nums.size()]);
        }
        return ans;
    }
};

int main(){
    Solution s;

    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector <int> result = s.getConcatenation(v);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}