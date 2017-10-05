---
title: "Setting the Width of a Horizontal Scroll Bar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["list controls, scroll bar width", "CListBox::SetHorizontalExtent", "controls [C++], scroll bar", "scroll bars, displaying in controls", "horizontal scroll bar width", "CListBox class, scroll bar width", "scroll bars, width"]
ms.assetid: 51dad141-aa0b-46a3-a82c-46b80d603d94
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting the Width of a Horizontal Scroll Bar
When you add a list box with a horizontal scroll bar to a dialog box using MFC classes, the scroll bar will not automatically appear in your application.  
  
### To make the scroll bar appear  
  
1.  Set a maximum width for the widest element by calling [CListBox::SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) in your code.  
  
     Without this value set, the scroll bar will not appear, even when the items in the list box are wider than the box.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requirements  
  
 MFC  
  
## See Also  
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)   
 [Controls](../mfc/controls-mfc.md)

