---
title: "Setting the Width of a Horizontal Scroll Bar | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "list controls, scroll bar width"
  - "CListBox::SetHorizontalExtent"
  - "controls [C++], scroll bar"
  - "scroll bars, displaying in controls"
  - "horizontal scroll bar width"
  - "CListBox class, scroll bar width"
  - "scroll bars, width"
ms.assetid: 51dad141-aa0b-46a3-a82c-46b80d603d94
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting the Width of a Horizontal Scroll Bar
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Setting the Width of a Horizontal Scroll Bar](https://docs.microsoft.com/cpp/windows/setting-the-width-of-a-horizontal-scroll-bar).  
  
  
The latest version of this topic can be found at [Setting the Width of a Horizontal Scroll Bar](https://docs.microsoft.com/cpp/windows/setting-the-width-of-a-horizontal-scroll-bar).  
  
  
When you add a list box with a horizontal scroll bar to a dialog box using MFC classes, the scroll bar will not automatically appear in your application.  
  
### To make the scroll bar appear  
  
1.  Set a maximum width for the widest element by calling [CListBox::SetHorizontalExtent](../mfc/reference/clistbox-class.md#clistbox__sethorizontalextent) in your code.  
  
     Without this value set, the scroll bar will not appear, even when the items in the list box are wider than the box.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 MFC  
  
## See Also  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)









