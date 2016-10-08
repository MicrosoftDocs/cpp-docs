---
title: "Compiler Error C3076"
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
ms.assetid: 8a87b3e4-2c17-4b87-9622-ef0962d6a34e
caps.latest.revision: 5
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
# Compiler Error C3076
'instance' : you cannot embed an instance of a reference type, 'type', in a native type  
  
 A native type cannot contain an instance of a CLR type.  
  
 For more information, see [C++ Stack Semantics for Reference Types](../VS_visualcpp/C---Stack-Semantics-for-Reference-Types.md).  
  
## Example  
 The following sample generates C3076.  
  
```  
// C3076.cpp  
// compile with: /clr /c  
ref struct U {};  
  
struct V {  
   U y;   // C3076  
};  
  
ref struct W {  
   U y;   // OK  
};  
```