---
title: "Compiler Error C3388"
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
ms.assetid: 34336545-ed13-4d81-ab5f-f869799fe4c2
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
# Compiler Error C3388
'type' : not allowed as a constraint, assuming 'ref class' to continue parsing  
  
 A constraint was specified on a generic type, but the constraint was not specified correctly. See [Constraints on Generic Type Parameters (C++/CLI)](../VS_visualcpp/Constraints-on-Generic-Type-Parameters--C---CLI-.md) for more information.  
  
## Example  
 The following sample generates C3388.  
  
```  
// C3388.cpp  
// compile with: /clr /c  
interface class AA {};  
  
generic <class T>  
where T : interface class   // C3388  
ref class C {};  
  
// OK  
generic <class T>  
where T : AA  
ref class D {};  
```