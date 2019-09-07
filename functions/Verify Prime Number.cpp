int verifyPrime(int n)
{
// 	int n;
	int i,count=0;
// 	cin>>n;
	if(n==2)
	{
		return 1;
	} 
	else if(n>=3)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0) {
				count++;
			}
		}
	}
	if(count>=1)
	{
		return 0;
	}
	else if(n==0 || n==1){
		return 0;
	}
	else if(count==0){
		return 1;
	}
}
