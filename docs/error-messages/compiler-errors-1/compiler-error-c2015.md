---
title: "Compiler Error C2015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2015"
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
caps.latest.revision: 11
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
# Compiler Error C2015
too many characters in constant  
  
 A character constant contains more than two characters. The limit is one character for standard character constants and two characters for long character constants.  
  
 An escape sequence, such as \t, is converted to a single character.  
  
## Example  
 The following sample generates C2015:  
  
```  
// C2015.cpp  
// compile with: /c  
  
char test1 = 'error';   // C2015  
char test2 = 'e';   // OK  
```  
  
## Example  
 C2015 can also occur when using a Microsoft extension, character constants converted to integers.  The following sample generates C2015:  
  
```  
// C2015b.cpp  
#include <stdio.h>  
  
int main()   
{  
    int a = 'abcde';   // C2015  
  
    int b = 'a';   // 'a' = ascii 0x61  
    printf_s("%x\n", b);  
}  
```