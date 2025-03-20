#include <stdio.h>

int main()
{
    char v='A';
    int *ip=NULL;
    ip=&v;
    printf("Value of v;%x\n",v);
    printf("Adress store in ip:%x\n",ip);
    printf("Adress of ip: %x\n",&p);
    printf("Value of ip:%d\n",*p);
    return 0;
}
