#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperator(char ch)
{
	return(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^');
}
int main()
{
	string postfix;
	stack<string> st;
	cout<<"Enter a postfix expression: ";
	cin>>postfix;
	for(int i=0;i<postfix.length();i++)
	{
		char ch=postfix[i];
		if(isalnum(ch))
		{
			string op(1,ch);
			st.push(op);
		}
		else if(isOperator(ch))
		{
			string op2=st.top();
			st.pop();
			string op1=st.top();
			st.pop();
			string exp="("+op1+ch+op2+")";
			st.push(exp);
		}
	}
	cout<<"Infix expression: "<<st.top();
	return 0;
}
