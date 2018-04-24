---
title: "Opening a Resource for Binary Editing | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.binary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary data, editing"
  - "resources [Visual Studio], opening for binary editing"
ms.assetid: d3cdb0e4-da66-410d-8e49-b29073ff2929
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Opening a Resource for Binary Editing
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Opening a Resource for Binary Editing](https://docs.microsoft.com/cpp/windows/opening-a-resource-for-binary-editing).  

  
To open a Windows desktop resource for binary editing  
  
1.  In [Resource View](../windows/resource-view-window.md), select the specific resource file you want to edit.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Right-click the resource and click **Open Binary Data** from the shortcut menu.  
  
    > [!NOTE]
    >  If you use the [Resource View](../windows/resource-view-window.md) window to open a resource with a format that Visual Studio does not recognize (such as RCDATA or a custom resource), the resource is automatically opened in the Binary editor.  
  
### To open a managed resource for binary editing  
  
1.  In Solution Explorer, select the specific resource file you want to edit.  
  
2.  Right-click the resource and choose **Open With** from the shortcut menu.  
  
3.  In the **Open With** dialog box, choose **Binary Editor**.  
  
    > [!NOTE]
    >  You can use the [Image editor](../mfc/image-editor-for-icons.md) and the [Binary editor](../mfc/binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.  
  
    > [!NOTE]
    >  For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 ![Binary Editor](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")  
Binary Data for a Dialog Box Displayed in the Binary Editor  
  
 Only certain ASCII values are represented in the Binary editor (0x20 through 0x7E). Extended characters are displayed as periods in the ASCII Value section of the Binary editor (the right panel). The "printable" characters are ASCII values 32 through 126.  
  
> [!NOTE]
>  If you want to use the Binary editor on a resource already being edited in another editor window, close the other editor window first.  
  
 **Requirements**  
  
 None  
  
## See Also  
 [Binary Editor](../mfc/binary-editor.md)









