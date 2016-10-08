---
title: "Compiler Error C3468"
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
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
caps.latest.revision: 6
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
# Compiler Error C3468
'type' : you can only forward a type to an assembly:  
  
 '`file`' is not an assembly  
  
 Only types in an assembly can be forwarded.  
  
 For more information, see [Type Forwarding (C++/CLI)](../VS_visualcpp/Type-Forwarding--C---CLI-.md).  
  
## Example  
 The following sample creates a module.  
  
```  
// C3468.cpp  
// compile with: /LN /clr  
public ref class R {};  
```  
  
## Example  
 The following sample generates C3468.  
  
```  
// C3468_b.cpp  
// compile with: /clr /c  
#using "C3468.netmodule"  
[ assembly:TypeForwardedTo(R::typeid) ];   // C3468  
```