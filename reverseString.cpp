#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[] = {"h","e","l","l","o"};
    for(int i=0;i<2;i++){
        swap(s[i],s[4-i]);
    }
    for(int i=0;i<5;i++){
       cout<<s[i];
    }
    return 0;
}