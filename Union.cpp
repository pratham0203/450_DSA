#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    int m = 5;
    int n = 3;
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(b[i]);
    }
    cout<<s.size();
    return 0;
}