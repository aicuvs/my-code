/*#include<iostream>

#include<stack>

using namespace std;

int main()
{
    stack<char> str;
    char ch;
    int s=0;
    while (cin>>ch)
    {
        if(ch=='(') {
            str.push('(');
            ++s;
        }
        else if(ch==')'&&s){
            while (str.top()!='(') str.pop();
            str.pop();
            --s;
        }
        else str.push(ch);
    }
    int ans=0;
    while (!str.empty())
    {
        str.pop();
        ++ans;
    }
    cout<<ans;
    system("pause");
    
    

}*/