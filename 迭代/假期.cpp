/*#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,x,y,z,core_x=0,core_y=0,core_z=0,tmp_x,tmp_y,tmp_z;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x>>y>>z;
        tmp_x=core_x;
        tmp_y=core_y;
        tmp_z=core_z;
        core_x=max(x+tmp_y,x+tmp_z);
        core_y=max(y+tmp_x,y+tmp_z);
        core_z=max(z+tmp_x,z+tmp_y);
    }
    cout<<max({core_x,core_y,core_z});
    system("pause");

}*/