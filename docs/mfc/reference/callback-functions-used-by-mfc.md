---
title: "Callback Functions Used by MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.functions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "callback functions, MFC"
  - "MFC, callback functions"
  - "functions [C++], callback"
  - "callback functions"
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Callback Functions Used by MFC
Three callback functions appear in the Microsoft Foundation Class Library. A description of callback functions that are passed to [CDC::EnumObjects](../../mfc/reference/cdc-class.md#cdc__enumobjects), [CDC::GrayString](../../mfc/reference/cdc-class.md#cdc__graystring), and [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#cdc__setabortproc) follows this topic. For the general usage of the callback functions, see the Remarks section of these member functions. Note that all callback functions must trap MFC exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

