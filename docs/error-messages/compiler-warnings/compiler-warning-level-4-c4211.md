---
title: "Compiler Warning (level 4) C4211 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 4) C4211
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