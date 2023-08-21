/*Array, loops ,function ->  2 array merge 
    i/p => 10, 20, 30 , 40 , 50 
    o/p => 20 , 30 , 40 , 50 , 10 
    */

 #include<stdio.h>
int main()
{
    int a=12;
    printf("a: %d, a: %d , a : %d, a: %d ",a,a++,++a,++a);
    printf("a: %d, a: %d , a : %d",a++,++a,++a);
    printf("a: %d, a: %d , a : %d",a++,++a,a++);
    printf("a: %d, a: %d , a : %d",a++,a++,a++);
    printf("a: %d, a: %d , a : %d",a,++a,++a);
    printf("a: %d, a: %d , a : %d",a,a++,++a);
    printf("a: %d, a: %d , a : %d",a,a++,a++);
    printf("a: %d, a: %d ",++a,a++);
    printf("a: %d, a: %d ",a,++a);
    printf("a: %d, a: %d ",a,a++);
    
}
