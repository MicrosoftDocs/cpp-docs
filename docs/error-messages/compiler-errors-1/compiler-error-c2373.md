---
title: "Compiler Error C2373 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2373"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2373"]
ms.assetid: 7a08bf0b-852d-48be-ba75-70df9f4b5951
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2373
'identifier' : redefinition; different type modifiers  
  
 The identifier is already defined with a different type modifier.  
  
 The following sample generates C2373:  
  
```  
// C2373.h  
void __clrcall func( void );  
const int i = 20;  
```  
  
 And then:  
  
```  
// C2373.cpp  
// compile with: /c  
#include "C2373.h"  
extern void __cdecl func( void );   // C2373  
extern void __clrcall func( void );   // OK  
  
extern int i;   // C2373  
extern const int i;   // OK  
```