---
title: "Compiler Error C3625 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3625"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3625"]
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3625
'native_type': a native type cannot derive from a managed or WinRT type 'type'  
  
A native class cannot inherit from a managed or WinRT class. For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
## Example  
The following sample generates C3625:  
  
```  
// C3625.cpp  
// compile with: /clr /c  
ref class B {};  
class D : public B {};   // C3625 cannot inherit from a managed class  
```  
