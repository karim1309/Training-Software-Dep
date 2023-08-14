#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int sum=0;
scanf("%d",&n);
int *number;
if((n>=1)&&(n<=1000)){
number=(int *) malloc(n*sizeof(int));}
for(int y=0;y<n;y++){
    scanf("%d",number+y);
    sum+=*(number+y);
}
printf("%d",sum);

}
