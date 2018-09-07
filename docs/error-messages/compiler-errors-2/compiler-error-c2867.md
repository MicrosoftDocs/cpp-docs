---
title: "Compiler Error C2867 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2867"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2867"]
ms.assetid: 63be26b2-d9ab-4f3d-a8b7-981ce3e4d6b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2867
'identifier' : is not a namespace  
  
 A `using` directive is applied to something other than a namespace.  
  
 The following sample generates C2867:  
  
```  
// C2867.cpp  
// compile with: /c  
namespace N {  
   class X {};  
}  
using namespace N::X;   // C2867  
```