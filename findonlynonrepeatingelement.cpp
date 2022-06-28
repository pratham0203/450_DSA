#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,1,4,3,5,1};
    int n = sizeof(arr)/sizeof(int);
    int res = 0;
    for(int i=0;i<n;i++){
        res = res^arr[i];
    }
    cout<<res;
    return 0;
}