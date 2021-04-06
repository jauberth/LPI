#include <stdio.h>
int count; //variável global

void func1(void);
void func2(void);

void main(){
    count=100;
    func1();
}
void func1(void){
    int temp;
    temp = count;
    func2();
    printf("Count vale %d", count);
}
void func2(void){
    int count;
    for (count=1; count<10; count++)
    putchar('.');
}
