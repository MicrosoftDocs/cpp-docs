---
title: "CReBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CReBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rebar controls, control bar"
  - "CReBar class"
  - "Internet Explorer 4.0 common controls"
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
caps.latest.revision: 22
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
# CReBar Class
A control bar that provides layout, persistence, and state information for rebar controls.  
  
## Syntax  
  
```  
class CReBar : public CControlBar  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CReBar::AddBar](#crebar__addbar)|Adds a band to a rebar.|  
|[CReBar::Create](#crebar__create)|Creates the rebar control and attaches it to the `CReBar` object.|  
|[CReBar::GetReBarCtrl](#crebar__getrebarctrl)|Allows direct access to the underlying common control.|  
  
## Remarks  
 A rebar object can contain a variety of child windows, usually other controls, including edit boxes, toolbars, and list boxes. A rebar object can display its child windows over a specified bitmap. Your application can automatically resize the rebar, or the user can manually resize the rebar by clicking or dragging its gripper bar.  
  
 ![Example of RebarMenu](../../mfc/reference/media/vc4sc61.gif "vc4sc61")  
  
## Rebar Control  
 A rebar object behaves similarly to a toolbar object. A rebar uses the click-and-drag mechanism to resize its bands. A rebar control can contain one or more bands, with each band having any combination of a gripper bar, a bitmap, a text label, and a child window. However, bands cannot contain more than one child window.  
  
 **CReBar** uses the [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) class to provide its implementation. You can access the rebar control through [GetReBarCtrl](#crebar__getrebarctrl) to take advantage of the control's customization options. For more information about rebar controls, see `CReBarCtrl`. For more information about using rebar controls, see [Using CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
> [!CAUTION]
>  Rebar and rebar control objects do not support MFC control bar docking. If **CRebar::EnableDocking** is called, your application will assert.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CReBar`  
  
## Requirements  
 **Header:** afxext.h  
  
##  <a name="crebar__addbar"></a>  CReBar::AddBar  
 Call this member function to add a band to the rebar.  
  
```  
BOOL AddBar(
    CWnd* pBar,  
    LPCTSTR pszText = NULL,  
    CBitmap* pbmp = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

 
BOOL AddBar(
    CWnd* pBar,  
    COLORREF clrFore,  
    COLORREF clrBack,  
    LPCTSTR pszText = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```  
  
### Parameters  
 `pBar`  
 A pointer to a `CWnd` object that is the child window to be inserted into the rebar. The referenced object must have a **WS_CHILD**.  
  
 `lpszText`  
 A pointer to a string containing the text to appear on the rebar. **NULL** by default. The text contained in `lpszText` is not part of the child window; it is on the rebar itself.  
  
 `pbmp`  
 A pointer to a `CBitmap` object to be displayed on the rebar background. **NULL** by default.  
  
 `dwStyle`  
 A `DWORD` containing the style to apply to the rebar. See the **fStyle** function description in the Win32 structure [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) for a complete list of band styles.  
  
 *clrFore*  
 A **COLORREF** value that represents the foreground color of the rebar.  
  
 *clrBack*  
 A **COLORREF** value that represents the background color of the rebar.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]  
  
##  <a name="crebar__create"></a>  CReBar::Create  
 Call this member function to create a rebar.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = RBS_BANDBORDERS,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,  
    UINT nID = AFX_IDW_REBAR);
```  
  
### Parameters  
 `pParentWnd`  
 Pointer to the `CWnd` object whose Windows window is the parent of the status bar. Normally your frame window.  
  
 `dwCtrlStyle`  
 The rebar control style. By default, **RBS_BANDBORDERS**, which displays narrow lines to separate adjacent bands within the rebar control. See [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for a list of styles.  
  
 `dwStyle`  
 The rebar window styles.  
  
 `nID`  
 The rebar's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
  See the example for [CReBar::AddBar](#crebar__addbar).  
  
##  <a name="crebar__getrebarctrl"></a>  CReBar::GetReBarCtrl  
 This member function allows direct access to the underlying common control.  
  
```  
CReBarCtrl& GetReBarCtrl() const;

 
```  
  
### Return Value  
 A reference to a [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) object.  
  
### Remarks  
 Call this member function to take advantage of the functionality of the Windows rebar common control in customizing your rebar. When you call `GetReBarCtrl`, it returns a reference object to the `CReBarCtrl` object so you can use either set of member functions.  
  
 For more information about using `CReBarCtrl` to customize your rebar, see [Using CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]  
  
## See Also  
 [MFC Sample MFCIE](../../visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



