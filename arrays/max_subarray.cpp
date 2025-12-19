#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int curr = 0, best = INT_MIN;

    for(int x : nums){
        curr = max(x, curr + x);
        best = max(best, curr);
    }
    cout << best;
    return 0;
}
