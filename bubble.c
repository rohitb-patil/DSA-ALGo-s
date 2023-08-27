 void bubblesort(int a,int arr[])
  {
    int temp;
     for(int i=0;i<a-1;i++)
     {
      for(int j=0;j<a-1-i;j++)
      {
       if(arr[j+1]<arr[j])
       {
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
       }
      }
     }
     printf("SORTED ARRAY IS \n");
      for(int i=0;i<a;i++)
    {
        printf("%d\t",arr[i]);
    }
  }
int main()
{
    int a;
    int arr[]={1,3,6,7,8,9};
    a=sizeof(arr)/sizeof(arr[0]);
    bubblesort(a,arr);
}
