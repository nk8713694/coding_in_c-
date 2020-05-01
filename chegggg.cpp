#include<stdio.h>
#include<conio.h>
#include<math.h>
void accept(int [],int);
void disp(int [],int);
int eval(int [],int,int);
void add(int [],int [],int [], int);
void initpoly(int []);
void main()
{
int a[10],b[10],c[10],n,ch,x,k,m;
clrscr();
do
{
printf(“\n\n Main Menu \n”);
printf(“\n1.Evalution \n”);
printf(“\n2.Addition \n”);
printf(“\n3.Exit \n”);
printf(“\n\nEnter ur Choice\n”);
scanf(“%d”,&ch);
switch(ch)
{
case 1:
printf(“\nEnter the Order of Polynomial\n”);
scanf(“%d”,&n);
accept(a,n);
printf(“\n\nENTERED POLYNOMIAL IS \n\n”);
disp(a,n);
printf(“\n\nEnter the Value for Variable X\n”);
scanf(“%d”,&x);
printf(“\n Evaluated Value is %d”,eval(a,n,x));
break;
case 2:
initpoly(a);
initpoly(b);
initpoly(c);
printf(“\nEnter the Order of 1st Polynomial\n”);
scanf(“%d”,&m);
accept(a,m);
printf(“\nEnter the order of 2nd Polynomial \n”);
scanf(“%d”,&n);
accept(b,n);
printf(“\n\nPolynomial 1 \n\n”);
disp(a,m);
printf(“\n\nPolynomial 2 \n\n”);
disp(b,n);
k=m>n ? m:n;
add(a,b,c,k);
printf(“\n\nResultant polynomial Is \n\n”);
disp(c,k);
break;
case 3:
exit(0);
}
}
while(ch!=3);
getch();
}
void initpoly(int z[])
{
int i;
for(i=0;i<10;i++)
z[i]=0;
}
void add(int a[],int b[],int c[],int n)
{
int i;
for(i=n;i>=0;i–)
{
c[i]=a[i]+b[i];
}
}
void accept(int a[],int n)
{
int i;

for(i=n;i>=0;i–)
{
printf(“\nEnter the Co-efficient of a[%d] term :\t”,i);
scanf(“%d”,&a[i]);
}
}
void disp(int a[],int n)
{
int i;
for(i=n;i>0;i–)
{
if(a[i]!=0)
{
printf(“%dX^%d+”,a[i],i);
}
}
printf(“%d”,a[i]);
}
int eval(int a[],int n,int x)
{
int i,ans=0;
for(i=n;i>=0;i–)
{
ans=ans+(a[i]*pow(x,i));
}
return ans;
}
