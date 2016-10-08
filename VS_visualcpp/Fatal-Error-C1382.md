---
title: "Fatal Error C1382"
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
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
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
# Fatal Error C1382
the PCH file 'file' has been rebuilt since 'obj' was generated. Please rebuild this object  
  
 When using [/LTCG](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md), the compiler detected a .pch file that is newer than a CIL .obj that points to it. The information in the CIL .obj file is out of date. Rebuild the object.  
  
 C1382 can also occur if you compile with **/Yc**, but also pass multiple source code files to the compiler.  To resolve, do not use **/Yc** when passing multiple source code files to the compiler.  For more information, see [/Yc (Create Precompiled Header File)](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md).