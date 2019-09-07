int gcd(int x, int y)
{
int i,j,gcd1;
  for(i=1;i<=x,i<=y;i++)
  {
    if(x%i==0 && y%i==0)
    {
      gcd1=i;
    }
  }
  return gcd1;
}
