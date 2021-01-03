vector<int> printIntersection(int a[],int b[],int n,int m){ 
    int i=0,j=0;
    vector<int> v;
    while(i<n&&j<m){
        if(a[i]==b[j])
            v.push_back(a[i]);
        int t=a[i]<b[j]?a[i]:b[j];
        while(t==a[i])
            i++;
        while(t==b[j])
            j++;
    }
    if(v.empty())
        v.push_back(-1);
    return v;
}
