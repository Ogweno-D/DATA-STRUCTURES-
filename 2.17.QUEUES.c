#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int Queue[MAX];//Initialize the queue with the variable type "int" and the size set as MAX.
int front = 0;//The front of the Queue is initialized to zero.
int rear = -1;//The rear of the queue is initialized to -1 .
int itemCount = 0;//Initializes the item count of the items in te queue
	
	//This program returns the value of the element at the front of the queue.
	int peek() {
	   return Queue[front];
	}
	
		//Program to check whether the queue is full and t returns a true or false value
		bool isEmpty() { 
		   return itemCount == 0;
		}

		//Program to check whether the queue is full and t returns a true or false value.
			bool isFull() {
		 return itemCount == MAX;
		}
	
				//Returns the value of the item count i.e number of items in the queue			
				int size() {
				   return itemCount;
				}  


//Program used to insert data / elements into the initialized queue.
void insert(int data) {

	//Checks if the queue is not full.
   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      Queue[++rear] = data;//Asigns the data into the queue per index.
      itemCount++;
   }
}

//Program to remove the items from the queue.
int removeData() {
   int data = Queue[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

int main() {
   /* insert 5 items */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);

   // front : 0
   // rear  : 4
   // ------------------
   // index : 0 1 2 3 4 
   // ------------------
   // queue : 3 5 9 1 12
   insert(15);

   // front : 0
   // rear  : 5
   // ---------------------
   // index : 0 1 2 3 4  5 
   // ---------------------
   // queue : 3 5 9 1 12 15
	
   if(isFull()) {
      printf("Queue is full!\n");   
   }

   // remove one item 
   int num = removeData();
	
   printf("Element removed: %d\n",num);
   // front : 1
   // rear  : 5
   // -------------------
   // index : 1 2 3 4  5
   // -------------------
   // queue : 5 9 1 12 15

   // insert more items
   insert(16);

   // front : 1
   // rear  : -1
   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15

   // As queue is full, elements will not be inserted. 
   insert(17);
   insert(18);

   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");//Prints out the indexes.
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()) {
      int n = removeData();           
      printf("%d ",n);
   }   
}
