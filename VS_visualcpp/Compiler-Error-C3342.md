---
title: "Compiler Error C3342"
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
ms.assetid: 5c6d784f-bebe-4f7e-8615-44ca6f78bfba
caps.latest.revision: 8
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
# Compiler Error C3342
'attribute': ambiguous attribute  
  
 The compiler found more than one definition of an attribute.  
  
 An attribute was defined more than once.  
  
 For more information, see [User-Defined Attributes](../VS_visualcpp/User-Defined-Attributes---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3342.  
  
```  
// C3342.cpp  
// compile with: /clr /c  
using namespace System;  
using namespace System::Reflection;  
  
[AttributeUsage(AttributeTargets::All)]  
public ref class XAttribute : public  Attribute {};  
  
[AttributeUsage(AttributeTargets::All)]  
public ref class X : public Attribute {};  
  
[X]   // C3342 could refer to X or XAttribute  
// try the following line instead  
// [XAttribute]  
public ref class Class4 {};  
```