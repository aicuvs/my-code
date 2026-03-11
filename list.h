#ifndef LIST_H
#define LIST_H
template<class T>
class list
{
  public:
  virtual void clear()=0;
  virtual int len()const=0;
  virtual void insert(int ,const T&)=0;
  virtual void remove(int)=0;
  virtual int search(const T&)const=0;
  virtual const T& visit(int)const=0;
  virtual void traverse()const=0;
  virtual ~list(){};

};

#endif