#include<stdio.h>

#define INFINITY 999

int n;
int source;
int dist[100];
int vis[100];
int cost[100][100];
int min_distance()
{
    int min=INFINITY;
    int min_index;

    for(int i=0;i<n;i++)
    {
        if(!vis[i] && dist[i]<=min)
        {
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}

void printsol()
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t%d",i+1,dist[i]);
    }
}

void dij()
{
    for(int i=0;i<n;i++)
    {
        dist[i]=INFINITY;
        vis[i]=0;
    }

    dist[source]=0;

    for(int i=0;i<n-1;i++)
    {
        int min=min_distance();
        vis[min]=1;
            for(int j=0;j<n;j++)
            {
                if(!vis[j] && cost[min][j] && (dist[min]!=INFINITY) && dist[j]>dist[min]+cost[min][j])
                {
                    dist[j]=dist[min]+cost[min][j];
                }
            }
    }

    printsol();
}

void main()
    {
        printf("Enter the number of nodes");
        scanf("%d",&n);
        printf("Enter the matrix");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            scanf("%d",&cost[i][j]);
            }
        }

    

    printf("Enter source");
    scanf("%d",&source);

    dij();
    }
