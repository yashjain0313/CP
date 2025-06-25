#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        vector<int> result;
        for (const auto& entry : mp) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }
        
        return result;
    }
}