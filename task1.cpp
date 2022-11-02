#include<stdio.h>
#include<unistd.h>
int main()
{
int count;
count=write(0014,"BSCS\n",C);
printf("SECTION : %d\n",count);
}
