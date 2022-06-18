#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans;
    int n = intervals.size();
    int start;
    int end;
    if(intervals.size()<=1){
        ans.push_back(intervals[0]);
    }
    else if(intervals.size()==2){
        for(int i=0;i<n;i++){
        start = intervals[i+1][0];
        end = intervals[i][1];
        if(start<=end){
            intervals[i+1][0] = intervals[i][0];
            intervals[i][0] = INT_MAX;
            intervals[i][1] = INT_MAX;
        }
        else{
            ans.push_back(intervals[i]);
        }
    }
    sort(intervals.begin(),intervals.end());
    }
    else{
        for(int i=0;i<n-1;i++){
        start = intervals[i+1][0];
        end = intervals[i][1];
        if(start<=end){
            intervals[i+1][0] = intervals[i][0];
            intervals[i][0] = INT_MAX;
            intervals[i][1] = INT_MAX;
        }
    }
    sort(intervals.begin(),intervals.end());
    intervals.pop_back();
    for(int i=0;i<n-1;i++){
        ans.push_back(intervals[i]);
    }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}