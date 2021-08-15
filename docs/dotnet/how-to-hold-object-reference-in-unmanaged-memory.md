---
description: "Learn more about: How to: Hold Object Reference in Unmanaged Memory"
title: "How to: Hold Object Reference in Unmanaged Memory"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["object references, in native functions", "objects [C++], reference in native functions", "references, to objects in native functions", "gcroot keyword [C++], object reference in native function"]
ms.assetid: a61eb8ce-3982-477d-8d3d-2173fd57166d
---
# How to: Hold Object Reference in Unmanaged Memory

You can use gcroot.h, which wraps <xref:System.Runtime.InteropServices.GCHandle>, to hold a CLR object reference in unmanaged memory. Alternatively, you can use `GCHandle` directly.

## Examples

```cpp
// hold_object_reference.cpp
// compile with: /clr
#include "gcroot.h"
using namespace System;

#pragma managed
class StringWrapper {

private:
   gcroot<String ^ > x;

public:
   StringWrapper() {
      String ^ str = gcnew String("ManagedString");
      x = str;
   }

   void PrintString() {
      String ^ targetStr = x;
      Console::WriteLine("StringWrapper::x == {0}", targetStr);
   }
};
#pragma unmanaged
int main() {
   StringWrapper s;
   s.PrintString();
}
```

```Output
StringWrapper::x == ManagedString
```

`GCHandle` gives you a means to hold a managed object reference in unmanaged memory.  You use the <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> method to create an opaque handle to a managed object and <xref:System.Runtime.InteropServices.GCHandle.Free%2A> to release it. Also, the <xref:System.Runtime.InteropServices.GCHandle.Target%2A> method allows you to obtain the object reference back from the handle in managed code.

```cpp
// hold_object_reference_2.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

#pragma managed
class StringWrapper {
   IntPtr m_handle;
public:
   StringWrapper() {
      String ^ str = gcnew String("ManagedString");
      m_handle = static_cast<IntPtr>(GCHandle::Alloc(str));
   }
   ~StringWrapper() {
      static_cast<GCHandle>(m_handle).Free();
   }

   void PrintString() {
      String ^ targetStr = safe_cast< String ^ >(static_cast<GCHandle>(m_handle).Target);
      Console::WriteLine("StringWrapper::m_handle == {0}", targetStr);
   }
};

#pragma unmanaged
int main() {
   StringWrapper s;
   s.PrintString();
}
```

```Output
StringWrapper::m_handle == ManagedString
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
