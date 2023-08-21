// stack

#include <stdio.h>
#define n 5
int a[n];
int top = -1, i;
int display()
{
  if (top < 0)
  {
    printf("Array is empty .....");
  }
  else
  {
    for (i = 0; i <= top; i++)
    {
      printf("  %d", a[i]);
    }
  }
}

int insertEnd(int val)
{
  if (top >= n - 1)
  {
    printf("\n Array is full :");
  }
  else
  {
    top++;
    a[top] = val;
  }
}
int delete()
{
  int x;
  if (top < 0)
  {
    printf("Array is already empty :");
  }
  else
  {
    x = a[top];
    top--;
    return x;
  }
}

int main()
{
  insertEnd(100);
  insertEnd(200);
  insertEnd(300);
  insertEnd(400);
  insertEnd(500);
  display();
  delete ();
  display();
}