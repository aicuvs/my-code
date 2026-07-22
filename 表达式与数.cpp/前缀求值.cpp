/*#include<iostream>

using namespace std;

int f()
{
    char ch;
    cin>>ch;
    if(ch=='|'){
        return f()|f();
    }
    else if(ch=='&'){
        return f()&f();
    }
    else if(ch=='^'){
        return f()^f();
    }
    else return ch-'0';
}

int main()
{
    cout<<(f()?"true":"false");
    system("pause");

}*/