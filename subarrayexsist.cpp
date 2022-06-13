#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{   int arr[]={4,2,-3,1,6};
    int n = 5;
    int flag = 0; 
    unordered_map<int,bool> m;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum = currSum +arr[i];
        if(currSum==0 || m[currSum]==true){
            cout<<"Yes";
            int flag=1;
            return true;
        }
        m[currSum]=true;
    }
    if(flag==0){
        cout<<"No";
    }
    return 0;
}
