---
title: "Compiler Error C3420"
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
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
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
# Compiler Error C3420
'finalizer' : a finalizer cannot be virtual  
  
 A finalizer can only be called non-virtually from its enclosing type. Therefore, it is an error to declare a virtual finalizer.  
  
 For more information, see [Destructors and Finalizers in Visual C++](../Topic/Destructors%20and%20Finalizers%20in%20Visual%20C++.md).  
  
## Example  
 The following sample generates C3420.  
  
```  
// C3420.cpp  
// compile with: /clr /c  
ref class R {  
   virtual !R() {}   // C3420  
};  
```