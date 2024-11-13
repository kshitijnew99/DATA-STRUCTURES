//insert at begin

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void info(){
	time_t t;
	time(&t);
	printf("Harshit Srivastava\nBT23CSH051\n\n%s\n",ctime(&t));
	return;
}

struct node{
    int data;
    struct node* link;
};

void output(struct node *temp){
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
    printf("\n");
    return;
}

struct node* insert_beg(struct node* head, int item){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=item;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->link=head;
        head=temp;
    }
    return head;
}

int main (){
    info();
    struct node *head=NULL;
    int n;
    printf("Enter number of nodes...");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int item;
        printf("Enter data for node %d...",i+1);
        scanf("%d",&item);
        head = insert_beg(head,item);
    }
    printf("Entered linked list...\n");
    output(head);
    return 0;
}
