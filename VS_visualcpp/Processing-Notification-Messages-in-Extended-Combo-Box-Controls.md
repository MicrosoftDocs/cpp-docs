---
title: "Processing Notification Messages in Extended Combo Box Controls"
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
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
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
# Processing Notification Messages in Extended Combo Box Controls
As users interact with the extended combo box, the control (`CComboBoxEx`) sends notification messages to its parent window, usually a view or dialog object. Handle these messages if you want to do something in response. For example, when the user activates the drop-down list or clicks in the control's edit box, the **CBEN_BEGINEDIT** notification is sent.  
  
 Use the Properties window to add notification handlers to the parent class for those messages you want to implement.  
  
 The following list describes the various notifications sent by the extended combo box control.  
  
-   **CBEN_BEGINEDIT** Sent when the user activates the drop-down list or clicks in the control's edit box.  
  
-   **CBEN_DELETEITEM** Sent when an item has been deleted.  
  
-   **CBEN_DRAGBEGIN** Sent when the user begins dragging the image of the item displayed in the edit portion of the control.  
  
-   **CBEN_ENDEDIT** Sent when the user has concluded an operation within the edit box or has selected an item from the control's drop-down list.  
  
-   **CBEN_GETDISPINFO** Sent to retrieve display information about a callback item.  
  
-   **CBEN_INSERTITEM** Sent when a new item has been inserted in the control.  
  
## See Also  
 [Using CComboBoxEx](../VS_visualcpp/Using-CComboBoxEx.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)