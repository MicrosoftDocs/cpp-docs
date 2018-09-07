---
title: "Compiler Error C2728 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2728"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2728"]
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2728
'type' : a native array cannot contain this type  
  
 Array creation syntax was used to create an array of managed or WinRT objects. You cannot create an array of managed or WinRT objects using native array syntax.  
  
 For more information, see [array](../../windows/arrays-cpp-component-extensions.md).  
  
 The following sample generates C2728 and shows how to fix it:  
  
```  
// C2728.cpp  
// compile with: /clr  
  
int main() {  
   int^ arr[5];   // C2728  
  
   // try the following line instead  
   array<int>^arr2;  
}  
```  
