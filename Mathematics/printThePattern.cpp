void printPat(int n)
{
    for(int init = 0; init < n; init++){
        for(int i = n; i >= 1; i--){
            for(int j = n-init; j >= 1; j--){
                cout<<i<<" ";
            }
        }
        cout<<"$";
    }
}
