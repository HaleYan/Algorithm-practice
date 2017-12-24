#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		int r,j,l=0;
		r=n%m;
		j=n/m; 
		for(int i=0;i<j;i++){
			l=m+1+i*2*m;
			if(i==0)
				printf("%d",l);
			else if(i>0){
				printf(" %d",l);
			}
		}
		int x=r;
		if(x!=0){
			int sum=0;
			while(x--){
				sum+=2*n;
				n--;
			}
			printf(" %d",sum/r);
		}
		printf("\n");
	}
	return 0;
}
