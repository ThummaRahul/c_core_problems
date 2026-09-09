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

/* 196. Split Even and Odd Lists */
void splitEvenOdd(){
    struct node *even=NULL,*odd=NULL;
    struct node *evenTail=NULL,*oddTail=NULL;
    struct node *p=head;

    while(p){
        struct node* temp=create(p->data);

        if(p->data%2==0){
            if(even==NULL)
                even=evenTail=temp;
            else{
                evenTail->next=temp;
                evenTail=temp;
            }
        }
        else{
            if(odd==NULL)
                odd=oddTail=temp;
            else{
                oddTail->next=temp;
                oddTail=temp;
            }
        }

        p=p->next;
    }

    printf("Even: ");

    p=even;

    while(p){
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\nOdd: ");

    p=odd;

    while(p){
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\n");
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    splitEvenOdd();

    return 0;
}
