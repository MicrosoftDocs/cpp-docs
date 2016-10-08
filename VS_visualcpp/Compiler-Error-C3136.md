---
title: "Compiler Error C3136"
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
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
caps.latest.revision: 8
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
# Compiler Error C3136
'interface' : a COM interface can only inherit from another COM interface, 'interface' is not a COM interface  
  
 An interface to which you applied an [interface attribute](../VS_visualcpp/Interface-Attributes.md) inherits from an interface that is not a COM interface. A COM interface ultimately inherits from `IUnknown`. Any interface preceded by an interface attribute is a COM interface.  
  
 The following example generates C3136:  
  
```  
// C3136.cpp  
#include "unknwn.h"  
  
__interface A   // C3136  
// try the following line instead  
// _interface A : IUnknown  
{  
   int a();  
};  
  
[object]  
__interface B : A  
{  
   int aa();  
};  
```