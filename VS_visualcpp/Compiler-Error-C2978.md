---
title: "Compiler Error C2978"
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
ms.assetid: 5e7bee82-e266-4ccd-ad2e-ee89606ec5bf
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
# Compiler Error C2978
syntax error : expected 'keyword1' or 'keyword2'; found type 'keyword3'; non-type parameters are not supported in generics  
  
 A generic class was declared incorrectly. See [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md)for more information.  
  
## Example  
 The following sample generates C2978.  
  
```  
// C2978.cpp  
// compile with: /clr /c  
generic <ref class T>   // C2978  
// try the following line instead  
// generic <typename T>   // OK  
ref class Utils {  
   static void sort(T elems, size_t size);  
};  
  
generic <int>  
// try the following line instead  
// generic <class T>  
ref class Utils2 {  
   static void sort(T elems, size_t size);  
};  
```