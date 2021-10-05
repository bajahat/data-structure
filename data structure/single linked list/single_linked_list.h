#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
typedef int data;
typedef struct single_node{
data value;
struct single_node *next;
}single_node;

single_node* ll_make_node(int data);
single_node* ll_prepend(single_node* head ,int data);
void ll_print(single_node* head);
#endif
