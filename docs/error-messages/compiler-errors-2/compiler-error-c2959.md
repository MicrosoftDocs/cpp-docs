---
title: "Compiler Error C2959 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2959"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2959"]
ms.assetid: d66bb2a8-70c3-4209-a358-b0c47f111a50
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2959
a generic class or function may not be a member of a template  
  
 For more information, see [Windows Runtime and Managed Templates](../../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md) and [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C2959.  
  
```  
// C2959.cpp  
// compile with: /clr /c  
template <class T> ref struct S {  
   generic <class U> ref struct GR1;   // C2959  
};  
```