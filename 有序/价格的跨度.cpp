/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> price(n+1),high(n+1,0);
    price[0]=1000000001;
    for(int i=1;i<=n;++i) cin>>price[i];
    for(int i=1;i<=n;++i){
        if(price[i]<price[i-1]) high[i]=1;
        else{
            ++high[i];
            int j=i-1;
            while (price[i]>=price[j])
            {
                high[i]+=high[j];
                j-=high[j];
            }
            
        }
    }
    for(int i=1;i<=n;++i) cout<<high[i]<<'\n';
    system("pause");
}*/