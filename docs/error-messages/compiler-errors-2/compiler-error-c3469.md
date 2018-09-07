---
title: "Compiler Error C3469 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3469"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3469"]
ms.assetid: e23b0e5c-c704-4e67-a868-bf02c2055d85
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3469
'type' : a generic class cannot be forwarded  
  
 You cannot use type forwarding on a generic class.  
  
 For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C3469.cpp  
// compile with: /clr /LD  
generic<typename T>  
public ref class GR {};  
  
public ref class GR2 {};  
```  
  
## Example  
 The following sample generates C3466.  
  
```  
// C3469_b.cpp  
// compile with: /clr /c  
#using "C3469.dll"  
[assembly:TypeForwardedTo(GR::typeid)];   // C3469  
[assembly:TypeForwardedTo(GR2::typeid)];   // OK  
```