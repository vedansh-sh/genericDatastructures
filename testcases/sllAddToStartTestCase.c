#include<stdio.h>
#include<stdlib.h>
#include<sll.h>

int main()
{
int succ=0;
int i=0;
int *num;
int x1,x2,x3,x4,x5;
SinglyLinkedList *singlyLinkedList;
SinglyLinkedListNode *t;
singlyLinkedList=createSinglyLinkedList(&succ);
x1=10;
addToStartOfSinglyLinkedList(&x1,singlyLinkedList,&succ);
x2=20;
addToStartOfSinglyLinkedList(&x2,singlyLinkedList,&succ);
x3=30;
addToStartOfSinglyLinkedList(&x3,singlyLinkedList,&succ);
x4=40;
addToStartOfSinglyLinkedList(&x4,singlyLinkedList,&succ);
x5=50;
addToStartOfSinglyLinkedList(&x5,singlyLinkedList,&succ);

/*for(t=singlyLinkedList->head;t!=NULL;t=t->next)
{
num=t->ptr;
printf("%d  %d\n",*num,t);
}*/

for(i=0;i<getSizeOfSinglyLinkedList(singlyLinkedList);i++)
{
num=getFromSinglyLinkedList(singlyLinkedList,i,&succ);
printf("%d\n",*num);
}


return 0;
}