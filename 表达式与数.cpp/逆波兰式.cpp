/*#include<iostream>

#include<stack>

using namespace std;

int main()
{
    stack<char> st;
    char cur;
    int s1,s2;
    while (cin>>cur)
    {
        if(cur>='0'&&cur<='9') st.push(cur);
        else{
            s1=st.top()-'0';
            st.pop();
            s2=st.top()-'0';
            st.pop();
            if(cur=='+') st.push(((s1+s2)%10+10)%10+'0');
            if(cur=='-') st.push(((s2-s1)%10+10)%10+'0');
            if(cur=='*') st.push(((s1*s2)%10+10)%10+'0');
        }
    }
    cout<<st.top();
    system("pause");
    
}*/