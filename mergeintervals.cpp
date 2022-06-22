#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{1,5},{4,6},{8,10},{9,18}};
     vector<vector<int>>ans;
    int n = intervals.size();
    int m = intervals[0].size();
    int start;
    int end;
    int a,b;
    if(n<=1){
        ans.push_back(intervals[0]);
    }
    else{
        for(int i=1;i<n;i++){
        start = intervals[i][0];
        end = intervals[i-1][m-1];
        a = intervals[i-1][0];
        b = intervals[i][m-1];
        if(start<=end){
            ans.push_back({a,b});
            
        }
    }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}