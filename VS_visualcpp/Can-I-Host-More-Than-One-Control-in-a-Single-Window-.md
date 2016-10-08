---
title: "Can I Host More Than One Control in a Single Window?"
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
ms.topic: article
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
caps.latest.revision: 8
manager: ghogen
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
# Can I Host More Than One Control in a Single Window?
It is not possible to host more than one control in a single ATL host window. Each host window is designed to hold exactly one control at a time (this allows for a simple mechanism for handling message reflection and per-control ambient properties). However, if you need the user to see multiple controls in a single window, it's a simple matter to create multiple host windows as children of that window.  
  
## See Also  
 [Control Containment FAQ](../VS_visualcpp/ATL-Control-Containment-FAQ.md)