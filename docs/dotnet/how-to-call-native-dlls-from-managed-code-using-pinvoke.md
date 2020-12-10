---
description: "Learn more about: How to: Call Native DLLs from Managed Code Using PInvoke"
title: "How to: Call Native DLLs from Managed Code Using PInvoke"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["platform invoke [C++], calling native DLLs", "interop [C++], calling native DLLs", "marshaling [C++], calling native DLLs", "data marshaling [C++], calling native DLLs"]
ms.assetid: 3273eb4b-38d1-4619-92a6-71bda542be72
---
# How to: Call Native DLLs from Managed Code Using PInvoke

Functions that are implemented in unmanaged DLLs can be called from managed code using Platform Invoke (P/Invoke) functionality. If the source code for the DLL is not available, P/Invoke is the only option for interoperating. However, unlike other .NET languages, Visual C++ provides an alternative to P/Invoke. For more information, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## Example

The following code example uses the Win32 [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics) function to retrieve the current resolution of the screen in pixels.

For functions that use only intrinsic types as arguments and return values, no extra work is required. Other data types, such as function pointers, arrays, and structures, require additional attributes to ensure proper data marshaling.

Although it is not required, it is good practice to make P/Invoke declarations static members of a value class so that they do not exist in the global namespace, as demonstrated in this example.

```cpp
// pinvoke_basic.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value class Win32 {
public:
   [DllImport("User32.dll")]
   static int GetSystemMetrics(int);

   enum class SystemMetricIndex {
      // Same values as those defined in winuser.h.
      SM_CXSCREEN = 0,
      SM_CYSCREEN = 1
   };
};

int main() {
   int hRes = Win32::GetSystemMetrics( safe_cast<int>(Win32::SystemMetricIndex::SM_CXSCREEN) );
   int vRes = Win32::GetSystemMetrics( safe_cast<int>(Win32::SystemMetricIndex::SM_CYSCREEN) );
   Console::WriteLine("screen resolution: {0},{1}", hRes, vRes);
}
```

## See also

[Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
