#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,20,3,2,5,80};
    int size = 6;
    int flag =0;
    int N = 69;
    int i =0;
    int j=1;
    sort(arr,arr+size);
    while(i<size && j<size){
        if(i!=j && arr[j]-arr[i]==N){
            flag =1;
            break;
        }
        if(arr[j]-arr[i]<N){
            j++;
        }
        else{
            i++;
        }

    }
    cout<<flag;
    return 0;
}