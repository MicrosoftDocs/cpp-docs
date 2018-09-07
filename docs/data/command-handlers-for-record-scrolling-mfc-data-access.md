---
title: "Command Handlers for Record Scrolling  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["record views [C++], scrolling", "record scrolling [C++]", "scrolling records"]
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Command Handlers for Record Scrolling  (MFC Data Access)
The [CRecordView](../mfc/reference/crecordview-class.md) class provides default command handling for the following standard commands:  
  
-   ID_RECORD_MOVE_FIRST  
  
-   ID_RECORD_MOVE_LAST  
  
-   ID_RECORD_MOVE_NEXT  
  
-   ID_RECORD_MOVE_PREV  
  
 The `OnMove` member function provides default command handling for all four commands, which move from record to record. As these commands are issued, RFX (or DFX) loads the new record into the recordset's fields and DDX moves the values into the record form's controls. For information about RFX, see [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md).  
  
> [!NOTE]
>  Be sure to use these standard command IDs for any user-interface objects associated with the standard record navigation commands.  
  
## See Also  
 [Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)