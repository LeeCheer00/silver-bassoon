/*************************************************************************
	> File Name: multiplication_9*9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月09日 星期日 10时05分51秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int m,n;//m控制行,n控制列
    printf("九九乘法表如下:\n");
    for(m=1; m<=9; m++){
        for(n=1; n<=m; n++){
            printf("%d*%d=%d\t",m,n,m*n);
        }
        printf("\n");
    }
    return 0;
}
