---
title: "Compiler Error C3799 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3799"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3799"]
ms.assetid: 336a2811-9370-4e6e-b03b-325bda470805
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3799
indexed property cannot have an empty parameter list  
  
An indexed property was declared incorrectly. For more information, see [How to: Use Properties in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).  
  
## Example  
The following sample generates C3799 and shows how to fix it.  
  
```cpp  
// C3799.cpp  
// compile with: /clr /c  
ref struct C {  
   property int default[] {   // C3799  
   // try the following line instead  
   // property int default[int] {  
      int get(int index) { return 0; }  
      void set(int index, int value) {}  
   }  
};  
```