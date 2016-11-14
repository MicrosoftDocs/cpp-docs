---
title: "CMFCDesktopAlertDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDesktopAlertDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertDialog class"
ms.assetid: a53c60aa-9607-485b-b826-ec64962075f6
caps.latest.revision: 24
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
# CMFCDesktopAlertDialog Class
The `CMFCDesktopAlertDialog` class is used together with the [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md) to display a custom dialog in a popup window.  
  
## Syntax  
  
```  
class CMFCDesktopAlertDialog : public CDialogEx  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDesktopAlertDialog::CreateFromParams](#cmfcdesktopalertdialog__createfromparams)||  
|[CMFCDesktopAlertDialog::GetDlgSize](#cmfcdesktopalertdialog__getdlgsize)||  
|[CMFCDesktopAlertDialog::HasFocus](#cmfcdesktopalertdialog__hasfocus)||  
|[CMFCDesktopAlertDialog::PreTranslateMessage](#cmfcdesktopalertdialog__pretranslatemessage)|(Overrides `CDialogEx::PreTranslateMessage`.)|  
  
### Remarks  
 Perform the following steps to display a custom dialog in a popup window:  
  
1.  Derive a class from `CMFCDesktopAlertDialog`.  
  
2.  Create a child dialog template in the resources of the project.  
  
3.  Call [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#cmfcdesktopalertwnd__create) with the resource ID of the dialog template and a pointer to the runtime class information of the derived class as parameters.  
  
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
  
##  <a name="cmfcdesktopalertdialog__createfromparams"></a>  CMFCDesktopAlertDialog::CreateFromParams  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
  
##  <a name="cmfcdesktopalertdialog__getdlgsize"></a>  CMFCDesktopAlertDialog::GetDlgSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CSize GetDlgSize();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdesktopalertdialog__hasfocus"></a>  CMFCDesktopAlertDialog::HasFocus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL HasFocus() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdesktopalertdialog__pretranslatemessage"></a>  CMFCDesktopAlertDialog::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
