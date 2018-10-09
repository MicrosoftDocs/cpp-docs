---
title: "Compiler Error C3266 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3266"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3266"]
ms.assetid: 7375c099-acb7-42f6-898d-57cfefa010b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3266

'class' : a class-constructor must have a 'void' parameter list

Class-constructors in a class using /clr programming cannot take parameters.

The following sample generates C3266:

```
// C3266.cpp
// compile with: /clr

ref class X {
   static X(int i) { // C3266
   // try the following line instead
   // static X() {
   }
};

int main() {
}
```
