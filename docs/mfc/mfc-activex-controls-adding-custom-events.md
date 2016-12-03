---
title: "MFC ActiveX Controls: Adding Custom Events | Microsoft Docs"
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
  - "MFC ActiveX controls, events"
  - "EVENT_CUSTOM prefix"
  - "custom events, adding to ActiveX controls"
  - "EVENT_CUSTOM macro"
  - "InCircle method"
  - "ClickIn event"
  - "FireClickIn event"
  - "COleControl class, custom events"
  - "Click event, custom events"
  - "events [C++], ActiveX controls"
  - "custom events"
  - "FireEvent method, adding custom events"
ms.assetid: c584d053-1e34-47aa-958e-37d3e9b85892
caps.latest.revision: 14
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
# MFC ActiveX Controls: Adding Custom Events
Custom events differ from stock events in that they are not automatically fired by class `COleControl`. A custom event recognizes a certain action, determined by the control developer, as an event. The event map entries for custom events are represented by the `EVENT_CUSTOM` macro. The following section implements a custom event for an ActiveX control project that was created using the ActiveX Control Wizard.  
  
##  <a name="_core_adding_a_custom_event_with_classwizard"></a> Adding a Custom Event with the Add Event Wizard  
 The following procedure adds a specific custom event, ClickIn. You can use this procedure to add other custom events. Substitute your custom event name and its parameters for the ClickIn event name and parameters.  
  
#### To add the ClickIn custom event using the Add Event Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, right-click your ActiveX control class to open the shortcut menu.  
  
3.  From the shortcut menu, click **Add** and then click **Add Event**.  
  
     This opens the Add Event Wizard.  
  
4.  In the **Event name** box, first select any existing event, then click on the **Custom** radio button, then type `ClickIn`.  
  
5.  In the **Internal name** box, type the name of the event's firing function. For this example, use the default value provided by the Add Event Wizard (`FireClickIn`).  
  
6.  Add a parameter, called `xCoord` (type `OLE_XPOS_PIXELS`), using the **Parameter Name** and **Parameter Type** controls.  
  
7.  Add a second parameter, called `yCoord` (type `OLE_YPOS_PIXELS`).  
  
8.  Click **Finish** to create the event.  
  
##  <a name="_core_classwizard_changes_for_custom_events"></a> Add Event Wizard Changes for Custom Events  
 When you add a custom event, the Add Event Wizard makes changes to the control class .H, .CPP, and .IDL files. The following code samples are specific to the ClickIn event.  
  
 The following lines are added to the header (.H) file of your control class:  
  
 [!code-cpp[NVC_MFC_AxUI#7](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_1.h)]  
  
 This code declares an inline function called `FireClickIn` that calls [COleControl::FireEvent](../mfc/reference/colecontrol-class.md#colecontrol__fireevent) with the ClickIn event and parameters you defined using the Add Event Wizard.  
  
 In addition, the following line is added to the event map for the control, located in the implementation (.CPP) file of your control class:  
  
 [!code-cpp[NVC_MFC_AxUI#8](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_2.cpp)]  
  
 This code maps the event ClickIn to the inline function `FireClickIn`, passing the parameters you defined using the Add Event Wizard.  
  
 Finally, the following line is added to your control's .IDL file:  
  
 [!code-cpp[NVC_MFC_AxUI#9](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_3.idl)]  
  
 This line assigns the ClickIn event a specific ID number, taken from the event's position in the Add Event Wizard event list. The entry in the event list allows a container to anticipate the event. For example, it might provide handler code to be executed when the event is fired.  
  
##  <a name="_core_calling_fireclickin"></a> Calling FireClickIn  
 Now that you have added the ClickIn custom event using the Add Event Wizard, you must decide when this event is to be fired. You do this by calling `FireClickIn` when the appropriate action occurs. For this discussion, the control uses the `InCircle` function inside a `WM_LBUTTONDOWN` message handler to fire the ClickIn event when a user clicks inside a circular or elliptical region. The following procedure adds the `WM_LBUTTONDOWN` handler.  
  
#### To add a message handler with the Add Event Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, select your ActiveX control class.  
  
3.  In the Properties window, click the **Messages** button.  
  
     The Properties window displays a list of messages that can be handled by the ActiveX control. Any message shown in bold already has a handler function assigned to it.  
  
4.  From the Properties window, select the message you want to handle. For this example, select `WM_LBUTTONDOWN`.  
  
5.  From the drop-down list box on the right, select **\<Add> OnLButtonDown**.  
  
6.  Double-click the new handler function in Class View to jump to the message handler code in the implementation (.CPP) file of your ActiveX control.  
  
 The following code sample calls the **InCircle** function every time the left mouse button is clicked within the control window. This sample can be found in the `WM_LBUTTONDOWN` handler function, `OnLButtonDown`, in the [Circ sample](../visual-cpp-samples.md) abstract.  
  
 [!code-cpp[NVC_MFC_AxUI#10](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_4.cpp)]  
  
> [!NOTE]
>  When the Add Event Wizard creates message handlers for mouse button actions, a call to the same message handler of the base class is automatically added. Do not remove this call. If your control uses any of the stock mouse messages, the message handlers in the base class must be called to ensure that mouse capture is handled properly.  
  
 In the following example, the event fires only when the click occurs inside a circular or elliptical region within the control. To achieve this behavior, you can place the `InCircle` function in your control's implementation (.CPP) file:  
  
 [!code-cpp[NVC_MFC_AxUI#11](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_5.cpp)]  
  
 You will also need to add the following declaration of the `InCircle` function to your control's header (.H) file:  
  
 [!code-cpp[NVC_MFC_AxUI#12](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-events_6.h)]  
  
##  <a name="_core_custom_events_with_stock_names"></a> Custom Events with Stock Names  
 You can create custom events with the same name as stock events, however you can not implement both in the same control. For example, you might want to create a custom event called Click that does not fire when the stock event Click would normally fire. You could then fire the Click event at any time by calling its firing function.  
  
 The following procedure adds a custom Click event.  
  
#### To add a custom event that uses a stock event name  
  
1.  Load your control's project.  
  
2.  In Class View, right-click your ActiveX control class to open the shortcut menu.  
  
3.  From the shortcut menu, click **Add** and then click **Add Event**.  
  
     This opens the Add Event Wizard.  
  
4.  In the **Event Name** drop-down list, select a stock event name. For this example, select **Click**.  
  
5.  For **Event Type**, select **Custom**.  
  
6.  Click **Finish** to create the event.  
  
7.  Call `FireClick` at appropriate places in your code.  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [MFC ActiveX Controls: Methods](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)
