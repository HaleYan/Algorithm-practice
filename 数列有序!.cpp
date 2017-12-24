#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int A[105];
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF && !(n==0&&m==0)){
		memset(A,0,sizeof(A));
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		A[n]=m;
		sort(A,A+n+1);
		for(int i=0;i<n+1;i++){
			if(i==0)
			printf("%d",A[i]);
			else if(i>0) printf(" %d",A[i]);
		}
		printf("\n");
	}
	
	return 0;
}
