---
title: "Implementing a Dialog Box | Microsoft Docs"
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
helpviewer_keywords: 
  - "CSimpleDialog class, implementing dialog boxes in ATL"
  - "dialog boxes, ATL"
  - "CAxDialogImpl class, implementing dialog boxes in ATL"
  - "ATL, dialog boxes"
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
caps.latest.revision: 10
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
# Implementing a Dialog Box
There are two ways to add a dialog box to your ATL project: use the ATL Dialog Wizard or add it manually.  
  
## Adding a Dialog Box with the ATL Dialog Wizard  
 In the [Add Class dialog box](../ide/add-class-dialog-box.md), select the ATL Dialog object to add a dialog box to your ATL project. Fill in the ATL Dialog Wizard as appropriate and click **Finish**. The wizard adds a class derived from [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) to your project. Open the Resource View from the **View** menu, locate your dialog, and double-click it to open it in the resource editor.  
  
> [!NOTE]
>  If your dialog box is derived from `CAxDialogImpl`, it can host both ActiveX and Windows controls. If you don't want the overhead of ActiveX control support in your dialog box class, use [CSimpleDialog](../atl/reference/csimpledialog-class.md) or [CDialogImpl](../atl/reference/cdialogimpl-class.md) instead.  
  
 Message and event handlers can be added to your dialog class from Class View. For more information, see [Adding an ATL Message Handler](../atl/adding-an-atl-message-handler.md).  
  
## Adding a Dialog Box Manually  
 Implementing a dialog box is similar to implementing a window. You derive a class from either [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md), [CDialogImpl](../atl/reference/cdialogimpl-class.md), or [CSimpleDialog](../atl/reference/csimpledialog-class.md) and declare a [message map](../atl/message-maps-atl.md) to handle messages. However, you must also specify a dialog template resource ID in your derived class. Your class must have a data member called `IDD` to hold this value.  
  
> [!NOTE]
>  When you create a dialog box using the ATL Dialog Wizard, the wizard automatically adds the `IDD` member as an `enum` type.  
  
 `CDialogImpl` allows you to implement a modal or a modeless dialog box that hosts Windows controls. `CAxDialogImpl` allows you to implement a modal or a modeless dialog box that hosts both ActiveX and Windows controls.  
  
 To create a modal dialog box, create an instance of your `CDialogImpl`-derived (or `CAxDialogImpl`-derived) class and then call the [DoModal](../atl/reference/cdialogimpl-class.md#cdialogimpl__domodal) method. To close a modal dialog box, call the [EndDialog](../atl/reference/cdialogimpl-class.md#cdialogimpl__enddialog) method from a message handler. To create a modeless dialog box, call the [Create](../atl/reference/cdialogimpl-class.md#cdialogimpl__create) method instead of `DoModal`. To destroy a modeless dialog box, call [DestroyWindow](../atl/reference/cdialogimpl-class.md#cdialogimpl__destroywindow).  
  
 Sinking events is automatically done in [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md). Implement the dialog box's message handlers as you would the handlers in a `CWindowImpl`-derived class. If there is a message-specific return value, return it as an `LRESULT`. The returned `LRESULT` values are mapped by ATL for proper handling by the Windows dialog manager. For details, see the source code for [CDialogImplBaseT::DialogProc](../atl/reference/cdialogimpl-class.md#cdialogimpl__dialogproc) in atlwin.h.  
  
## Example  
 The following class implements a dialog box:  
  
 [!code-cpp[NVC_ATL_Windowing#66](../atl/codesnippet/cpp/implementing-a-dialog-box_1.h)]  
  
## See Also  
 [Window Classes](../atl/atl-window-classes.md)

