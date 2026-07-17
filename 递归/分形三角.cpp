/*#include<iostream>

using namespace std;

char f(int i,int j,int size)
{
    if(size==2){
        if(i==0&&j==0||i==0&&j==3) return ' ';
        if(i==0&&j==1||i==1&&j==0) return '/';
        if(i==0&&j==2||i==1&&j==3) return '\\';
        return '_';
    }
    if(i<size/2&&j>=size/2&&j<3*size/2) return f(i,j-size/2,size/2);
    if(i>=size/2&&j<size) return f(i-size/2,j,size/2);
    if(i>=size/2&&j>=size) return f(i-size/2,j-size,size/2);
    return ' ';
}

int main()
{
    int n;
    cin>>n;
    int row=1<<n,col=1<<n+1,size=row;
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j) cout<<f(i,j,size);
        cout<<'\n';
    }
    system("pause");
}*/