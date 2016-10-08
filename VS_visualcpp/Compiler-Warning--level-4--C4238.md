---
title: "Compiler Warning (level 4) C4238"
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
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
caps.latest.revision: 8
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
# Compiler Warning (level 4) C4238
nonstandard extension used : class rvalue used as lvalue  
  
 For compatibility with previous versions of Visual C++, Microsoft extensions (**/Ze**) allow you to use a class type as an rvalue in a context that implicitly or explicitly takes its address. In some cases, such as the example below, this can be dangerous.  
  
## Example  
  
```  
// C4238.cpp  
// compile with: /W4 /c  
struct C {  
   C() {}  
};  
  
C * pC = &C();   // C4238  
```  
  
 This usage causes an error under ANSI compatibility ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)).