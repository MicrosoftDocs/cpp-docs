---
title: "Callback Functions Used by MFC | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Callback Functions Used by MFC
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Callback Functions Used by MFC](https://docs.microsoft.com/cpp/mfc/reference/callback-functions-used-by-mfc).  
  
  
Three callback functions appear in the Microsoft Foundation Class Library. A description of callback functions that are passed to [CDC::EnumObjects](../../mfc/reference/cdc-class.md#cdc__enumobjects), [CDC::GrayString](../../mfc/reference/cdc-class.md#cdc__graystring), and [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#cdc__setabortproc) follows this topic. For the general usage of the callback functions, see the Remarks section of these member functions. Note that all callback functions must trap MFC exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)







