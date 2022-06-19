#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>> matrix ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n = matrix.size();
    int m = matrix[0].size();
    int row;
    int target = 20; 
   for(int i=0;i<n;i++){
    if(matrix[i][0]==target){
        return 1;
    }
    else if(matrix[i][0]>target){
        row = i-1;
        break;
   }
   else{
        row = i;
   }
}
   if(row>=0){
    for(int i=0;i<m;i++){
        if(target==matrix[row][i]){
            return 1;
        }
    }
   } 
    return 0;
}