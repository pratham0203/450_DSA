#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, -1, 3, 2, -7, -5, 11, 6};
    int n = 8;
    int cur_sum=0;
    int max_sum=arr[0];
    for(int i=0;i<n;i++){
        cur_sum = cur_sum + arr[i];
        if(cur_sum>max_sum){
            max_sum = cur_sum;
        }
        if(cur_sum < 0){
            cur_sum = 0;
        }
    }
    cout<<max_sum;
    return 0;
}