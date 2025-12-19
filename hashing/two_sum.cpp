#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        if(mp.count(target - nums[i])){
            cout << mp[target - nums[i]] << " " << i;
            break;
        }
        mp[nums[i]] = i;
    }
}
