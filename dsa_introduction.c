/* 
    AND -> first digit 0 than no check condition 
    OR ->  first digit 1 than no check condition 

*/
#include<stdio.h>
int main()
{
    int a=1,b=2,c,d=1;
    // c=a || ++b || --d; // 1211
   // c=a&& ++b || --d;  //1300
    //c=a|| ++b;  //121
    //c=--a || --b;  //011
    //c=a || --b;  //121
    //c=++a || --b;  //221
    //c=a||b; // 121
    //c=a&& ++b;  //131
    //c=  --a  &&  ++b;  //020
    //c=  --a  && b; // 020
    c=  --a  ||  b  &&  --d;  
    printf("A : %d, B : %d, C: %d, D : %d",a,b,c,d);  
}