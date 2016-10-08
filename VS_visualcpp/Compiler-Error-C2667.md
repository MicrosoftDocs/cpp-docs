---
title: "Compiler Error C2667"
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
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
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
# Compiler Error C2667
'function' : none of number overloads have a best conversion  
  
 An overloaded function call is ambiguous and cannot be resolved.  
  
 The conversion required to match the actual parameters in the function call to one of the overloaded functions must be strictly better than the conversions required by all the other overloaded functions.  
  
 See Knowledge Base article Q240869 for more information on partial ordering of function templates.