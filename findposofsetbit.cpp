#include<bits/stdc++.h>
using namespace std;
int main(){
    int N = 0;
    int n = N;
        int count =0;
        int check =0;
        int mask=1;
        while(N){
            if(mask&N){
            }
            N>>=1;
            count+=1;
        }
        while(n){
            n&=n-1;
            check++;
        }
        if(check>1){
            return -1;
        }
        else{
            return count;
        }
    return 0;
}