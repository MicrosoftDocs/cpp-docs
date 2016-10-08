---
title: "Compiler Error C3363"
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
ms.assetid: 41aa922f-608e-4f7a-ba66-451fc1161935
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
# Compiler Error C3363
'type' : 'typeid' can only be applied to a type  
  
 The [typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md) operator was used incorrectly.  
  
## Example  
 The following sample generates C3363.  
  
```  
// C3363.cpp  
// compile with: /clr  
int main() {  
   System::typeid;   // C3363  
}  
```