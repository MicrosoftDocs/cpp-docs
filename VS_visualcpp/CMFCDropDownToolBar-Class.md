---
title: "CMFCDropDownToolBar Class"
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
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
caps.latest.revision: 33
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
# CMFCDropDownToolBar Class
A toolbar that appears when the user presses and holds a top-level toolbar button.  
  
## Syntax  
  
```  
class CMFCDropDownToolBar : public CMFCToolBar  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDropDownToolBar::AllowShowOnPaneMenu](#cmfcdropdowntoolbar__allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|  
|[CMFCDropDownToolBar::LoadBitmap](#cmfcdropdowntoolbar__loadbitmap)|(Overrides [CMFCToolBar::LoadBitmap](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__loadbitmap).)|  
|[CMFCDropDownToolBar::LoadToolBar](#cmfcdropdowntoolbar__loadtoolbar)|(Overrides [CMFCToolBar::LoadToolBar](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__loadtoolbar).)|  
|[CMFCDropDownToolBar::OnLButtonUp](#cmfcdropdowntoolbar__onlbuttonup)||  
|[CMFCDropDownToolBar::OnMouseMove](#cmfcdropdowntoolbar__onmousemove)||  
|[CMFCDropDownToolBar::OnSendCommand](#cmfcdropdowntoolbar__onsendcommand)|(Overrides `CMFCToolBar::OnSendCommand`.)|  
|[CMFCDropDownToolBar::OnUpdateCmdUI](#cmfcdropdowntoolbar__onupdatecmdui)|(Overrides [CMFCToolBar::OnUpdateCmdUI](assetId:///571a38ab-2a56-4968-9796-273516126f80).)|  
  
### Remarks  
 A `CMFCDropDownToolBar` object combines the visual appearance of a toolbar with the behavior of a popup menu. When a user presses and holds a drop-down toolbar button (see [CMFCDropDownToolbarButton Class](../VS_visualcpp/CMFCDropDownToolbarButton-Class.md)), a drop-down toolbar appears, and the user can select a button from the drop-down toolbar by scrolling to it and releasing the mouse button. After the user selects a button in the drop-down toolbar, that button is displayed as the current button on the top-level toolbar.  
  
 A drop-down toolbar cannot be customized or docked, and it does not have a tear-off state.  
  
 The following illustration shows a `CMFCDropDownToolBar` object:  
  
 ![Example of CMFCDropDownToolbar](../VS_visualcpp/media/CMFCDropDown.png "CMFCDropDown")  
  
 You create a `CMFCDropDownToolBar` object the same way you create an ordinary toolbar (see [CMFCToolBar Class](../VS_visualcpp/CMFCToolBar-Class.md)).  
  
 To insert the drop-down toolbar into a parent toolbar:  
  
 1. Reserve a dummy resource ID for the button in the parent toolbar resource.  
  
 2. Create a `CMFCDropDownToolBarButton` object that contains the drop-down toolbar (for more information, see [CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../VS_visualcpp/CMFCDropDownToolbarButton-Class.md#cmfcdropdowntoolbarbutton__cmfcdropdowntoolbarbutton)).  
  
 3. Replace the dummy button with the `CMFCDropDownToolBarButton` object by using [CMFCToolBar::ReplaceButton](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__replacebutton).  
  
 For more information about toolbar buttons, see [Walkthrough: Putting Controls On Toolbars](../VS_visualcpp/Walkthrough--Putting-Controls-On-Toolbars.md). For an example of a drop-down toolbar, see the sample project VisualStudioDemo.  
  
## Example  
 The following example demonstrates how to use the `Create` method in the `CMFCDropDownToolBar` class. This code snippet is part of the [Visual Studio Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_VisualStudioDemo#29](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_VisualStudioDemo#29)]  
[!CODE [NVC_MFC_VisualStudioDemo#30](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_VisualStudioDemo#30)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md)  
  
 [CPane](../VS_visualcpp/CPane-Class.md)  
  
 [CMFCBaseToolBar](../VS_visualcpp/CMFCBaseToolBar-Class.md)  
  
 [CMFCToolBar](../VS_visualcpp/CMFCToolBar-Class.md)  
  
 [CMFCDropDownToolBar](../VS_visualcpp/CMFCDropDownToolBar-Class.md)  
  
## Requirements  
 **Header:** afxdropdowntoolbar.h  
  
##  <a name="cmfcdropdowntoolbar__allowshowonpanemenu"></a>  CMFCDropDownToolBar::AllowShowOnPaneMenu  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdropdowntoolbar__loadbitmap"></a>  CMFCDropDownToolBar::LoadBitmap  
 Loads toolbar images from application resources.  
  
```  
virtual BOOL LoadBitmap(  
    UINT uiResID,  
    UINT uiColdResID=0,  
    UINT uiMenuResID=0,  
    BOOL bLocked=FALSE,  
    UINT uiDisabledResID=0,  
    UINT uiMenuDisabledResID=0 );  
