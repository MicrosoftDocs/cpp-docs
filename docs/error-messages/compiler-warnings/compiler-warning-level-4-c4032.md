---
title: "Compiler Warning (level 4) C4032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4032"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4032"]
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4032
formal parameter 'number' has different type when promoted  
  
 The parameter type is not compatible, through default promotions, with the type in a previous declaration.  
  
 This is an error in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning under Microsoft extensions (/Ze).  
  
## Example  
  
```  
// C4032.c  
// compile with: /W4  
void func();  
void func(char);   // C4032, char promotes to int  
  
int main()  
{  
}  
```