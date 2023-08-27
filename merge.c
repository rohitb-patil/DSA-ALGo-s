#include<stdio.h>
void merge(int arr[],int a,int m,int b)
{
int arr1[10],i=0,j=0;
 int k=0;
 i=a;
 j=m+1;
 while(i<=m&&j<=b)
 {
  if(arr[i]<=arr[j])
  {
   arr1[k]=arr[i];
   i++;
  }
  else
  {
  arr1[k]=arr[j];
  j++;
  }
  k++;
 }
 if(i>m)
 {
   while(j<=b)
   {
    arr1[k]=arr[j];
    j++;
    k++;
   }
 }
 else
 {
  while(i<=m)
  {
   arr1[k]=arr[i];
   k++;
   i++;
  }
 }
 for(int i=a;i<=b;i++)
 {
   arr[i]=arr1[i-a];
 }
}
void ms(int arr[],int s,int e)
{
  int m;
 if(s<e)
 {
   m=(s+e)/2;
  ms(arr,s,m);
  ms(arr,m+1,e);
  merge(arr,s,m,e);

 }
}
 int main()
 {
     int arr[100];
     int n;
     printf("ENTER THE LENGHT OF NUMBERS\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     ms(arr,0,n-1);
      for(int i=0;i<n;i++)
     {
         printf("%d",arr[i]);
     }
 }
