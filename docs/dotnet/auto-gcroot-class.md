---
title: "auto_gcroot Class"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["msclr::auto_gcroot", "msclr.auto_gcroot", "auto_gcroot", "msclr::auto_gcroot::auto_gcroot", "auto_gcroot::auto_gcroot", "auto_gcroot.auto_gcroot", "msclr.auto_gcroot.auto_gcroot", "auto_gcroot::~auto_gcroot", "~auto_gcroot", "auto_gcroot.~auto_gcroot", "msclr::auto_gcroot::~auto_gcroot", "msclr.auto_gcroot.~auto_gcroot", "msclr::auto_gcroot::get", "msclr.auto_gcroot.get", "auto_gcroot::get", "auto_gcroot.get", "msclr::auto_gcroot::release", "auto_gcroot::release", "auto_gcroot.release", "msclr.auto_gcroot.release", "msclr::auto_gcroot::reset", "auto_gcroot::reset", "msclr.auto_gcroot.reset", "auto_gcroot.reset", ]
helpviewer_keywords: ["auto_gcroot", "auto_gcroot::auto_gcroot", "auto_gcroot::~auto_gcroot", "auto_gcroot::get", "release method", "reset method",  ]
ms.assetid: b5790912-265d-463e-a486-47302e91042a
---
# auto_gcroot Class

Automatic resource management (like [auto_ptr Class](../standard-library/auto-ptr-class.md)) which can be used to embed a virtual handle into a native type.

## Syntax

```cpp
template<typename _element_type>
class auto_gcroot;
```

### Parameters

*_element_type*<br/>
The managed type to be embedded.

## Members 
 
### Public constructors 
 
