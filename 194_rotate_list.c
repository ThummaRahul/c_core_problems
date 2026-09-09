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

/* 194. Rotate List by k */
void rotate(int k){
    if(!head || k<=0)
        return;

    int len=1;
    struct node* p=head;

    while(p->next){
        p=p->next;
        len++;
    }

    k=k%len;

    if(k==0)
        return;

    p->next=head;

    int steps=len-k;

    p=head;

    for(int i=1;i<steps;i++)
        p=p->next;

    head=p->next;
    p->next=NULL;
}

int main(){
    int n,x,k;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    scanf("%d",&k);

    rotate(k);
    display();

    return 0;
}
