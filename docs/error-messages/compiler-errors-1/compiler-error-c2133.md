---
title: "Compiler Error C2133 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2133"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2133"]
ms.assetid: 8942f9e8-9818-468f-97db-09dbd124fcae
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2133
'identifier' : unknown size  
  
 An unsized array is declared as a member of a class, structure, union, or enumeration. The /Za (ANSI C) option does not allow unsized member arrays.  
  
 The following sample generates C2133:  
  
```  
// C2133.cpp  
// compile with: /Za  
struct X {  
   int a[0];   // C2133 unsized array  
};  
```  
  
 Possible resolution:  
  
```  
// C2133b.cpp  
// compile with: /c  
struct X {  
   int a[0];   // no /Za  
};  
```