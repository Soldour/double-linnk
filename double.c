#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* next;

}*head, * current;

struct node createLink(int n);
void printList();

int main()
{



    createLink(6);
    printList();
        




}