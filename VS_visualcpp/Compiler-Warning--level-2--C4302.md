---
title: "Compiler Warning (level 2) C4302"
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
ms.assetid: f5e1c939-e134-4cca-ba1e-9b15a81549ae
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Warning (level 2) C4302
'conversion' : truncation from 'type 1' to 'type 2'  
  
 The compiler detected a conversion from a larger type to a smaller type. Information may be lost.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.  
  
 The following sample generates C4302:  
  
```  
// C4302.cpp  
// compile with: /W2  
#pragma warning(default : 4302)  
int main() {  
   int i;  
   char c = (char) &i;     // C4302  
   short s = (short) &i;   // C4302  
}  
```