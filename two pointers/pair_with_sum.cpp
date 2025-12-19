#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,6};
    int target = 6;
    int l = 0, r = nums.size()-1;

    while(l < r){
        int sum = nums[l] + nums[r];
        if(sum == target){
            cout << nums[l] << " " << nums[r];
            break;
        }
        else if(sum < target) l++;
        else r--;
    }
}
