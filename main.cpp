//
//  main.cpp
//  查重且排列
//
//  Created by 严鸿 on 2017/10/17.
//  Copyright © 2017年 严鸿. All rights reserved.
//
/*
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}*/
#include <stdio.h>
int main (){
    int a[101],N,n;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+N+1);
    n=0;
    for(int i=1;i<N;i++)
    {
        if (a[i]==a[i+1])
        {
            n++;
            a[i]=0;
        }
    }
    sort(a+1,a+N+1);
    printf("%d\n",N-n);
    for(int i=1+n;i<=N;i++)
        printf("%d ",a[i]);
}
