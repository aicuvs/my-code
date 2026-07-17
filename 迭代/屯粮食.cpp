/*#include<iostream>  

#include<vector>

using namespace std;

int main()
{
    int N,C,Price=0,left=0;
    cin>>N>>C;
    vector<int> A;
    A.resize(N);
    for(int i=0;i<N;++i) cin>>A[i];
    for(int i=0;i<N;++i){
        if(A[left]+(i-left)*C<A[i]) Price+=A[left]+(i-left)*C;
        else{
            left=i;
            Price+=A[i];
        }
    }
    cout<<Price;
    system("pause");

}*/
