#include<bits/stdc++.h>
using namespace std;
int main(){
    string set="abc";
    vector<string>ans;
    string yolo="";
    int set_size = set.length();
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    for (counter = 1; counter < pow_set_size; counter++) {
        for (j = 0; j < set_size; j++) {
            if (counter & (1 << j)){
                yolo.push_back(set[j]);
            }
        }
        ans.push_back(yolo);
        yolo="";
    }
    sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    return 0;
}