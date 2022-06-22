#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={{0,0},{1,1}};
    int n = 2;
    int m = 2;
    int right = m-1;
    int top = 0;
    int index=0;
    if(arr==NULL || n==0){
        cout<<-1;
    }
    while(right>=0 && top<n){
        if(arr[top][right]==1){
            index=top;
           right--;
        }
       else{
        top++;
       }
    }
    cout<<index;
    return 0;
}