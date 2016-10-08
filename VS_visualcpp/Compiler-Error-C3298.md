---
title: "Compiler Error C3298"
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
ms.assetid: 458c2680-95bb-4d5e-895f-ce4115844193
caps.latest.revision: 3
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
# Compiler Error C3298
'constraint_1' : cannot use 'constraint_2' as a constraint because 'constraint_2' has the ref constraint and 'constraint_1' has the value constraint  
  
 You cannot specify mutually exclusive characteristics for a constraint. For example, a generic type parameter cannot be constrained to both a value type and a reference type.  
  
 For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../VS_visualcpp/Constraints-on-Generic-Type-Parameters--C---CLI-.md).  
  
## Example  
 The following sample generates C3298.  
  
```  
// C3298.cpp  
// compile with: /clr /c   
generic<class T, class U>  
where T : ref class  
where U : T, value class   // C3298  
public ref struct R {};  
```