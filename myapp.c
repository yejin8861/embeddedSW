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

void turbo_on()
{
  printf("turbo on\n");
}

void turbo_off()
{
  printf("turbo off\n");
}


int main(void)
{

  func1();
  func2();

  preprocessing();
  postprocessing();
  turbo_on();
  turbo_off();


  return 0;
}
