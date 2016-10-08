---
title: "Compiler Error C3097"
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
ms.assetid: b24bd8f8-e04f-4fbb-be57-4feb9165572e
caps.latest.revision: 10
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
# Compiler Error C3097
'attribute': attribute must be scoped with 'assembly:' or 'module:'  
  
 A global attribute was used incorrectly.  
  
 For more information, see [User-Defined Attributes](../VS_visualcpp/User-Defined-Attributes---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3097.  
  
```  
// C3097.cpp  
// compile with: /clr /c  
using namespace System;   
  
[AttributeUsage(AttributeTargets::All, AllowMultiple = true)]  
public ref class Attr : public Attribute {  
public:  
   Attr(int t) : m_t(t) {}  
   int m_t;  
};  
  
[Attr(10)];   // C3097  
[assembly:Attr(10)];   // OK  
  
[Attr(10)]   // OK  
public ref class MyClass {};  
```