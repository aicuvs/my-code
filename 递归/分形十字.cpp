/*#include<iostream>

#include<cmath>

using namespace std;

char f(int i,int j,int size)
{
    if(size==1) return '+';
    if (i>=size/3&&i<2*size/3||j>=size/3&&j<2*size/3) return f(i%(size/3),j%(size/3),size/3);
    else return '.';
}

int main()
{
    int n;
    cin>>n;
    n=pow(3,n);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j) cout<<f(i,j,n);
        cout<<'\n';
    }
    system("pause");

}*/