#ifndef SLINKLIST_H
#define SLINKLIST_H
#include<iostream>
#include"list.h"
using namespace std;

template<class T>
class  slinklist:public list<T>
{
    private:
    struct  node
    {
        T data;
        node* next;
        node(const T& x,node* n=nullptr):data(x),next(n){};
        node():next(nullptr){};
        ~node(){};

    };
    node *head;
    int current_length;
    node *move(int k) const;

    public:
    slinklist();
    ~slinklist(){clear();delete head;}
    void clear();
    int length() const{return current_length;}
    void insert(int,const T&);
    void remove(int);
    int search(const T&) const;
    const T& visit(int) const;
    void traverse() const;
    int len() const {return current_length;}
    
};

template<class T>
slinklist<T>::node* slinklist<T>::move(int k) const
{
    node*p=head;
    while (k-->=0) p=p->next;
    return p;
}

template<class T>
slinklist<T>::slinklist()
{
    head=new node;
    current_length=0;
}

template<class T>
void slinklist<T>::clear()
{
    node *p=head->next,*q;
    head->next=nullptr;
    while (p!=nullptr)
    {
        q=p->next;
        delete p;
        p=q;
    }
    current_length=0;
}

template <class T>
void slinklist<T>::insert(int k,const T& x)
{
    node* p=move(k-1);
    p->next=new node(x,p->next);
    ++current_length;
}

template<class T>
void slinklist<T>::remove(int k)
{
    node*p=move(k-1),*q=p->next;
    p->next=q->next;
    delete q;
    --current_length;

}

template<class T>
int slinklist<T>::search(const T&x)const
{
     int i=0;
     node*p=head->next;
     while (p!=nullptr)
     {
        if(p->data==x) return i;
        p=p->next;
        ++i;
     }
     return -1;
     
}

template<class T>
const T& slinklist<T>::visit(int i)const
{
     return move(i)->data;
}

template <class elemType>
void slinklist<elemType>::traverse() const
{
    node *p = head->next;
    cout << endl;
    while (p != nullptr) { 
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}














#endif
