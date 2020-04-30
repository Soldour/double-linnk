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
struct node* insertElement(int value, int bound);
struct node* begning(int value);
void deletAllElement(int  key);
int main()
{


    int n = 5;
    createLink(n);
    printList();
   insertElement(308, n);
  // head= begning(33 );
   // printList();
    deletAllElement( 308);
    printList();

}
