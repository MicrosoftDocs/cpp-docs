---
title: "Compiler Warning (level 4) C4207 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4207"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4207"]
ms.assetid: f4e09e3e-ac87-4489-8e3f-c8f76b82e721
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4207
nonstandard extension used : extended initializer form  
  
 With Microsoft extensions (/Ze), you can initialize an unsized array of `char` using a string within braces.  
  
## Example  
  
```  
// C4207.c  
// compile with: /W4  
char c[] = { 'a', 'b', "cdefg" }; // C4207  
  
int main()  
{  
}  
```  
  
 Such initializations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).