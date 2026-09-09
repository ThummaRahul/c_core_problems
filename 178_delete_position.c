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

/* 178. Delete Node at Given Position */
void deletePos(int pos){
    struct node *p=head,*q;

    if(head==NULL)
        return;

    if(pos==1){
        head=head->next;
        free(p);
        return;
    }

    for(int i=1;i<pos-1 && p;i++)
        p=p->next;

    if(p==NULL || p->next==NULL)
        return;

    q=p->next;
    p->next=q->next;
    free(q);
}

int main(){
    int n,x,pos;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    scanf("%d",&pos);

    deletePos(pos);
    display();

    return 0;
}
