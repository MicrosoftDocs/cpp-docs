---
title: "Compiler Error C2873"
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
ms.assetid: 7a10036b-400e-4364-bd2f-dcd7370c5e28
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
# Compiler Error C2873
'symbol' : symbol cannot be used in a using-declaration  
  
 A `using` directive is missing a [namespace](../Topic/namespace%20Declaration.md) keyword. This causes the compiler to misinterpret the code as a [using declaration](../VS_visualcpp/using-Declaration.md) rather than a [using directive](../Topic/using%20Directive%20\(C++\).md).