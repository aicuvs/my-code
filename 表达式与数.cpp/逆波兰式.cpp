/*#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

#include<vector>

#include<numeric>

using namespace std;

int main()
{
    stack<char> st;
    char ch;
    while(cin>>ch){
        if(ch>='0'&&ch<='9') st.push(ch);
        else {
            int n1=st.top()-'0';
            st.pop();
            int n2=st.top()-'0';
            st.pop();
            if(ch=='+')st.push(((n1+n2)%10+10)%10+'0');
            if(ch=='-')st.push(((n2-n1)%10+10)%10+'0');
            if(ch=='*')st.push(((n1*n2)%10+10)%10+'0');
        }
    }
    cout<<st.top();
}*/
