---
title: "Special Characters in a Makefile"
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
ms.topic: article
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
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
# Special Characters in a Makefile
To use an NMAKE special character as a literal character, place a caret (^) in front of it. NMAKE ignores carets that precede other characters. The special characters are:  
  
 `:  ;  #  (  )  $  ^  \  {  }  !  @  —`  
  
 A caret (^) within a quoted string is treated as a literal caret character. A caret at the end of a line inserts a literal newline character in a string or macro.  
  
 In macros, a backslash (\\) followed by a newline character is replaced by a space.  
  
 In commands, a percent symbol (%) is a file specifier. To represent % literally in a command, specify a double percent sign (%%) in place of a single one. In other situations, NMAKE interprets a single % literally, but it always interprets a double %% as a single %. Therefore, to represent a literal %%, specify either three percent signs, %%%, or four percent signs, %%%%.  
  
 To use the dollar sign ($) as a literal character in a command, specify two dollar signs ($$). This method can also be used in other situations where ^$ works.  
  
## See Also  
 [Contents of a Makefile](../VS_visualcpp/Contents-of-a-Makefile.md)