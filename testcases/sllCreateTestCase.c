#include<stdio.h>
#include<sll.h>

int main()
{
int succ=0;
SinglyLinkedList *singlyLinkedList;
singlyLinkedList=createSinglyLinkedList(&succ);
if(succ)printf("List created\n");
else printf("List not created\n");
return 0;
}