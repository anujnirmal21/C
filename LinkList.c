#include<stdio.h>
#include<stdlib.h>
int info[5];
int link[5];
int st,ptr,search;

void main(){
info[0]=1;
info[1]=2;
info[2]=3;
info[3]=4;
info[4]=5;

link[0]=3;
link[1]=4;
link[2]=1;
link[3]=-1;
link[4]=0;

st = 2;
ptr = st;
printf("info link\n");
while(ptr!=-1){
  printf("%d  %d\n",info[ptr],link[ptr]);
  ptr = link[ptr];
}
printf("enter no : ");
scanf("%d",&search);
ptr=0;
for(ptr;ptr<=4;ptr++){
  if(info[ptr]==search){
    printf("element %d found at %d",search,ptr);
    exit(1);
   
  }
}
printf("Not found");
}