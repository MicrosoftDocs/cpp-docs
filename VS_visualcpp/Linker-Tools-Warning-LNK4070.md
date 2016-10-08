---
title: "Linker Tools Warning LNK4070"
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
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
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
# Linker Tools Warning LNK4070
/OUT:filename directive in .EXP differs from output filename 'filename'; ignoring directive  
  
 The `filename` specified in the [NAME](../VS_visualcpp/NAME--C-C---.md) or [LIBRARY](../VS_visualcpp/LIBRARY.md) statement when the .exp file was created differs from the output `filename` that was either assumed by default or specified with the [/OUT](../VS_visualcpp/-OUT--Output-File-Name-.md) option.  
  
 You will see this warning if you change the name of an output file in the development environment and where the project's .def file was not updated. Manually update the .def file to resolve this warning.  
  
 A client program that uses the resulting DLL might encounter problems.