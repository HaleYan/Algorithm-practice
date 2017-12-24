#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
double average(int n){
	double sum=0;
	int  score[105];
	for(int i=0;i<n;i++){
		scanf("%d",&score[i]);
	}
	sort(score,score+n);
	for(int i=1;i<n-1;i++){
		sum+=score[i];
	}
	return sum/(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%.2f\n",average(n)); 
	}
	return 0; 
} 
