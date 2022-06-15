#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,3,4,7,2,10,3,2,1};
    int n = 10;
    int k = 5;
    sort(arr,arr+n);
    int ans = arr[n-1]-arr[0];
    int mins = arr[0]+k;
    int maxs = arr[n-1]-k;
    int mi,ma;
    for(int i=0;i<n-1;i++){
        ma = max(maxs,arr[i]+k);
        mi = min(mins,arr[i+1]-k);
        if(mi<0){
            continue;
        }
        else{
            ans = min(ans, ma-mi);
        }
    }
    cout<<mins<<" "<<maxs<<" "<<ans; 
    return 0;
}