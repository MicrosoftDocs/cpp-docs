---
title: "Compiler Warning (level 1) C4091 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4091"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4091"]
ms.assetid: 3a404967-ab42-49b0-b324-fd7ba1859d78
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4091
'keyword' : ignored on left of 'type' when no variable is declared  
  
 The compiler detected a situation where the user probably intended a variable to be declared, but the compiler was not able to declare the variable.  
  
## Example  
 A `__declspec` attribute at the beginning of a user-defined type declaration applies to the variable of that type. C4091 indicates no variable is declared. The following sample generates C4091.  
  
```  
// C4091.cpp  
// compile with: /W1 /c  
__declspec(dllimport) class X {}; // C4091  
  
// __declspec attribute applies to varX  
__declspec(dllimport) class X2 {} varX;  
  
// __declspec attribute after the class or struct keyword   
// applies to user defined type  
class __declspec(dllimport) X3 {};  
```  
  
## Example  
 If an identifier is a typedef, it cannot also be a variable name. The following sample generates C4091.  
  
```  
// C4091_b.cpp  
// compile with: /c /W1 /WX  
#define LIST 4  
typedef struct _LIST {} LIST;   // C4091  
```