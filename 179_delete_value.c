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

/* 179. Delete Node with Specific Value */
void deleteValue(int val){
    struct node *p=head,*q=NULL;

    while(p){
        if(p->data==val){
            if(q==NULL)
                head=p->next;
            else
                q->next=p->next;

            free(p);
            return;
        }

        q=p;
        p=p->next;
    }
}

int main(){
    int n,x,val;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    scanf("%d",&val);

    deleteValue(val);
    display();

    return 0;
}
