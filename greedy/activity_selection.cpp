#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> act = {{1,3},{2,4},{3,5},{0,6},{5,7}};
    sort(act.begin(), act.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });

    int count = 1;
    int end = act[0].second;

    for(int i=1;i<act.size();i++){
        if(act[i].first >= end){
            count++;
            end = act[i].second;
        }
    }
    cout << count;
}
