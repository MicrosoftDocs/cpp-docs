---
title: "Compiler Error C2382"
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
ms.assetid: 4d4436f9-d0d6-4bd0-b8ec-767b89adfb2f
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
# Compiler Error C2382
'function' : redefinition; different exception specifications  
  
 Under [/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md), this error indicates that a function overload was attempted only on the [exception specification](../VS_visualcpp/Exception-Specifications--throw---C---.md).  
  
 The following sample generates C2382:  
  
```  
// C2382.cpp  
// compile with: /Za /c  
void f1(void) throw(int) {}  
void f1(void) throw(char) {}   // C2382  
void f2(void) throw(char) {}   // OK  
```