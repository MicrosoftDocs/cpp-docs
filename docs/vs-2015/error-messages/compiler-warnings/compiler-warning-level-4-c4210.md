---
title: "Compiler Warning (level 4) C4210 | Microsoft Docs"
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
  - "C4210"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4210"
ms.assetid: f8600adf-dfe2-4022-a37a-3d4997641dfd
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4210
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4210](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4210).  
  
  
nonstandard extension used : function given file scope  
  
 With the default Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)), function declarations have file scope.  
  
```  
// C4210.c  
// compile with: /W4 /c  
void func1()  
{  
   extern int func2( double );   // C4210 expected  
}  
  
int main()  
{  
   func2( 4 );   //  /Ze passes 4 as type double  
}                //  /Za passes 4 as type int  
```  
  
 This extension can prevent your code from being portable to other compilers.

