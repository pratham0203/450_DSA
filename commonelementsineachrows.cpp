#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[4][5] = {{1, 2, 1, 4, 8},{3, 7, 8, 5, 1},{8, 7, 7, 3, 1},{8, 1, 2, 7, 9}};
    int n = 4;
    int k =5;
    unordered_map<int,int>m;
    for(int i=0;i<k;i++){
        m[mat[0][i]] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            if(m[mat[i][j]]==i){
                m[mat[i][j]] = i+1;
                   if(i==n-1 && m[mat[i][j]]==n){
                     cout<<mat[i][j]<<" ";
                }  
            }
        }
    }
    return 0;
}