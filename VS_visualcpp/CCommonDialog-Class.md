---
title: "CCommonDialog Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
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
# CCommonDialog Class
The base class for classes that encapsulate functionality of the Windows common dialogs.  
  
## Syntax  
  
```  
class CCommonDialog : public CDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCommonDialog::CCommonDialog](#ccommondialog__ccommondialog)|Constructs a `CCommonDialog` object.|  
  
## Remarks  
 The following classes encapsulate the functionality of the Windows common dialogs:  
  
-   [CFileDialog](../VS_visualcpp/CFileDialog-Class.md)  
  
-   [CFontDialog](../VS_visualcpp/CFontDialog-Class.md)  
  
-   [CColorDialog](../VS_visualcpp/CColorDialog-Class.md)  
  
-   [CPageSetupDialog](../VS_visualcpp/CPageSetupDialog-Class.md)  
  
-   [CPrintDialog](../VS_visualcpp/CPrintDialog-Class.md)  
  
-   [CPrintDialogEx](../VS_visualcpp/CPrintDialogEx-Class.md)  
  
-   [CFindReplaceDialog](../VS_visualcpp/CFindReplaceDialog-Class.md)  
  
-   [COleDialog](../VS_visualcpp/COleDialog-Class.md)  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 `CCommonDialog`  
  
## Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="ccommondialog__ccommondialog"></a>  CCommonDialog::CCommonDialog  
 Constructs a `CCommonDialog` object.  
  
```  
explicit CCommonDialog( CWnd* pParentWnd );  
```  
  
### Parameters  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../VS_visualcpp/CWnd-Class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
### Remarks  
 See [CDialog::CDialog](../VS_visualcpp/CDialog-Class.md#cdialog__cdialog) for complete information.  
  
## See Also  
 [CDialog Class](../VS_visualcpp/CDialog-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CFileDialog Class](../VS_visualcpp/CFileDialog-Class.md)   
 [CFontDialog Class](../VS_visualcpp/CFontDialog-Class.md)   
 [CColorDialog Class](../VS_visualcpp/CColorDialog-Class.md)   
 [CPageSetupDialog Class](../VS_visualcpp/CPageSetupDialog-Class.md)   
 [CPrintDialog Class](../VS_visualcpp/CPrintDialog-Class.md)   
 [CFindReplaceDialog Class](../VS_visualcpp/CFindReplaceDialog-Class.md)   
 [COleDialog Class](../VS_visualcpp/COleDialog-Class.md)