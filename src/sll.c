#ifndef __sll__c__
#define __sll__c__
#include<sll.h>
#include<common.h>
#include<stdlib.h>
#include<stdio.h>

SinglyLinkedList* createSinglyLinkedList(boolean *success)
{
SinglyLinkedList *singlyLinkedList;
if(success)*success=false;
singlyLinkedList=(SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
if(singlyLinkedList==NULL)return NULL;
singlyLinkedList->size=0;
singlyLinkedList->head=NULL;
if(success)*success=true;
return singlyLinkedList;
}

void destroySinglyLinkedList(SinglyLinkedList *singlyLinkedList,bool *success)
{
clearSinglyLinkedList(singlyLinkedList);
free(singlyLinkedList);
if(success)*success=true;
return;
}

void clearSinglyLinkedList(SinglyLinkedList *singlyLinkedList)
{
SinglyLinkedListNode *t,*p;
if(singlyLinkedList->head==NULL)return;
for(t=singlyLinkedList->head;t!=NULL;)
{
p=t;
t=t->next;
free(p);
singlyLinkedList->size--;
}
}

int getSizeOfSinglyLinkedList(SinglyLinkedList *singlyLinkedList)
{
return singlyLinkedList->size;
}

void addToStartOfSinglyLinkedList(void *ptr,SinglyLinkedList *singlyLinkedList,boolean *success)
{
SinglyLinkedListNode *singlyLinkedListNode;
if(singlyLinkedList==NULL)return;
if(success)*success=false;
singlyLinkedListNode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
singlyLinkedListNode->ptr=ptr;
singlyLinkedListNode->next=NULL;
if(singlyLinkedList->head==NULL)
{
singlyLinkedList->head=singlyLinkedListNode;
if(success)*success=true;
singlyLinkedList->size++;
return;
}
singlyLinkedListNode->next=singlyLinkedList->head;
singlyLinkedList->head=singlyLinkedListNode;
singlyLinkedList->size++;
if(success)*success=true;
return;
}

void addToEndOfSinglyLinkedList(void *ptr,SinglyLinkedList *singlyLinkedList, boolean *success)
{
SinglyLinkedListNode *t,*node;
if(singlyLinkedList==NULL)return;
if(success)*success=false;
node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
if(node==NULL)return;
node->ptr=ptr;
node->next=NULL;
if(singlyLinkedList->head==NULL)
{
singlyLinkedList->head=node;
singlyLinkedList->size++;
if(success)*success=true;
return;
}
for(t=singlyLinkedList->head;t->next!=NULL;t=t->next);
t->next=node;
singlyLinkedList->size++;
if(success)*success=true;
return;
}

void *getFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,boolean *success)
{
int x;
SinglyLinkedListNode *t;
if(singlyLinkedList==NULL)return NULL;
t=singlyLinkedList->head;
for(x=0;x<index;x++)
{
if(t==NULL)break;
t=t->next;
}
if(t==NULL)return NULL;
return t->ptr;
}


void *removeFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,boolean *success)
{
SinglyLinkedListNode *p1,*p2;
void *t;
int x;
if(singlyLinkedList->head==NULL)return NULL;
if(index>getSizeOfSinglyLinkedList(singlyLinkedList) || index<0)return NULL;
x=0;
p1=singlyLinkedList->head;
p2=NULL;
while(p1!=NULL && x<index)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL)return NULL;
if(p1==singlyLinkedList->head)
{
singlyLinkedList->head=p1->next;
t=p1->ptr;
free(p1);
singlyLinkedList->size--;
return t;
}
p2->next=p1->next;
t=p1->ptr;
free(p1);
singlyLinkedList->size--;
return t;
}

#endif