---
title: "auto_gcroot::get"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["msclr::auto_gcroot::get", "msclr.auto_gcroot.get", "auto_gcroot::get", "auto_gcroot.get"]
helpviewer_keywords: ["auto_gcroot::get"]
ms.assetid: 0e922019-1cf5-4220-b5ab-6c4a2a6b40ec
---
# auto_gcroot::get

Gets the contained object.

## Syntax

```cpp
_element_type get() const;
```

## Return Value

The contained object.

## Example

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

## Requirements

**Header file** \<msclr\auto_gcroot.h>

**Namespace** msclr

## See Also

[auto_gcroot Members](../dotnet/auto-gcroot-members.md)