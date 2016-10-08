---
title: "Compiler Error C3236"
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
ms.assetid: 4ef1871f-a348-44ae-922b-1e2081de20d0
caps.latest.revision: 9
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
# Compiler Error C3236
explicit instantiation of a generic is not allowed  
  
 The compiler does not allow explicit instantiation of generic classes.  
  
 The following sample generates C3236:  
  
```  
// C3236.cpp  
// compile with: /clr  
generic<class T>  
public ref class X {};  
  
generic ref class X<int>;   // C3236  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3236b.cpp  
// compile with: /clr /c  
generic<class T>  
public ref class X {};  
```