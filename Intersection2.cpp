#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    int n = 5;
    int m = 3;
    int count = 0;
    int i=0,j=0;
    while(i<n && j<n){
        if(a[i]==b[j]){
            count++;
        }
        i++;
        j++;
    }
    cout<<count;
    return 0;
}