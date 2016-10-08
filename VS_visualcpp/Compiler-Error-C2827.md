---
title: "Compiler Error C2827"
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
ms.assetid: cb3e5814-0c92-40e4-b620-98578ae3003a
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
# Compiler Error C2827
'operator operator' cannot be globally overridden with unary form  
  
 The operator cannot have a unary form outside of an object.  
  
### To fix by using the following possible solutions  
  
1.  Make the overloaded operator local to an object.  
  
2.  Choose an appropriate unary operator to overload.