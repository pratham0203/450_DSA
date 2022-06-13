#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[]={1, 5, 10, 20, 40, 80};
    int B[]={6, 7, 20, 80, 100};
    int C[]={3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
        vector<int>ans;
        unordered_map<int,int>m1,m2,m3;
        for(int i=0;i<n1;i++){
            m1[A[i]]++;
        }
        for(int i=0;i<n2;i++){
        m2[B[i]]++;
    }
    for(int i=0;i<n3;i++){
        m3[C[i]]++;
    }
    for(int i=0; i<n1;i++){
        if(m1[A[i]] and m2[A[i]] and m3[A[i]]){
            ans.push_back(A[i]);
            m1[A[i]]=0;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}