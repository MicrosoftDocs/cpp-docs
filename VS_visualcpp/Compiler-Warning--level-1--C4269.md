---
title: "Compiler Warning (level 1) C4269"
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
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4269
'identifier' : 'const' automatic data initialized with compiler generated default constructor produces unreliable results  
  
 A **const** automatic instance of a non-trivial class is initialized with a compiler-generated default constructor.  
  
## Example  
  
```  
// C4269.cpp  
// compile with: /c /LD /W1  
class X {  
public:  
   int m_data;  
};  
  
void g() {  
   const X x1;   // C4269  
};  
```  
  
 Since this instance of the class is generated on the stack, the initial value of `m_data` can be anything. Also, since it is a **const** instance, the value of `m_data` can never be changed.