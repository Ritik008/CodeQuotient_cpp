// Alter the string according to specifications above

void capitalizeFirstChar(string &str)
{
// 	string str;
	int i,j=0,k=0,count=0;
// 	getline (cin, str);
	if(str[0]>=97 && str[0]<=122)
	{
		str[0]-=32;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]>=97 && str[i+1]<=122)
			{
				str[i+1]=str[i+1]-32;
			}
		}
	}
// 	cout<<str;
	
}
