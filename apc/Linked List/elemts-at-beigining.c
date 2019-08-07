// Program to enter elemets at the beigining of node

#include<stdio.h>
struct node{
  int data;
  struct node* next;
};

int main(){
  struct node* A=NULL;
  int i=0;
  while(i<5){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    temp->data=i;
    temp->next=A;
    A=temp;
    i++;
  }
  struct node* b = A;
  while(b!=NULL){
    printf("%d\n",b->data);
    b=b->next;
  }
}
