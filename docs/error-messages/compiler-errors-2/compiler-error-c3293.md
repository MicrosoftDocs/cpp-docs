---
description: "Learn more about: Compiler Error C3293"
title: "Compiler Error C3293"
ms.date: "07/21/2017"
f1_keywords: ["C3293"]
helpviewer_keywords: ["C3293"]
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
---
# Compiler Error C3293

'accessor': use 'default' to access the default property (indexer) for class 'type'

An indexed property was accessed incorrectly.  See [How to: Use Properties in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md) for more information.

**Visual Studio 2017 and later**: In Visual Studio 2015 and earlier, the compiler in some cases misidentified a default property as a default indexer. It was possible to work around the issue by using the identifier "default" to access the property. The workaround itself became problematic after default was introduced as a keyword in C++11. Therefore, in Visual Studio 2017 the bugs that required the workaround were fixed, and the compiler now raises an error when "default" is used to access the default property for a class.

## Example

The following sample generates C3293 in Visual Studio 2015 and earlier.

```cpp
// C3293.cpp
// compile with: /clr /c
using namespace System;
ref class IndexerClass {
public:
   // default indexer
   property int default[int] {
      int get(int index) { return 0; }
      void set(int index, int value) {}
   }
};

int main() {
   IndexerClass ^ ic = gcnew IndexerClass;
   ic->Item[0] = 21;   // C3293 in VS2015 OK in VS2017
   ic->default[0] = 21;   // OK in VS2015 and earlier

   String ^s = "Hello";
   wchar_t wc = s->Chars[0];   // C3293 in VS2015 OK in VS2017
   wchar_t wc2 = s->default[0];   // OK in VS2015 and earlier
   Console::WriteLine(wc2);
}
```
