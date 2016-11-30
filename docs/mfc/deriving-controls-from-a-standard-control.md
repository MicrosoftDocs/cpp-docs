---
title: "Deriving Controls from a Standard Control | Microsoft Docs"
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
  - "standard controls, deriving controls from"
  - "common controls [C++], deriving from"
  - "derived controls"
  - "controls [MFC], derived"
  - "Windows common controls [C++], deriving from"
  - "standard controls"
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
caps.latest.revision: 11
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
# Deriving Controls from a Standard Control
As with any [CWnd](../mfc/reference/cwnd-class.md)-derived class, you can modify a control's behavior by deriving a new class from an existing control class.  
  
### To create a derived control class  
  
1.  Derive your class from an existing control class and optionally override the **Create** member function so that it provides the necessary arguments to the base-class **Create** function.  
  
2.  Provide message-handler member functions and message-map entries to modify the control's behavior in response to specific Windows messages. See [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
3.  Provide new member functions to extend the functionality of the control (optional).  
  
 Using a derived control in a dialog box requires extra work. The types and positions of controls in a dialog box are normally specified in a dialog-template resource. If you create a derived control class, you cannot specify it in a dialog template since the resource compiler knows nothing about your derived class.  
  
#### To place your derived control in a dialog box  
  
1.  Embed an object of the derived control class in the declaration of your derived dialog class.  
  
2.  Override the `OnInitDialog` member function in your dialog class to call the `SubclassDlgItem` member function for the derived control.  
  
 `SubclassDlgItem` "dynamically subclasses" a control created from a dialog template. When a control is dynamically subclassed, you hook into Windows, process some messages within your own application, then pass the remaining messages on to Windows. For more information, see the [SubclassDlgItem](../mfc/reference/cwnd-class.md#cwnd__subclassdlgitem) member function of class `CWnd` in the *MFC Reference*. The following example shows how you might write an override of `OnInitDialog` to call `SubclassDlgItem`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#3](../mfc/codesnippet/cpp/deriving-controls-from-a-standard-control_1.cpp)]  
  
 Because the derived control is embedded in the dialog class, it will be constructed when the dialog box is constructed, and it will be destroyed when the dialog box is destroyed. Compare this code to the example in [Adding Controls By Hand](../mfc/adding-controls-by-hand.md).  
  
## See Also  
 [Making and Using Controls](../mfc/making-and-using-controls.md)   
 [Controls](../mfc/controls-mfc.md)

