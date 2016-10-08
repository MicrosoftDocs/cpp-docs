---
title: "Compiler Error C3384"
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
ms.assetid: c9f92c6a-62a9-4333-b2b1-bc55c7f288b6
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
# Compiler Error C3384
'type_parameter' : the value constraint and the ref constraint are mutually exclusive  
  
 You cannot constrain a generic type to both `value class` and `ref class`.  
  
 See [Constraints on Generic Type Parameters (C++/CLI)](../VS_visualcpp/Constraints-on-Generic-Type-Parameters--C---CLI-.md) for more information.  
  
## Example  
 The following sample generates C3384.  
  
```  
// C3384.cpp  
// compile with: /c /clr  
generic <typename T>  
where T : ref class  
where T : value class   // C3384  
ref class List {};  
```