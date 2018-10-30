---
title: "How to: Unbox"
ms.date: "11/04/2016"
helpviewer_keywords: ["unboxing"]
ms.assetid: 75794696-9275-47bf-9a7d-5abe6585ab91
---
# How to: Unbox

Shows how to unbox and modify a value.

## Example

```
// vcmcppv2_unboxing.cpp
// compile with: /clr
using namespace System;

int main() {
   int ^ i = gcnew int(13);
   int j;
   Console::WriteLine(*i);   // unboxing
   *i = 14;   // unboxing and assignment
   Console::WriteLine(*i);
   j = safe_cast<int>(i);   // unboxing and assignment
   Console::WriteLine(j);
}
```

```Output
13
14
14
```

## See Also

[Boxing](../windows/boxing-cpp-component-extensions.md)