|Name|Description| 
|---------|-----------| 
|[auto_gcroot::auto_gcroot](#auto-gcroot)|The `auto_gcroot` constructor.| 
|[auto_gcroot::~auto_gcroot](#tilde-auto-gcroot)|The `auto_gcroot` destructor.
| 

### Public methods 

|Name|Description| 
|---------|-----------| 
|[auto_gcroot::attach](#attach)|Attach `auto_gcroot` to an object.| 
|[auto_gcroot::get](#get)|Gets the contained object.| 
|[auto_gcroot::release](#release)|Releases the object from `auto_gcroot` management.|
|[auto_gcroot::reset](#reset)|Destroy the current owned object and optionally take possession of a new object.| 
 
### Public operators
 
|Name|Description| 
|---------|-----------| 
|[lock::operator&nbsp;bool](#operator-bool)|Operator for using `lock` in a conditional expression.| 
|[lock::operator==](#operator-equality)|Equality operator.| 
|[lock::operator!=](#operator-inequality)|Inequality operator.| 

## Requirements

**Header file** \<msclr\auto_gcroot.h>

**Namespace** msclr

## <a name="auto-gcroot"></a>auto_gcroot::auto_gcroot

The `auto_gcroot` constructor.

```cpp
auto_gcroot(
   _element_type _ptr = nullptr
);
auto_gcroot(
   auto_gcroot<_element_type> & _right
);
template<typename _other_type>
auto_gcroot(
   auto_gcroot<_other_type> & _right
);
```

### Parameters

*_ptr*<br/>
The object to own.

*_right*<br/>
An existing `auto_gcroot`.

### Remarks

When constructing an `auto_gcroot` from an existing `auto_gcroot`, the existing `auto_gcroot` releases its object before transferring ownership of the object to the new `auto_gcroot`.

### Example

```cpp
// msl_auto_gcroot_auto_gcroot.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class RefClassA {
protected:
   String^ m_s;
public:
   RefClassA(String^ s) : m_s(s) {
      Console::WriteLine( "in RefClassA constructor: " + m_s );
   }
   ~RefClassA() {
      Console::WriteLine( "in RefClassA destructor: " + m_s );
   }

   virtual void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

ref class RefClassB : RefClassA {
public:
   RefClassB( String^ s ) : RefClassA( s ) {}
   virtual void PrintHello() new {
      Console::WriteLine( "Hello from {0} B!", m_s );
   }
};

class ClassA { //unmanaged class
private:
   auto_gcroot<RefClassA^> m_a;

public:
   ClassA() : m_a( gcnew RefClassA( "unmanaged" ) ) {}
   ~ClassA() {} //no need to delete m_a

   void DoSomething() {
      m_a->PrintHello();
   }
};

int main()
{
   {
      ClassA a;
      a.DoSomething();
   } // a.m_a is automatically destroyed as a goes out of scope

   {
      auto_gcroot<RefClassA^> a(gcnew RefClassA( "first" ) );
      a->PrintHello();
   }

   {
      auto_gcroot<RefClassB^> b(gcnew RefClassB( "second" ) );
      b->PrintHello();
      auto_gcroot<RefClassA^> a(b); //construct from derived type
      a->PrintHello();
      auto_gcroot<RefClassA^> a2(a); //construct from same type
      a2->PrintHello();
   }

   Console::WriteLine("done");
}
```

```Output
in RefClassA constructor: unmanaged
Hello from unmanaged A!
in RefClassA destructor: unmanaged
in RefClassA constructor: first
Hello from first A!
in RefClassA destructor: first
in RefClassA constructor: second
Hello from second B!
Hello from second A!
Hello from second A!
in RefClassA destructor: second
done
```

## <a name="tilde-auto-gcroot"></a>auto_gcroot::~auto_gcroot

The `auto_gcroot` destructor.


```cpp
~auto_gcroot();
```

### Remarks

The destructor also destructs the owned object.

### Example

```cpp
// msl_auto_gcroot_dtor.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
public:
   ClassA() { Console::WriteLine( "ClassA constructor" ); }
   ~ClassA() { Console::WriteLine( "ClassA destructor" ); }
};

int main()
{
   // create a new scope for a:
   {
      auto_gcroot<ClassA^> a = gcnew ClassA;
   }
   // a goes out of scope here, invoking its destructor
   // which in turns destructs the ClassA object.

   Console::WriteLine( "done" );
}
```

```Output
ClassA constructor
ClassA destructor
done
```

## <a name="attach"></a>auto_gcroot::attach

Attach `auto_gcroot` to an object.

```cpp
auto_gcroot<_element_type> & attach(
   _element_type _right
);
auto_gcroot<_element_type> & attach(
   auto_gcroot<_element_type> & _right
);
template<typename _other_type>
auto_gcroot<_element_type> & attach(
   auto_gcroot<_other_type> & _right
);
```

### Parameters

*_right*<br/>
The object to attach, or an `auto_gcroot` containing the object to attach.

### Return Value

The current `auto_gcroot`.

### Remarks

If `_right` is an `auto_gcroot`, it releases ownership of its object before the object is attached to the current `auto_gcroot`.

### Example

```cpp
// msl_auto_gcroot_attach.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
protected:
   String^ m_s;
public:
   ClassA( String^ s ) : m_s( s ) {
      Console::WriteLine( "in ClassA constructor:" + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "in ClassA destructor:" + m_s );
   }

   virtual void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

ref class ClassB : ClassA {
public:
   ClassB( String ^ s) : ClassA( s ) {}
   virtual void PrintHello() new {
      Console::WriteLine( "Hello from {0} B!", m_s );
   }
};

int main() {
   auto_gcroot<ClassA^> a( gcnew ClassA( "first" ) );
   a->PrintHello();
   a.attach( gcnew ClassA( "second" ) ); // attach same type
   a->PrintHello();
   ClassA^ ha = gcnew ClassA( "third" );
   a.attach( ha ); // attach raw handle
   a->PrintHello();
   auto_gcroot<ClassB^> b( gcnew ClassB("fourth") );
   b->PrintHello();
   a.attach( b ); // attach derived type
   a->PrintHello();
}
```

```Output
in ClassA constructor:first
Hello from first A!
in ClassA constructor:second
in ClassA destructor:first
Hello from second A!
in ClassA constructor:third
in ClassA destructor:second
Hello from third A!
in ClassA constructor:fourth
Hello from fourth B!
in ClassA destructor:third
Hello from fourth A!
in ClassA destructor:fourth
```

## <a name="get"></a>auto_gcroot::get

Gets the contained object.

```cpp
_element_type get() const;
```

### Return Value

The contained object.

### Example

```cpp
// msl_auto_gcroot_get.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
   String^ m_s;
public:
   ClassA( String^ s ) : m_s( s ){
      Console::WriteLine( "in ClassA constructor:" + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "in ClassA destructor:" + m_s );
   }

   void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

void PrintA( ClassA^ a ) {
   a->PrintHello();
}

int main() {
   auto_gcroot<ClassA^> a = gcnew ClassA( "first" );
   a->PrintHello();

   ClassA^ a2 = a.get();
   a2->PrintHello();

   PrintA( a.get() );
}
```

```Output
in ClassA constructor:first
Hello from first A!
Hello from first A!
Hello from first A!
in ClassA destructor:first
```

## <a name="release"></a>auto_gcroot::release

Releases the object from `auto_gcroot` management.

```cpp
_element_type release();
```

### Return Value

The released object.

### Example

```cpp
// msl_auto_gcroot_release.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
   String^ m_s;
public:
   ClassA( String^ s ) : m_s( s ) {
      Console::WriteLine( "ClassA constructor: " + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "ClassA destructor: " + m_s );
   }

   void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

int main()
{
   ClassA^ a;

   // create a new scope:
   {
      auto_gcroot<ClassA^> agc1 = gcnew ClassA( "first" );
      auto_gcroot<ClassA^> agc2 = gcnew ClassA( "second" );
      a = agc1.release();
   }
   // agc1 and agc2 go out of scope here

   a->PrintHello();

   Console::WriteLine( "done" );
}
```

```Output
ClassA constructor: first
ClassA constructor: second
ClassA destructor: second
Hello from first A!
done
```

## <a name="reset"></a>auto_gcroot::reset

Destroy the current owned object and optionally take possession of a new object.

```cpp
void reset(
   _element_type _new_ptr = nullptr
);
```

### Parameters

*_new_ptr*<br/>
(Optional) The new object.

### Example

```cpp
// msl_auto_gcroot_reset.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
   String^ m_s;
public:
   ClassA( String^ s ) : m_s( s ) {
      Console::WriteLine( "ClassA constructor: " + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "ClassA destructor: " + m_s );
   }

   void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

int main()
{
   auto_gcroot<ClassA^> agc1 = gcnew ClassA( "first" );
   agc1->PrintHello();

   ClassA^ ha = gcnew ClassA( "second" );
   agc1.reset( ha ); // release first object, reference second
   agc1->PrintHello();

   agc1.reset(); // release second object, set to nullptr

   Console::WriteLine( "done" );
}
```

```Output
ClassA constructor: first
Hello from first A!
ClassA constructor: second
ClassA destructor: first
Hello from second A!
ClassA destructor: second
done
```