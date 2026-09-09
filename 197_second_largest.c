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

/* 197. Second Largest Element */
int secondLargest(){
    int max=INT_MIN;
    int second=INT_MIN;

    struct node* p=head;

    while(p){
        if(p->data>max){
            second=max;
            max=p->data;
        }
        else if(p->data>second && p->data!=max){
            second=p->data;
        }

        p=p->next;
    }

    return second;
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    printf("Second Largest = %d\n",secondLargest());

    return 0;
}
