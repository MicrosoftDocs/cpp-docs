---
title: "Compiler Warning (level 1) C4952"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
caps.latest.revision: 8
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4952
'function' : no profile data found in program database 'pgd_file'  
  
 When using [/LTCG:PGUPDATE](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md), the compiler detected an input module that was recompiled after `/LTCG:PGINSTRUMENT` and has a new function (***function***) present.  
  
 This warning is informational. To resolve this warning, run `/LTCG:PGINSTRUMENT`, redo all test runs, and run `/LTCG:PGOPTIMIZE`.  
  
 This warning would be replaced with an error if `/LTCG:PGOPTIMIZE` had been used.