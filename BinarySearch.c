#include <stdio.h>
int binseaech(int val,int s,int arr[]);
int main()
{
    int arr[]={22,33,44,55,66};
    int s;
     s=sizeof(arr)/sizeof(int);
     int val=55;
    int indx= binseaech(val,s,arr);
    printf("%d",indx);
    return 0;
}

int binseaech(int val,int s,int arr[])
{
    int l,h,m;
     l=0;
     h=s-1;
    while(l<=h){
     m=(l+h)/2;
     if(arr[m]==val)
     {return m;}
     else if(arr[m]<val)
      {l=m+1;}
      else
      {h=m-1;}
}
return -1;
}

        