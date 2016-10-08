---
title: "Compiler Error C2040"
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
ms.assetid: 74ca3592-1469-4965-ab34-a4815e2fbefe
caps.latest.revision: 8
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
# Compiler Error C2040
'operator' : 'identifier1' differs in levels of indirection from 'identifier2'  
  
 An expression involving the specified operands has incompatible operand types or implicitly converted operand types. If both operands are arithmetic, or both are nonarithmetic (such as array or pointer), they are used without change. If one operand is arithmetic and the other is not, the arithmetic operand is converted to the type of the nonarithmetic operand.  
  
 This sample generates C2040 and shows how to fix it.  
  
```  
// C2040.cpp  
// Compile by using: cl /c /W3 C2040.cpp  
bool test() {  
   char c = '3';  
   return c == "3"; // C2446, C2040  
   // return c == '3'; // OK  
}  
```