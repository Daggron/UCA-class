#include<stdio.h>
struct node{
  int data;
  struct node* next;
};

int main(){
  struct node* A=NULL;

  struct node* temp = (struct node*) malloc(sizeof(struct node));
  temp->data=1;
  temp->next=NULL;
  A=temp;

  struct node * temp2 = (struct node*)malloc(sizeof(struct node));
  temp2->data=2;
  temp2->next=NULL;
  temp->next=temp2;

  struct node* i = A;
  while(i!=NULL){
    printf("%d\n",i->data);
    i=i->next;
  }
}
