void reverseString (char str[])
{
  int i,count=0,j,temp=0;
  char str1[100];
  for(i=0;str[i]!='\0';i++){
    count++;
  }
  for(i=count-1,j=0;i>=0;i--,j++)
  {
    str1[j]=str[i];
  }
  for(i=0;i<count;i++)
  {
    str[i]=str1[i];
//     temp++;
  }
//   str[temp]='\0';
}
