---
title: "Toolbar Button Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["size, toolbar buttons", "toolbar buttons (in Toolbar editor), setting properties", "Toolbar editor, toolbar button properties", "status bars, active toolbar button text", "command IDs, toolbar buttons", "width, toolbar buttons"]
ms.assetid: b2705814-7c5d-4f24-8f77-07559b0cdda2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Toolbar Button Properties
The properties of a toolbar button are:  
  
|Property|Description|  
|--------------|-----------------|  
|**ID**|Defines the ID for the button. The drop-down list provides common **ID** names.|  
|**Width**|Sets the width of the button. 16 pixels is recommended.|  
|**Height**|Sets the height of the button. Note that the height of one button changes the height of all buttons on the toolbar. 15 pixels is recommended.|  
|**Prompt**|Defines the message displayed in the status bar. Adding \n and a name adds a ToolTip to that toolbar button. For more information, see [Creating a ToolTip](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|  
  
 **Width** and **Height** apply to all buttons. A bitmap that is used to create a toolbar has a maximum width of 2048. So if you set the button width to 512, you can only have four buttons and if you set the width to 513, you can only have three buttons.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
## Requirements  
 MFC or ATL  
  
## See Also  
 [Changing the Properties of a Toolbar Button](../windows/changing-the-properties-of-a-toolbar-button.md)   
 [Toolbar Editor](../windows/toolbar-editor.md)

