#include<bits/stdc++.h>
using namespace std;
int main(){
    int Mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n=4;
    int m=4;
    int k=0;
    int temp[n*m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[k] = Mat[i][j];
            k++;
        }
    }
    k=0;
    sort(temp,temp+n*m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Mat[i][j] = temp[k];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}