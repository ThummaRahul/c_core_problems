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

struct node* reverse(struct node* h){
    struct node *prev=NULL,*next;

    while(h){
        next=h->next;
        h->next=prev;
        prev=h;
        h=next;
    }

    return prev;
}

/* 195. Delete Nodes Having Greater Value on Right */
void deleteGreaterRight(){
    head=reverse(head);

    struct node* p=head;

    if(p==NULL)
        return;

    int max=p->data;

    while(p && p->next){
        if(p->next->data < max){
            struct node* temp=p->next;

            p->next=temp->next;
            free(temp);
        }
        else{
            p=p->next;
            max=p->data;
        }
    }

    head=reverse(head);
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    deleteGreaterRight();
    display();

    return 0;
}
