#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front, *rear;

void insert(int data){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    
    if (front == NULL){
        front = ptr;
        rear = ptr;
        ptr->data = data;
        front->next = NULL;
        rear->next = NULL;
    }
    else{
        rear->next = ptr;
        ptr->data = data;
        rear = ptr;
        rear->next = NULL;
    }
    printf("\nNode added in queue!");
}

void delete(){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    
    if (front==NULL){
        printf("\nUnderflow");
    }
    else{
        ptr = front;
        front = front->next;
        free(ptr);
        printf("\nNode deleted!");
    }
}

void display(){
    struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    
    if (front==NULL){
        printf("\nUnderflow");
    }
    else{
        printf("\n");
        current = front;
        while (current!=NULL){
            printf("%d\t",current->data);
            current = current->next;
        }
    }
}

void main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    delete();
    display();
}
