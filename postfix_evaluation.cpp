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
					cout<<arr[top]<<" is the top most value present in the stack"<<endl;
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
			void sum()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					int sum=0;
					for(int i=top;i>=0;i--)
					{
						sum+=arr[i];
					}
					cout<<"Sum of the elements of the stack is "<<sum<<endl;
				}
			}
			void even_odd()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					for(int i=top;i>=0;i--)
					{
						if(arr[i]%2==0)
						{
							cout<<arr[i]<<" is even."<<endl;
						}
						else
						{
							cout<<arr[i]<<" is odd"<<endl;
						}
					}
				}
			}
			void fact(int num)
			{
				long long f=1;
				for(int i=1;i<=num;i++)
				{
					f=f*i;
				}
				cout<<f<<endl;
			}
			void sfact()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					for(int i=top;i>=0;i--)
					{
						fact(arr[i]);
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
	cout<<"Menu: Stack operations \n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Sum \n 6.Odd/Even \n 7.Factorial \n 8.Exit \n";
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
				st.sum();
				break;
			case 6:
				st.even_odd();
				break;
			case 7:
				st.sfact();
				break;
			case 8:
				cout<<"exiting....";
				return 0;
			default:
				cout<<"Enter the correct choice!! ";
		}
}
	return 0;
}
