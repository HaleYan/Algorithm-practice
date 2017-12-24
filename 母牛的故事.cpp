#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/*int summ(int n){
	int m,A[60]={1,2,3,4};
	if(n-1<4) return A[n-1];
	else if(n-1>=4){
		for(int i=4;i<n;i++){
			A[i]=A[i-1]+A[i-3];
				m=i;
			}
			return A[m];
		}
	}
*/
int summ(int n){
	if(n<=4) return n;
	else if(n>4)
	return summ(n-1)+summ(n-3);	
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF && n!=0){
		printf("%d\n",summ(n));
	}
	
	return 0;
}
