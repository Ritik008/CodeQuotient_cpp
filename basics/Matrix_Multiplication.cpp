#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
  int z,i;
  cin>>z;
  for(i=0;i<z;i++) {
    int m,n,j,k,p,q,l,sum=0;
    int f[10][10], s[10][10], mu[10][10];
    cin>>m>>n;
    for(j=0;j<m;j++) 
    {
      for(k=0;k<n;k++)
      {
        cin>>f[j][k];
      }
    }
    cin>>p>>q;
    for(j=0;j<p;j++) 
    {
      for(k=0;k<q;k++)
      {
        cin>>s[j][k];
      }
    }
    for(j=0;j<m;j++)
    {
      for(k=0;k<q;k++)
      {
        for(l=0;l<p;l++)
        {
          sum = sum+f[j][l]*s[l][k];
        }
        mu[j][k]=sum;
        sum=0;
      }
    }
    for(j=0;j<m;j++)
    {
      for(k=0;k<q;k++)
      {
        cout<<mu[j][k]<<" ";
      }
      cout<<"\n";
    }
  }
  

    // Return 0 to indicate normal termination
    return 0;
}