#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int A[105];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF && n!=0){
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		int min=A[0],m=0,j;
		for(int i=1;i<n;i++){
			if(min>A[i]){
				min=A[i]; 
				m=i;
			}
		}
		j=A[0];
		A[0]=A[m];
		A[m]=j;
		for(int i=0;i<n;i++){
			if(i==0)
			printf("%d",A[i]);
			else if(i>0) 
			printf(" %d",A[i]);
	}
	printf("\n");
  }
	return 0;	
}
