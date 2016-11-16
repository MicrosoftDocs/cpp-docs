---
title: "Compiler Warning (Level 1) C4744 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4744"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4744"
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
caps.latest.revision: 8
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
# Compiler Warning (Level 1) C4744
'var' has different type in 'file1' and 'file2': 'type1' and 'type2'  
  
 An external variable referenced or defined in two files has different types in those files.  To resolve, either make the type definitions the same, or change variable name in one of the files.  
  
 C4744 is emitted only when files are compiled with /GL.  For more information, see [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).  
  
> [!NOTE]
>  C4744 usually occurs in C (not C++) files, because in C++ a variable name is decorated with type information.  When the sample (below) is compiles as C++, you’ll get linker error LNK2019.  
  
## Example  
 This sample contains the first definition.  
  
```  
// C4744.c  
// compile with: /c /GL  
int global;  
```  
  
## Example  
 The following sample generates C4744.  
  
```  
// C4744b.c  
// compile with: C4744.c /GL /W1  
// C4744 expected  
#include <stdio.h>  
  
extern unsigned global;  
  
main()   
{  
    printf_s("%d\n", global);  
}  
```