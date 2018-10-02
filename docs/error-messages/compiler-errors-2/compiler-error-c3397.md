---
title: "Compiler Error C3397 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3397"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3397"]
ms.assetid: a8536e87-79c4-4ed7-bd96-42704d06391f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3397

Aggregate initialization is not allowed in default arguments

An array was declared incorrectly.  See [Arrays](../../windows/arrays-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3397.

```
// C3397.cpp
// compile with: /clr
// /clr /c
void Func(array<int> ^p = gcnew array<int> { 1, 2, 3 });   // C3397
void Func2(array<int> ^p = gcnew array<int> (3));   // OK

int main() {
   array<int> ^p = gcnew array<int> { 1, 2, 3};   // OK
}
```