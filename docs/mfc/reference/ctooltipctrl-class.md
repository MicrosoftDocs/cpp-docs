---
title: "CToolTipCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tool tips [C++], tool tip controls"
  - "data tips [C++]"
  - "CToolTipCtrl class"
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
caps.latest.revision: 20
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
# CToolTipCtrl Class
Encapsulates the functionality of a "tool tip control," a small pop-up window that displays a single line of text describing the purpose of a tool in an application.  
  
## Syntax  
  
```  
class CToolTipCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CToolTipCtrl::CToolTipCtrl](#ctooltipctrl__ctooltipctrl)|Constructs a `CToolTipCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CToolTipCtrl::Activate](#ctooltipctrl__activate)|Activates and deactivates the tool tip control.|  
|[CToolTipCtrl::AddTool](#ctooltipctrl__addtool)|Registers a tool with the tool tip control.|  
|[CToolTipCtrl::AdjustRect](#ctooltipctrl__adjustrect)|Converts between a tool tip control's text display rectangle and its window rectangle.|  
|[CToolTipCtrl::Create](#ctooltipctrl__create)|Creates a tool tip control and attaches it to a `CToolTipCtrl` object.|  
|[CToolTipCtrl::CreateEx](#ctooltipctrl__createex)|Creates a tool tip control with the specified Windows extended styles and attaches it to a `CToolTipCtrl` object.|  
|[CToolTipCtrl::DelTool](#ctooltipctrl__deltool)|Removes a tool from the tool tip control.|  
|[CToolTipCtrl::GetBubbleSize](#ctooltipctrl__getbubblesize)|Retrieves the size of the tool tip.|  
|[CToolTipCtrl::GetCurrentTool](#ctooltipctrl__getcurrenttool)|Retrieves information, such as the size, position, and text, of the tooltip window that the current tooltip control displays.|  
|[CToolTipCtrl::GetDelayTime](#ctooltipctrl__getdelaytime)|Retrieves the initial, pop-up, and reshow durations that are currently set for a tool tip control.|  
|[CToolTipCtrl::GetMargin](#ctooltipctrl__getmargin)|Retrieves the top, left, bottom, and right margins that are set for a tool tip window.|  
|[CToolTipCtrl::GetMaxTipWidth](#ctooltipctrl__getmaxtipwidth)|Retrieves the maximum width for a tool tip window.|  
|[CToolTipCtrl::GetText](#ctooltipctrl__gettext)|Retrieves the text that a tool tip control maintains for a tool.|  
|[CToolTipCtrl::GetTipBkColor](#ctooltipctrl__gettipbkcolor)|Retrieves the background color in a tool tip window.|  
|[CToolTipCtrl::GetTipTextColor](#ctooltipctrl__gettiptextcolor)|Retrieves the text color in a tool tip window.|  
|[CToolTipCtrl::GetTitle](#ctooltipctrl__gettitle)|Retrieves the title of the current tooltip control.|  
|[CToolTipCtrl::GetToolCount](#ctooltipctrl__gettoolcount)|Retrieves a count of the tools maintained by a tool tip control.|  
|[CToolTipCtrl::GetToolInfo](#ctooltipctrl__gettoolinfo)|Retrieves the information that a tool tip control maintains about a tool.|  
|[CToolTipCtrl::HitTest](#ctooltipctrl__hittest)|Tests a point to determine whether it is within the bounding rectangle of the given tool. If so, retrieves information about the tool.|  
|[CToolTipCtrl::Pop](#ctooltipctrl__pop)|Removes a displayed tool tip window from view.|  
|[CToolTipCtrl::Popup](#ctooltipctrl__popup)|Causes the current ToolTip control to display at the coordinates of the last mouse message.|  
|[CToolTipCtrl::RelayEvent](#ctooltipctrl__relayevent)|Passes a mouse message to a tool tip control for processing.|  
|[CToolTipCtrl::SetDelayTime](#ctooltipctrl__setdelaytime)|Sets the initial, pop-up, and reshow durations for a tool tip control.|  
|[CToolTipCtrl::SetMargin](#ctooltipctrl__setmargin)|Sets the top, left, bottom, and right margins for a tool tip window.|  
|[CToolTipCtrl::SetMaxTipWidth](#ctooltipctrl__setmaxtipwidth)|Sets the maximum width for a tool tip window.|  
|[CToolTipCtrl::SetTipBkColor](#ctooltipctrl__settipbkcolor)|Sets the background color in a tool tip window.|  
|[CToolTipCtrl::SetTipTextColor](#ctooltipctrl__settiptextcolor)|Sets the text color in a tool tip window.|  
|[CToolTipCtrl::SetTitle](#ctooltipctrl__settitle)|Adds a standard icon and title string to a tool tip.|  
|[CToolTipCtrl::SetToolInfo](#ctooltipctrl__settoolinfo)|Sets the information that a tool tip maintains for a tool.|  
|[CToolTipCtrl::SetToolRect](#ctooltipctrl__settoolrect)|Sets a new bounding rectangle for a tool.|  
|[CToolTipCtrl::SetWindowTheme](#ctooltipctrl__setwindowtheme)|Sets the visual style of the tool tip window.|  
|[CToolTipCtrl::Update](#ctooltipctrl__update)|Forces the current tool to be redrawn.|  
|[CToolTipCtrl::UpdateTipText](#ctooltipctrl__updatetiptext)|Sets the tool tip text for a tool.|  
  
## Remarks  
 A "tool" is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. A tool tip is hidden most of the time, appearing only when the user puts the cursor on a tool and leaves it there for approximately one-half second. The tool tip appears near the cursor and disappears when the user clicks a mouse button or moves the cursor off the tool.  
  
 `CToolTipCtrl` provides the functionality to control the initial time and duration of the tool tip, the margin widths surrounding the tool tip text, the width of the tool tip window itself, and the background and text color of the tool tip. A single tool tip control can provide information for more than one tool.  
  
 The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. This control (and therefore the `CToolTipCtrl` class) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.  
  
 For more information about enabling tool tips, see [Tool Tips in Windows not Derived from CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
 For more information on using `CToolTipCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CToolTipCtrl](../../mfc/using-ctooltipctrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolTipCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="ctooltipctrl__activate"></a>  CToolTipCtrl::Activate  
 Call this function to activate or deactivate a tool tip control.  
  
```  
void Activate(BOOL bActivate);
```  
  
### Parameters  
 `bActivate`  
 Specifies whether the tool tip control is to be activated or deactivated.  
  
### Remarks  
 If `bActivate` is **TRUE**, the control is activated; if **FALSE**, it is deactivated.  
  
 When a tool tip control is active, the tool tip information appears when the cursor is on a tool that is registered with the control; when it is inactive, the tool tip information does not appear, even when the cursor is on a tool.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctooltipctrl__addtool"></a>  CToolTipCtrl::AddTool  
 Registers a tool with the tool tip control.  
  
```  
BOOL AddTool(
    CWnd* pWnd,  
    UINT nIDText,  
    LPCRECT lpRectTool = NULL,  
    UINT_PTR nIDTool = 0);

 
BOOL AddTool(
    CWnd* pWnd,  
    LPCTSTR lpszText = LPSTR_TEXTCALLBACK,  
    LPCRECT lpRectTool = NULL,  
    UINT_PTR nIDTool = 0);
```  
  
### Parameters  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDText`  
 ID of the string resource that contains the text for the tool.  
  
 *lpRectTool*  
 Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure containing coordinates of the tool's bounding rectangle. The coordinates are relative to the upper-left corner of the client area of the window identified by `pWnd`.  
  
 `nIDTool`  
 ID of the tool.  
  
 `lpszText`  
 Pointer to the text for the tool. If this parameter contains the value **LPSTR_TEXTCALLBACK**, **TTN_NEEDTEXT** notification messages go to the parent of the window that `pWnd` points to.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The **lpRectTool** and **nIDTool** parameters must both be valid, or if **lpRectTool** is NULL, **nIDTool** must be 0.  
  
 A tool tip control can be associated with more than one tool. Call this function to register a tool with the tool tip control, so that the information stored in the tool tip is displayed when the cursor is on the tool.  
  
> [!NOTE]
>  You cannot set a tool tip to a static control using `AddTool`.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctooltipctrl__adjustrect"></a>  CToolTipCtrl::AdjustRect  
 Converts between a tooltip control's text display rectangle and its window rectangle.  
  
```  
BOOL AdjustRect(
    LPRECT lprc,  
    BOOL bLarger = TRUE);
```  
  
### Parameters  
 `lprc`  
 Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that holds either a tool tip window rectangle or a text display rectangle.  
  
 `bLarger`  
 If **TRUE**, `lprc` is used to specify a text-display rectangle, and it receives the corresponding window rectangle. If **FALSE**, `lprc` is used to specify a window rectangle, and it receives the corresponding text display rectangle.  
  
### Return Value  
 Nonzero if the rectangle is successfully adjusted; otherwise 0.  
  
### Remarks  
 This member function calculates a tool tip control's text display rectangle from its window rectangle, or the tool tip window rectangle needed to display a specified text display rectangle.  
  
 This member function implements the behavior of the Win32 message [TTM_ADJUSTRECT](http://msdn.microsoft.com/library/windows/desktop/bb760352), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__create"></a>  CToolTipCtrl::Create  
 Creates a tool tip control and attaches it to a `CToolTipCtrl` object.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd, DWORD dwStyle = 0);
```  
  
### Parameters  
 `pParentWnd`  
 Specifies the tool tip control's parent window, usually a `CDialog`. It must not be **NULL**.  
  
 `dwStyle`  
 Specifies the tool tip control's style. See the **Remarks** section for more information.  
  
### Return Value  
 Nonzero if the `CToolTipCtrl` object is successfully created; otherwise 0.  
  
### Remarks  
 You construct a `CToolTipCtrl` in two steps. First, call the constructor to construct the `CToolTipCtrl` object, and then call **Create** to create the tool tip control and attach it to the `CToolTipCtrl` object.  
  
 The `dwStyle` parameter can be any combination of [Window Styles](../../mfc/reference/window-styles.md). In addition, a tool tip control has two class-specific styles: **TTS_ALWAYSTIP** and **TTS_NOPREFIX**.  
  
|Style|Meaning|  
|-----------|-------------|  
|**TTS_ALWAYSTIP**|Specifies that the tool tip will appear when the cursor is on a tool, regardless of whether the tool tip control's owner window is active or inactive. Without this style, the tool tip control appears when the tool's owner window is active, but not when it is inactive.|  
|**TTS_NOPREFIX**|This style prevents the system from stripping the ampersand (&) character from a string. If a tool tip control does not have the **TTS_NOPREFIX** style, the system automatically strips ampersand characters, allowing an application to use the same string as both a menu item and as text in a tool tip control.|  
  
 A tool tip control has the `WS_POPUP` and **WS_EX_TOOLWINDOW** window styles, regardless of whether you specify them when creating the control.  
  
 To create a tool tip control with extended windows styles, call [CToolTipCtrl::CreateEx](#ctooltipctrl__createex) instead of **Create**.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctooltipctrl__createex"></a>  CToolTipCtrl::CreateEx  
 Creates a control (a child window) and associate it with the `CToolTipCtrl` object.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwStyle = 0,  
    DWORD dwStyleEx = 0);
```  
  
### Parameters  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `dwStyle`  
 Specifies the tool tip control's style. See the **Remarks** section of [Create](#ctooltipctrl__create) for more information.  
  
 *dwStyleEx*  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of **Create** to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="ctooltipctrl__ctooltipctrl"></a>  CToolTipCtrl::CToolTipCtrl  
 Constructs a `CToolTipCtrl` object.  
  
```  
CToolTipCtrl();
```  
  
### Remarks  
 You must call **Create** after constructing the object.  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]  
  
##  <a name="ctooltipctrl__deltool"></a>  CToolTipCtrl::DelTool  
 Removes the tool specified by `pWnd` and `nIDTool` from the collection of tools supported by a tool tip control.  
  
```  
void DelTool(
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);
```  
  
### Parameters  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDTool`  
 ID of the tool.  
  
##  <a name="ctooltipctrl__getbubblesize"></a>  CToolTipCtrl::GetBubbleSize  
 Retrieves the size of the tool tip.  
  
```  
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;

 
```  
  
### Parameters  
 `lpToolInfo`  
 A pointer to the tool tip's [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure.  
  
### Return Value  
 The size of the tool tip.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETBUBBLESIZE](http://msdn.microsoft.com/library/windows/desktop/bb760387), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__getcurrenttool"></a>  CToolTipCtrl::GetCurrentTool  
 Retrieves information, such as the size, position, and text, of the tooltip window displayed by the current tooltip control.  
  
```  
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `lpToolInfo`|Pointer to a [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure that receives information about the current tooltip window.|  
  
### Return Value  
 `true` if the information is retrieved successfully; otherwise, `false.`  
  
### Remarks  
 This method sends the [TTM_GETCURRENTTOOL](http://msdn.microsoft.com/library/windows/desktop/bb760389) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example retrieves information about the current tooltip window.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]  
  
##  <a name="ctooltipctrl__getdelaytime"></a>  CToolTipCtrl::GetDelayTime  
 Retrieves the initial, pop-up, and reshow durations currently set for a tool tip control.  
  
```  
int GetDelayTime(DWORD dwDuration) const;

 
```  
  
### Parameters  
 `dwDuration`  
 Flag that specifies which duration value will be retrieved. This parameter can be one of the following values:  
  
- `TTDT_AUTOPOP` Retrieve the length of time the tool tip window remains visible if the pointer is stationary within a tool's bounding rectangle.  
  
- `TTDT_INITIAL` Retrieve the length of time the pointer must remain stationary within a tool's bounding rectangle before the tool tip window appears.  
  
- `TTDT_RESHOW` Retrieve the length of time it takes for subsequent tool tip windows to appear as the pointer moves from one tool to another.  
  
### Return Value  
 The specified delay time, in milliseconds  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETDELAYTIME](http://msdn.microsoft.com/library/windows/desktop/bb760390), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__getmargin"></a>  CToolTipCtrl::GetMargin  
 Retrieves the top, left, bottom, and right margins set for a tool tip window.  
  
```  
void GetMargin(LPRECT lprc) const;

 
```  
  
### Parameters  
 `lprc`  
 Address of a `RECT` structure that will receive the margin information. The members of the [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure do not define a bounding rectangle. For the purpose of this message, the structure members are interpreted as follows:  
  
|Member|Representation|  
|------------|--------------------|  
|**top**|Distance between top border and top of tool tip text, in pixels.|  
|**left**|Distance between left border and left end of tip text, in pixels.|  
|**bottom**|Distance between bottom border and bottom of tip text, in pixels.|  
|**right**|Distance between right border and right end of tip text, in pixels.|  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760391), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__getmaxtipwidth"></a>  CToolTipCtrl::GetMaxTipWidth  
 Retrieves the maximum width for a tool tip window.  
  
```  
int GetMaxTipWidth() const;

 
```  
  
### Return Value  
 The maximum width for a tool tip window.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760392), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__gettext"></a>  CToolTipCtrl::GetText  
 Retrieves the text that a tool tip control maintains for a tool.  
  
```  
void GetText(
    CString& str,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;

 
```  
  
### Parameters  
 `str`  
 Reference to a `CString` object that receives the tool's text.  
  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDTool`  
 ID of the tool.  
  
### Remarks  
 The `pWnd` and `nIDTool` parameters identify the tool. If that tool has been previously registered with the tool tip control through a previous call to **CToolTipCtrl::AddTool**, the object referenced by the `str` parameter is assigned the tool's text.  
  
##  <a name="ctooltipctrl__gettipbkcolor"></a>  CToolTipCtrl::GetTipBkColor  
 Retrieves the background color in a tool tip window.  
  
```  
COLORREF GetTipBkColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that represents the background color.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760394), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__gettiptextcolor"></a>  CToolTipCtrl::GetTipTextColor  
 Retrieves the text color in a tool tip window.  
  
```  
COLORREF GetTipTextColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that represents the text color.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_GETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760395), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__gettitle"></a>  CToolTipCtrl::GetTitle  
 Retrieves the title of the current tooltip control.  
  
```  
void GetTitle(PTTGETTITLE pttgt) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `pttgt`|Pointer to a [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) structure that contains information about the ToolTip control. When this method returns, the `pszTitle` member of the [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) structure points to the text of the title.|  
  
### Remarks  
 This method sends the [TTM_GETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760396) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__gettoolcount"></a>  CToolTipCtrl::GetToolCount  
 Retrieves a count of the tools registered with the tool tip control.  
  
```  
int GetToolCount() const;

 
```  
  
### Return Value  
 A count of tools registered with the tool tip control.  
  
##  <a name="ctooltipctrl__gettoolinfo"></a>  CToolTipCtrl::GetToolInfo  
 Retrieves the information that a tool tip control maintains about a tool.  
  
```  
BOOL GetToolInfo(
    CToolInfo& ToolInfo,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;

 
```  
  
### Parameters  
 *ToolInfo*  
 Reference to a `TOOLINFO` object that receives the tool's text.  
  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDTool`  
 ID of the tool.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The **hwnd** and **uId** members of the [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure referenced by *CToolInfo* identify the tool. If that tool has been registered with the tool tip control through a previous call to `AddTool`, the `TOOLINFO` structure is filled with information about the tool.  
  
##  <a name="ctooltipctrl__hittest"></a>  CToolTipCtrl::HitTest  
 Tests a point to determine whether it is within the bounding rectangle of the given tool and, if so, retrieve information about the tool.  
  
```  
BOOL HitTest(
    CWnd* pWnd,  
    CPoint pt,  
    LPTOOLINFO lpToolInfo) const;

 
```  
  
### Parameters  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `pt`  
 Pointer to a `CPoint` object containing the coordinates of the point to be tested.  
  
 `lpToolInfo`  
 Pointer to [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure that contains information about the tool.  
  
### Return Value  
 Nonzero if the point specified by the hit-test information is within the tool's bounding rectangle; otherwise 0.  
  
### Remarks  
 If this function returns a nonzero value, the structure pointed to by `lpToolInfo` is filled with information on the tool within whose rectangle the point lies.  
  
 The `TTHITTESTINFO` structure is defined as follows:  
  
 `typedef struct _TT_HITTESTINFO { // tthti`  
  
 `HWND hwnd;   // handle of tool or window with tool`  
  
 `POINT pt;    // client coordinates of point to test`  
  
 `TOOLINFO ti; // receives information about the tool`  
  
 `} TTHITTESTINFO, FAR * LPHITTESTINFO;`  
  
 **hwnd**  
 Specifies the tool's handle.  
  
 **pt**  
 Specifies the coordinates of a point if the point is in the tool's bounding rectangle.  
  
 **ti**  
 Information about the tool. For more information about the `TOOLINFO` structure, see [CToolTipCtrl::GetToolInfo](#ctooltipctrl__gettoolinfo).  
  
##  <a name="ctooltipctrl__pop"></a>  CToolTipCtrl::Pop  
 Removes a displayed tool tip window from the view.  
  
```  
void Pop();
```  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_POP](http://msdn.microsoft.com/library/windows/desktop/bb760401), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__popup"></a>  CToolTipCtrl::Popup  
 Causes the current tooltip control to display at the coordinates of the last mouse message.  
  
```  
void Popup();
```  
  
### Remarks  
 This method sends the [TTM_POPUP](http://msdn.microsoft.com/library/windows/desktop/bb760402) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example displays a tooltip window.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]  
  
##  <a name="ctooltipctrl__relayevent"></a>  CToolTipCtrl::RelayEvent  
 Passes a mouse message to a tool tip control for processing.  
  
```  
void RelayEvent(LPMSG lpMsg);
```  
  
### Parameters  
 `lpMsg`  
 Pointer to a [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) structure that contains the message to relay.  
  
### Remarks  
 A tool tip control processes only the following messages, which are sent to it by `RelayEvent`:  
  
|WM_LBUTTONDOWN|WM_MOUSEMOVE|  
|---------------------|-------------------|  
|`WM_LBUTTONUP`|`WM_RBUTTONDOWN`|  
|`WM_MBUTTONDOWN`|`WM_RBUTTONUP`|  
|`WM_MBUTTONUP`||  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctooltipctrl__setdelaytime"></a>  CToolTipCtrl::SetDelayTime  
 Sets the delay time for a tool tip control.  
  
```  
void SetDelayTime(
    UINT nDelay);

 
void SetDelayTime(
    DWORD dwDuration,  
    int iTime);
```  
  
### Parameters  
 *nDelay*  
 Specifies the new delay time, in milliseconds.  
  
 `dwDuration`  
 Flag that specifies which duration value will be retrieved. See [CToolTipCtrl::GetDelayTime](#ctooltipctrl__getdelaytime) for a description of the valid values.  
  
 *iTime*  
 The specified delay time, in milliseconds.  
  
### Remarks  
 The delay time is the length of time the cursor must remain on a tool before the tool tip window appears. The default delay time is 500 milliseconds.  
  
##  <a name="ctooltipctrl__setmargin"></a>  CToolTipCtrl::SetMargin  
 Sets the top, left, bottom, and right margins for a tool tip window.  
  
```  
void SetMargin(LPRECT lprc);
```  
  
### Parameters  
 `lprc`  
 Address of a `RECT` structure that contains the margin information to be set. The members of the `RECT` structure do not define a bounding rectangle. See [CToolTipCtrl::GetMargin](#ctooltipctrl__getmargin) for a description of the margin information.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_SETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760406), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__setmaxtipwidth"></a>  CToolTipCtrl::SetMaxTipWidth  
 Sets the maximum width for a tool tip window.  
  
```  
int SetMaxTipWidth(int iWidth);
```  
  
### Parameters  
 *iWidth*  
 The maximum tool tip window width to be set.  
  
### Return Value  
 The previous maximum tip width.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_SETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760408), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__settipbkcolor"></a>  CToolTipCtrl::SetTipBkColor  
 Sets the background color in a tool tip window.  
  
```  
void SetTipBkColor(COLORREF clr);
```  
  
### Parameters  
 `clr`  
 The new background color.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_SETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760411), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__settiptextcolor"></a>  CToolTipCtrl::SetTipTextColor  
 Sets the text color in a tool tip window.  
  
```  
void SetTipTextColor(COLORREF clr);
```  
  
### Parameters  
 `clr`  
 The new text color.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_SETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760413), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__settitle"></a>  CToolTipCtrl::SetTitle  
 Adds a standard icon and title string to a tool tip.  
  
```  
BOOL SetTitle(
    UINT uIcon,  
    LPCTSTR lpstrTitle);
```  
  
### Parameters  
 *uIcon*  
 See *icon* in [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *lpstrTitle*  
 Pointer to the title string.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__settoolinfo"></a>  CToolTipCtrl::SetToolInfo  
 Sets the information that a tool tip maintains for a tool.  
  
```  
void SetToolInfo(LPTOOLINFO lpToolInfo);
```  
  
### Parameters  
 `lpToolInfo`  
 A pointer to a [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) structure that specifies the information to set.  
  
##  <a name="ctooltipctrl__settoolrect"></a>  CToolTipCtrl::SetToolRect  
 Sets a new bounding rectangle for a tool.  
  
```  
void SetToolRect(
    CWnd* pWnd,  
    UINT_PTR nIDTool,  
    LPCRECT lpRect);
```  
  
### Parameters  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDTool`  
 ID of the tool.  
  
 `lpRect`  
 Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the new bounding rectangle.  
  
##  <a name="ctooltipctrl__setwindowtheme"></a>  CToolTipCtrl::SetWindowTheme  
 Sets the visual style of the tool tip window.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### Parameters  
 `pszSubAppName`  
 A pointer to a Unicode string that contains the visual style to set.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [TTM_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb760418) message, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctooltipctrl__update"></a>  CToolTipCtrl::Update  
 Forces the current tool to be redrawn.  
  
```  
void Update();
```  
  
##  <a name="ctooltipctrl__updatetiptext"></a>  CToolTipCtrl::UpdateTipText  
 Updates the tool tip text for this control's tools.  
  
```  
void UpdateTipText(
    LPCTSTR lpszText,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);

 
void UpdateTipText(
    UINT nIDText,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);
```  
  
### Parameters  
 `lpszText`  
 Pointer to the text for the tool.  
  
 `pWnd`  
 Pointer to the window that contains the tool.  
  
 `nIDTool`  
 ID of the tool.  
  
 `nIDText`  
 ID of the string resource that contains the text for the tool.  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CToolBar Class](../../mfc/reference/ctoolbar-class.md)
