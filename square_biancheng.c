/*************************************************************************
	> File Name: square_biancheng.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月10日 星期一 08时10分07秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
int main(){
    int line; // 菱形的总的行数
    int column; // 菱形总的列数
    int i; //当前行
    int j; //当前列

    printf("请输入菱形的行数(奇数):");
    scanf("%d", &line);
    if(line%2==0){
        printf("So sorry, It must be a 奇数\n");
        exit(1);
    }
    column = line; // 总行数和总列数相同
    for (i=1; i<=line; i++){
        if (i<(line+1)/2 + 1){
            for (j=1; j<=column; j++) {
                if(((column + 1)/2 -(i - 1))<= j && j <= ((column + 1) / 2 + (i - 1))){ // 实验一下<= >= 符号的优先级是否是最低的
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{
            for(j=1; j<=column; j++){
                if((column + 1) / 2 - (line - i) <= j && j<= (column + 1)/2 + (line - i)){ // 实验证明 括号里外都是一样的
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
