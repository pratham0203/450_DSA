#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {15,2,45,12,7,6};
    int n = 6;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            ans.push_back(i+1);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}