#include<stdio.h>
void fabonic(int);
int main(){
int num;
printf("enter the number");
scanf("%d",&num);

fabonic(num);
return 0;
}
void fabonic(int num)
{
int i,n3,n1=0,n2=1;
printf("\t%d\t%d",n1,n2);
for(i=2;i<num;i++)
{
n3=n1+n2;
printf("\t%d",n3);
n1=n2;
n2=n3;

}

}
