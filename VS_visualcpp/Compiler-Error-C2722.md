---
title: "Compiler Error C2722"
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
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
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
# Compiler Error C2722
'::operator' : illegal following operator command; use 'operator operator'  
  
 An `operator` statement redefines `::new` or `::delete`. The `new` and `delete` operators are global, so the scope resolution operator (`::`) is meaningless. Remove the `::` operator.