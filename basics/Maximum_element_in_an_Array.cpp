#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
  	int big,i,a[5];
  for(i=0;i<5;i++)
  {
    cin>>a[i];
  }
  big=a[0];
  for(i=1;i<5;i++)
  {
    if(big<a[i]) {
      big=a[i];
    }
  }
  cout<<big;

    // Return 0 to indicate normal termination
    return 0;
}
