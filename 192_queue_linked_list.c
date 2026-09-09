#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

struct node *front=NULL,*rear=NULL;

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
    struct node* p=front;

    while(p){
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\n");
}

/* 192. Queue using Linked List */
void enqueue(int x){
    struct node* temp=create(x);

    if(rear==NULL){
        front=rear=temp;
        return;
    }

    rear->next=temp;
    rear=temp;
}

void dequeue(){
    if(front==NULL){
        printf("Queue Underflow\n");
        return;
    }

    struct node* temp=front;

    printf("Dequeued = %d\n",temp->data);

    front=front->next;

    if(front==NULL)
        rear=NULL;

    free(temp);
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        enqueue(x);
    }

    display();

    dequeue();

    display();

    return 0;
}
