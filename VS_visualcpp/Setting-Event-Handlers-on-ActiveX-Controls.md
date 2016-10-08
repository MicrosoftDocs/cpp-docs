---
title: "Setting Event Handlers on ActiveX Controls"
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
ms.assetid: c076386f-c78b-4dc9-9201-a544252d5337
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
# Setting Event Handlers on ActiveX Controls
ActiveX controls can be programmed to respond to events. You can use **ControlEvents** in properties to view the events that are available in a control and to create event handlers. Event handling is commonly done to trap changes in the data source query. Changes include:  
  
-   Implementing a lookup. When a control (like a DBCombo box) changes value, the change event is trapped to update a data control's query.  
  
-   Implementing a master detail relationship. Two data controls are added to a dialog box, one for the master portion and a second for the detail portion. Whenever the first data source changes, the second data source's query is updated through an event handler.  
  
-   Trapping errors. Most controls have an error event from which you can write an error handler (see [Error Trapping](../VS_visualcpp/Error-Trapping.md)).  
  
 For more information, see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md).  
  
## See Also  
 [Using ActiveX Controls](../VS_visualcpp/Using-ActiveX-Controls.md)