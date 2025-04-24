#ifndef __sll__h__
#define __sll__h__ 123
#include<common.h>

typedef struct sll_node
{
void *ptr;
struct sll_node *next;
}SinglyLinkedListNode;

typedef struct sll
{
struct sll_node *head;
int size;
}SinglyLinkedList;

SinglyLinkedList* createSinglyLinkedList(boolean *success);
void destroySinglyLinkedList(SinglyLinkedList *singlyLinkedList,bool *success);
void clearSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
int getSizeOfSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
void addToStartOfSinglyLinkedList(void *ptr,SinglyLinkedList *singlyLinkedList,boolean *success);
void addToEndOfSinglyLinkedList(void *ptr,SinglyLinkedList *singlyLinkedList, boolean *success);
void appendToSinglyLinkedList(SinglyLinkedList *targetSinglyLinkedList,SinglyLinkedList *sourceSinglyLinkedList,boolean *success);
void insertIntoSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,void *ptr,boolean *success);
void *getFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,boolean *success);
void *removeFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,boolean *success);

#endif