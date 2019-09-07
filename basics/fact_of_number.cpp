// code for calculating the factorial of a number
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
  int n,fact=1,i;
cin>>n;
  for(i=n;i>0;i--){
    fact=fact*i;
  }
  cout<<fact;
    // Return 0 to indicate normal termination
    return 0;
}
