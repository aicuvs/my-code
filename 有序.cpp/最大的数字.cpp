/*#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

using namespace std;

int main()
{
    int d,i=0;
    cin>>d;
    string input;
    cin>>input;
    stack<char> st;
    char num;
    int len=input.size();
    for(int j=0;j<len;++j){
        num=input[j];
        if (st.empty() || st.top() >= num || i == d)
            st.push(num);
        else
        {
            while (!st.empty()&&i<d&&st.top()<num)
            {
                st.pop();
                ++i;
            }
            st.push(num);
        }
    }
    for(int j=0;j<d-i;++j) st.pop();
    string str;
    while (!st.empty())
    {
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    cout<<str;
    system("pause");
    
}*/