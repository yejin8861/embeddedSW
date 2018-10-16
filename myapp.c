#include"func1.h"
#include"func2.h"
#include<stdio.h>


void preprocessing()
{
  printf("preprocessing\n");
}

void postprocessing()
{
  printf("postprocessing\n");
}

int main(void)
{
  func1();
  func2();
  preprocessing();
  postprocessing();
  return 0;
}
