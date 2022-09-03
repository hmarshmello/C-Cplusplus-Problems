#include <stdio.h>
#include <stdlib.h>


struct Node{
    int date;
    struct Node* next;
};

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->date = 1;
    head->next = second;

    second->date = 2;
    second->next = third;

    third->date = 3;
    third->next = NULL;

    return 0;
}
