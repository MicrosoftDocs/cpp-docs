---
title: "NMAKE Warning U4010"
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
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
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
# NMAKE Warning U4010
'target' : build failed; /K specified, continuing ...  
  
 A command in the commands block for the given target returned a nonzero exit code. The /K option told NMAKE to continue processing unrelated parts of the build and to issue an exit code 1 when the NMAKE session is finished.  
  
 If the given target is, itself, a dependent for another target, NMAKE issues warning [U4011](../VS_visualcpp/NMAKE-Warning-U4011.md) after this warning.