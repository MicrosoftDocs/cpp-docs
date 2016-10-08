---
title: "Project Build Error PRJ0030"
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
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
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
# Project Build Error PRJ0030
Macro expansion error. Evaluate recursion exceeded 32 levels for $(macro).  
  
 This error is caused by recursion in your macros. For example, if you set the **Intermediate Directory** property (see [General Property Page (Project)](../VS_visualcpp/General-Property-Page--Project-.md)) to $(IntDir), you will have recursion.  
  
 To resolve this error, do not define macros or properties in terms of macros they are used to define.