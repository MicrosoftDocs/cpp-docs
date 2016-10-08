---
title: "Compiler Error C2567"
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
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
caps.latest.revision: 4
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
# Compiler Error C2567
unable to open metadata in 'file', file may have been deleted or moved  
  
 A metadata file that was referenced in source (with `#using`) was not found in the same directory by the compiler back end process as it was by the compiler front end process. See [#using Directive](../VS_visualcpp/#using-Directive--C---.md) for more information.  
  
 C2567 could be caused if you compile with **/c** on one machine and then attempt a link-time code generation on another machine. For more information, see [/LTCG (Link-time Code Generation)](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md)).  
  
 It might also indicate that your computer had no  more memory.  
  
 To correct this error, make sure that the metadata file is in the same directory location for all phases of the build process.