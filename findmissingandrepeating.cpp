#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,4};
    int n = sizeof(arr)/sizeof(int);
    long long sum_r=n*(n+1)/2;
    long long sum_a = 0;
    long sum_sq_r =n*(n+1)*(2*n+1)/6;
    long long sum_sq_a = 0;
    long long ans[2];
    for(int i=0;i<n;i++){
        sum_a +=arr[i];
    }
    for(int i=0;i<n;i++){
        sum_sq_a+=pow(arr[i],2); 
    }
    long long c = sum_r - sum_a;
    long long d = sum_sq_r - sum_sq_a;
    long long x = 0.5*((d/c)+c);
    long long y = 0.5*((d/c)-c);
    ans[0] = x;
    ans[1] = y;
    return 0;
}