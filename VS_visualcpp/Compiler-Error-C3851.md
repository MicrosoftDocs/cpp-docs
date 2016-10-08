---
title: "Compiler Error C3851"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3851
'char': a universal-character-name cannot designate a character in the basic character set  
  
 In code compiled as C++, you cannot use a universal character name that represents a character in the basic source character set outside of a string or character literal. For more information, see [Character Sets](../VS_visualcpp/Character-Sets2.md). In code compiled as C, you cannot use a universal character name for characters in the range 0x20-0x7f, inclusive, except for 0x24 ('$'), 0x40 ('@'), or 0x60 ('`').  
  
 The following samples generate C3851, and show how to fix it:  
  
```cpp  
// C3851.cpp  
int main()  
{  
   int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set  
   int test2_A = 0;        // OK  
}  
```