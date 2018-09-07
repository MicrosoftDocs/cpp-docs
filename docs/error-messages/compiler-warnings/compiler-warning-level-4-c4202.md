---
title: "Compiler Warning (level 4) C4202 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4202"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4202"]
ms.assetid: 253293aa-97a3-4878-a2e8-c6cc9e20b1cb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4202
nonstandard extension used : '...': prototype parameter in name list illegal  
  
 An old-style function definition contains variable arguments. These definitions generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## Example  
  
```  
// C4202.c  
// compile with: /W4  
void func( a, b, ...)   // C4202  
int a, b;  
{}  
  
int main()  
{  
}  
```