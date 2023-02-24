#include<stdio.h>
void main()
{
    int bucketsize=0,outrate=0,n=0;
    int inbucket=0, inflowrate=0, outflowrate=0,dropped=0;
    int clk=0;
printf("\nEnter the maximum bucket size");
scanf("%d",&bucketsize);
printf("\nEnter the outrate");
scanf("%d",&outrate);
printf("\nEnter the number of sets of packet");
scanf("%d",&n);
printf("\nEnter the number of packets in each set");
int pack[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&pack[i]);
}
int k=0;
printf("\nClk\tInflowrate\tOutflowrate\tInbucket\tDropped");
do{
    clk++;
    if(k<n)
    {
    inflowrate=pack[k++];
    }
	else
	{
	inflowrate=0;
	}
    int val=inbucket+inflowrate;

    if(val<=outrate)
    outflowrate=val;
    else
    outflowrate=outrate;

    if(val-outflowrate<=bucketsize)
    {
    inbucket=val-outflowrate;
    dropped=0;
    }
    else
    {
    inbucket=bucketsize;
    dropped=val-outflowrate-inbucket;
    }

    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",clk,inflowrate,outflowrate,inbucket,dropped);
   
 } while(inbucket>0 || k<n);
}