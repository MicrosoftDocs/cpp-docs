---
title: "Compiler Error C3131"
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
ms.assetid: 38f20fac-83c9-4cd9-b7b5-74ca8f650ea6
caps.latest.revision: 7
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
# Compiler Error C3131
project must have a 'module' attribute with a 'name' property  
  
 The [module](../VS_visualcpp/module--C---.md) attribute must have a name parameter.  
  
 The following sample generates C3131:  
  
```  
// C3131.cpp  
[emitidl];  
[module];   // C3131  
// try the following line instead  
// [module (name="MyLib")];  
  
[public]  
typedef long int LongInt;  
```