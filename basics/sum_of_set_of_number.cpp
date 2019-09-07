#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
  int n,i,a[100],sum=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
for(i=0;i<n;i++){
  sum+=a[i];
}
  cout<<sum;
    // Return 0 to indicate normal termination
    return 0;
}
