#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[]={"a","b","c","d"};
    int n = 4;
    int flag=1;
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-1-i]){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}