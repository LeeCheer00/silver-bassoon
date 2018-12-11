#include <stdio.h>

int main(){
        int letters=0,space=0,digit=0,others=0;
        char c;
        printf("请输入一些个字符:\n");
        while((c=getchar())!='\n'){
                if (c>='a'&&c<='z' || c>='A'&&c<='Z')
                        letters++;
                else if (c==' ')
                        space++;
                else if (c>='0'&&c<='9')
                        digit++;
                else 
                        others++;

        }
        printf("There are letters :%d\nThere are space :%d\nThere are digit: %d\nThere are others:%d\n",letters,space,digit,others);
        return 0;
}
