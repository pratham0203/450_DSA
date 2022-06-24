int curRow[n];
    for(int i=0;i<m;i++){
        curRow[i]=M[0][i];
    }
    int maxAns = MaxArea(curRow,m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==1){
                curRow[j]+=1;
            }
            else{
                curRow[j]=0;
            }
        }
        int curAns = MaxArea(curRow,m);
        maxAns = max(maxAns,curAns);
    }
    cout<<maxAns;