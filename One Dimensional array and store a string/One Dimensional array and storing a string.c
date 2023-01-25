/*One dimensional array of characters and store a string
inside it by reading from standard input. */
#include<stdio.h>
int main()
{
char msg[50], ch;
int i=0;
printf("character strings\n");
printf("Type the characters terminated by a Return or Enter\n");
while((ch=getchar())!='\n')
msg[i++]=ch;
msg[i]='\0';
i=0;
while(msg[i]!='\0')
putchar(msg[i++]);
printf("\n");
return 0;
}

