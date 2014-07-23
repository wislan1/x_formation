#include "array.h"
#include "myclass.h"

//---------------------------------------------------------------------------
int MyClass::myCount=0;


int main(int argc, char* argv[])
{

//*
cout<<"assignment operator test start\n\n";
{
  cout<<"---create two Array<MyClass> 10 and 2 elements\n";
  Array<MyClass> a1(10), a2(2);
  cout<<"---assign operator on Array<MyClass>\n";
  a1=a2;//assignment operator
  cout<<"---eof local scope\n";
}
cout<<"assignment operator test stop\n\n";
//*/

/*
cout<<"copy constructor test start\n\n";
{
  cout<<"---create Array<MyClass> 10 elements\n";
  Array<MyClass> a3(10);
  cout<<"---copy constructor on Array<MyClass> of 10 elements\n";
  Array<MyClass> a4=a3;//copy constructor
  cout<<"---eof local scope\n";
}
cout<<"copy constructor test stop\n\n";
//*/


/*
  cout<<"Get, Set test start"<<endl<<endl;
  {//locall scope
  MyClass tmpObj;
  //handle Get and Set functions
  Array<MyClass> arrObj(5);
  cout<<"---Set() within the table\n";
  arrObj.Set(4,tmpObj);
  cout<<"---Get() within the table\n";
  arrObj.Get(3);
  cout<<"---Get() outside the table\n";
  arrObj.Get(5);
  cout<<"---eof local scope\n";
  }//locall scope
  cout<<"Get, Set test stop"<<endl;//*/
  getchar();

return 0;
}
