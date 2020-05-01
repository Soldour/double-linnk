#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h> 

struct node
{
    int data;
    struct node* left;
    struct node* next;

}*head, * current;

struct node createLink(int n)
{
    int m = 1;
    m++;
    int value = rand();
 
    //  struct node* current;

    struct node* follow;
    if (m == 1) {

        printf("Enter the valu at the head: ");
        scanf_s("%d", &value);
        current = (struct node*)malloc(sizeof(struct node));
        current->data = value;
        current->next = NULL;
        current->left = NULL;

        head = current;
        follow = head;


    }
    else if (m < n) {

        value = rand() % 100;

        // printf("Enter the valu at index %d: ", i);
        // scanf_s("%d", &value);
        current = (struct node*)malloc(sizeof(struct node));
        current->data = value;
        current->next = NULL;


        follow->next = current;
        current->left = follow;
        follow = follow->next;
    }
    else{
        createLink(n);

}
  

}

void printList()
{

    int key;
    printf("\nChoose a key to traverse the link: ONE for backward and TWO forward:");
    scanf_s("%d", &key);
    if (key == 1) {
        struct node* follow = current;
		printf("NULL");
        while (follow != NULL)
        {
            printf("<->%d", follow->data);
            follow = follow->left;
        }
      
    }
    else if (key == 2)
    {
        struct node* follow = head;
        while (follow != NULL)
        {
            printf("%d<->", follow->data);
            follow = follow->next;
        }

        printf("NULL");
    }
    else {
        printf("\n Unknown input:\n");
    }
}

void printRcursion() {





}


struct node* insertElement(int value, int bound)
{
	int inserting_index;
	printf("\nInput the index to insert the value\n");
	scanf_s("%d", &inserting_index);
	if (inserting_index == 0)
	{
		/*begning(value);
		printList();*/
		//printf("refer to the head insertion function:\n");

	}
	else if (inserting_index == bound)
	{
		struct node* new_node;                   // creat new node 
		struct node* track = head;               // the track node will follow the head node untill it 
		current = malloc(sizeof(struct node));  // reaches the point where it ponints to null
		current->data = value;
		current->next = NULL;
		while (track->next != NULL)
		{
			track = track->next;      // afther the pointer pints to null 
		}                             // it will scape out of the the loop 
		track->next = current;        // here the pointer feild at the poin wher the loop breaks will point 
		current->left = track;	      //the current node which is the inserted node the left pointer will point 
		track = track->next;	      //to the previous node
	}
	else
	{

		int loop = 0;
		do
		{

			if (inserting_index <= bound && inserting_index > 0) {
				struct node* new_node;                       /////////\\\\\\\\\\\\\\\\\\//////\\\\\\\\\\\\\\\\\\\\//////////////////////
				struct node* track = head;                  // create two same node that will track the head node ( track and follow)//
				                                           // new node will take the data feild of value and will pint to null      //
				new_node = malloc(sizeof(struct node));   // the count will start form 2 because the starting node functionis      //
				new_node->data = value;                  //different                                                              //
				new_node->next = NULL;                  ///////////////////////////////////////////////////////////////////////////
				new_node->left = NULL;
				
				int count = 2;

				while (count <= inserting_index)
				{
				
					track = track->next;

					count++;
				}

				new_node->next = track->next;
				track->next->left = new_node;
				track->next = new_node;
				new_node->left = track;

				while (track != NULL) {
					track = track->next;

				}
                printf("A node is added at  index %d: \n", count-1);
				
			}
			else {

				printf("\n the insertign index must be lessthan %d and greater than one: \n", bound);
				break;
			}



			loop++;
		} while (loop > 3);
	}

	printList();
}


struct node* begning(int value)
{
	struct node* new_node;
	new_node = malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = head;
	head->left = new_node;
	new_node->left = NULL;
    printf("\nEement is added at the head: \n");
	return new_node;

}



void deletAllElement()
{
    int key;
    printf("input the key of to be deleted :");
    scanf_s("%d", &key);
  
    bool  exist;
   
    struct node * follow=head;

    int count = 0;

    while (head != NULL && head->data == key)
    {
       //3 follow = head;
        head = head->next;
        head->left = NULL;
        free(follow);
        printf("\nThe node at the head is deleted! \n");
        count++;
    }

    follow = NULL;
    current = head;


    while (current != NULL )
    {

      exist = current->data == key;

        if (current->data == key)

        {

            while (current->data == key)
            {
                count++;
            }
            if (follow != NULL) {

                follow->next = current->next;
                current->next->left = follow;
            }


            free(current);
            current = follow->next;

            printf("\n the node at index %d\n", count);
            printList();
        }
        else
        {

            follow = current;
            current = current->next;
            //printf("\nthe element does not belong to this node\n");
           // break;

        }
    }

}
