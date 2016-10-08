---
title: "Compiler Warning C4694"
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
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
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
# Compiler Warning C4694
'class_1': a sealed abstract class cannot have a base-class 'base_class'  
  
 An abstract and sealed class cannot inherit from a reference type; a sealed and abstract class can neither implement the base class functions nor allow itself to be used as a base class.  
  
 For more information, see [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md), [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md), and [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C4694.  
  
```  
// C4694.cpp  
// compile with: /c /clr  
ref struct A {};  
ref struct B sealed abstract : A {};   // C4694  
```