#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[3][3] = {{1, 3, 5},{2, 6, 9},{3, 6, 9}};
    int r =3;
    int c = 3;
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        if(matrix[i][0]<min){
            min = matrix[i][0];
        }
        if(matrix[i][c-1]>max){
            max = matrix[i][c-1];
        }         
    }
    int desired = (r*c+1)/2;
    while(min<max){
        int mid = min + (max-min)/2;
        int place = 0;
        for(int i=0;i<r;i++){
            place += upper_bound(matrix[i],matrix[i]+c,mid) - matrix[i];
        }
        if(place<desired){
            min = mid+1;
        }
        else{
            max = mid;
        }
    }
cout<<min;
    return 0;
}