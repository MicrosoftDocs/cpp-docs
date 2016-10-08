---
title: "Compiler Warning (level 1) C4606"
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
ms.assetid: c1b45fb6-672b-42eb-9e1c-c67b3e4150d3
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4606
\#pragma warning : 'warning_number' ignored; Code Analysis warnings are not associated with warning levels  
  
 For Code Analysis warnings, only `error`, `once`, and `default` are supported with the [warning](../VS_visualcpp/warning.md) pragma.  
  
## Example  
 The following sample generates C4606.  
  
```  
// C4606.cpp  
// compile with: /c /W1  
#pragma warning(1: 6001)   // C4606  
#pragma warning(once: 6001)   // OK  
```