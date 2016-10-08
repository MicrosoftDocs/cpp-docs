---
title: "CMFCReBar Class"
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
ms.assetid: 02a60e29-6224-49c1-9e74-e0a7d9f8d023
caps.latest.revision: 23
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
# CMFCReBar Class
A `CMFCReBar` object is a control bar that provides layout, persistence, and state information for rebar controls.  
  
## Syntax  
  
```  
class CMFCReBar : public CPane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCReBar::AddBar](#cmfcrebar__addbar)|Adds a band to a rebar.|  
|[CMFCReBar::CalcFixedLayout](#cmfcrebar__calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../VS_visualcpp/CBasePane-Class.md#cbasepane__calcfixedlayout).)|  
|[CMFCReBar::CanFloat](#cmfcrebar__canfloat)|(Overrides [CBasePane::CanFloat](../VS_visualcpp/CBasePane-Class.md#cbasepane__canfloat).)|  
|[CMFCReBar::Create](#cmfcrebar__create)|Creates the rebar control and attaches it to the `CMFCReBar` object.|  
|[CMFCReBar::EnableDocking](#cmfcrebar__enabledocking)|(Overrides [CBasePane::EnableDocking](../VS_visualcpp/CBasePane-Class.md#cbasepane__enabledocking).)|  
|[CMFCReBar::GetReBarBandInfoSize](#cmfcrebar__getrebarbandinfosize)||  
|[CMFCReBar::GetReBarCtrl](#cmfcrebar__getrebarctrl)|Provides direct access to the underlying [CReBarCtrl](../VS_visualcpp/CReBarCtrl-Class.md) common control.|  
|[CMFCReBar::OnShowControlBarMenu](#cmfcrebar__onshowcontrolbarmenu)|(Overrides [CPane::OnShowControlBarMenu](../VS_visualcpp/CPane-Class.md#cpane__onshowcontrolbarmenu).)|  
|[CMFCReBar::OnToolHitTest](#cmfcrebar__ontoolhittest)|(Overrides [CWnd::OnToolHitTest](../VS_visualcpp/CWnd-Class.md#cwnd__ontoolhittest).)|  
|[CMFCReBar::OnUpdateCmdUI](#cmfcrebar__onupdatecmdui)|(Overrides [CBasePane::OnUpdateCmdUI](assetId:///e139f06a-9793-4ee2-bc3d-517389368c77).)|  
|[CMFCReBar::SetPaneAlignment](#cmfcrebar__setpanealignment)|(Overrides [CBasePane::SetPaneAlignment](../VS_visualcpp/CBasePane-Class.md#cbasepane__setpanealignment).)|  
  
## Remarks  
 A `CMFCReBar` object can contain a variety of child windows. This includes edit boxes, toolbars, and list boxes. You can resize the rebar programmatically, or the user can manually resize the rebar by dragging its gripper bar. You can also set the background of a rebar object to a bitmap of your choice.  
  
 A rebar object behaves similarly to a toolbar object. A rebar control can contain one or more bands, and each band can contain a gripper bar, a bitmap, a text label, and a child window.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCReBar` class. The example shows how to create a rebar control and add a band to it. The band functions as an internal toolbar. This code snippet is part of the [Rebar Test sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_RebarTest#1](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RebarTest#1)]  
[!CODE [NVC_MFC_RebarTest#2](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RebarTest#2)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md) [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md) [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md) [CPane](../VS_visualcpp/CPane-Class.md) [CMFCReBar](../VS_visualcpp/CMFCReBar-Class.md)  
  
## Requirements  
 **Header:** afxRebar.h  
  
##  <a name="cmfcrebar__addbar"></a>  CMFCReBar::AddBar  
 Adds a band to a rebar.  
  
```  
BOOL AddBar(  
    CWnd* pBar,  
    LPCTSTR pszText = NULL,  
    CBitmap* pbmp = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP   
);  
BOOL AddBar(  
    CWnd* pBar,  
    COLORREF clrFore,  
    COLORREF clrBack,  
    LPCTSTR pszText = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS   
);  
```  
  
### Parameters  
 [in] [out] `pBar`  
 A pointer to the child window that is to be inserted into the rebar. The referenced object must have the                                 **WS_CHILD** window style.  
  
 [in] `pszText`  
 Specifies the text to appear on the rebar. The text is not part of the child window. Rather, it is displayed on the rebar itself.  
  
 [in] [out] `pbmp`  
 Specifies the bitmap to be displayed on the rebar background.  
  
 [in] `dwStyle`  
 Contains the style to apply to the band. For a complete list of band styles, see the description for `fStyle` in the                                 [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) structure in the Windows SDK documentation.  
  
 [in] `clrFore`  
 Represents the foreground color of the rebar.  
  
 [in] `clrBack`  
 Represents the background color of the rebar.  
  
### Return Value  
 `TRUE` if the band was successfully added to the rebar; otherwise, `FALSE`.  
  
##  <a name="cmfcrebar__create"></a>  CMFCReBar::Create  
 Creates the rebar control and attaches it to the [CMFCReBar](../VS_visualcpp/CMFCReBar-Class.md) object.  
  
```  
BOOL Create(  
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = RBS_BANDBORDERS,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,  
    UINT nID = AFX_IDW_REBAR   
);  
```  
  
### Parameters  
 [in] [out] `pParentWnd`  
 A pointer to the parent window of this rebar control.  
  
 [in] `dwCtrlStyle`  
 Specifies the style for the rebar control. The default style value is                                 **RBS_BANDBORDERS**, which displays narrow lines to separate adjacent bands on the rebar control. For a list of valid styles, see                                 [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the Windows SDK documentation.  
  
 [in] `dwStyle`  
 The window style of the rebar control. For a list of valid styles, see [Window Styles](../VS_visualcpp/Window-Styles.md).  
  
 [in] `nID`  
 The rebar's child-window ID.  
  
### Return Value  
 `TRUE` if the rebar was created successfully; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcrebar__getrebarctrl"></a>  CMFCReBar::GetReBarCtrl  
 Provides direct access to `CReBarCtrl` the underlying common control for `CMFCReBar` objects.  
  
```  
CReBarCtrl& GetReBarCtrl() const;  
```  
  
### Return Value  
 A reference to the underlying `CReBarCtrl` object.  
  
### Remarks  
 Call this method to take advantage of the Windows rebar common control functionality when customizing your rebar.  
  
##  <a name="cmfcrebar__calcfixedlayout"></a>  CMFCReBar::CalcFixedLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize CalcFixedLayout(  
   BOOL bStretch,  
   BOOL bHorz  
);  
```  
  
### Parameters  
 [in] `bStretch`  
  [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcrebar__canfloat"></a>  CMFCReBar::CanFloat  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CanFloat() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcrebar__enabledocking"></a>  CMFCReBar::EnableDocking  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void EnableDocking(  
   DWORD dwDockStyle  
);  
```  
  
### Parameters  
 [in] `dwDockStyle`  
  
### Remarks  
  
##  <a name="cmfcrebar__getrebarbandinfosize"></a>  CMFCReBar::GetReBarBandInfoSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
UINT GetReBarBandInfoSize() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcrebar__onshowcontrolbarmenu"></a>  CMFCReBar::OnShowControlBarMenu  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnShowControlBarMenu( CPoint  
);  
```  
  
### Parameters  
 [in] `CPoint`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcrebar__ontoolhittest"></a>  CMFCReBar::OnToolHitTest  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual INT_PTR OnToolHitTest(  
   CPoint point,  
   TOOLINFO* pTI  
) const;  
```  
  
### Parameters  
 [in] `point`  
  [in] `pTI`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcrebar__onupdatecmdui"></a>  CMFCReBar::OnUpdateCmdUI  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnUpdateCmdUI(  
   CFrameWnd* pTarget,  
   BOOL bDisableIfNoHndler  
);  
```  
  
### Parameters  
 [in] `pTarget`  
  [in] `bDisableIfNoHndler`  
  
### Remarks  
  
##  <a name="cmfcrebar__setpanealignment"></a>  CMFCReBar::SetPaneAlignment  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void SetPaneAlignment(  
   DWORD dwAlignment  
);  
```  
  
### Parameters  
 [in] `dwAlignment`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CReBarCtrl Class](../VS_visualcpp/CReBarCtrl-Class.md)   
 [CPane Class](../VS_visualcpp/CPane-Class.md)