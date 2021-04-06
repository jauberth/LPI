#include <stdio.h>
int count; //variavel global

void func1(void);
void func2(void);

int main(){
    count=100;
    func1();
return 0;
}
void func1(void){
    int temp;
    temp = count;
    printf("o valor de count vale %d", count);
    func2();
    printf("\nCount vale %d no escopo global", count);
    printf("\n");
}
void func2(void){
    int count;
    for (count=1; count<10; count++)
    putchar('.');
    printf("\nO valor de count nesta função passou a ser %d", count);
}
