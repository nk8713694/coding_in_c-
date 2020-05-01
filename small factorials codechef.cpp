#include<stdio.h>
int t,N,arr[300],i,index1=0,count,j,x,temp=0,k,te;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
        i=0;
        te=N;
        while(te>0)
        {
            arr[i]=te%10;
            te=te/10;
            i++;
        }
        index1=0;
        count=i;
        for(j=N-1;j>1;j--)
        {
            while(count>0)
            {
                x=arr[index1]*j +temp;
                arr[index1]=x%10;
                temp=x/10;
                index1=index1+1;
                count=count-1;
            }
 
            while(temp>0)
            {
                arr[index1]=temp%10;
                temp=temp/10;
                index1++;
            }
            count=index1;
            index1=0;
        }
for(k=count-1;k>=0;k--)
{
printf("%d",arr[k]);
}
printf("\n");
   }
    return 0;
}
