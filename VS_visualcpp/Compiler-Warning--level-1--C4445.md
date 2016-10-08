---
title: "Compiler Warning (level 1) C4445"
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
ms.assetid: 535e92a0-ba08-4dfc-89b2-af2dcdd7caeb
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
# Compiler Warning (level 1) C4445
'function' : in a WinRT or managed type a virtual method cannot be private  
  
 If a virtual function is private, it cannot be accessed by a derived type. To fix this error, change the accessibility of the virtual member function to protected or public.