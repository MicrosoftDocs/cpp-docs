---
title: "Compiler Error C2692"
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
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
caps.latest.revision: 12
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
# Compiler Error C2692
'function_name' : fully prototyped functions required in C compiler with the '/clr' option  
  
 When compiling for .NET managed code, the C compiler requires ANSI function declarations. In addition, if a function takes no parameters, it must explicitly declare `void` as the parameter type.