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

/* 190. First Half Ascending & Second Half Descending */
void halfSort(){
    struct node *i,*j;
    int temp;

    for(i=head;i;i=i->next){
        for(j=i->next;j;j=j->next){
            if(i->data>j->data){
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }

    struct node *slow=head,*fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    struct node *prev=NULL,*curr=slow,*next;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    halfSort();
    display();

    return 0;
}
