---
title: "Add Event Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.event.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Add Event Wizard [C++]"
ms.assetid: bdd2a7bb-13d5-44d7-abc9-e785ba4e05ce
caps.latest.revision: 6
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
# Add Event Wizard
This wizard adds an event to an MFC ActiveX control project. You can specify your own event, you can customize a typically stock event, or you can select from a list of stock events.  
  
 **Event name**  
 Sets the name used by Automation clients to request an event from the class. Enter a name or select one from the list.  
  
 **Event type**  
 Indicates the type of event to add. Available only if you select from the **Event Name** list.  
  
|Option|Description|  
|------------|-----------------|  
|**Stock**|Specifies that a stock event, such as a button click, will be implemented for this class. Stock events are defined in the Microsoft Foundation Class (MFC) Library.|  
|**Custom**|Specifies that you are providing your own implementation of the event.|  
  
 **Internal name**  
 Sets the name of the member function that sends the event. Available only for custom events. The name is based on **Event name**. You can change the internal name if you want to provide a name different than **Event name**.  
  
 **Parameter type**  
 Sets the type for the **Parameter name**. Select the type from the list.  
  
 **Parameter name**  
 Sets the name of a parameter to pass through your event. After typing the name, you must click **Add** to add it the list of parameters.  
  
 Once you click **Add**, the parameter name appears in **Parameter list**.  
  
> [!NOTE]
>  If you supply a parameter name and then click **Finish** before you click **Add**, then the parameter is not added to the event. You must find the method and insert the parameter manually. **Parameter list**  
  
 **Add**  
 Adds the parameter you specify in **Parameter name**, and its type, to **Parameter list**. You must click **Add** to add a parameter to the list.  
  
 **Remove**  
 Removes the parameter you select in **Parameter list** from the list.  
  
 **Parameter list**  
 Displays all parameters and their types currently added for the method. As you add parameters, the wizard updates **Parameter list** to display each parameter with its type.  
  
## See Also  
 [Adding an Event](../ide/adding-an-event-visual-cpp.md)