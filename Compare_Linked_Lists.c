#include <stdio.h>
#include <stdlib.h>


struct Node{
    int date;
    struct Node* next;
    struct Node* head1;
    struct Node* head2;
};

int CLL(struct Node* head1,struct Node* head2){
    struct Node* p = head1;
    struct Node* q = head2;
    if(p==NULL||q==NULL) return 0;
    while(p&&q){
        if(p->data==q->data){
            p = p-> next;
            q = q-> next;
        }
        else return 0;
    }
    if(p==NULL && q==NULL) return 1;
    else return 0;
}