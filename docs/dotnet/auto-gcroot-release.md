---
title: "auto_gcroot::release"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["msclr::auto_gcroot::release", "auto_gcroot::release", "auto_gcroot.release", "msclr.auto_gcroot.release"]
helpviewer_keywords: ["release method"]
ms.assetid: 40b253f0-154e-4d79-80a4-ff13199c3ff0
---
# auto_gcroot::release

Releases the object from `auto_gcroot` management.

## Syntax

```
_element_type release();
```

## Return Value

The released object.

## Example

```
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

## Requirements

**Header file** \<msclr\auto_gcroot.h>

**Namespace** msclr

## See Also

[auto_gcroot Members](../dotnet/auto-gcroot-members.md)<br/>
[auto_gcroot::~auto_gcroot](../dotnet/auto-gcroot-tilde-auto-gcroot.md)