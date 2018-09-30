#include<stdio.h>
#include<stdlib.h>
int main()
{
char *input;
int i=0;
input=calloc(sizeof(char),50);
fgets(input,50,stdin);
while(*(input+i)!='\0')
{
if (*(input+i)>=97 && *(input+i)<=127)
{
 *(input+i)=*(input+i)-32;
   
}
i++;
}
printf("%s",input);
return 0;
}
