---
title: "Overview of the Rich Edit Control"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
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
# Overview of the Rich Edit Control
> [!IMPORTANT]
>  If you are using a rich edit control in a dialog box (regardless of whether your application is SDI, MDI, or dialog-based), you must call [AfxInitRichEdit](../Topic/AfxInitRichEdit.md) once before the dialog box is displayed. A typical place to call this function is in your program's `InitInstance` member function. You do not need to call it for each time you display the dialog box, only the first time. You do not have to call `AfxInitRichEdit` if you are working with `CRichEditView`.  
  
 Rich edit controls ([CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)) provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user. That is, the rich edit control supports changing the character or paragraph attributes of the selected text. Some examples of character attributes are bold, italics, font family, and point size. Examples of paragraph attributes include alignment, margins, and tab stops. However, it is up to you to provide the user interface, whether that is toolbar buttons, menu items, or a format character dialog box. There are also functions to query the rich edit control for the attributes of the current selection. Use these functions to display the current settings for the attributes, for example, setting a check mark on the command UI if the selection has the bold character formatting attribute.  
  
 For more information on character and paragraph formatting, see [Character Formatting](../VS_visualcpp/Character-Formatting-in-Rich-Edit-Controls.md) and [Paragraph Formatting](../VS_visualcpp/Paragraph-Formatting-in-Rich-Edit-Controls.md) later in this topic.  
  
 Rich edit controls support almost all of the operations and notification messages used with multiline edit controls. Thus, applications that already use edit controls can be easily changed to use rich edit controls. Additional messages and notifications enable applications to access the functionality unique to rich edit controls. For information about edit controls, see [CEdit](../VS_visualcpp/CEdit-Class.md).  
  
 For more information on notifications, see [Notifications from a Rich Edit Control](../VS_visualcpp/Notifications-from-a-Rich-Edit-Control.md) later in this topic.  
  
## See Also  
 [Using CRichEditCtrl](../VS_visualcpp/Using-CRichEditCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)