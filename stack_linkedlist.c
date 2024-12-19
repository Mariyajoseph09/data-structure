#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>
 
 struct node{
     int data;
     struct node *next;
};
typedef struct node node;
node *head;
void push(){
int data;
node *temp,*pre;
printf("\nenter value:");
scanf("%d",&data);
temp=(node*)malloc(sizeof(node));
temp->data=data;
if(head==NULL){
head=temp;
head->next=NULL;
}
else
{
pre=head;
while(pre->next !=NULL){
pre=pre->next;
}
pre=head;
while(pre->next != NULL){
pre=pre->next;
}
pre->next=temp;
temp->next=NULL;
}
}
void pop(){
node *temp;
temp=head;
if(head==NULL){
printf("\n stack is empty \n");
}
else{
while(temp->next->next !=NULL){
temp=temp->next;
}
temp->next=NULL;
}
}
void peek(){
	node *temp;
	int count=1;
	temp=head;
	if(head == NULL){
		printf("\nStack is Empty \n");
	}
	else{
	while(temp->next != NULL){
		temp=temp->next;
		count++;
	}
	printf("Stack [%d] : %d\n",count,temp->data);
}
}
void display()
{
node *temp;
int count=1;
temp=head;
if(head==NULL){
printf("\n list is empty \n ");
}
else{
while(temp->next !=NULL){
printf("list [%d]:%d\n",count,temp->data);
temp=temp->next;
count++;
}
printf("list [%d]: %d\n",count,temp->data);
}
}
int main()
{
int opt;
do {
printf("\n..................\n");
		printf("1)PUSH\n");
		printf("2)POP\n");
		printf("3)PEEK\n");
		printf("4)DISPLAY\n");
		printf("5)QUIET");
		printf("\n..................\n");
		printf("choose your option : ");
		scanf("%d",&opt);
		
switch(opt){
case 1:
        push();
        break;
case 2:
        pop();
        break;
 case 3:       
        peek;
        break;
 case 4:       
        display();
        break;
 case 5:       
        
        exit(0);
default:
printf("\n invalid operation !! Try Again.....\n");
}}
while(1);
return 0;
}        
                
        
