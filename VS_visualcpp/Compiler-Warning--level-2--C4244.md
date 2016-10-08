---
title: "Compiler Warning (level 2) C4244"
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
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
caps.latest.revision: 9
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
# Compiler Warning (level 2) C4244
'argument' : conversion from 'type1' to 'type2', possible loss of data  
  
 A floating point type was converted to an integer type.  A possible loss of data may have occurred.  
  
 If you get C4244, you should either change your program to use compatible types, or add some logic to your code, to ensure that the range of possible values will always be compatible with the types you are using.  
  
 C4244 can also fire at level 3, and 4; see [Compiler Warning (levels 3 and 4) C4244](../VS_visualcpp/Compiler-Warning--levels-3-and-4--C4244.md) for more information.  
  
## Example  
 The following sample generates C4244:  
  
```  
// C4244_level2.cpp  
// compile with: /W2  
  
int f(int x){ return 0; }  
int main() {  
   double x = 10.1;  
   int i = 10;  
   return (f(x));   // C4244  
   // try the following line instead  
   // return (f(i));  
}  
```