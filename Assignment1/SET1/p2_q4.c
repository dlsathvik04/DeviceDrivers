#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        printf("%d", curr->value);
        curr = curr->next;
    }
}

int add(Node **list, int value)
{
    Node **temp;
    temp = (Node **)calloc(1, sizeof(Node));
    if (temp)
    {
        if (*list == NULL)
        {
            *list = temp;
        }
        else
        {
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    Node *list = NULL;
    add(&list, 1);
    return 0;
}
