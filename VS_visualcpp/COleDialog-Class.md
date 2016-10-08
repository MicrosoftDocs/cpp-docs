---
title: "COleDialog Class"
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
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
caps.latest.revision: 17
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
# COleDialog Class
Provides functionality common to dialog boxes for OLE.  
  
## Syntax  
  
```  
class COleDialog : public CCommonDialog  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDialog::GetLastError](#coledialog__getlasterror)|Gets the error code returned by the dialog box.|  
  
## Remarks  
 The Microsoft Foundation Class Library provides several classes derived from `COleDialog`:  
  
-   [COleInsertDialog](../VS_visualcpp/COleInsertDialog-Class.md)  
  
-   [COleConvertDialog](../VS_visualcpp/COleConvertDialog-Class.md)  
  
-   [COleChangeIconDialog](../VS_visualcpp/COleChangeIconDialog-Class.md)  
  
-   [COleLinksDialog](../VS_visualcpp/COleLinksDialog-Class.md)  
  
-   [COleBusyDialog](../VS_visualcpp/COleBusyDialog-Class.md)  
  
-   [COleUpdateDialog](../VS_visualcpp/COleUpdateDialog-Class.md)  
  
-   [COlePasteSpecialDialog](../VS_visualcpp/COlePasteSpecialDialog-Class.md)  
  
-   [COlePropertiesDialog](../VS_visualcpp/COlePropertiesDialog-Class.md)  
  
-   [COleChangeSourceDialog](../VS_visualcpp/COleChangeSourceDialog-Class.md)  
  
 For more information about OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../VS_visualcpp/Dialog-Boxes-in-OLE.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CCommonDialog](../VS_visualcpp/CCommonDialog-Class.md)  
  
 `COleDialog`  
  
## Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="coledialog__getlasterror"></a>  COleDialog::GetLastError  
 Call the `GetLastError` member function to get additional error information when `DoModal` returns **IDABORT**.  
  
```  
UINT GetLastError() const;  
```  
  
### Return Value  
 The error codes returned by `GetLastError` depend on the specific dialog box displayed.  
  
### Remarks  
 See the `DoModal` member function in the derived classes for information about specific error messages.  
  
## See Also  
 [CCommonDialog Class](../VS_visualcpp/CCommonDialog-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)