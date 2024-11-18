
#include<stdio.h>
void counter(){
static int count=0;
count++;
printf("Counter Function Called :%d\n",count);

}
int main(){
    int i;
printf("\t\t\t** Storage Class **\n\n");

for(i=1;i<=31;i++)
{
    counter();
}
return 0;
