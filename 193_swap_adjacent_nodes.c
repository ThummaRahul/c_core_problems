#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

struct node* create(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void insertEnd(int data){
    struct node* temp=create(data);

    if(head==NULL){
        head=temp;
        return;
    }

    struct node* p=head;

    while(p->next)
        p=p->next;

    p->next=temp;
}

void display(){
    struct node* p=head;

    while(p){
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\n");
}

/* 193. Swap Every Two Adjacent Nodes */
void swapPairs(){
    struct node* p=head;

    while(p && p->next){
        int temp=p->data;

        p->data=p->next->data;
        p->next->data=temp;

        p=p->next->next;
    }
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    swapPairs();
    display();

    return 0;
}
