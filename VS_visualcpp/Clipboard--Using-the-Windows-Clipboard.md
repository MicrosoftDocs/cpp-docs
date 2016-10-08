---
title: "Clipboard: Using the Windows Clipboard"
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
ms.assetid: 24415b42-9301-4a70-b69a-44c97918319f
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
# Clipboard: Using the Windows Clipboard
This topic describes how to use the standard Windows Clipboard API within your MFC application.  
  
 Most applications for Windows support cutting or copying data to the Windows Clipboard and pasting data from the Clipboard. The Clipboard data formats vary among applications. The framework supports only a limited number of Clipboard formats for a limited number of classes. You will normally implement the Clipboard-related commands — Cut, Copy, and Paste — on the Edit menu for your view. The class library defines the command IDs for these commands: **ID_EDIT_CUT**, **ID_EDIT_COPY**, and **ID_EDIT_PASTE**. Their message-line prompts are also defined.  
  
 [Messages and Commands in the Framework](../VS_visualcpp/Messages-and-Commands-in-the-Framework.md) explains how to handle menu commands in your application by mapping the menu command to a handler function. As long as your application does not define handler functions for the Clipboard commands on the Edit menu, they remain disabled. To write handler functions for the Cut and Copy commands, implement selection in your application. To write a handler function for the Paste command, query the Clipboard to see whether it contains data in a format your application can accept. For example, to enable the Copy command, you might write a handler something like the following:  
  
 [!CODE [NVC_MFCListView#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCListView#2)]  
  
 The Cut, Copy, and Paste commands are only meaningful in certain contexts. The Cut and Copy commands should be enabled only when something is selected, and the Paste command only when something is in the Clipboard. You can provide this behavior by defining update handler functions that enable or disable these commands depending on the context. For more information, see [How to Update User-Interface Objects](../VS_visualcpp/How-to--Update-User-Interface-Objects.md).  
  
 The Microsoft Foundation Class Library does provide Clipboard support for text editing with the `CEdit` and `CEditView` classes. The OLE classes also simplify implementing Clipboard operations that involve OLE items. For more information on the OLE classes, see [Clipboard: Using the OLE Clipboard Mechanism](../VS_visualcpp/Clipboard--Using-the-OLE-Clipboard-Mechanism.md).  
  
 Implementing other Edit menu commands, such as Undo (**ID_EDIT_UNDO**) and Redo (**ID_EDIT_REDO**), is also left to you. If your application does not support these commands, you can easily delete them from your resource file using the Visual C++ resource editors.  
  
## What do you want to know more about?  
  
-   [Copying and pasting data](../VS_visualcpp/Clipboard--Copying-and-Pasting-Data.md)  
  
-   [Using the OLE Clipboard mechanism](../VS_visualcpp/Clipboard--Using-the-OLE-Clipboard-Mechanism.md)  
  
## See Also  
 [Clipboard](../VS_visualcpp/Clipboard.md)