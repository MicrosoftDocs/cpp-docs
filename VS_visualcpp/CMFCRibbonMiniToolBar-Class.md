---
title: "CMFCRibbonMiniToolBar Class"
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
ms.assetid: 7017e963-aeaf-4fe9-b540-e15a7ed41e94
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
# CMFCRibbonMiniToolBar Class
Implements a contextual popup toolbar.  
  
## Syntax  
  
```  
class CMFCRibbonMiniToolBar : public CMFCRibbonPanelMenu  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonMiniToolBar::CMFCRibbonMiniToolBar`|Default constructor.|  
|`CMFCRibbonMiniToolBar::~CMFCRibbonMiniToolBar`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonMiniToolBar::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCRibbonMiniToolBar::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object that is associated with this class type.|  
|[CMFCRibbonMiniToolBar::IsContextMenuMode](#cmfcribbonminitoolbar__iscontextmenumode)||  
|[CMFCRibbonMiniToolBar::IsRibbonMiniToolBar](#cmfcribbonminitoolbar__isribbonminitoolbar)|(Overrides `CMFCPopupMenu::IsRibbonMiniToolBar`.)|  
|[CMFCRibbonMiniToolBar::SetCommands](#cmfcribbonminitoolbar__setcommands)|Sets the list of commands to be displayed on the toolbar.|  
|[CMFCRibbonMiniToolBar::Show](#cmfcribbonminitoolbar__show)|Displays the mini toolbar at the specified screen coordinates.|  
|[CMFCRibbonMiniToolBar::ShowWithContextMenu](#cmfcribbonminitoolbar__showwithcontextmenu)|Displays the mini toolbar together with a context menu.|  
  
## Remarks  
 The mini toolbar is typically displayed after the user selects an object in a document. For example, after the user selects a block of text in a word processing program, the application displays a mini toolbar that contains text formatting commands.  
  
 The mini toolbar becomes transparent when the mouse pointer is out of the bounds of the mini toolbar.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md)  
  
 [CMiniFrameWnd](../VS_visualcpp/CMiniFrameWnd-Class.md)  
  
 [CMFCPopupMenu](../VS_visualcpp/CMFCPopupMenu-Class.md)  
  
 `CMFCRibbonPanelMenu`  
  
 [CMFCRibbonMiniToolBar](../VS_visualcpp/CMFCRibbonMiniToolBar-Class.md)  
  
## Requirements  
 **Header:** afxRibbonMiniToolBar.h  
  
##  <a name="cmfcribbonminitoolbar__setcommands"></a>  CMFCRibbonMiniToolBar::SetCommands  
 Sets the list of commands to be displayed on the toolbar.  
  
```  
void SetCommands(  
    CMFCRibbonBar* pRibbonBar,  
    const CList<UINT,UINT>& lstCommands   
);  
```  
  
### Parameters  
 [in] `pRibbonBar`  
 The ribbon bar that the mini toolbar searches for the buttons to display.  
  
 [in] `lstCommands`  
 The list of commands to be displayed on the mini toolbar. All ribbon categories are searched to find the associated buttons.  
  
### Remarks  
 Use this function to set the list of commands to be displayed in the mini toolbar.  
  
### Example  
 The following example demonstrates how to use the `SetCommands` method of the `CMFCRibbonMiniToolBar` class. This code snippet is part of the [MS Office 2007 Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_MSOffice2007Demo#9](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_MSOffice2007Demo#9)]  
  
##  <a name="cmfcribbonminitoolbar__show"></a>  CMFCRibbonMiniToolBar::Show  
 Displays the mini toolbar at the specified screen coordinates.  
  
```  
BOOL Show(  
    int x,  
    int y   
);  
```  
  
### Parameters  
 [in] `x`  
 Specifies the horizontal position of the mini toolbar in screen coordinates.  
  
 [in] `y`  
 Specifies the vertical position of the mini toolbar in screen coordinates.  
  
### Return Value  
 `TRUE` if the mini toolbar was displayed successfully; otherwise, `FALSE`.  
  
##  <a name="cmfcribbonminitoolbar__showwithcontextmenu"></a>  CMFCRibbonMiniToolBar::ShowWithContextMenu  
 Displays the mini toolbar together with a context menu.  
  
```  
BOOL ShowWithContextMenu(  
    int x,  
    int y,  
    UINT uiMenuResID,  
    CWnd* pWndOwner   
);  
```  
  
### Parameters  
 [in] `x`  
 Specifies the horizontal position of the context menu in screen coordinates.  
  
 [in] `y`  
 Specifies the vertical position of the context menu in screen coordinates.  
  
 [in] `uiMenuResID`  
 Specifies the resource ID of the context menu to display.  
  
 [in] `pWndOwner`  
 Identifies the window which receives messages from the context menu.  
  
### Return Value  
 `TRUE` if the context menu was displayed successfully; otherwise, `FALSE`.  
  
### Remarks  
 Use this function to display a mini toolbar that has a context menu. The context menu is positioned 15 pixels below the mini toolbar.  
  
##  <a name="cmfcribbonminitoolbar__iscontextmenumode"></a>  CMFCRibbonMiniToolBar::IsContextMenuMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsContextMenuMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonminitoolbar__isribbonminitoolbar"></a>  CMFCRibbonMiniToolBar::IsRibbonMiniToolBar  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsRibbonMiniToolBar() const;  
```  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)