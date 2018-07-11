---
title: "CMFCDesktopAlertWndInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCDesktopAlertWndInfo", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_hIcon", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_nURLCmdID", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strText", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strURL"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCDesktopAlertWndInfo [MFC], m_hIcon", "CMFCDesktopAlertWndInfo [MFC], m_nURLCmdID", "CMFCDesktopAlertWndInfo [MFC], m_strText", "CMFCDesktopAlertWndInfo [MFC], m_strURL"]
ms.assetid: 5c9bb84e-6c96-4748-8e74-6951b6ae8e84
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCDesktopAlertWndInfo Class
The `CMFCDesktopAlertWndInfo` class is used with the [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md). It specifies the controls that are displayed if the desktop alert window pops up.  
  
## Syntax  
  
```  
class CMFCDesktopAlertWndInfo  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCDesktopAlertWndInfo::~CMFCDesktopAlertWndInfo`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::operator=](#operator_eq)||  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon)|A handle to the icon that is displayed.|  
|[CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid)|The command ID associated with a link on the desktop alert window.|  
|[CMFCDesktopAlertWndInfo::m_strText](#m_strtext)|The text that is displayed on the desktop alert window.|  
|[CMFCDesktopAlertWndInfo::m_strURL](#m_strurl)|The link that is displayed on the desktop alert window.|  
  
## Remarks  
 The `CMFCDesktopAlertWndInfo` class is passed to the [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) method to specify the elements that are displayed on the default dialog of the desktop alert window. The default dialog can contain three items:  
  
-   An icon, which is set by calling [CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon).  
  
-   A label, or text message, which is set by calling [CMFCDesktopAlertWndInfo::m_strText](#m_strtext).  
  
-   A link, which is set by calling [CMFCDesktopAlertWndInfo::m_strURL](#m_strurl). To set the command that is executed when the link is clicked, call [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid).  
  
 If the default dialog is not sufficient, you can create a custom dialog and pass it to the [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) method instead of using this class. For more information, see [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## Example  
 The following example demonstrates how to use various members in the `CMFCDesktopAlertWndInfo` class. The example demonstrates how to set the handle to the icon that is displayed, the text that is displayed on the desktop alert window, the link that is displayed on the desktop alert window, and the command ID that is associated with a link on the desktop alert window. This example is part of the [Desktop Alert Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#3](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndinfo-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)  
  
## Requirements  
 **Header:** afxDesktopAlertDialog.h  
  
##  <a name="operator_eq"></a>  CMFCDesktopAlertWndInfo::operator=  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCDesktopAlertWndInfo& operator=(CMFCDesktopAlertWndInfo& src);
```  
  
### Parameters  
 [in] *src*  
  
### Return Value  
  
### Remarks  
  
##  <a name="m_hicon"></a>  CMFCDesktopAlertWndInfo::m_hIcon  
 A handle to the icon that is displayed.  
  
```  
HICON m_hIcon;  
```  
  
### Remarks  
  
##  <a name="m_nurlcmdid"></a>  CMFCDesktopAlertWndInfo::m_nURLCmdID  
 The command ID associated with a link on the desktop alert window.  
  
```  
UINT m_nURLCmdID;  
```  
  
### Remarks  
 The command ID is sent to the owner of the popup window when the user clicks on the link specified by [CMFCDesktopAlertWndInfo::m_strURL](#m_strurl).  
  
##  <a name="m_strtext"></a>  CMFCDesktopAlertWndInfo::m_strText  
 The text that is displayed on the desktop alert window.  
  
```  
CString m_strText;  
```  
  
### Remarks  
  
##  <a name="m_strurl"></a>  CMFCDesktopAlertWndInfo::m_strURL  
 The link that is displayed on the desktop alert window.  
  
```  
CString m_strURL;  
```  
  
### Remarks  
 When the user clicks the link, the command that has the [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid) command ID will be sent to the owner of the pop-up window.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create)   
 [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)
