---
title: "Compiler Error C2720"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C2720
'identifier' : 'specifier' storage-class specifier illegal on members  
  
 The storage class cannot be used on class members outside the declaration. To fix this error, remove the unneeded [storage class specifier](assetId:///10b3d22d-cb40-450b-994b-08cf9a211b6c) from the definition of the member outside the class declaration.  
  
 The following sample generates C2720 and shows how to fix it:  
  
```  
// C2720.cpp  
struct S {  
   static int i;  
};  
static S::i;   // C2720 - remove the unneeded 'static' to fix it  
  
```