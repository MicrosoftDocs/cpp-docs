---
title: "ActiveX Control Containers: Handling Events from an ActiveX Control | Microsoft Docs"
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
  - "event handlers [C++], ActiveX controls"
  - "ActiveX control containers [C++], event sinks"
  - "event handling [C++], ActiveX controls"
  - "ON_EVENT macro"
  - "ActiveX controls [C++], events"
  - "END_EVENTSINK_MAP macro, using"
  - "events [C++], ActiveX controls"
  - "BEGIN_EVENTSINK_MAP macro"
ms.assetid: f9c106db-052f-4e32-82ad-750646aa760b
caps.latest.revision: 9
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
# ActiveX Control Containers: Handling Events from an ActiveX Control
This article discusses using the Properties window to install event handlers for ActiveX controls in an ActiveX control container. The event handlers are used to receive notifications (from the control) of certain events and perform some action in response. This notification is called "firing" the event.  
  
> [!NOTE]
>  This article uses a dialog-based ActiveX control container project named Container and an embedded control named Circ as examples in the procedures and code.  
  
 Using the Events button in the Properties window, you can create a map of events that can occur in your ActiveX control container application. This map, called an "event sink map,'' is created and maintained by Visual C++ when you add event handlers to the control container class. Each event handler, implemented with an event map entry, maps a specific event to a container event handler member function. This event handler function is called when the specified event is fired by the ActiveX control object.  
  
 For more information on event sink maps, see [Event Sink Maps](../mfc/reference/event-sink-maps.md) in the *Class Library Reference*.  
  
##  <a name="_core_event_handler_modifications_to_the_project"></a> Event Handler Modifications to the Project  
 When you use the Properties window to add event handlers, an event sink map is declared and defined in your project. The following statements are added to the control .CPP file the first time an event handler is added. This code declares an event sink map for the dialog box class (in this case, `CContainerDlg`):  
  
 [!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]  
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]  
  
 As you use the Properties window to add events, an event map entry (`ON_EVENT`) is added to the event sink map and an event handler function is added to the container's implementation (.CPP) file.  
  
 The following example declares an event handler, called `OnClickInCircCtrl`, for the Circ control's **ClickIn** event:  
  
 [!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]  
  
 In addition, the following template is added to the `CContainerDlg` class implementation (.CPP) file for the event handler member function:  
  
 [!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]  
  
 For more information on event sink macros, see [Event Sink Maps](../mfc/reference/event-sink-maps.md) in the *Class Library Reference*.  
  
#### To create an event handler function  
  
1.  From Class View, select the dialog class that contains the ActiveX control. For this example, use `CContainerDlg`.  
  
2.  In the Properties window, click the **Events** button.  
  
3.  In the Properties window, select the control ID of the embedded ActiveX control. For this example, use `IDC_CIRCCTRL1`.  
  
     The Properties window displays a list of events that can be fired by the embedded ActiveX control. Any member function shown in bold already has handler functions assigned to it.  
  
4.  Select the event you want the dialog class to handle. For this example, select **Click**.  
  
5.  From the drop-down list box on the right, select **\<Add> ClickCircctrl1**.  
  
6.  Double-click the new handler function from Class View to jump to the event handler code in the implementation (.CPP) file of `CContainerDlg`.  
  
## See Also  
 [ActiveX Control Containers](../mfc/activex-control-containers.md)

