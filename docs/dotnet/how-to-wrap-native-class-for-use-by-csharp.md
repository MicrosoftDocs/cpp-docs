---
description: "Learn more about: How to: Wrap Native Class for Use by C#"
title: "How to: Wrap Native Class for Use by C#"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["native code [C++], Visual C# and", "classes [C++], Visual C# and"]
ms.assetid: 988819ae-cc6a-4453-8ff5-be369210d962
---
# How to: Wrap Native Class for Use by C\#

This sample shows how to wrap a native C++ class so it can be consumed by code authored in C#, or other .NET language.

## Example

```cpp
// wrap_native_class_for_mgd_consumption.cpp
// compile with: /clr /LD
#include <windows.h>
#include <vcclr.h>
#using <System.dll>

using namespace System;

class UnmanagedClass {
public:
   LPCWSTR GetPropertyA() { return 0; }
   void MethodB( LPCWSTR ) {}
};

public ref class ManagedClass {
public:
   // Allocate the native object on the C++ Heap via a constructor
   ManagedClass() : m_Impl( new UnmanagedClass ) {}

   // Deallocate the native object on a destructor
   ~ManagedClass() {
      delete m_Impl;
   }

protected:
   // Deallocate the native object on the finalizer just in case no destructor is called
   !ManagedClass() {
      delete m_Impl;
   }

public:
   property String ^  get_PropertyA {
      String ^ get() {
         return gcnew String( m_Impl->GetPropertyA());
      }
   }

   void MethodB( String ^ theString ) {
      pin_ptr<const WCHAR> str = PtrToStringChars(theString);
      m_Impl->MethodB(str);
   }

private:
   UnmanagedClass * m_Impl;
};
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
