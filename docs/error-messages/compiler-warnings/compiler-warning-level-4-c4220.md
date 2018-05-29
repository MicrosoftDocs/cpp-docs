---
title: "Compiler Warning (level 4) C4220 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4220"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4220"]
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4220
varargs matches remaining parameters  
  
 Under the default Microsoft extensions (/Ze), a pointer to a function matches a pointer to a function with similar, but variable, arguments.  
  
## Example  
  
```  
// C4220.c  
// compile with: /W4  
  
int ( *pFunc1) ( int a, ... );  
int ( *pFunc2) ( int a, int b);  
  
int main()  
{  
   if ( pFunc1 != pFunc2 ) {};  // C4220  
}  
```  
  
 Such pointers do not match under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).