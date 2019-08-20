#include <stdio.h>

#define TABLENGTH 8

int main(){
    int blockNum = 0;
    int position = 1;
    char c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            blockNum = TABLENGTH - ((position - 1) % TABLENGTH);
            while(blockNum > 0){
                putchar(' ');

                blockNum --;
                position ++;
            }
        }else if(c == '\n'){//»»ÐÐ
            putchar(c);
            position = 1;
        }else{
            putchar(c);
            position ++;
        }

    }
    return 0;
}
