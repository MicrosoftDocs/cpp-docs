---
title: "CMFCWindowsManagerDialog Class"
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
ms.topic: reference
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
caps.latest.revision: 21
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
# CMFCWindowsManagerDialog Class
The `CMFCWindowsManagerDialog` object enables a user to manage MDI child windows in a MDI application.  
  
## Syntax  
  
```  
class CMFCWindowsManagerDialog : public CDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog__cmfcwindowsmanagerdialog)|Constructs a `CMFCWindowsManagerDialog` object.|  
  
## Remarks  
 The `CMFCWindowsManagerDialog` contains a list of MDI child windows that are currently open in the application. The user can manually control the state of the MDI child windows by using this dialog box.  
  
 `CMFCWindowsManagerDialog` is embedded inside the [CMDIFrameWndEx Class](../VS_visualcpp/CMDIFrameWndEx-Class.md). The `CMFCWindowsManagerDialog` is not a class that you should create manually. Instead, call the function [CMDIFrameWndEx::ShowWindowsDialog](../VS_visualcpp/CMDIFrameWndEx-Class.md#cmdiframewndex__showwindowsdialog), and it will create and display a `CMFCWindowsManagerDialog` object.  
  
## Example  
 The following example demonstrates how to construct a `CMFCWindowsManagerDialog` object by calling `CMDIFrameWndEx::ShowWindowsDialog`. This code snippet is part of the [Visual Studio Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_VisualStudioDemo#18](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_VisualStudioDemo#18)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CMFCWindowsManagerDialog](../VS_visualcpp/CMFCWindowsManagerDialog-Class.md)  
  
## Requirements  
 **Header:** afxWindowsManagerDialog.h  
  
##  <a name="cmfcwindowsmanagerdialog__cmfcwindowsmanagerdialog"></a>  CMFCWindowsManagerDialog::CMFCWindowsManagerDialog  
 Constructs a [CMFCWindowsManagerDialog](../VS_visualcpp/CMFCWindowsManagerDialog-Class.md) object.  
  
```  
CMFCWindowsManagerDialog(  
    CMDIFrameWndEx* pMDIFrame,  
    BOOL bHelpButton = FALSE);  
```  
  
### Parameters  
 [in] `pMDIFrame`  
 A pointer to the parent or owner window.  
  
 [in] `bHelpButton`  
 A Boolean parameter that specifies whether the framework displays a **Help** button.  
  
### Remarks  
 For more information about visual managers, see [Visualization Manager](../VS_visualcpp/Visualization-Manager.md).  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMDIFrameWndEx Class](../VS_visualcpp/CMDIFrameWndEx-Class.md)   
 [CMDIFrameWndEx::ShowWindowsDialog](../VS_visualcpp/CMDIFrameWndEx-Class.md#cmdiframewndex__showwindowsdialog)