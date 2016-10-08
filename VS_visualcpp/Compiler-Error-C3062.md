---
title: "Compiler Error C3062"
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
ms.assetid: 78632e6d-255f-42c3-b124-31a9194ff86d
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
# Compiler Error C3062
'enum': enumerator requires value since the underlying type is 'type'  
  
 You can specify an underlying type for an enumeration. However, some types require you to assign values to each enumerator.  
  
 For more information on enums, see [enum class](../VS_visualcpp/enum-class---C---Component-Extensions-.md).  
  
 The following sample generates C3062:  
  
```  
// C3062.cpp  
// compile with: /clr  
  
enum class MyEnum : bool { a };   // C3062  
enum class MyEnum2 : bool { a = true};   // OK  
```