---
title: "Compiler Error C3289 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3289"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3289"]
ms.assetid: 3c1c623b-7fcf-43ab-a89a-8722532a8d29
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3289
'property' : a trivial property cannot be indexed  
  
 A property was declared incorrectly. Accessors must be defined for an indexed property. See [property](../../windows/property-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C3289.  
  
```  
// C3289.cpp  
// compile with: /clr  
public ref struct C {  
   // user-defined simple indexer  
   property int indexer1[int];   // C3289  
  
   // user-defined indexer  
   property int indexer2[int] {  
      int get(int i) { return 0; }  
      void set(int i, int j) {}  
   }  
};  
  
int main() {  
   C ^ MyC = gcnew C();  
   MyC->indexer2[0] = 1;  
}  
```