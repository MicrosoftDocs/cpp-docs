---
title: "Compiler Warning (level 4) C4256 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4256"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4256"
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
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
# Compiler Warning (level 4) C4256
'function' : constructor for class with virtual bases has '...'; calls may not be compatible with older versions of Visual C++  
  
 Possible incompatibility.  
  
 Consider the following code example. If the definition of the constructor S2::S2( int i, ... ) was compiled by using a version of the Visual C++ compiler before version 7, but the following example is compiled by using the current version, the call to the constructor for S3 would not work correctly because of a special-case calling-convention change. If both were compiled by using Visual C++ 6.0, the call would not work quite right either, unless no parameters were passed for the ellipsis.  
  
 To fix this warning,  
  
1.  Don't use ellipsis in a constructor.  
  
2.  Make sure that all components in their project are built with the current version (including any libraries that may define or reference this class), then disable the warning using the [warning](../../preprocessor/warning.md) pragma.  
  
 The following sample generates C4256:  
  
```  
// C4256.cpp  
// compile with: /W4  
// #pragma warning(disable : 4256)  
struct S1  
{  
};  
  
struct S2: virtual public S1  
{  
   S2( int i, ... )    // C4256  
   {  
      i = 0;  
   }  
   /*  
   // try the following line instead  
   S2( int i)  
   {  
      i = 0;  
   }  
   */  
};  
  
void func1()  
{  
   S2 S3( 2, 1, 2 );   // C4256  
   // try the following line instead  
   // S2 S3( 2 );  
}  
  
int main()  
{  
}  
```