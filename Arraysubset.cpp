#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1[]={1,2,3,4,5,6};
    int a2[3]={1,2,9};
    int n = 6;
    int k = 3;
    int flag = 0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a1[i]]++;
    }
    for(int i=0;i<k;i++){
        if(m.find(a2[i])==m.end()){
            flag = 1;
        }
    }
    if(flag==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}