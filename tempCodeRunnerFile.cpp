   int flag = 0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a1[i]]++;
    }
    for(int i=0;i<k;i++){
        if(m.find(a2[i])==m.end()){
            flag = 1;
        }
    }
    if(flag==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }