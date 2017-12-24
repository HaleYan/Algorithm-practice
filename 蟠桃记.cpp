#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int s=1;
		for(int i=0;i<n-1;i++){
			s=(s+1)*2;
			
		}
		printf("%d\n",s);	
	}
	
	return 0;
}
