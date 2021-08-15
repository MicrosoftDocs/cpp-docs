---
description: "Learn more about: How to: Use a Native Type in a /clr Compilation"
title: "How to: Use a Native Type in a -clr Compilation"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["compilation, native types in /clr", "/clr compiler option [C++], using native types"]
ms.assetid: 3a505c90-4adb-4942-9cf9-7d1fdcbc01e7
---
# How to: Use a Native Type in a /clr Compilation

You can define a native type in a **/clr** compilation and any use of that native type from within the assembly is valid. However, native types will not be available for use from referenced metadata.

Each assembly must contain the definition of every native type it will use.

For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

## Examples

This sample creates a component that defines and uses a native type.

```cpp
// use_native_type_in_clr.cpp
// compile with: /clr /LD
public struct NativeClass {
   static int Test() { return 98; }
};

public ref struct ManagedClass {
   static int i = NativeClass::Test();
   void Test() {
      System::Console::WriteLine(i);
   }
};
```

This sample defines a client that consumes the component. Notice that it is an error to access the native type, unless it is defined in the compiland.

```cpp
// use_native_type_in_clr_2.cpp
// compile with: /clr
#using "use_native_type_in_clr.dll"
// Uncomment the following 3 lines to resolve.
// public struct NativeClass {
//    static int Test() { return 98; }
// };

int main() {
   ManagedClass x;
   x.Test();

   System::Console::WriteLine(NativeClass::Test());   // C2653
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
