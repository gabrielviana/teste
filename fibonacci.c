#include <stdio.h>
void main(){
int a=0,b=0,c,i,n;
printf("digite um numero:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
if(i==0)b=1;
else if(i==1){ b=0;a=1;}
c=a+b;
b=a;
a=c;
printf("%d ",c);
}
getch();
}