#if !defined( MYCLASS_H )
#define MYCLASS_H

//-----------------------------------
//--------For testing----------------

class MyClass
{
public:

  MyClass(int i)
  {
    cout<<"MyClass int "<<++myCount<<"\n";
  }

  MyClass()
  {
    cout<<"MyClass default "<<++myCount<<"\n";
  }

  MyClass(const MyClass& cl)
  {
    cout<<"MyClass CopyConstructor "<<++myCount<<"\n";
  }

  MyClass& operator=(const MyClass& cl)
  {
    cout<<"MyClass Assignment\n";

  return *this;
  }

  ~MyClass()
  {
    cout<<"~MyClass "<<--myCount<<"\n";
  }

static int myCount;

};

#endif // !defined( MYCLASS_H )
