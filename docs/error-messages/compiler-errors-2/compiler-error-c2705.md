---
title: "Compiler Error C2705"
description: "Describes Microsoft C/C++ compiler error C2705."
ms.date: 08/25/2020
f1_keywords: ["C2705"]
helpviewer_keywords: ["C2705"]
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
---
# Compiler Error C2705

> '*label*' : illegal jump into 'exception handler block' scope

## Remarks

Execution jumps to a label within a **`try`**/**`catch`**, **`__try`**/**`__except`**, or **`__try`**/**`__finally`** block. The compiler doesn't allow this behavior. For more information, see [Exception handling](../../cpp/exception-handling-in-visual-cpp.md).

## Example

The following sample generates C2705:

```cpp
// C2705.cpp
int main() {
goto trouble;
   __try {
      trouble: ;   // C2705
   }
   __finally {}

   // try the following line instead
   // trouble: ;
}
```
