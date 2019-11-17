



/*1.从键盘上输入10个正数，找出其中最大数，输出对应的下标和该书本身。
#include<stdio.h>
#define N  10
main()
{
	int a[N],i,max;
	max=a[0];
	for(i=0;i<=9;i++)
	{ 
		scanf("%d",&a[i]);}
	max=a[0];
for(i=0;i<=9;i++)
{
	if(a[i]>a[max])
		{a[max]=a[i];
		max=i;}
		
}
	printf("最大值=%d,最大值下标=%d\n",a[max],max);
}*/

/*2.有一个数组，10个数据，要求找出最小的数和他的下标，然后和最前面的元素对换。
#include<stdio.h>
#define N 10
main()
{
	int a[N],i,min,t=0,m;
	for(i=0;i<N;i++)
scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<N;i++)
	{
		if(a[i]<min)
		{min=a[i];
		m=i;}
	}    
	    t=a[0];
		a[0]=a[m];
		a[m]=t;
	printf("最小值=%d，下标=%d\n",min,m);
	for(i=0;i<N;i++)
	printf("%d\n",a[i]);

}*/


/*3.求fibonacci前20项
#include<stdio.h>
#define N 20
main()
{
	int a[N]={1,1},i;
	for(i=2;i<=19;i++)
	{a[i]=a[i-1]+a[i-2];
	printf("%d\n",a[i-2]);}
}*/

/*4.输入年月日，输出该天是该年的第几天
#include<stdio.h>
main()
{
	int a[]={31,29,31,30,31,30,31,31,30,31,30,31},i,num=0,y,m,t;
	printf("请输入年 月 日=\n");
	scanf("%d%d%d",&y,&m,&t);
if((y%4==0&&y%100!=0)||(y%400==0))
{for(i=0;i<m-1;i++)
num+=a[i];}
else
{
	for(i=0;i<m-1;i++)
{a[1]=28;
num+=a[i];}
}
printf("%d\n",num+t);
}*/

/*5.把200-300内素数用数组储存并输出。
#include<stdio.h>
#include<math.h>
#define N 100
main()
{
	int a[N],i,j,k,x=0,q;
	for(i=200;i<=300;i++)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
		{if(i%j==0)
		break;}
        if(j>k)
		{a[x]=i;
        x++;}
	}
for(q=0;q<x;q++)
printf("200-300内的素数=%d\n",a[q]);
}*/


