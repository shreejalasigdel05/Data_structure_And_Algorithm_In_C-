#include<iostream>
#include<cmath>
using namespace std;
class Stack
{
	private:
		int top, arr[100];
		public:
			Stack()
			{
				top=-1;
			}
			void push(int items)
			{
				if(top==99)
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
			int pop()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				}
				else
				{
					int temp=arr[top];
					cout<<temp<<" is popped from stack"<<endl;
					top--;
					return temp;
				}
			}
};
int main(){
	Stack st;
	char element;
	string postfix;
	int op1, op2, result;
	cout<<"Enter postfix expression: ";
	cin>>postfix;
	for(int i=0;i<postfix.length();i++)
	{
		element=postfix[i];
		if(element>='0' && element<='9')
		{
			st.push(element-'0'); //ASCII value of 0 is 48, so to convert char into int
		}
		else
		{
			op1=st.pop();
			op2=st.pop();
			switch(element)
			{
				case '+':
					result=op2+op1;
					break;
				case '-':
					result=op2-op1;
					break;
				case '*':
					result=op2*op1;
					break;
				case '/':
					result=op2/op1;
					break;
				case '^':
					result=pow(op2,op1);
					break;
				default:
					cout<<"Invalid choice!"<<endl;
					return 0;
			}
			st.push(result);
		}
	}
	result=st.pop();
	cout<<"Result: "<<result<<endl;
	return 0;
}
