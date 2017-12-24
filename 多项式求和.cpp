#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
#define  MAX 105
int A[MAX];
double summ(int l);
int main(){
	int m,n;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		printf("%.2f\n",summ(n));
	}
 
	return 0;
} 
double summ(int l){
	double s, sum =1.0;
	for(int i = 2; i < l+1; i++){
		s = 1.0 / i;
		if(i & 1) sum += s;
		else sum -= s;
		}
	
	return sum;	
}
