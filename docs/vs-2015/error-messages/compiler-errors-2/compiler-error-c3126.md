---
title: "Compiler Error C3126 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3126"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3126"
ms.assetid: e72658a3-5d85-4a31-89a4-dbc3d475973d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3126
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3126](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3126).  
  
  
cannot define a union 'union' inside of managed type 'type'  
  
 A union cannot be defined inside a managed type.  
  
 The following sample generates C3126:  
  
```  
// C3126_2.cpp  
// compile with: /clr /c  
ref class Test  
{  
   union x  
   {   // C3126  
      int a;  
      int b;  
   };  
};  
```  
  
 The following sample generates C3126:  
  
```  
// C3126.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
  
__gc class Test  
{  
   union x  
   {   // C3126  
      int a;  
      int b;  
   };  
};  
```

