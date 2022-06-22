#include<bits/stdc++.h>
using namespace std;
int MaxArea(int arr[],int n){
    int ps[n];
    int ns[n];
    int maxAns = 0;
    stack<int> s;
    stack<int> s2;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ps[i]=-1;
        }
        else{
            ps[i] = s.top();
        }
        s.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!s2.empty() && arr[s2.top()]>=arr[i]){
            s2.pop();
        }
        if(s2.empty()){
            ns[i]=-1;
        }
        else{
            ns[i] = s2.top();
        }
        s2.push(i);
    }
    for(int i=0;i<n;i++){
        int cur = (ns[i]-ps[i]-1)*arr[i];
        maxAns = max(maxAns,cur);
    }
    return maxAns;
}
int main(){
    int M[4][4] = {{1,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int currRow[4]={1,1,1,0};
    int ans=0;
    int n = sizeof(M) / sizeof(M[0]);
    int m = sizeof(M[0])/sizeof(int);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==1){
                currRow[j]+=1;
                cout<<currRow[j]<<" ";
            }
            else{
                currRow[j]=0;
                cout<<currRow[j]<<" ";

            }
        }
        cout<<endl;
    int curAns = MaxArea(currRow,m);
    ans = max(curAns,ans);
 }
 cout<<ans;
    return 0;
}