---
title: "Adding an ATL Message Handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message handlers [C++]"
  - "ATL, windows"
  - "message handling [C++], ATL message handler"
  - "windows [C++], ATL"
  - "ATL, message handlers"
ms.assetid: cdea38a1-0d9b-4f8d-bbd5-b4f063fb3eeb
caps.latest.revision: 10
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
# Adding an ATL Message Handler
To add a message handler (a member function that handles Windows messages) to a control, first select the control in the Class View. Then open the **Properties** window, select the **Messages** icon, and click the drop-down control in the box opposite the required message. This will add a declaration for the message handler in the control's header file and a skeleton implementation of the handler in the control's .cpp file. It will also add the message map and add an entry for the handler.  
  
 Adding a message handler in ATL is similar to adding a message handler to an MFC class. See [Adding an MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md) for more information.  
  
 The following conditions apply only to adding an ATL message handler:  
  
-   The message handlers follow the same naming convention as MFC.  
  
-   The new message map entries are added into the main message map. The wizard does not recognize alternate message maps and chaining.  
  
## See Also  
 [Implementing a Window](../atl/implementing-a-window.md)

