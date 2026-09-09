#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

/* Create node */
struct node* create(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

/* Insert at end */
void insertEnd(int data){
    struct node* temp=create(data);
    if(head==NULL){
        head=temp;
        return;
    }
    struct node* p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=temp;
}

/* Display list */
void display(){
    struct node* p=head;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

/* 176. Length using Recursion */
int lengthRec(struct node* p){
    if(p==NULL)
        return 0;
    return 1+lengthRec(p->next);
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    printf("Length = %d\n",lengthRec(head));

    return 0;
}
