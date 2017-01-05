---
title: "Default Control Events | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "Dialog editor, default control events"
  - "controls [C++], default control events"
  - "events [C++], controls"
  - "dialog box controls, events"
ms.assetid: 75556b23-18f5-4390-97a4-2ecad3309741
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
# Default Control Events
The following control names have the accompanying default events:  
  
|Control name|Default event|  
|------------------|-------------------|  
|Animate|**ACN_START**|  
|Check box|**BN_CLICKED**|  
|Combo box|**CBN_SELCHANGE**|  
|Custom|**TTN_GETDISPINFO**|  
|Date time picker|**DTN_DATETIMECHANGE**|  
|Edit box|**EN_CHANGE**|  
|Group Box|(Not applicable)|  
|Hot key|**NM_OUTOFMEMORY**|  
|IP address|**IPN_FIELDCHANGED**|  
|List|**LVN_ITEMCHANGE**|  
|List box|**LBN_SELCHANGE**|  
|Month calendar|**MCN_SELCHANGE**|  
|Picture Control|(Not applicable)|  
|Progress|**NM_CUSTOMDRAW**|  
|Push button|**BN_CLICKED**|  
|Radio button|**BN_CLICKED**|  
|Rich edit|**EN_CHANGE**|  
|Scroll bar|**NM_THEMECHANGED**|  
|Slider|**NM_CUSTOMDRAW**|  
|Spin|**UDN_DELTAPOS**|  
|Static Text|(Not applicable)|  
|Tab|**TCN_SELCHANGE**|  
|Tree|**TVN_SELCHANGE**|  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [Defining Member Variables for Dialog Controls](../mfc/defining-member-variables-for-dialog-controls.md)   
 [Message Types Associated with User-Interface Objects](../mfc/reference/message-types-associated-with-user-interface-objects.md)   
 [Editing a Message Handler](../mfc/reference/editing-a-message-handler.md)   
 [Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md)   
 [Declaring a Variable Based on Your New Control Class](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)   
 [Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)

