#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15,16}};
    int r = 4;
    int c = 4;
    int top = 0;
    int down = r-1;
    int left = 0;
    int right = c-1;
    int dir = 0;
    while(left<=right && top<=down){
        if(dir==0){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i];
            }
            top++;
        }
        else if(dir==1){
            for(int i=top;i<=down;i++){
                cout<<matrix[i][right];
            }
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--){
                cout<<matrix[down][i];
            }
            down--;
        }
        else if (dir==3){
            for(int i=down;i>=top;i--){
                cout<<matrix[i][left];
            }
            left++;
        }
        dir = (dir+1)%4;
    }
    return 0;
}