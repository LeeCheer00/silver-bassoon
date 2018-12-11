#include <stdio.h>
int main(){
        int m,n,k=0;
        for(m=0;m<=100/5;m++){
                for(n=0;n<=100-5*m;n++){
                        if(100-5*m-2*n>=0){
                        printf("\n%d个5分，%d个2分，%d个一分\n",m,n,100-5*m-2*n);
                        k++;
                        }
                }
        }
        printf("有%d个方法来解决这个问题哈！",k);
}
