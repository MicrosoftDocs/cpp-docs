---
title: "Compiler Error C3084"
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
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
caps.latest.revision: 12
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
# Compiler Error C3084
'function': a finalizer/destructor cannot be 'keyword'  
  
 A finalizer or destructor was declared incorrectly.  
  
 For example, a destructor should not be marked as sealed.  The destructor will be inaccessible to derived types.  For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md) and [Destructors and Finalizers in Visual C++](../Topic/Destructors%20and%20Finalizers%20in%20Visual%20C++.md).  
  
## Example  
 The following sample generates C3084.  
  
```  
// C3084.cpp  
// compile with: /clr /c  
ref struct R {  
protected:  
   !R() sealed;   // C3084  
   !R() abstract;   // C3084  
   !R();  
};  
```