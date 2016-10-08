---
title: "Compiler Error C3080"
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
ms.assetid: ff62a3f7-9b3b-44bd-b8d9-f3a8e5354560
caps.latest.revision: 5
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
# Compiler Error C3080
'finalizer_function' : a finalizer cannot have a storage-class-specifier  
  
 For more information, see [Destructors and Finalizers in Visual C++](../Topic/Destructors%20and%20Finalizers%20in%20Visual%20C++.md).  
  
## Example  
 The following sample generates C3080.  
  
```  
// C3080.cpp  
// compile with: /clr /c  
ref struct rs {  
protected:  
   static !rs(){}   // C3080  
   !rs(){}   // OK  
};  
```