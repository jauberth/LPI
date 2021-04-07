#include <stdio.h>
int main (void){
    int x;
    int y;
    for(x=0, y=0; x+y<10; ++x) {
        y = getchar();
        y = y- '0';
    }
return 0;
}
