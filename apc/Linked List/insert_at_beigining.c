#include<stdio.h>

struct Node{
  int data;
  struct Node * next;
};

struct Node* head = NULL;



void print(){
  struct Node* temp=head;

  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}

void insert(int data){
  struct Node* temp = (struct Node *) malloc(sizeof(struct Node) );

  temp->data=data;
  temp->next=head;
  head=temp;

}


int main(){
    int n;
    scanf("\n%d",&n);
    int data;
    for(int i=0;i<n;i++){
      scanf("\n%d",&data );
      insert(data);
    }

    print();
}
