/*#include<iostream>

using namespace std;

int exp();

int term()
{
    char ch;
    ch=cin.peek();
    if(ch>='0'&&ch<='9'){
        int x;
        cin>>x;
        return x;
    }
    if(ch=='('){
        cin>>ch;
        int result;
        result=exp();
        cin>>ch;
        return result;
    }
    return 0;
}

int exp()
{
    int head;
    head=term();
    while(true){
        char op;
        op=cin.peek();
        if(op=='+'){
            cin>>op;
            head+=term();
        }
        else if(op=='-'){
            cin>>op;
            int body = term();
            head-=body;
        }
        else break;
    }
    return head;
}

int main()
{
    cout<<exp()<<'\n';
}*/
