void printSpiral(int a[ROWS][COLS], int r, int c)
{
  int i,j=0,k=0,m=r,n=c;
  while(j<m && k<n) {
    for(i=k;i<n;++i) {
      cout<<a[j][i]<<endl;
    }
    j++;
    for(i=j;i<m;++i) {
      cout<<a[i][n-1]<<endl;
    }
    n--;
    if(j<m) {
      for(i=n-1;i>=k;--i) {
        cout<<a[m-1][i]<<endl;
      }
      m--;
    }
    if(k<n) {
      for(i=m-1;i>=j;--i) {
        cout<<a[i][k]<<endl;
      }
      k++;
    }
  }
}