// A simple class for demonstration purposes

class MyClass 
{
   int iA;
   int iB;
public:
   MyClass(int a, int b);
   void Test();
};

MyClass::MyClass(int a, int b)
{
   iA = a;
   iB = b;
}

void MyClass::Test()
{
   ATLASSERT(iA == iB);
}

// A simple function

void MyFunction(MyClass* c)
{
   c->Test();
}

int UseMyClass()
{
   // Create an object of MyClass.
   MyClass *pMyC = new MyClass(1, 1);

   // Create a CAutoPtr object and have it take
   // over the pMyC pointer by calling Attach.
   CAutoPtr<MyClass> apMyC;
   apMyC.Attach(pMyC);

   // The overloaded -> operator allows the 
   // CAutoPtr object to be used in place of the pointer.
   apMyC->Test();

   // Assign a second CAutoPtr, using the = operator.
   CAutoPtr<MyClass> apMyC2;
   apMyC2 = apMyC;

   // The casting operator allows the
   // object to be used in place of the pointer.
   MyFunction(pMyC);
   MyFunction(apMyC2);

   // Detach breaks the association, so after this
   // call, pMyC is controlled only by apMyC.
   apMyC2.Detach();

   // CAutoPtr destroys any object it controls when it
   // goes out of scope, so apMyC destroys the object 
   // pointed to by pMyC here.
   return 0;
}