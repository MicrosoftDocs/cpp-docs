---
title: "Compiler Error C3753 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3753"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3753"]
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3753
a generic property is not allowed  
  
 Generic parameter lists can only appear on managed classes, structs, or functions.  
  
 For more information, see [Generics](../../windows/generics-cpp-component-extensions.md) and [property](../../windows/property-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3753.  
  
```  
// C3753.cpp  
// compile with: /clr /c  
ref struct A {  
   generic <typename T>  
   property int i;   // C3753 error  
};  
```