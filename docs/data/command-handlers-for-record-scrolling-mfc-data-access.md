---
title: "Command Handlers for Record Scrolling  (MFC Data Access) | Microsoft Docs"
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
  - "record views [C++], scrolling"
  - "record scrolling [C++]"
  - "scrolling records"
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
caps.latest.revision: 8
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
# Command Handlers for Record Scrolling  (MFC Data Access)
Classes [CRecordView](../mfc/reference/crecordview-class.md) and [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) provide default command handling for the following standard commands:  
  
-   **ID_RECORD_MOVE_FIRST**  
  
-   **ID_RECORD_MOVE_LAST**  
  
-   **ID_RECORD_MOVE_NEXT**  
  
-   **ID_RECORD_MOVE_PREV**  
  
 The `OnMove` member function of classes `CRecordView` and `CDaoRecordView` provides default command handling for all four commands, which move from record to record. As these commands are issued, RFX (or DFX) loads the new record into the recordset's fields and DDX moves the values into the record form's controls. For information about RFX, see [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md).  
  
> [!NOTE]
>  Be sure to use these standard command IDs for any user-interface objects associated with the standard record navigation commands.  
  
## See Also  
 [Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)