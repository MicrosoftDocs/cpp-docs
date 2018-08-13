---
title: "Creating a Dialog Box That Users Cannot Exit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["dialog boxes, creating", "modal dialog boxes, logon screens", "logon screens"]
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating a Dialog Box That Users Cannot Exit
You can create a runtime dialog box that a user cannot exit. This kind of dialog box is useful for logons, and for application or document locks.  
  
### To create a dialog box that a user cannot exit  
  
1.  In the **Properties** pane for the dialog box, set the **System Menu** property to **false**.  
  
     This disables the dialog box system menu and **Close** button.  
  
2.  In the dialog box form, delete the **Cancel** and **OK** buttons.  
  
     At run time, a user cannot exit a modal dialog box that has these characteristics.  
  
 To enable testing of this kind of dialog box, the test dialog box function detects when **Esc** is pressed. (**Esc** is also known as the VK_ESCAPE virtual key.) No matter how the dialog box is designed to behave at run time, you can terminate it in test mode by pressing **Esc**.  
  
> [!NOTE]
>  For MFC applications, to create a dialog box that users cannot exit, you must override the default behavior of `OnOK` and `OnCancel` because even if you delete the associated buttons, the dialog box can still be dismissed by pressing **Enter** or **Esc**.  
  
 For information about how to add resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)   
 [Resource Files](../windows/resource-files-visual-studio.md)   
 [Dialog Editor](../windows/dialog-editor.md)