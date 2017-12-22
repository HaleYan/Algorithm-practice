#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
#define MAX_N 105
int n,W;
int w[MAX_N],v[MAX_N];
/*
int rec(int i,int j)
 {
 	int res;
 	if(i==n)
 	res=0;
 	else if(j<w[i])
 	res=rec(i+1,j);
 	else
 	{
 		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	 }
	 return res;
 }
int main()//一般做法，但一定会超过时间，故不可取，得改进。 
{
	
	cin>>n>>W;
	for(int i=0;i<n;i++){
		cin>>w[i];	
		cin>>v[i];
	}
	printf("%d\n",rec(0,W));
	return 0;
 } 
 
 */
 int dp[MAX_N + 1][MAX_N + 1];
 int rec(int i,int j){
 	if(dp[i][j]>=0)
 		return dp[i][j];
 	int res;
 	if(i == n){
 		res = 0;
	 }
 else if (j < w[i])
 	res = rec(i+1,j);
 	else{
 		res = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	 }
	return dp[i][j]=res;
}
int main(){
	cin>>n>>W;
	for(int i=0;i<n;i++){
		cin>>w[i];	
		cin>>v[i];
	}
	memset(dp,-1,sizeof(dp));
	printf("&d\n",rec(0,W));
	return 0;
}
#include <stdio.h>//online
#define _MAX 102
#define MAX(a, b) a > b ? a : b

int dp[_MAX][_MAX * _MAX];

int KanpSack(int N, int *Wi, int *Pi, int W)
{
    int i, j;
    for (i = 0; i <= N; i++)
    {
        dp[i][0] = 0;
    }
    for (j = 0; j <= W; j++)
    {
        dp[0][j] = 0;
    }

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= W; j++)
        {
            if (j < Wi[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = MAX(dp[i - 1][j], dp[i - 1][j - Wi[i]] + Pi[i]);
            }
        }
    }

    return dp[N][W];
}

int main(int argc, const char * argv[])
{
    int N, W, Wi[_MAX], Pi[_MAX], i = 1;
    scanf("%d %d", &N, &W);
    for (; i <= N; i++)
    {
        scanf("%d %d", Wi + i, Pi + i);
    }
    printf("%d\n", KanpSack(N, Wi, Pi, W));
    return 0;
}
 
