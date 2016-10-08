---
title: "Linker Tools Warning LNK4022"
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
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
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
# Linker Tools Warning LNK4022
cannot find unique match for symbol 'symbol'  
  
 LINK or LIB found multiple matches for the given undecorated symbol and it could not resolve the ambiguity. No output file (.exe, .dll, .exp, or .lib) is produced. This warning is followed by one warning [LNK4002](../VS_visualcpp/Linker-Tools-Warning-LNK4002.md) for each duplicate symbol and is finally followed by fatal error [LNK1152](../VS_visualcpp/Linker-Tools-Error-LNK1152.md).  
  
 To prevent this warning, specify the symbol in its decorated form. Run [DUMPBIN](../VS_visualcpp/DUMPBIN-Options.md) on the object to see decorated names.