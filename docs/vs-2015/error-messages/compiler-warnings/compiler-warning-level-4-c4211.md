---
title: "Compiler Warning (level 4) C4211 | Microsoft Docs"
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
  - "C4211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4211"
ms.assetid: 3eea3455-6faa-4cdb-8730-73db7026bd1f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4211
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4211](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4211).  
  
  
nonstandard extension used : redefined extern to static  
  
 With the default Microsoft extensions (/Ze), you can redefine an `extern` identifier as **static**.  
  
## Example  
  
```  
// C4211.c  
// compile with: /W4  
extern int i;  
static int i;   // C4211  
  
int main()  
{  
}  
```  
  
 Such redefinitions are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## See Also  
 [(NOTINBUILD)Static Storage-Class Specifiers](http://msdn.microsoft.com/en-us/3ba9289a-a412-4a17-b319-ceb2c087df48)

