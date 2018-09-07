---
title: "Compiler Error C3831 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3831"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3831"]
ms.assetid: a125d8dc-b75a-4ea0-b6c7-fe7b119dba25
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3831
'member': 'class' cannot have a pinned data member or a member function returning a pinning pointer  
  
 [pin_ptr (C++/CLI)](../../windows/pin-ptr-cpp-cli.md) was used incorrectly.  
  
## Example  
 The following sample generates C3831:  
  
```  
// C3831a.cpp  
// compile with: /clr  
ref class Y  
{  
public:  
   int i;  
};  
  
ref class X  
{  
   pin_ptr<int> mbr_Y;   // C3831  
   int^ mbr_Y2;   // OK  
};  
  
int main() {  
   Y y;  
   pin_ptr<int> p = &y.i;  
}  
```  
