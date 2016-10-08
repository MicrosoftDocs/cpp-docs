---
title: "Implementing a Dialog Box"
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
ms.assetid: 478525f2-aa6a-435a-b162-68fc8aa98a8e
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
# Implementing a Dialog Box
There are two ways to add a dialog box to your ATL project: use the ATL Dialog Wizard or add it manually.  
  
## Adding a Dialog Box with the ATL Dialog Wizard  
 In the [Add Class dialog box](../VS_visualcpp/Add-Class-Dialog-Box.md), select the ATL Dialog object to add a dialog box to your ATL project. Fill in the ATL Dialog Wizard as appropriate and click **Finish**. The wizard adds a class derived from [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md) to your project. Open the Resource View from the **View** menu, locate your dialog, and double-click it to open it in the resource editor.  
  
> [!NOTE]
>  If your dialog box is derived from `CAxDialogImpl`, it can host both ActiveX and Windows controls. If you don't want the overhead of ActiveX control support in your dialog box class, use [CSimpleDialog](../VS_visualcpp/CSimpleDialog-Class.md) or [CDialogImpl](../VS_visualcpp/CDialogImpl-Class.md) instead.  
  
 Message and event handlers can be added to your dialog class from Class View. For more information, see [Adding an ATL Message Handler](../VS_visualcpp/Adding-an-ATL-Message-Handler.md).  
  
## Adding a Dialog Box Manually  
 Implementing a dialog box is similar to implementing a window. You derive a class from either [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md), [CDialogImpl](../VS_visualcpp/CDialogImpl-Class.md), or [CSimpleDialog](../VS_visualcpp/CSimpleDialog-Class.md) and declare a [message map](../VS_visualcpp/Message-Maps--ATL-.md) to handle messages. However, you must also specify a dialog template resource ID in your derived class. Your class must have a data member called `IDD` to hold this value.  
  
> [!NOTE]
>  When you create a dialog box using the ATL Dialog Wizard, the wizard automatically adds the `IDD` member as an `enum` type.  
  
 `CDialogImpl` allows you to implement a modal or a modeless dialog box that hosts Windows controls. `CAxDialogImpl` allows you to implement a modal or a modeless dialog box that hosts both ActiveX and Windows controls.  
  
 To create a modal dialog box, create an instance of your `CDialogImpl`-derived (or `CAxDialogImpl`-derived) class and then call the [DoModal](../Topic/CDialogImpl::DoModal.md) method. To close a modal dialog box, call the [EndDialog](../Topic/CDialogImpl::EndDialog.md) method from a message handler. To create a modeless dialog box, call the [Create](../Topic/CDialogImpl::Create.md) method instead of `DoModal`. To destroy a modeless dialog box, call [DestroyWindow](../Topic/CDialogImpl::DestroyWindow.md).  
  
 Sinking events is automatically done in [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md). Implement the dialog box's message handlers as you would the handlers in a `CWindowImpl`-derived class. If there is a message-specific return value, return it as an `LRESULT`. The returned `LRESULT` values are mapped by ATL for proper handling by the Windows dialog manager. For details, see the source code for [CDialogImplBaseT::DialogProc](../Topic/CDialogImpl::DialogProc.md) in atlwin.h.  
  
## Example  
 The following class implements a dialog box:  
  
 [!CODE [NVC_ATL_Windowing#66](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#66)]  
  
## See Also  
 [Window Classes](../VS_visualcpp/ATL-Window-Classes.md)