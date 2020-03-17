#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node* left;
    struct node* next;

}*head, * current;

struct node createLink(int n)
{

    //  struct node* current;
    struct node* follow;

    int value;
    int i;
    printf("Enter the valu at the head: ");
    scanf_s("%d", &value);
    current = (struct node*)malloc(sizeof(struct node));
    current->data = value;
    current->next = NULL;
    current->left = NULL;

    head = current;
    follow = head;
    for (i = 1; i < n; i++)
    {

        printf("Enter the valu at index %d: ", i);
        scanf_s("%d", &value);
        current = (struct node*)malloc(sizeof(struct node));
        current->data = value;
        current->next = NULL;


        follow->next = current;
        current->left = follow;
        follow = follow->next;



    }


}

void printList()
{

    int key;
    printf("choose a key to traverse the link: ONE for backward and TWO forward:");
    scanf_s("%d", &key);
    if (key == 1) {
        struct node* follow = current;
        while (follow != NULL)
        {
            printf("%d->", follow->data);
            follow = follow->left;


        }

        printf("NULL\n");
    }
    else if (key == 2)
    {
        struct node* follow = head;
        while (follow != NULL)
        {
            printf("%d->", follow->data);
            follow = follow->next;


        }

        printf("NULL");
    }
    else {
        printf("\n Unknown input:\n");
    }
}
