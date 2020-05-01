#include <stdio.h>
#include <stdlib.h>



struct node createLink(int n);
void printList();
struct node* insertElement(int value, int bound);
struct node* begning(int value);
void deletAllElement();
int main()
{


    int n = 5;
    createLink(n);
    printList();
    insertElement(308, n);
    deletAllElement();
     printList();




}