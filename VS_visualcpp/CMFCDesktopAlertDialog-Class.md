---
title: "CMFCDesktopAlertDialog Class"
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
ms.assetid: a53c60aa-9607-485b-b826-ec64962075f6
caps.latest.revision: 20
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
# CMFCDesktopAlertDialog Class
The `CMFCDesktopAlertDialog` class is used together with the [CMFCDesktopAlertWnd Class](../VS_visualcpp/CMFCDesktopAlertWnd-Class.md) to display a custom dialog in a popup window.  
  
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
  
3.  Call [CMFCDesktopAlertWnd::Create](../VS_visualcpp/CMFCDesktopAlertWnd-Class.md#cmfcdesktopalertwnd__create) with the resource ID of the dialog template and a pointer to the runtime class information of the derived class as parameters.  
  
4.  Program the custom dialog to handle all notifications that are coming from the hosted controls, or program the hosted controls to handle these notifications directly.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CDialogEx](../VS_visualcpp/CDialogEx-Class.md)  
  
 [CMFCDesktopAlertDialog](../VS_visualcpp/CMFCDesktopAlertDialog-Class.md)  
  
## Requirements  
 **Header:** afxDesktopAlertDialog.h  
  
##  <a name="cmfcdesktopalertdialog__createfromparams"></a>  CMFCDesktopAlertDialog::CreateFromParams  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CreateFromParams(  
    CMFCDesktopAlertWndInfo& params,  
    CMFCDesktopAlertWnd* pParent );  
```  
  
### Parameters  
 [in] `params`  
  [in] `pParent`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdesktopalertdialog__getdlgsize"></a>  CMFCDesktopAlertDialog::GetDlgSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CSize GetDlgSize();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdesktopalertdialog__hasfocus"></a>  CMFCDesktopAlertDialog::HasFocus  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL HasFocus() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdesktopalertdialog__pretranslatemessage"></a>  CMFCDesktopAlertDialog::PreTranslateMessage  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL PreTranslateMessage( MSG* pMsg );  
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCDesktopAlertWnd Class](../VS_visualcpp/CMFCDesktopAlertWnd-Class.md)   
 [CMFCDesktopAlertWndInfo Class](../VS_visualcpp/CMFCDesktopAlertWndInfo-Class.md)   
 [CDialogEx Class](../VS_visualcpp/CDialogEx-Class.md)