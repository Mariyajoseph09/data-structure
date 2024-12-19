#include<stdio.h>
#include<stdlib.h>
int array[100],i;
int array_count=0;
void create()
{
int i;
printf("\n\n...\n");
printf("\ntotal number of elements in the array:");
scanf("%d",&array_count);
printf("\n enter %d elements\n\n",array_count);
for(i=0;i<array_count;i++)
{
printf("array[%d]:",i+1);
scanf("%d",&array[i]);
printf("\n");
}
printf("\n\n...\n");
}
void insert()
{
int ins_pos,i,new_value;
printf("\n\n...\n");
printf("\nposition of insertion:");
scanf("%d",&ins_pos);
for(i=array_count-1;i>=ins_pos-1;i--)
{
}
printf("which value you want to add:");
scanf("%d",&new_value);
array[ins_pos-1]=new_value;
printf("\n\n new array is:\n\n");
array_count=array_count+1;
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n\n...\n");
}
void delete()
{
int del_pos,i;
printf("\n\n...\n");
printf("enter the position of array to delete an element:");
scanf("%d",&del_pos);
for(i=del_pos-1;i<array_count-1;i++)
{
array[i]=array[i+1];
}
printf("\n\n new array is:\n\n");
array_count=array_count-1;
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n\n...\n");
}
void new()
{
int i;
printf("\n\n...\n");
printf("elements are:\n");
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n\n...\n");
}
void view()
{
int i;
printf("\n\n...\n");
printf("elements are:\n");
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n\n...\n");
}
int main()
{
int opt=0;
while(1)
{
printf("\n\n...\n");
printf("1) create\n");
printf("2) insert\n");
printf("3) delete\n");
printf("4) view\n");
printf("0) quit\n\n");
printf("choose your option:");
scanf("%d",&opt);
printf("\n\n...\n");
if(opt==0)
exit(0);
switch(opt)
{
case 1:
create();
break;
case 2:
insert();
break;
case 3:
delete();
break;
case 4:
view();
break;
default:
printf("invalid option!try again");
}
}
printf("ok");
return 0;
}



