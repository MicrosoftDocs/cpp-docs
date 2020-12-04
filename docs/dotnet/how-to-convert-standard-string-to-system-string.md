---
description: "Learn more about: How to: Convert Standard String to System::String"
title: "How to: Convert Standard String to System::String"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ Standard Library, converting strings to System::String", "string conversion [C++], C++ Standard Library string", "strings [C++], converting"]
ms.assetid: 1fde79a0-9d0b-44e5-981b-e8f2676c199d
---
# How to: Convert Standard String to System::String

This topic shows how convert a C++ Standard Library string ([\<string>](../standard-library/string.md)) to a <xref:System.String>.

## Example

```cpp
// convert_standard_string_to_system_string.cpp
// compile with: /clr
#include <string>
#include <iostream>
using namespace System;
using namespace std;

int main() {
   string str = "test";
   cout << str << endl;
   String^ str2 = gcnew String(str.c_str());
   Console::WriteLine(str2);

   // alternatively
   String^ str3 = gcnew String(str.c_str());
   Console::WriteLine(str3);
}
```

```Output
test
test
test
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
