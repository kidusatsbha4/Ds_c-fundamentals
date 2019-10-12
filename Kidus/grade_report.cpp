#include<stdio.h>
struct student{
float score[10];
char name[10];
char id[10];
}s;
int main(){
int n,c,i,j;
printf("enter number of you want to enter ");
scanf("%d",&n);
printf("enter course ");
scanf("%d",&c);
for(i=0;i<n;i++)
{
printf("enter name and id student serial no %d\n",i);
scanf("%s%s",&s.name[i],&s.id[i]);


for(j=0;j<c;j++)
{
printf("enter score for course %d\n",j);
scanf("%f",&s.score[j]);
printf("the grade of course %d=",j);
if(s.score[j]>=90)
{
printf("A+\n");
}
else if(s.score[j]<90&&s.score[j]>=85){
printf("A\n");}
else if(s.score[j]<85&&s.score[j]>=80){
printf("A-\n");}
else 
printf("F\n");
}

}
}
