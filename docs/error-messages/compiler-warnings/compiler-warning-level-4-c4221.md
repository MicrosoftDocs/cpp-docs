---
title: "Compiler Warning (level 4) C4221 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4221"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4221"]
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4221
nonstandard extension used : 'identifier' : cannot be initialized using address of automatic variable  
  
 With the default Microsoft extensions (/Ze), you can initialize an aggregate type (**array**, `struct`, or **union**) with the address of a local (automatic) variable.  
  
## Example  
  
```  
// C4221.c  
// compile with: /W4  
struct S  
{  
   int *i;  
};  
  
void func()  
{  
   int j;  
   struct S s1 = { &j };   // C4221  
}  
  
int main()  
{  
}  
```  
  
 Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).