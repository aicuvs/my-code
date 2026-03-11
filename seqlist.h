#ifndef SEQLIST_H
#define SEQLIST_H
#include"list.h"
using namespace std;

template<class T>
class seqlist:public list<T>
{
    private:
    T *data;
    int current_length;
    int max_size;
    void double_space();

    public:
    seqlist(int init_size=10);
    ~seqlist();
    void clear();
    int len()const;
    void insert(int,const T&);
    void remove(int);
    int search(const T&)const;
    const T& visit(int)const;
    void traverse()const;
    void erase(const T&);
};
template <class T>
seqlist<T>::seqlist(int init_size)
{
    data=new T[init_size];
    max_size=init_size;
    current_length=0;
}

template <class T>
seqlist<T>::~seqlist()
{
    delete [] data;
    data=nullptr;
}

template <class T>
void seqlist<T>::clear()
{
    current_length=0;
}

template <class T>
int seqlist<T>::len()const
{
    return current_length;
}

template<class T>
void seqlist<T>::insert(int k,const T& x)
{
    if(current_length==max_size) double_space();
    for(int i=current_length-1;i>k;--i) data[i]=data[i-1];
    data[k]=x;
    ++current_length;
}

template<class T>
void seqlist<T>::remove(int k)
{
    for(int i=k;i<current_length-1;i++) data[i]=data[i+1];
    --current_length;
}

template<class T>
int seqlist<T>::search(const T&x) const
{  
    int i;
    for(i=0;i<current_length&&data[i]!=x;++i);
    if(i==current_length) return -1;
    else return i;

}

template <class T>
const T& seqlist<T>::visit(int i) const
{
    return data[i];
}

template <class T>
void seqlist<T>::traverse()const
{
    cout<<endl;
    for(int i=0;i<current_length;++i) cout<<data[i]<<' ';
}

template <class T>
void seqlist<T>::double_space()
{
    max_size*=2;
    T *temp=data;
    data=new T [max_size];
    for(int i=0;i<current_length;++i) data[i]=temp[i];
    delete[]temp;
    temp=nullptr;
}

template<class T>
void seqlist<T>::erase(const T&x)
{
    int sum=0;
    for(int i=0;i<current_length;i++){
        if(data[i]==x) ++sum;
        data[i]=data[i-sum];
    }
    current_length-=sum;

}









#endif