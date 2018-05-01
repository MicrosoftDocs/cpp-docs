---
title: "Compiler Warning (level 4) C4204 | Microsoft Docs"
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
  - "C4204"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4204"
ms.assetid: 298d2880-6737-448e-b711-15572d540200
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4204
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4204](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4204).  
  
  
nonstandard extension used : non-constant aggregate initializer  
  
 With Microsoft extensions (/Ze), you can initialize aggregate types (arrays, structures, unions, and classes) with values that are not constants.  
  
## Example  
  
```  
// C4204.c  
// compile with: /W4  
int func1()  
{  
   return 0;  
}  
struct S1  
{  
   int i;  
};  
  
int main()  
{  
   struct S1 s1 = { func1() };   // C4204  
   return s1.i;  
}  
```  
  
 Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

