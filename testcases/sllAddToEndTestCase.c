#include<stdio.h>
#include<sll.h>

int main()
{
int succ=0;
int i,x1,x2,x3,x4,x5,x6;
int *num;
SinglyLinkedList *singlyLinkedList;
SinglyLinkedListNode *t;
singlyLinkedList=createSinglyLinkedList(&succ);
x1=100;
x2=200;
x3=300;
x4=400;
x5=500;
addToEndOfSinglyLinkedList(&x1,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x2,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x3,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x4,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x5,singlyLinkedList,&succ);

/*for(i=0;i<getSizeOfSinglyLinkedList(singlyLinkedList);i++)
{
num=getFromSinglyLinkedList(singlyLinkedList,i,&succ);
printf("%d\n",*num);
}*/

for(t=singlyLinkedList->head;t!=NULL;t=t->next)
{
num=t->ptr;
printf("%d\n",*num);
}

return 0;
}