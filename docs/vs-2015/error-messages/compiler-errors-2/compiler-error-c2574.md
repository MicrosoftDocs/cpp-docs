---
title: "Compiler Error C2574 | Microsoft Docs"
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
  - "C2574"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2574"
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2574
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2574](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2574).  
  
  
destructor' : cannot be declared static  
  
 Neither destructors nor constructors can be declared `static`.  
  
 The following sample generates C2574:  
  
```  
// C2574.cpp  
// compile with: /c  
class A {  
   virtual static ~A();   // C2574  
   //  try the following line instead  
   // virtual ~A();  
};  
```

