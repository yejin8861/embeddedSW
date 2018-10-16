#include"func1.h"
#include"func2.h"
#include<stdio.h>


void preprocessing()
{
  printf("preprocessing\n");
}

int main(void)
{
  func1();
  func2();
  preprocessing();

  return 0;
}
