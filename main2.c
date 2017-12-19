//
//  main.c
//  kmp
//
//  Created by 严鸿 on 2017/10/17.
//  Copyright © 2017年 严鸿. All rights reserved.

#include<stdio.h>
#include<string.h>
int main(){
    char s1[105],s2[105];
    scanf("%s %s",s1,s2);//输入需要空格隔开
    int a,b,n=1,m=0,s=0;
    a=strlen(s1);
    b=strlen(s2);
    for(int i=0;i<a;i++){
        int j=i;
        if(s1[i]&&s1[i]==s2[0]){
            m=1;
            for(int k=0;k<b;k++)//进行筛选
                if(s1[j++]!=s2[k])//不对时的情况
                    m=0;
        }
        if(n&&m){
            s=i;
            if(s==0){
                printf("%d\n",s+1);
                return 0;
            }
            break;
        }
}
    if(s++) printf("%d\n",s);
    return 0;
}
//暴力求解
/*#include <stdio.h>
#include <string.h>
int main(){
    char a[105],b[105],ans,cnt,flag=1,j;
    scanf("%s %s",a,b);//空格
    int l1=strlen(a),l2=strlen(b);
    for(int i=0;i<l1;i++){
        int k=i;
        if(a[i]&&a[i]==b[0])//如果找到一个a[i]=b[0]就进行下一步操作，即继续搜索
        {
            for(j=0;j<l2;j++) if(a[k++]!=b[j]) flag=0;//进行搜索
            cnt=1;
        }
        if(flag&&cnt){
            ans=i;
            if(ans==0){
                printf("%d\n",ans);
                return 0;
            }
            break;
        }
        flag=1;
        cnt=0;
    }
    if(++ans)printf("%d\n",ans);
    return 0;
}
*/