```  
  
### Parameters  
 [in] `uiResID`  
 The resource ID of the bitmap that refers to the hot toolbar images.  
  
 [in] `uiColdResID`  
 The resource ID of the bitmap that refers to the cold toolbar images.  
  
 [in] `uiMenuResID`  
 The resource ID of the bitmap that refers to the regular menu images.  
  
 [in] `bLocked`  
 `TRUE` to lock the toolbar; otherwise `FALSE`.  
  
 [in] `uiDisabledResID`  
 The resource ID of the bitmap that refers to the disabled toolbar images.  
  
 [in] `uiMenuDisabledResID`  
 The resource ID of the bitmap that refers to the disabled menu images.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The [CMFCToolBar::LoadToolBarEx](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__loadtoolbarex) method calls this method to load the images that are associated with the toolbar. Override this method to perform custom loading of image resources.  
  
 Call the `LoadBitmapEx` method to load additional images after you create the toolbar.  
  
##  <a name="cmfcdropdowntoolbar__loadtoolbar"></a>  CMFCDropDownToolBar::LoadToolBar  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL LoadToolBar(  
    UINT uiResID,  
    UINT uiColdResID = 0,  
    UINT uiMenuResID = 0, BOOL = FALSE,  
    UINT uiDisabledResID = 0,  
    UINT uiMenuDisabledResID = 0,  
    UINT uiHotResID = 0);  
```  
  
### Parameters  
 [in] `uiResID`  
  [in] `uiColdResID`  
  [in] `uiMenuResID`  
  [in] `BOOL`  
  [in] `uiDisabledResID`  
  [in] `uiMenuDisabledResID`  
  [in] `uiHotResID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdropdowntoolbar__onlbuttonup"></a>  CMFCDropDownToolBar::OnLButtonUp  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
afx_msg void OnLButtonUp(  
    UINT nFlags,  
    CPoint point );  
```  
  
### Parameters  
 [in] `nFlags`  
  [in] `point`  
  
### Remarks  
  
##  <a name="cmfcdropdowntoolbar__onmousemove"></a>  CMFCDropDownToolBar::OnMouseMove  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
afx_msg void OnMouseMove(  
    UINT nFlags,  
    CPoint point );  
```  
  
### Parameters  
 [in] `nFlags`  
  [in] `point`  
  
### Remarks  
  
##  <a name="cmfcdropdowntoolbar__onsendcommand"></a>  CMFCDropDownToolBar::OnSendCommand  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnSendCommand( const CMFCToolBarButton* pButton );  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcdropdowntoolbar__onupdatecmdui"></a>  CMFCDropDownToolBar::OnUpdateCmdUI  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnUpdateCmdUI(  
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler );  
```  
  
### Parameters  
 [in] `pTarget`  
  [in] `bDisableIfNoHndler`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCToolBar Class](../VS_visualcpp/CMFCToolBar-Class.md)   
 [CMFCToolBar::Create](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__create)   
 [CMFCToolBar::ReplaceButton](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__replacebutton)   
 [CMFCDropDownToolbarButton Class](../VS_visualcpp/CMFCDropDownToolbarButton-Class.md)   
 [Walkthrough: Putting Controls On Toolbars](../VS_visualcpp/Walkthrough--Putting-Controls-On-Toolbars.md)