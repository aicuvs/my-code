/*#include<iostream>

using namespace std;

int calculate();

int read()
{
    char ch=cin.peek();
    if(ch>='0'&&ch<='9'){
        int num;
        cin>>num;
        return num;
    }
    if(ch=='('){
        cin>>ch;
        int ans=calculate();
        cin>>ch;
        return ans;
    }
    return 0;
}

int calculate()
{
    int head=read();
    while (true)
    {
        char op=cin.peek();
        if(op=='+'){
            cin>>op;
            head+=read();
        }
        else if(op=='-'){
            cin>>op;
            head-=read();
        }
        else break;
    }
    return head;
    

}
int main()
{
    cout << calculate() << '\n';
}*/