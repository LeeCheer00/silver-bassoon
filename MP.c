/*************************************************************************
	> File Name: MP.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月22日 星期三 20时38分26秒
 ************************************************************************/

#include<stdio.h>
//int MP(int data[7]){
//
//    int i;
//    for(i=0;i<7;i++){ 
//        int j;
//        int b;
//        //相邻的数组中的大数换到前面，小数换到后面
//        for(j=i;j<7;j++){
//            b=0; 
//            if(data[j+1]>data[j]){ 
//                
//                b=data[j];
//                data[j]=data[j+1];
//                data[j+1]=b; 
//            }
//        }
//    }
//    
//    return data[7];
//
//}
int main(){
    int  a[7];
    printf("请输入7个随机整数:\n");
    int  i,j,b;
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
        //printf("%d\n",a[i]);
    }
    for(i=0;i<7;i++){
        //相邻的数组中大数到前面，小数换到后面 
        for(j=0;j<7;j++){
            if(a[j]<a[j+1]){
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }

    }
    printf("冒泡法排序结果:\n");
    for(i=0;i<7;i++){
        printf("%d\n",a[i]);
    }
    return 0;

}
