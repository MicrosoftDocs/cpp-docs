---
title: "Callback Functions Used by MFC"
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
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
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
# Callback Functions Used by MFC
Three callback functions appear in the Microsoft Foundation Class Library. A description of callback functions that are passed to [CDC::EnumObjects](../Topic/CDC::EnumObjects.md), [CDC::GrayString](../Topic/CDC::GrayString.md), and [CDC::SetAbortProc](../Topic/CDC::SetAbortProc.md) follows this topic. For the general usage of the callback functions, see the Remarks section of these member functions. Note that all callback functions must trap MFC exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article [Exceptions](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)