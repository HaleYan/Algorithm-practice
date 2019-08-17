#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int A[105];
int B[105];
/*int main() {
	int n;
	while(scanf("%d",&n)!=EOF && n!=0){
		int m,j=0;
		for(int i=0;i<n;i++) 
			scanf("%d",&A[i]);
		for(int i=0;i<n;i++){
			if(A[i]<0){
				A[i]=-A[i];
				B[j]=A[i];
				m=j;
				j++;
				
			}
		}
		sort(A,A+n);
		/*for(int i=n-1;i>-1;i--) 
		printf("%d ",A[i]);
			printf("\n");
	
		for(int j=0;j<=m;j++)
		
			printf("%d ",B[j]);
		*/
		/*for(int i=n-1;i>-1;i--)
		{
			int y=0;
			for(int j=0;j<=m;j++)
			{
				if(A[i]==B[j] && i==n-1) {
				
					printf("%d",-A[i]);
					y++;
				}
				else if(A[i]==B[j] && i<n-1){
				
					printf(" %d",-A[i]);
					y++;
			    }
			}
		    if(y==0 && i==n-1)
				    printf("%d",A[i]);
			else  if(y==0 && i<n-1)
					printf(" %d",A[i]);
		}
		printf("\n");
	}	
 	return 0;
}*/
bool cmp(int a,int b){
	
	return abs(a)>abs(b);
}
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		for(int i=0;i<n;i++) cin>>A[i];
		sort(A,A+n,cmp);//sort()函数可以根据自己写的排序进行。 
		for(int i=0;i<n;i++)
			printf("%d%c",A[i],i==n-1?'\n':' ');
	}
	
	return 0;
}













