#include<stdio.h>
#include<string.h>
char str[100];
void checksum(char str[])
{
    int k=3;
    n=strlen(str);
    m=n/4;
    int sum=0;
    for(i=0;i<m;i++)
    {
        if(str[k]=='A')
        {
            sum=sum+10;
        }
        else if(str[k]=='B')
        {
            sum=sum+11;
        }
        else if(str[k]=='C')
        {
            sum=sum+12;
        }
        else if(str[k]=='D')
        {
            sum=sum+13;
        }
        else if(str[k]=='E')
        {
            sum=sum+14;
        }
        else if(str[k]=='F')
        {
            sum=sum+15;
        }
        else
        {
            sum=sum+str[k];
        }
        k=k+4;
    }
    rem[l++]=sum%16;
    carry=sum/16;
    sum=
}

int main()
{
    char c;
    printf("Enter the string\n");
    scanf("%s",str);
    printf("The entered data is %s",str);
    int n= strlen(str);
   checksum(str);
}