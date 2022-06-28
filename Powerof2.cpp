#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=31;
    int count = 0;
    if(N==0){
        count = 0;
    }
    if ((N & (~(N-1)))==N){
        count++;
    }
    cout<<count;
    return 0;
}