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

/* 187. Stack using Linked List */
void push(int x){
    struct node* temp=create(x);

    temp->next=head;
    head=temp;
}

void pop(){
    if(head==NULL){
        printf("Stack Underflow\n");
        return;
    }

    struct node* temp=head;
    printf("Popped = %d\n",temp->data);

    head=head->next;
    free(temp);
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        push(x);
    }

    display();
    pop();
    display();

    return 0;
}
