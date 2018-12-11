/*************************************************************************
	> File Name: I_love_the_world_PI.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月10日 星期一 13时45分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float s = 1;
    float pi = 0;
    float i = 1.0;
    float n = 1.0;
    while(fabs(i)>=1e-6){ // fabs求绝对值的有效方程式,from <MATH.H>
        pi+=i;
        n=n+2;
        //pay attention, we change the positive/ negative operation
        s = -s;
        i = s / n;
    }
    pi = 4 * pi;
    printf("Pi's value is: %.6f\n", pi);
    return 0;
}
