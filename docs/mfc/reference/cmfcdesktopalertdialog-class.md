---
title: "CMFCDesktopAlertDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCDesktopAlertDialog", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::CreateFromParams", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::GetDlgSize", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::HasFocus", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::PreTranslateMessage"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCDesktopAlertDialog [MFC], CreateFromParams", "CMFCDesktopAlertDialog [MFC], GetDlgSize", "CMFCDesktopAlertDialog [MFC], HasFocus", "CMFCDesktopAlertDialog [MFC], PreTranslateMessage"]
ms.assetid: a53c60aa-9607-485b-b826-ec64962075f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCDesktopAlertDialog Class
The `CMFCDesktopAlertDialog` class is used together with the [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md) to display a custom dialog in a popup window.  

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
## Syntax  
  
```  
class CMFCDesktopAlertDialog : public CDialogEx  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDesktopAlertDialog::CreateFromParams](#createfromparams)||  
|[CMFCDesktopAlertDialog::GetDlgSize](#getdlgsize)||  
|[CMFCDesktopAlertDialog::HasFocus](#hasfocus)||  
|[CMFCDesktopAlertDialog::PreTranslateMessage](#pretranslatemessage)|(Overrides `CDialogEx::PreTranslateMessage`.)|  
  
### Remarks  
 Perform the following steps to display a custom dialog in a popup window:  
  
1.  Derive a class from `CMFCDesktopAlertDialog`.  
  
2.  Create a child dialog template in the resources of the project.  
  
3.  Call [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) with the resource ID of the dialog template and a pointer to the runtime class information of the derived class as parameters.  
  
4.  Program the custom dialog to handle all notifications that are coming from the hosted controls, or program the hosted controls to handle these notifications directly.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)  
  
## Requirements  
 **Header:** afxDesktopAlertDialog.h  
  
##  <a name="createfromparams"></a>  CMFCDesktopAlertDialog::CreateFromParams  

  
```  
BOOL CreateFromParams(
    CMFCDesktopAlertWndInfo& params,  
    CMFCDesktopAlertWnd* pParent);
```  
  
### Parameters  
 [in] `params`  
 [in] `pParent`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getdlgsize"></a>  CMFCDesktopAlertDialog::GetDlgSize  

  
```  
CSize GetDlgSize();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="hasfocus"></a>  CMFCDesktopAlertDialog::HasFocus  

  
```  
BOOL HasFocus() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="pretranslatemessage"></a>  CMFCDesktopAlertDialog::PreTranslateMessage  

  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)   
 [CDialogEx Class](../../mfc/reference/cdialogex-class.md)
