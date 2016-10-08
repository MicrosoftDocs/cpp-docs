---
title: "Compiler Error C3207"
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
ms.assetid: 4a28b976-142a-4cff-aa2f-480b892c50ca
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
# Compiler Error C3207
'function' : invalid template argument for 'arg', class template expected  
  
 A template function is defined as taking a template template argument. However, a template type argument was passed.  
  
 The following sample generates C3207:  
  
```  
// C3207.cpp  
template <template <class T> class TT>  
void f(){}  
  
template <class T>  
struct S  
{  
};  
  
void f1()  
{  
   f<S<int> >();   // C3207  
   // try the following line instead  
   // f<S>();  
}  
```