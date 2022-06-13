#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    int n = 5;
    int m = 3;
    int count = 0;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
            count++;
        }
    }
    cout<<count;
    return 0;
}