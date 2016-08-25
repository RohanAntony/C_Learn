#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct node{
  char *data;
  struct node* next;
};

class LinkedList{
  struct node *first,*last;
 public:
  void forEach(void (*indi)(int,struct node*));
  void addAtFirst(char*);
  void addAtLast(char*);
  void removeAllElementsOnData(char*,bool);
  void displayAllNodes();
}listObject;

void indiFunc(int index,struct node* object){
  printf("%d:%s\n",index,object->data );
}

int main(int argc, char const *argv[]) {
  listObject.addAtFirst((char*)"Rohan");
  listObject.addAtFirst((char*)"Rohan");
  listObject.addAtLast((char*)"Antony");
  listObject.addAtLast((char*)"Antony");
  listObject.addAtLast((char*)"Person");
  listObject.addAtLast((char*)"Person");
  listObject.addAtLast((char*)"Developer");
  listObject.addAtLast((char*)"Rohan");
  listObject.addAtLast((char*)"Developer");
  listObject.addAtLast((char*)"Rohan");
  listObject.addAtLast((char*)"Rohan");
  listObject.addAtLast((char*)"Rohan");
  listObject.addAtLast((char*)"Rohan");
  listObject.displayAllNodes();
  listObject.removeAllElementsOnData((char*)"Rohan",true);
  // listObject.displayAllNodes();
  printf("\n%s\n","Elements in the list after removing 'Rohan'" );
  listObject.forEach(indiFunc);
  return 0;
}

void LinkedList::forEach(void (*indi)(int index,struct node*)){
  if(this->first == NULL){
      printf("%s\n","No elements in list");
  }else{
    int count = 0;
    struct node* temp = this->first;
    while(temp!=NULL){
      indi(count,temp);
      count++;
      temp = temp->next;
    }
  }
}

void LinkedList::addAtFirst(char *data){
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  if(this->first == NULL){
    this->first = temp;
    this->last = temp;
  }else{
    temp->next = this->first;
    first = temp;
  }
}

void LinkedList::addAtLast(char *data){
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  if(first == NULL){
    this->first = temp;
    this->last = temp;
  }else{
    temp->next = NULL;
    this->last->next = temp;
    this->last = temp;
  }
}

void LinkedList::removeAllElementsOnData(char *data,bool multipleElements){
  if(this->first == NULL)
    printf("%s\n","No elements in the list" );
  else{
    struct node* temp = this->first;
    while(!strcmp(this->first->data,data)){
      temp = this->first;
      this->first = this->first->next;
      free(temp);
      if(!multipleElements)
        return;
    }
    struct node* cur = this->first->next;
    struct node* prev = this->first;
    while(cur != this->last){
      if(!strcmp(cur->data,data)){
        prev->next = cur->next;
        free(cur);
        cur = prev->next;
        if(!multipleElements)
          return;
      }else{
        prev = cur;
        cur = cur->next;
      }
    }
    if(!strcmp(cur->data,data)){
      prev->next = cur->next;
      free(cur);
      last = prev;
      if(!multipleElements)
        return;
    }
  }
}

void LinkedList::displayAllNodes(){
  int count = 0;
  struct node* temp = this->first;
  printf("%s\n","The list now contains" );
  while(temp != NULL){
    printf("%d:%s\n",count,temp->data);
    count++;
    temp = temp->next;
  }
}
