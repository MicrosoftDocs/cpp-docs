---
title: "Wildcard Expansion"
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
ms.topic: language-reference
ms.assetid: 1a543398-607b-4404-93d1-45d290bde638
caps.latest.revision: 9
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
# Wildcard Expansion
## Microsoft Specific  
 You can use wildcards — the question mark (?) and asterisk (*) — to specify filename and path arguments on the command-line.  
  
 Command-line arguments are handled by a routine called **_setargv** (or **_wsetargv** in the wide-character environment), which by default does not expand wildcards into separate strings in the `argv` string array. For more information on enabling wildcard expansion, refer to [Expanding Wildcard Arguments](../VS_visualcpp/Expanding-Wildcard-Arguments.md).  
  
## END Microsoft Specific  
  
## See Also  
 [main: Program Startup](../VS_visualcpp/main--Program-Startup.md)