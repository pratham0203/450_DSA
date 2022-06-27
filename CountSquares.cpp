#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=3;
    int count=0;
    for(int i=1;i<=sqrt(N);i++){
        if(pow(i,2)<N){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count;
    return 0;
}