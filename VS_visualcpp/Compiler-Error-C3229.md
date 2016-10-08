---
title: "Compiler Error C3229"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f2d90923-aa8b-444f-ab10-1f37dbb864e1
caps.latest.revision: 10
manager: douge
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
# Compiler Error C3229
'type' : indirections on a generic type parameter are not allowed  
  
 You cannot use generic parameters with `*`, `^`, or `&`.  
  
## Example  
 The following sample generates C3229.  
  
```  
// C3229.cpp  
// compile with: /clr /c  
generic <class T>  
ref class C {  
   T^ t;   // C3229  
};  
  
// OK  
generic <class T>  
ref class D {  
   T u;  
};  
```  
  
## Example  
 The following sample generates C3229.  
  
```  
// C3229_b.cpp  
// compile with: /clr /c  
generic <class T>   // OK  
ref class Utils {  
   static void sort(T elems[], size_t size);   // C3229  
   static void sort2(T elems, size_t size);   // OK  
};  
```