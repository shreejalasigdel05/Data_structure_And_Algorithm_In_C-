#include<iostream>
#include<cmath>
#include<cctype>
#include<cstring>
#include<stack>
using namespace std;
int priority(char op)
{
    if(op=='^') return 3;
    if(op=='*'||op=='/') return 2;
    if(op=='+'||op=='-') return 1;
    return 0;
}
int main()
{
    char infix[100];
    stack<char>st;
    cout<<"Enter the infix expression: "<<endl;
    cin>>infix;
    int n=strlen(infix);
    int i=0;
    while(i<n)
    {
        char ch=infix[i];
        if(isalnum(ch))
        {
            cout<<ch;
        }
        else if(ch=='(')
        {
            st.push(ch);
        }
        else if(ch==')')
        {
            while(!st.empty()&& st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty()&&priority(ch)<=priority(st.top())&&st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.push(ch);
        }
        i++;
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}