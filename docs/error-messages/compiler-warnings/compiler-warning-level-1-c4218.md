---
title: "Compiler Warning (level 1) C4218 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4218"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4218"]
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4218
nonstandard extension used : must specify at least a storage class or a type  
  
 With the default Microsoft extensions (/Ze), you can declare a variable without specifying a type or storage class. The default type is `int`.  
  
## Example  
  
```  
// C4218.c  
// compile with: /W4  
i;  // C4218  
  
int main()  
{  
}  
```  
  
 Such declarations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).