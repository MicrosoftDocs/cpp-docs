---
title: "Dialog Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.dialog.dialog"
  - "vc.editors.dialog.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resource editors, Dialog editor"
  - "editors, dialog boxes"
  - "Dialog editor"
  - "dialog boxes, editing"
ms.assetid: d94884ef-2cca-49d8-9b58-775f34848134
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Dialog Editor
The Dialog editor allows you to create or edit dialog box resources. You open the dialog editor by double-clicking on a dialog’s .rc file in the Resource View window (**View &#124; Resource View**). Note that Resource View is not available in Express editions.  
  
 One of the first steps in making a new dialog box (or dialog box template) is adding controls to the dialog box. In the Dialog editor, you can arrange controls to fit a certain size, shape, or alignment, or you can move them around to work within the dialog box. It's also easy to delete a control.  
  
 You can store a dialog box as a template so you can reuse it. You can also easily switch between designing the dialog box and editing the code that implements it.  
  
 It's also possible to edit properties of single or multiple controls in the Dialog editor. You can change the tab order, that is, the order in which controls gain focus when the TAB key is pressed, or you can define an access key (a key combination) that allows users to choose a control using the keyboard. For a list of preset access keys, see [Accelerator Keys for the Dialog Editor](../windows/accelerator-keys-for-the-dialog-editor.md).  
  
 The Dialog editor also allows you to use custom controls, including ActiveX controls. In addition, you can edit a [form view](../mfc/reference/cformview-class.md), [Record Views](../data/record-views-mfc-data-access.md), or [Dialog Bars](../mfc/dialog-bars.md).  
  
 Starting with [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)], you can use the dialog editor to define dynamic layouts, which specify how controls move and resize when the user resizes a dialog. For more information, see [Dynamic Layout](../mfc/dynamic-layout.md).  
  
-   [Creating a New Dialog Box](../windows/creating-a-new-dialog-box.md)  
  
-   [Creating a Dialog Box that Users Can't Exit at Run Time](../windows/creating-a-dialog-box-that-users-cannot-exit.md)  
  
-   [Showing or Hiding the Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)  
  
-   [Switching Between the Dialog Editor and Code](../windows/switching-between-dialog-box-controls-and-code.md)  
  
-   [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
  
-   [Adding Event Handlers for Dialog Box Controls](../windows/adding-event-handlers-for-dialog-box-controls.md)  
  
-   [Testing a Dialog Box](../windows/testing-a-dialog-box.md)  
  
-   [Accelerator Keys for the Dialog Editor](../windows/accelerator-keys-for-the-dialog-editor.md)  
  
-   [Troubleshooting the Dialog Editor](../windows/troubleshooting-the-dialog-editor.md)  
  
    > [!TIP]
    >  While using the Dialog editor, in many instances, you can click the right mouse button to display a shortcut menu of frequently used commands.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
## Requirements  
 Win32  
  
## See Also  
 [Resource Editors](../windows/resource-editors.md)   
 [Controls](../mfc/controls-mfc.md)   
 [Control Classes](../mfc/control-classes.md)   
 [Dialog Box Classes](../mfc/dialog-box-classes.md)   
 [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)

