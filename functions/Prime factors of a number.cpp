void primeFactors(int n)
{
// 	int n;
// 	cin>>n;
	int i,temp;
	for(i=2;n>=1;i++)
	{
		while(n%i==0)
		{
			cout<<i<<endl;;
			n=n/i;
			if(n==1)
			{
//				return 0;
				break;
			}
		}
		if(n==1) {
			break;
		}
	}
}
