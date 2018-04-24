---
title: "Compiler Warning (level 2) C4099 | Microsoft Docs"
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
  - "C4099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4099"
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4099
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4099](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4099).  
  
  
identifier' : type name first seen using 'objecttype1' now seen using 'objecttype2'  
  
 An object declared as a structure is defined as a class, or an object declared as a class is defined as a structure. The compiler uses the type given in the definition.  
  
## Example  
 The following sample generates C4099.  
  
```  
// C4099.cpp  
// compile with: /W2 /c  
struct A;  
class A {};   // C4099, use different identifer or use same object type  
```

