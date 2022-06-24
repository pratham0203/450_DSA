#include<bits/stdc++.h>
using namespace std;
int MaxArea(int arr[],int n){
    vector<int>left(n),right(n);
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.empty()){
            left[i]=0;
            s.push(i);
        }
        else{
            while(!s.empty() and arr[s.top()]>=arr[i]){
                s.pop();
            }
            left[i] = s.empty()?0:s.top()+1;
            s.push(i);
        }
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            right[i] = n-1;
            s.push(i);
        }
        else{
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            right[i] = s.empty()?n-1:s.top()-1;
            s.push(i);
        }
    }
    int max_area = INT_MIN;
    for(int i=0;i<n;i++){
        max_area = max(max_area,arr[i]*(right[i]-left[i]+1));
    }
    return max_area;
}
int main(){
    int M[1][10] = {{0,0,0,0,1,1,1,0,1,0}};
    int n = 1;
    int m = 10;
    int curRow[m];
    for(int i=0;i<m;i++){
        curRow[i]=M[0][i];
    }
    int maxAns = MaxArea(curRow,m);
    cout<<maxAns;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==1){
                curRow[j]+=1;
            }
            else{
                curRow[j]=0;
            }
        }
        int curAns = MaxArea(curRow,m);
        maxAns = max(maxAns,curAns);
    }
    cout<<maxAns;
    return 0;
}