#include<stdio.h>
int main()
{
    int a=10;
    int *p=NULL;
    int **q=NULL;

    p=&a;
    q=&p;

    printf("value stored in a: %d\n",a);
    printf("address of a:%d\n",&a);
    printf("address of a: %d\n",p);
    printf("value stored in a before modification:%d\n", *p);
    *p = *p+1;
    printf("value stored in a after modification: %d\n", *p);
    printf("size of an integer in this environment:%d\n", sizeof(int));
    printf("address stored by p before modification:%d\n",p);
    p=p+2;
    printf("address stored by p after modification:%d\n",p);

    printf("address of p=%d\n",&p);
    printf("address of p=%d\n",q);

    return 0;
}
