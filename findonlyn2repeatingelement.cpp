#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,1,4,3,5,1,2};
    int n = sizeof(arr)/sizeof(int);
    int set_bit_no;
    int XOR = arr[0];
    int i;
    int x=0;
    int y=0;
    int res = 0;
    for(i=1;i<n;i++){
        XOR ^=arr[i];
    }
    set_bit_no = XOR & ~(XOR-1);
    cout<<set_bit_no;
    for(i=0;i<n;i++){
        if(arr[i] & set_bit_no){
            cout<<arr[i]<<" ";
            x = x ^ arr[i];
        }
        else{
            y = y ^ arr[i];
        }
    }

    return 0;
}