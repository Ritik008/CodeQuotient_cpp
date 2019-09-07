int countPalindrome(string str)
{
char str1[100],str2[100],str3[100],str4[100];
	int i,j,count=0,count_1=0,temp,length;
// 	gets(str);
	length=strlen(str);
//	cout<<length;
	for(i=0;str[i]!='\0';i++) {
		if(str[i]==' ')
		{
			for(temp=i-1,j=0;temp>=0;temp--,j++)
			{
				str1[j]=str[temp];
			}
			strcpy(str2,str1);
			strrev(str2);
			if(strcmpi(str2,str1)==0) {
				count++;
			}
		}
	}
	for(i=length-1,j=0;i>=0;i--) {
		if(str[i]==' '){
			break;
		}
		str3[j]=str[i];
		j++;
	}
	strcpy(str4,str3);
	strrev(str4);
	if(strcmp(str4,str3)==0) {
		count_1++;
	}
	cout<<count+count_1;
}
