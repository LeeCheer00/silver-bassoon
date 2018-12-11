/*************************************************************************
	> File Name: count_letter_space_digit_others.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月09日 星期日 08时26分34秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int c;
    int space=0;
    int letter=0;
    int digit=0;
    int other=0;
    while((c=getchar())!='\n'){//循环判断
        if(c>47&&c<58) digit++;
        else if((c>96&&c<123)||(c>64&&c<91)) letter++;
        else if(c==32) space++;
        else 
           other++; 
    }
    printf("统计结果显示:\n");
    printf("字母有%d个,空格有%d个,数字%d个,其他字符有%d个,总计%d个\n",letter,space,digit,other,letter+space+digit+other);
    return 0;
}
