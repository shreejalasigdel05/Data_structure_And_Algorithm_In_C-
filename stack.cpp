#include<iostream>
using namespace std;
class Stack
{
	private:
		int top,size, arr[100];
		public:
			Stack(int s)
			{
				size=s;
				top=-1;
			}
			void push(int items)
			{
				if(top==size-1)
				{
					cout<<"Stack overflow!! Cannot push"<<endl;
				}
				else
				{
					++top;
					arr[top]=items;
					cout<<"items: "<<items<<endl;
				}
			}
			void pop()
			{
				if(top==-1)
				{
					cout<<"Stock underflow"<<endl;
				}
				else
				{
					cout<<arr[top]<<"is popped from stack"<<endl;
					top--;
				}
			}
			void peek()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					cout<<arr[top]<<"is the top most value present in the stack"<<endl;
				}
			}			
			void display()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					cout<<"The value present in top to bottom are: \n";
					for(int i=top; i>=0;i--)
					{
						cout<<arr[i]<<endl;
					}
				}
			}
};
int main()
{
	int n;
	cout<<"Please enter the size of the stack: ";
	cin>>n;
	Stack st(n);
	int choice,value;
	while(true)
	{
	cout<<"Menu: Stack operations \n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Exit \n";
	cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"please enter the value to push into the stack: ";
				cin>>value;
				st.push(value);
				break;
			case 2:
				st.pop();
				break;
			case 3:
				st.peek();
				break;
			case 4:
				st.display();
				break;
			case 5:
				cout<<"exiting....";
				return 0;
			default:
				cout<<"Enter the correct choice!! ";
		}
}
	return 0;
}
