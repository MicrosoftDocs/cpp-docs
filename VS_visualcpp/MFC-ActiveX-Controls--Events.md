---
title: "MFC ActiveX Controls: Events"
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
ms.assetid: e1e57e0c-206b-4923-a0b5-682c26564f74
caps.latest.revision: 8
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
# MFC ActiveX Controls: Events
ActiveX controls use events to notify a container that something has happened to the control. Common examples of events include clicks on the control, data entered using the keyboard, and changes in the control's state. When these actions occur, the control fires an event to alert the container.  
  
 Events are also called messages.  
  
 MFC supports two kinds of events: stock and custom. Stock events are those events that class [COleControl](../VS_visualcpp/COleControl-Class.md) handles automatically. For a complete list of stock events, see the article [MFC ActiveX Controls: Adding Stock Events](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Events-to-an-ActiveX-Control.md). Custom events allow a control the ability to notify the container when an action specific to that control occurs. Some examples would be a change in the internal state of a control or receipt of a certain window message.  
  
 For your control to fire events properly, your control class must map each event of the control to a member function that should be called when the related event occurs. This mapping mechanism (called an event map) centralizes information about the event and allows Visual Studio to easily access and manipulate the control's events. This event map is declared by the following macro, located in the header (.H) file of the control class declaration:  
  
 [!CODE [NVC_MFC_AxUI#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#2)]  
  
 After the event map has been declared, it must be defined in your control's implementation (.CPP) file. The following lines of code define the event map, allowing your control to fire specific events:  
  
 [!CODE [NVC_MFC_AxUI#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#3)]  
[!CODE [NVC_MFC_AxUI#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#4)]  
  
 If you use the MFC ActiveX Control Wizard to create the project, it automatically adds these lines. If you do not use the MFC ActiveX Control Wizard, you must add these lines manually.  
  
 With Class View, you can add stock events supported by class `COleControl` or custom events that you define. For each new event, Class View automatically adds the proper entry to the control's event map and the control's .IDL file.  
  
 Two other articles discuss events in detail:  
  
-   [MFC ActiveX Controls: Adding Stock Events](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Events-to-an-ActiveX-Control.md)  
  
-   [MFC ActiveX Controls: Adding Custom Events](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Custom-Events.md)  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Controls: Methods](../VS_visualcpp/MFC-ActiveX-Controls--Methods.md)   
 [COleControl Class](../VS_visualcpp/COleControl-Class.md)