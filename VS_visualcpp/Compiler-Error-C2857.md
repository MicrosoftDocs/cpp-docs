---
title: "Compiler Error C2857"
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
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
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
# Compiler Error C2857
'#include' statement specified with the /Ycfilename command-line option was not found in the source file  
  
 The [/Yc](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md) option specifies the name of an include file that is not included in the source file being compiled.  
  
 This error can be caused by a `#include` statement in a conditional compilation block that is not compiled.