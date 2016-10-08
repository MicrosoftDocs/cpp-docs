---
title: "Compiler Error C2433"
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
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
caps.latest.revision: 11
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
# Compiler Error C2433
'identifier' : 'modifier' not permitted on data declarations  
  
 The `friend`, `virtual`, and `inline` modifiers cannot be used for data declarations.  
  
## Example  
 The following sample generates C2433.  
  
```  
// C2433.cpp  
class C{};  
  
int main() {  
   inline C c;   // C2433  
}  
```