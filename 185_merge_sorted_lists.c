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

    while(p->next!=NULL)
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

/* 185. Merge Two Sorted Lists */
struct node* merge(struct node* a,struct node* b){
    if(!a)
        return b;

    if(!b)
        return a;

    if(a->data<b->data){
        a->next=merge(a->next,b);
        return a;
    }
    else{
        b->next=merge(a,b->next);
        return b;
    }
}

int main(){
    struct node *a=NULL,*b=NULL,*p;
    int n,m,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);

        struct node* temp=create(x);

        if(a==NULL)
            a=temp;
        else{
            p=a;
            while(p->next)
                p=p->next;
            p->next=temp;
        }
    }

    scanf("%d",&m);

    while(m--){
        scanf("%d",&x);

        struct node* temp=create(x);

        if(b==NULL)
            b=temp;
        else{
            p=b;
            while(p->next)
                p=p->next;
            p->next=temp;
        }
    }

    head=merge(a,b);
    display();

    return 0;
}
