---
title: "Standard Conversions and Implicit Boxing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["boxing, implicit"]
ms.assetid: 33f7fc7d-5674-44a2-a859-0e6a04fae519
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Standard Conversions and Implicit Boxing

A standard conversion will be chosen by the compiler over a conversion that requires boxing.

## Example

```
// clr_implicit_boxing_Std_conversion.cpp
// compile with: /clr
int f3(int ^ i) {   // requires boxing
   return 1;
}

int f3(char c) {   // no boxing required, standard conversion
   return 2;
}

int main() {
   int i = 5;
   System::Console::WriteLine(f3(i));
}
```

```Output
2
```

## See Also

[Boxing](../windows/boxing-cpp-component-extensions.md)