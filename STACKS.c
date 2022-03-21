#include<stdio.h>
#define N 5

int Test[N];//Stack declaration; The stack will be of variable type int and it will hold N items.
int top= -1;
int itemCount=0;//Program to count the number of items in the stack.

	//Program to add more items(marks) onto the test stack.
	void Push(int mark)
	{
		//Checks if the stack is full.If the condition is true the program returns an error.
		//Hence if full no other item can be added into the stack.
		if(top==N-1){
			printf("The stack is full:EXIT\n");
			return;
			
		}
		
			top=top+1;
			Test[top]=mark;
			
			itemCount++;
	}	

	//Program to remove items from the stack.
	void Pop()
		{
		//Checks if  the stack is empty then returns an error if the condition is true.
		//Hence if empty, no item can be removed or popped out of the stack.
		if (top==-1){
			printf("The stack is empty;");
			return;
		}
		top= top-1;
		}
		
			//Program to  see the value of the item as from the top of the stack
			int Peek(){
				return Test[top-1];
				}
				
		
	//Program  to display the values from the stack.
	void Display(){
		int i;
		for(i=0;i<=top;i++){
			printf("%d  ",Test[i]);
			}
				printf("\n");
		}


	int main(){
		printf("The stack is as follows: \n");
		
		Push(20);Display();//Add the mark 20 to the stack and display the results
		Push(60);Display();//Add the mark 60 to the stack and display the results
		Push(40);Display();//Add the mark 40 to the stack and display the results
		Push(50);Display();//Add the mark 50 to the stack and display the results
		
			printf("Remove an item form the stack!: \n");
			Pop();//Removes one item form the stack.
		
				printf("Display the stack without the removed item: \n");
				Display();//Displays the stack.

					Peek();Display();//Displays the items in the stack.
					

						//Program displays the total number of items that have been added into the stack.
						printf("The total number of the items in the stack is %d :", itemCount);
						
		return 0;
	}
