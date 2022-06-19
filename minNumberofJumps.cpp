#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = 11; 
    int maxReach = arr[0];
    int jump = 1;
    int steps = arr[0];

    for(int i=1;i<n;i++){
        if(i==n-1){
            //
        }
        maxReach = max(maxReach,arr[i]+i);
        steps--;

        if(steps==0){
            jump++;

            if(i>=maxReach){
            
        }
        steps = maxReach - i;
        }
    } 
    cout<<jump;
    return 0;
}