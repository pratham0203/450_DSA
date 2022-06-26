#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[7] = {1,9,3,10,4,20,2};
    int ans;
    int n = 7;
    int count=0;
    unordered_set <int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(1)!=s.end()){
           cout<<"Yes";
    }
        else{cout<<"No";}}
    cout<<count;
    return 0;
}