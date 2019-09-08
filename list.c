#include <stdio.h>
#include <stdlib.h>

//struct definition
typedef struct node
{
    int val;
    struct node *next;
}
node;

int main(void)

{   //declaration of local variables
    int n, h, i = 0;
    node *head = NULL;

    printf("input number of nodes \n");
    scanf("%d", &n);                    //user inputs number of nodes

    node *p = malloc(sizeof(node));     //allocates memory to pointer that points to the head

    printf("input value of head node: \n");
    scanf("%d", &h);                    //user inputs first node which is the head

    p->val = h;                         //points to the intial value assigned to the head node
    p->next = NULL;
    head = p;


    for (i = 1; i < n; i++)
    {
        node *q = malloc(sizeof(node));         //allocates memory to pointer q that traverses the nodes
        printf("Enter value of next node: \n");
        scanf("%d", &h);                        //user inputs values of other nodes
        q->val = h;
        q->next = NULL;
        p->next = q;                            //q traverses the node
         p = p->next;

    }
    printf("nodes are:\n");
    p = head;
    while (p != NULL)
    {
        printf("\t%d", p->val);        //prints the nodes
        p = p->next;

    }

    printf("\n");
    return 0;

}