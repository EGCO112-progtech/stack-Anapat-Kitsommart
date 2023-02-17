
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;

void push(StackPtr s, char bracket){
	Node *new_node=(NodePtr)malloc(sizeof(Node));
	if(new_node){
		new_node->data=bracket;	
		new_node->nextPtr=s->top;
		s->top=new_node;
		s->size++;
	}
}

char pop(StackPtr s){
	NodePtr t=s->top;
	char bracket;
	if(s->top!=NULL){
		t=s->top;
		bracket=t->data;
		s->top=t->nextPtr;
		free(t);
		s->size--;
		return bracket;
	}
	return 0;	
}

void pop_all(StackPtr s){
	while(s->top){
		pop(s);
	}
}
#endif
