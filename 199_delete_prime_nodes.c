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

/* 199. Delete Prime Number Nodes */
int isPrime(int n){
    if(n<2)
        return 0;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;

    return 1;
}

void deletePrimes(){
    struct node *p=head,*q=NULL;

    while(p){
        if(isPrime(p->data)){
            if(q==NULL)
                head=p->next;
            else
                q->next=p->next;

            free(p);

            if(q==NULL)
                p=head;
            else
                p=q->next;
        }
        else{
            q=p;
            p=p->next;
        }
    }
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    deletePrimes();
    display();

    return 0;
}
