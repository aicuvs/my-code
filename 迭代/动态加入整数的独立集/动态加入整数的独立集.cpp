#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    map<int,int> memo;
    while (n--)
    {
        int x;
        cin>>x;
        if(memo[x]==0){
            int l=memo[x-1];
            int r=memo[x+1];
            int total=l+r+1;
            memo[x]=total;
            ans-=(l+1)/2+(r+1)/2-(total+1)/2;
            memo[x-l]=total;
            memo[x+r]=total;
            
            

        }
        cout<<ans<<' ';
    }
    
}