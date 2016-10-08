---
title: "CDialogBar Class"
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
ms.assetid: da2f7a30-970c-44e3-87f0-6094bd002cab
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
# CDialogBar Class
Provides the functionality of a Windows modeless dialog box in a control bar.  
  
## Syntax  
  
```  
class CDialogBar : public CControlBar  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDialogBar::CDialogBar](#cdialogbar__cdialogbar)|Constructs a `CDialogBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDialogBar::Create](#cdialogbar__create)|Creates a Windows dialog bar and attaches it to the `CDialogBar` object.|  
  
## Remarks  
 A dialog bar resembles a dialog box in that it contains standard Windows controls that the user can tab between. Another similarity is that you create a dialog template to represent the dialog bar.  
  
 Creating and using a dialog bar is similar to creating and using a `CFormView` object. First, use the [dialog editor](../VS_visualcpp/Dialog-Editor.md) to define a dialog template with the style **WS_CHILD** and no other style. The template must not have the style **WS_VISIBLE**. In your application code, call the constructor to construct the `CDialogBar` object, then call **Create** to create the dialog-bar window and attach it to the `CDialogBar` object.  
  
 For more information on `CDialogBar`, see the article [Dialog Bars](../VS_visualcpp/Dialog-Bars.md) and [Technical Note 31](../VS_visualcpp/TN031--Control-Bars.md), Control Bars.  
  
> [!NOTE]
>  In the current release, a `CDialogBar` object cannot host Windows Forms controls. For more information about Windows Forms controls in Visual C++, see [Using a Windows Form User Control in MFC](../VS_visualcpp/Using-a-Windows-Form-User-Control-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CControlBar](../VS_visualcpp/CControlBar-Class.md)  
  
 `CDialogBar`  
  
## Requirements  
 **Header:** afxext.h  
  
##  <a name="cdialogbar__cdialogbar"></a>  CDialogBar::CDialogBar  
 Constructs a `CDialogBar` object.  
  
```  
CDialogBar();  
```  
  
##  <a name="cdialogbar__create"></a>  CDialogBar::Create  
 Loads the dialog-box resource template specified by `lpszTemplateName` or `nIDTemplate`, creates the dialog-bar window, sets its style, and associates it with the `CDialogBar` object.  
  
```  
virtual BOOL Create(  
    CWnd* pParentWnd,  
    LPCTSTR lpszTemplateName,  
    UINT nStyle,  
    UINT nID );  
  
virtual BOOL Create(  
    CWnd* pParentWnd,  
    UINT nIDTemplate,  
    UINT nStyle,  
    UINT nID );  
```  
  
### Parameters  
 `pParentWnd`  
 A pointer to the parent `CWnd` object.  
  
 `lpszTemplateName`  
 A pointer to the name of the `CDialogBar` object's dialog-box resource template.  
  
 `nStyle`  
 The toolbar style. Additional toolbar styles supported are:  
  
-   `CBRS_TOP` Control bar is at top of the frame window.  
  
-   `CBRS_BOTTOM` Control bar is at bottom of the frame window.  
  
-   `CBRS_NOALIGN` Control bar is not repositioned when the parent is resized.  
  
-   `CBRS_TOOLTIPS` Control bar displays tool tips.  
  
-   **CBRS_SIZE_DYNAMIC** Control bar is dynamic.  
  
-   **CBRS_SIZE_FIXED** Control bar is fixed.  
  
-   **CBRS_FLOATING** Control bar is floating.  
  
-   `CBRS_FLYBY` Status bar displays information about the button.  
  
-   **CBRS_HIDE_INPLACE** Control bar is not displayed to the user.  
  
 `nID`  
 The control ID of the dialog bar.  
  
 `nIDTemplate`  
 The resource ID of the `CDialogBar` object's dialog-box template.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 If you specify the `CBRS_TOP` or `CBRS_BOTTOM` alignment style, the dialog bar's width is that of the frame window and its height is that of the resource specified by `nIDTemplate`. If you specify the `CBRS_LEFT` or `CBRS_RIGHT` alignment style, the dialog bar's height is that of the frame window and its width is that of the resource specified by `nIDTemplate`.  
  
### Example  
 [!CODE [NVC_MFCMessageMaps#13](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCMessageMaps#13)]  
  
## See Also  
 [MFC Sample CTRLBARS](../VS_visualcpp/Visual-C---Samples.md)   
 [CControlBar Class](../VS_visualcpp/CControlBar-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CFormView Class](../VS_visualcpp/CFormView-Class.md)   
 [CControlBar Class](../VS_visualcpp/CControlBar-Class.md)