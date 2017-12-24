#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	while ( scanf ( "%d%d",&n,&m )!= EOF ){
		int a = 0,b = 0,c = 0,s = 0;
		for ( int i = n; i <= m; i++ ){
			int l = 0;
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if (( pow ( a,3 ) + pow ( b,3 ) + pow ( c,3 )) == i ){
				l = 1;
				s++;
				}
			if ( s == 1 && l == 1) 	printf ( "%d",i );
				else if ( s > 1 && l == 1)	printf ( " %d",i );
	}
	if ( s )
		printf ( "\n" );
	else if ( !s )
		printf ( "no\n" );
	}
	return 0;
} 
