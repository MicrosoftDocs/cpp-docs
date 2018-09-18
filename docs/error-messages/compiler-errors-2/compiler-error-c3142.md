---
title: "Compiler Error C3142 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3142"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3142"]
ms.assetid: 795137ad-d00a-4a9c-9665-0cd8bfb5da8b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3142

'property_name' : you cannot take the address of a property

The address of a property is not available to the developer.

The following sample generates C3142:

```
// C3142_2.cpp
// compile with: /clr
using namespace System;
ref class CSize {
private:
   property int Size {
      int get();
   }
};

int main() {
    &CSize::Size; // C3142
}
```
