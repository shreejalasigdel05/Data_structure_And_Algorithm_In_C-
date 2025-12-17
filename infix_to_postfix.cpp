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