#include<stdio.h>
struct node{
    int data;
    struct node *ptr1;
};
int main()
{
    struct node a,b,c,d;
    a.data=98;
    a.ptr1=NULL;

    printf("A : data %d\n",a.data);
    b.data=87;
    b.ptr1=NULL;
    
    printf("B: data %d\n",b.data);

    c.data=36;
    c.ptr1=NULL;
    
    printf("C:  data %d\n",c.data);

    d.data=83;
    d.ptr1=NULL;

    printf("D: data %d\n",d.data);

    b.ptr1=&a;
    printf("A : data %d\n",b.ptr1->data);

    b.ptr1=&c;
    printf("C : data %d\n",b.ptr1->data);

    b.ptr1=&d;
    printf("D : data %d\n",b.ptr1->data);

    a.ptr1=&b;
    printf("B : data %d\n",a.ptr1->data);

    a.ptr1=&c;
    printf("C : data %d\n",a.ptr1->data);

    a.ptr1=&d;
    printf("D : data %d\n",a.ptr1->data);

    c.ptr1=&a;
    printf("A : data %d\n",c.ptr1->data);

    c.ptr1=&b;
    printf("B : data %d\n",c.ptr1->data);

    c.ptr1=&d;
    printf("D : data %d\n",c.ptr1->data);

    d.ptr1=&a;
    printf("A : data %d\n",d.ptr1->data);

    d.ptr1=&b;
    printf("B : data %d\n",d.ptr1->data);

    d.ptr1=&c;
    printf("C : data %d\n",d.ptr1->data);

    

}