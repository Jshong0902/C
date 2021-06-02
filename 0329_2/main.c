#include <stdio.h>
#include <stdlib.h>

void func(){
    int num1=0;
    printf("%d\n", num1);
    num1++;
}

int main()
{
    func();
    func();
    func();
    func();

    return 0;
}
