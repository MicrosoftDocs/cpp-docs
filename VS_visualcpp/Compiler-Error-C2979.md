---
title: "Compiler Error C2979"
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
ms.assetid: 98bd9043-ec44-451e-a482-3a8e35fc7464
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
# Compiler Error C2979
explicit specializations are not supported in generics  
  
 A generic class was declared incorrectly.  See [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md) for more information.  
  
## Example  
 The following sample generates C2979.  
  
```  
// C2979.cpp  
// compile with: /clr /c  
generic <>   
ref class Utils {};   // C2979 error  
  
generic <class T>  
ref class Utils2 {};   // OK  
```