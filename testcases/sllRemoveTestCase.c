#include<stdio.h>
#include<sll.h>

int main()
{
int succ,x1,x2,x3,x4,x5,i;
int *num;
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
addToStartOfSinglyLinkedList(&x4,singlyLinkedList,&succ);
addToStartOfSinglyLinkedList(&x5,singlyLinkedList,&succ);
printf("Added, size : %d\n",getSizeOfSinglyLinkedList(singlyLinkedList));
for(i=0;i<getSizeOfSinglyLinkedList(singlyLinkedList);i++)
{
num=getFromSinglyLinkedList(singlyLinkedList,i,&succ);
printf("%d\n",*num);
}

num=removeFromSinglyLinkedList(singlyLinkedList,2,&succ);
printf("Removed %d element from index 2\n",*num);

for(i=0;i<getSizeOfSinglyLinkedList(singlyLinkedList);i++)
{
num=getFromSinglyLinkedList(singlyLinkedList,i,&succ);
printf("%d\n",*num);
}
printf("Bye\n");

return 0;
}