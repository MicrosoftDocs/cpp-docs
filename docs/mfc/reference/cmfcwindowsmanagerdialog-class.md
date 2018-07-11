---
title: "CMFCWindowsManagerDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCWindowsManagerDialog", "AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog", "AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCWindowsManagerDialog [MFC], CMFCWindowsManagerDialog"]
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog)|Constructs a `CMFCWindowsManagerDialog` object.|  
  
## Remarks  
 The `CMFCWindowsManagerDialog` contains a list of MDI child windows that are currently open in the application. The user can manually control the state of the MDI child windows by using this dialog box.  
  
 `CMFCWindowsManagerDialog` is embedded inside the [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md). The `CMFCWindowsManagerDialog` is not a class that you should create manually. Instead, call the function [CMDIFrameWndEx::ShowWindowsDialog](../../mfc/reference/cmdiframewndex-class.md#showwindowsdialog), and it will create and display a `CMFCWindowsManagerDialog` object.  
  
## Example  
 The following example demonstrates how to construct a `CMFCWindowsManagerDialog` object by calling `CMDIFrameWndEx::ShowWindowsDialog`. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/cpp/cmfcwindowsmanagerdialog-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)  
  
## Requirements  
 **Header:** afxWindowsManagerDialog.h  
  
##  <a name="cmfcwindowsmanagerdialog"></a>  CMFCWindowsManagerDialog::CMFCWindowsManagerDialog  
 Constructs a [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) object.  
  
```  
CMFCWindowsManagerDialog(
    CMDIFrameWndEx* pMDIFrame,  
    BOOL bHelpButton = FALSE);
```  
  
### Parameters  
 [in] *pMDIFrame*  
 A pointer to the parent or owner window.  
  
 [in] *bHelpButton*  
 A Boolean parameter that specifies whether the framework displays a **Help** button.  
  
### Remarks  
 For more information about visual managers, see [Visualization Manager](../../mfc/visualization-manager.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md)
