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

/* 186. Nth Node from Last */
void nthFromLast(int n){
    struct node *p=head,*q=head;

    for(int i=0;i<n;i++){
        if(p==NULL){
            printf("Invalid\n");
            return;
        }
        p=p->next;
    }

    while(p){
        p=p->next;
        q=q->next;
    }

    printf("Nth from last = %d\n",q->data);
}

int main(){
    int n,x,k;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    scanf("%d",&k);

    nthFromLast(k);

    return 0;
}
