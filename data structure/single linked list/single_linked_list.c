#include<conio.h>
#include<stdio.h>
#include"single_linked_list"
single_node* ll_make_node(int data){
single_node* = calloc(1 ,sizeof(struct single_node));
single_node ->next = NULL;
single_node ->value= data;
return single_node;
single_node* ll_prepend(single_node* head ,int data){
  single_node* newNode = ll_make_node(data);
  newNode->next = head;
  return newNode;
}


void ll_print(Node* head) {
    single_node* temp;
  for ( temp= head; temp!= NULL; temp= temp->next)
    printf("%5d ", temp->data);
}

}
