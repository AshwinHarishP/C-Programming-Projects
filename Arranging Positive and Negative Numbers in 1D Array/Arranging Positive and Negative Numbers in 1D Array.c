/*program which will arrange the positive and negative numbers in one dimensional array in such a way that all positive
numbers should come first and then all the negative numbers will come without changing the original sequence of numbers.
*/
#include<stdio.h>
int main()
{
int pos[20], count=0,neg[20],index=0;
int i, j, a[20];
for(i=0;i<6;i++)
 scanf("%d",&a[i]);
for(i=0;i<6;i++)
{
 if (a[i]>=0)
 {
 pos[index]=a[i];
 index++;
 }
 else
 {
 neg[count]=a[i];
 count++;
 }
}
for(i=0;i<index;i++)
a[i]=pos[i];
for(i=index, j=0;i<6;i++)
{a[i]=neg[j];
j++;
}
for(i=0;i<6;i++)
 printf("%d",a[i]);
return 0;
}

