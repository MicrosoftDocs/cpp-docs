---
title: "Linker Tools Error LNK1245"
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
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
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
# Linker Tools Error LNK1245
invalid subsystem 'subsystem' specified; /SUBSYSTEM must be WINDOWS, WINDOWSCE, or CONSOLE  
  
 [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md) was used to compile the object and one of the following conditions was true:  
  
-   A custom entry point was defined ([/ENTRY](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md)), such that, the linker could not infer a subsystem.  
  
-   A value was passed to the [/SUBSYSTEM](../VS_visualcpp/-SUBSYSTEM--Specify-Subsystem-.md) linker option that is not valid for /clr objects.  
  
 For both situations, the resolution is to specify a valid value to the /SUBSYSTEM linker option.