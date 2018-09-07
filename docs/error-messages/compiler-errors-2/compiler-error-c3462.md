---
title: "Compiler Error C3462 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3462"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3462"]
ms.assetid: 56b75f35-9fad-42d9-a969-eeca5d709bec
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3462
'type': only an imported type can be forwarded  
  
 The TypeForwardedTo attribute must be applied to a type in referenced metadata.  
  
 For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C3462.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## Example  
 The following sample generates C3462.  
  
```  
// C3462b.cpp  
// compile with: /clr /c  
#using "C3462.dll"  
ref class N {};  
[assembly:TypeForwardedTo(N::typeid)];   // C3462  
[assembly:TypeForwardedTo(R::typeid)];  
```