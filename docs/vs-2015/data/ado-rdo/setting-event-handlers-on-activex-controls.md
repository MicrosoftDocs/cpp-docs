---
title: "Setting Event Handlers on ActiveX Controls | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], events"
  - "events [C++], ActiveX controls"
ms.assetid: c076386f-c78b-4dc9-9201-a544252d5337
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting Event Handlers on ActiveX Controls
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
ActiveX controls can be programmed to respond to events. You can use **ControlEvents** in properties to view the events that are available in a control and to create event handlers. Event handling is commonly done to trap changes in the data source query. Changes include:  
  
-   Implementing a lookup. When a control (like a DBCombo box) changes value, the change event is trapped to update a data control's query.  
  
-   Implementing a master detail relationship. Two data controls are added to a dialog box, one for the master portion and a second for the detail portion. Whenever the first data source changes, the second data source's query is updated through an event handler.  
  
-   Trapping errors. Most controls have an error event from which you can write an error handler (see [Error Trapping](../../data/ado-rdo/error-trapping.md)).  
  
 For more information, see [Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md).  
  
## See Also  
 [Using ActiveX Controls](../../data/ado-rdo/using-activex-controls.md)

