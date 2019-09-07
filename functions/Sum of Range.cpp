int sumOfRange(int min, int max)
{
  	int i,sum=0;
	if(min<=max)
	{
		for(i=min;i<=max;i++)
		{
			sum=sum+i;
		}
		return sum;
	}
	else
	{
		return 0;
	}
}
