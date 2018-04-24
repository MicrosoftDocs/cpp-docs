---
title: "Compiler Warning (level 1) C4218 | Microsoft Docs"
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
  - "C4218"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4218"
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4218
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4218](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4218).  
  
  
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

