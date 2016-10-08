---
title: "BSCMAKE Warning BK4504"
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
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
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
# BSCMAKE Warning BK4504
file contains too many references; ignoring further references from this source  
  
 The .cpp file contains more than 64,000 symbol references. When BSCMAKE has encountered 64,000 references in a file, it ignores all further references.  
  
 To correct the problem, either split the file into two or more files, each of which has fewer than 64,000 symbol references, or use the `#pragma component(browser)` preprocessor directive to limit symbols that are generated for particular references. For more information, see [component](../VS_visualcpp/component.md).