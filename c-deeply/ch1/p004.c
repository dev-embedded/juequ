# include <stdio.h>

static int j;

void fun1 (void)
{
  static int i = 0;
  i++;
  printf("i=%d,  ",i);
}

void fun2 (void)
{
  j = 0;
  j++;
  printf("j=%d\n",j);
}

int main()
{
  int k;
  for(k=0; k<10;k++)
  {
    fun1();
    fun2();
  }
  return 0;
}

