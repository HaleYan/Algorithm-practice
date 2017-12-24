#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
char A[105];
int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){
		int sum=0;
		memset(A,0,sizeof(A));
		scanf("%s",A);
		m=strlen(A);
		for(int i=0;i<m;i++){
			if('0'<=A[i]&&A[i]<='9')
				++sum;
		}
		printf("%d\n",sum);
	}
	return 0;
}
