/*#include<iostream>

#include<stack>

using namespace std;

int main()
{
    int ans=0,n,cur,tmp;
    stack<int> st,st_tmp;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>cur;
        while (!st.empty()&&st.top()<cur)
        {
            st_tmp.push(st.top());
            st.pop();
        }
        if(!st.empty()) st.pop();
        st.push(cur);
        while (!st_tmp.empty())
        {
            st.push(st_tmp.top());
            st_tmp.pop();
        }
        
        

    }
    while (!st.empty())
    {
        st.pop();
        ++ans;
    }
    cout<<ans;
    system("pause");
    

}*/