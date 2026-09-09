#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

/* 198. Two Nodes with Maximum Sum */
void maxSumPair(){
    if(head==NULL || head->next==NULL){
        printf("Not enough nodes\n");
        return;
    }

    int max=INT_MIN;

    struct node* p=head;

    while(p && p->next){
        int sum=p->data+p->next->data;

        if(sum>max)
            max=sum;

        p=p->next;
    }

    printf("Max pair sum = %d\n",max);
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    maxSumPair();

    return 0;
}
