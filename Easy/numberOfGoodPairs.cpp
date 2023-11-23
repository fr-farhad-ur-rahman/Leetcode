#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int solve(vector <int>& nums){
        /*
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]) count++;
            }
        }
        return count;
        */

        int count = 0;
        unordered_map <int, int> mp;

        for(int x: nums){
            count += mp[x]++;
        }
        return count;
    }
};

int main(){
    Solution s;
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int res = s.solve(v);
    cout << res << endl;
    return 0;
}