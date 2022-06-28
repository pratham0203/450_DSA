#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int b = 25;
    int n = a^b;
    int count=0;
    while(n){
        n &= n-1;
        count++;
    }
    cout<<count;
    return 0;
}