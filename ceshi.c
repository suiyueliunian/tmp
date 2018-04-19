#include<stdio.h>
#include <string.h>

int a;

char *tmp="1s34Af";

int main()
{
    int i;
    char str[2];

   for(i=0;i<3;i++)
   {
     memcpy(str,&tmp[i*2],2);
     sscanf(str,"%x",&a);
     printf("%x\n",a);
   }
    return 0;
}
