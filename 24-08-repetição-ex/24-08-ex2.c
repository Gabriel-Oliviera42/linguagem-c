#include <stdio.h>

int main(void)
{
    int I;


    for (I = 1000; I < 2000; I++) {
        if (I % 11 == 5) {
            printf("%d ",I);
        }
    }

    return 0;
}