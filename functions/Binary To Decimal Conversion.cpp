int binaryToDecimal(int n)
{
  	int temp,sum=0;
//   cin>>n;
  int i;
  for(i=1;n!=0;)
  {
    temp=n%10;
    if(temp==1)
    {
      sum=sum+i;
    }
    i=i*2;
    n=n/10;
  }
  return sum;
}
