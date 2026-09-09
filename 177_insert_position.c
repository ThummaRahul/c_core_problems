#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

/* Create node */
struct node* create(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

/* Insert at end */
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

/* Display list */
void display(){
    struct node* p=head;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

/* 177. Insert at Given Position */
void insertPos(int pos,int data){
    struct node* temp=create(data);

    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }

    struct node* p=head;

    for(int i=1;i<pos-1 && p;i++)
        p=p->next;

    if(p){
        temp->next=p->next;
        p->next=temp;
    }
}

int main(){
    int n,x,pos,data;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    scanf("%d%d",&pos,&data);

    insertPos(pos,data);
    display();

    return 0;
}
