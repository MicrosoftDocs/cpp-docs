---
description: "Learn more about: Compiler Error C3154"
title: "Compiler Error C3154"
ms.date: "11/04/2016"
f1_keywords: ["C3154"]
helpviewer_keywords: ["C3154"]
ms.assetid: 78005c74-eaaf-4ac2-88ae-6c25d01a302a
---
# Compiler Error C3154

Expected ',' before ellipsis. Non-comma separated ellipsis not supported on parameter array functions.

A variable argument function was not declared correctly.

For more information, see [Variable Argument Lists (...) (C++/CLI)](../../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## Example

The following sample generates C3154.

```cpp
// C3154.cpp
// compile with: /clr
ref struct R {
   void Func(int ... array<int> ^);   // C3154
   void Func2(int i, ... array<int> ^){}   // OK
   void Func3(array<int> ^){}   // OK
   void Func4(... array<int> ^){}   // OK
};

int main() {
   R ^ r = gcnew R;
   r->Func4(1,2,3);
}
```
