---
title: "Compiler Error C3749"
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
ms.assetid: 3d26b468-4757-41b8-b5a2-78022a5295fb
caps.latest.revision: 10
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
# Compiler Error C3749
'attribute': a custom attribute may not be used inside a function  
  
 A custom attribute cannot be used inside a function. (For more information on custom attributes, see the topic [attribute](../VS_visualcpp/attribute.md).)  
  
 The following sample generates C3749:  
  
```  
// C3749a.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::All)]  
public ref struct ABC : public Attribute {  
   ABC() {}  
};  
  
void f1() { [ABC]; };  // C3749  
```  
  
 The following sample generates C3749:  
  
```  
// C3749b.cpp  
// compile with: /clr:oldSyntax /c  
using namespace System;  
  
[attribute(All)]  
public __gc struct ABC {  
   ABC() {}  
};  
  
void f1() { [ABC]; };  // C3749  
```