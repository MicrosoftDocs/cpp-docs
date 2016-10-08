---
title: "CSimpleDialog Class"
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
ms.assetid: 2ae65cc9-4f32-4168-aecd-200b4a480fdf
caps.latest.revision: 13
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
# CSimpleDialog Class
This class implements a basic modal dialog box.  
  
## Syntax  
  
```  
template <  
    WORD t_wDlgTemplateID,  
    BOOL t_bCenter = TRUE>  
    class CSimpleDialog :  
    public CDialogImplBase  
```  
  
#### Parameters  
 *t_wDlgTemplateID*  
  
 The resource ID of the dialog template resource.  
  
 *t_bCenter*  
 **TRUE** if the dialog object is to be centered on the owner window; otherwise **FALSE**.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleDialog::DoModal](../Topic/CSimpleDialog::DoModal.md)|Creates a modal dialog box.|  
  
## Remarks  
 Implements a modal dialog box with basic functionality. `CSimpleDialog` provides support for Windows common controls only. To create and display a modal dialog box, create an instance of this class, providing the name of an existing resource template for the dialog box. The dialog box object closes when the user clicks any control with a pre-defined value (such as IDOK or IDCANCEL).  
  
 `CSimpleDialog` allows you to create only modal dialog boxes. `CSimpleDialog` provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.  
  
 See [Implementing a Dialog Box](../VS_visualcpp/Implementing-a-Dialog-Box.md) for more information.  
  
## Inheritance Hierarchy  
 `CDialogImplBase`  
  
 `CSimpleDialog`  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="csimpledialog__domodal"></a>  CSimpleDialog::DoModal  
 Invokes a modal dialog box and returns the dialog-box result when done.  
  
```  
INT_PTR DoModal(  
    HWND hWndParent = ::GetActiveWindow()   
   );  
```  
  
### Parameters  
 `hWndParent`  
 A handle to the parent of the dialog box. If no value is provided, the parent is set to the current active window.  
  
### Return Value  
 If successful, the return value is the resource ID of the control that dismissed the dialog box.  
  
 If the function fails, the return value is –1. To get extended error information, call `GetLastError`.  
  
### Remarks  
 This method handles all interaction with the user while the dialog box is active. This is what makes the dialog box modal; that is, the user cannot interact with other windows until the dialog box is closed.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)