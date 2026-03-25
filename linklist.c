#include<stdio.h>
struct node{
    int info;
    struct node *next;
};
void create();
void traverse();

struct node *first=NULL,*last=NULL;

int main() 
{
    create();
    traverse();
    return 0;
}


void create(){
    struct node *p,*q;
    int x;
    while(1){
        p=(struct node*)malloc(sizeof (struct node));
        printf("Enter info");
        scanf("%d",&p->info);
        if(first==NULL)
        {
            first=p;
            last=p;
        }
        else{
            last->next=p;
            last=p;
        }
    
    printf("press for 1 to new node");
    scanf("%d",&x);

    if(x!=1)
     break;
}
last->next=NULL;
}


void traverse()
{
    struct node *p;
    p=first;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
    printf("NULL");
} 

