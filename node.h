//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;
/*
//push
void push(NodePtr *top, int x){
	Node *new_node=(NodePtr)malloc(sizeof(Node));
	if(new_node){
		new_node->data=x;	
		new_node->nextPtr=*top;
		*top=new_node;
	}
}

//pop
int pop(NodePtr *top){
	NodePtr t=*top;
	int value;
	if((*top)!=NULL){
		t=*top;
		value=t->data;
		*top=t->nextPtr;
		free(t);
		return value;
	}
	return 0;
}
*/
#endif
