---
title: "Compiler Warning (level 2) C4653"
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
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
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
# Compiler Warning (level 2) C4653
compiler option 'option' inconsistent with precompiled header; current command-line option ignored  
  
 An option specified with the Use Precompiled Headers ([/Yu](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md)) option was inconsistent with the options specified when the precompiled header was created. This compilation used the option specified when the precompiled header was created.  
  
 This warning can occur when a different value for the Pack Structures option ([/Zp](../VS_visualcpp/-Zp--Struct-Member-Alignment-.md)) was specified during compilation of the precompiled header.