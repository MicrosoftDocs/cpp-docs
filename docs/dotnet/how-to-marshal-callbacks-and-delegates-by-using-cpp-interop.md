---
description: "Learn more about: How to: Marshal Callbacks and Delegates By Using C++ Interop"
title: "How to: Marshal Callbacks and Delegates By Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["data marshaling [C++], callbacks and delegates", "C++ Interop, callbacks and delegates", "interop [C++], callbacks and delegates", "delegates [C++], marshaling", "marshaling [C++], callbacks and delegates", "callbacks [C++], marshaling"]
ms.assetid: 2313e9eb-5df9-4367-be0f-14b4712d8d2d
---
# How to: Marshal Callbacks and Delegates By Using C++ Interop

This topic demonstrates the marshalling of callbacks and delegates (the managed version of a callback) between managed and unmanaged code using Visual C++.

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but the functions could also be defined in separate files. Files containing only unmanaged functions do not need to be compiled with the [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

## Example: Configure unmanaged API to trigger managed delegate

The following example demonstrates how to configure an unmanaged API to trigger a managed delegate. A managed delegate is created and one of the interop methods, <xref:System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate%2A>, is used to retrieve the underlying entry point for the delegate. This address is then passed to the unmanaged function, which calls it with no knowledge of the fact that it is implemented as a managed function.

Notice that is it possible, but not necessary, to pin the delegate using [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) to prevent it from being re-located or disposed of by the garbage collector. Protection from premature garbage collection is needed, but pinning provides more protection than is necessary, as it prevents collection but also prevents relocation.

If a delegate is re-located by a garbage collection, it will not affect the underlaying managed callback, so <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> is used to add a reference to the delegate, allowing relocation of the delegate, but preventing disposal. Using GCHandle instead of pin_ptr reduces fragmentation potential of the managed heap.

```cpp
// MarshalDelegate1.cpp
// compile with: /clr
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

// Declare an unmanaged function type that takes two int arguments
// Note the use of __stdcall for compatibility with managed code
typedef int (__stdcall *ANSWERCB)(int, int);

int TakesCallback(ANSWERCB fp, int n, int m) {
   printf_s("[unmanaged] got callback address, calling it...\n");
   return fp(n, m);
}

#pragma managed

public delegate int GetTheAnswerDelegate(int, int);

int GetNumber(int n, int m) {
   Console::WriteLine("[managed] callback!");
   return n + m;
}

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);
   GCHandle gch = GCHandle::Alloc(fp);
   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());
   Console::WriteLine("[managed] sending delegate as callback...");

// force garbage collection cycle to prove
// that the delegate doesn't get disposed
   GC::Collect();

   int answer = TakesCallback(cb, 243, 257);

// release reference to delegate
   gch.Free();
}
```

## Example: Function pointer stored by unmanaged API

The following example is similar to the previous example, but in this case the provided function pointer is stored by the unmanaged API, so it can be invoked at any time, requiring that garbage collection be suppressed for an arbitrary length of time. As a result, the following example uses a global instance of <xref:System.Runtime.InteropServices.GCHandle> to prevent the delegate from being relocated, independent of function scope. As discussed in the first example, using pin_ptr is unnecessary for these examples, but in this case wouldn't work anyway, as the scope of a pin_ptr is limited to a single function.

```cpp
// MarshalDelegate2.cpp
// compile with: /clr
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

// Declare an unmanaged function type that takes two int arguments
// Note the use of __stdcall for compatibility with managed code
typedef int (__stdcall *ANSWERCB)(int, int);
static ANSWERCB cb;

int TakesCallback(ANSWERCB fp, int n, int m) {
   cb = fp;
   if (cb) {
      printf_s("[unmanaged] got callback address (%d), calling it...\n", cb);
      return cb(n, m);
   }
   printf_s("[unmanaged] unregistering callback");
   return 0;
}

#pragma managed

public delegate int GetTheAnswerDelegate(int, int);

int GetNumber(int n, int m) {
   Console::WriteLine("[managed] callback!");
   static int x = 0;
   ++x;

   return n + m + x;
}

static GCHandle gch;

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);

   gch = GCHandle::Alloc(fp);

   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());
   Console::WriteLine("[managed] sending delegate as callback...");

   int answer = TakesCallback(cb, 243, 257);

   // possibly much later (in another function)...

   Console::WriteLine("[managed] releasing callback mechanisms...");
   TakesCallback(0, 243, 257);
   gch.Free();
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
