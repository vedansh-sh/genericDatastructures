#include<stdio.h>
#include<sll.h>

int main()
{
int succ,x1,x2,x3,x4,x5;
SinglyLinkedList *singlyLinkedList;
singlyLinkedList=createSinglyLinkedList(&succ);
x1=100;
x2=200;
x3=300;
x4=400;
x5=500;
addToStartOfSinglyLinkedList(&x1,singlyLinkedList,&succ);
addToStartOfSinglyLinkedList(&x2,singlyLinkedList,&succ);
addToStartOfSinglyLinkedList(&x3,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x4,singlyLinkedList,&succ);
addToEndOfSinglyLinkedList(&x5,singlyLinkedList,&succ);
printf("Size after adding 5 nodes : %d\n",getSizeOfSinglyLinkedList(singlyLinkedList));
clearSinglyLinkedList(singlyLinkedList);
printf("Size after clearing SLL : %d\n",getSizeOfSinglyLinkedList(singlyLinkedList));
return 0;
}