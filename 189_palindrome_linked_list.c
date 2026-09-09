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

/* 189. Check Palindrome */
int isPalindrome(){
    struct node *p=head;
    int arr[100],i=0,j;

    while(p && i<100){
        arr[i++]=p->data;
        p=p->next;
    }

    for(j=0;j<i/2;j++){
        if(arr[j]!=arr[i-j-1])
            return 0;
    }

    return 1;
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        insertEnd(x);
    }

    if(isPalindrome())
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
