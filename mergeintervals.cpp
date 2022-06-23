#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{1,2},{4,6},{8,10},{11,18}};
    vector<vector<int>>ans;
    int n = intervals.size();
    int m = intervals[0].size();
    int start;
    int end;
    if(n<=1){
        ans.push_back(intervals[0]);
    }
    for(int i=0;i<=n;i++){
        start = intervals[i+1][0];
        end = intervals[i][1];
        if(start<=end){
            int a = intervals[i][0];
            int b = intervals[i+1][1];
            ans.push_back({a,b});
            
        }
        else{
            ans.push_back(intervals[i]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (auto it = ans[i].begin();it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}