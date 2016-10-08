---
title: "Compiler Warning (level 1) C4326"
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
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
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
# Compiler Warning (level 1) C4326
return type of 'function' should be 'type1' instead of 'type2'  
  
 A function returned a type other than ***type1***. For example, using [/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md), main did not return an `int`.  
  
 The following sample generates C4326:  
  
```  
// C4326.cpp  
// compile with: /Za /W1  
char main()  
{   // C4326 try int main  
}  
```