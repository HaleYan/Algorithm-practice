#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int judge(int n);
int main(){
	int x,y;
	
	while(scanf("%d%d",&x,&y)!=EOF && !(x==0&&y==0)){
		int s=1;
		for(int i=x;i<=y;i++){
			if(judge(i*i+i+41)==0) {
				s=0;
				printf("Sorry\n");
				break;
			}
		}
		if(s)
			printf("OK\n");
	}
	
	return 0;
}
int judge(int n){
	for(int i=2;i<sqrt(n)+1;i++)
		if(n%i==0)
			return 0;
	return 1;
}
