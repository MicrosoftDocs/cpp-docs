---
title: "CControlBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CControlBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CControlBar class"
  - "OLE resize bars"
  - "OLE resize bars, base class"
  - "dialog bars, base class"
  - "toolbars [C++], base class"
  - "control bars [C++], base class"
  - "status bars, base class"
ms.assetid: 4d668c55-9b42-4838-97ac-cf2b3000b82c
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
# CControlBar Class
The base class for the control-bar classes [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md), and [COleResizeBar](../../mfc/reference/coleresizebar-class.md).  
  
## Syntax  
  
```  
class CControlBar : public CWnd  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CControlBar::CControlBar](#ccontrolbar__ccontrolbar)|Constructs a `CControlBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CControlBar::CalcDynamicLayout](#ccontrolbar__calcdynamiclayout)|Returns the size of a dynamic control bar as a [CSize](../../atl-mfc-shared/reference/csize-class.md) object.|  
|[CControlBar::CalcFixedLayout](#ccontrolbar__calcfixedlayout)|Returns the size of the control bar as a [CSize](../../atl-mfc-shared/reference/csize-class.md) object.|  
|[CControlBar::CalcInsideRect](#ccontrolbar__calcinsiderect)|Returns the current dimensions of the control bar area; including the borders.|  
|[CControlBar::DoPaint](#ccontrolbar__dopaint)|Renders the borders and gripper of the control bar.|  
|[CControlBar::DrawBorders](#ccontrolbar__drawborders)|Renders the borders of the control bar.|  
|[CControlBar::DrawGripper](#ccontrolbar__drawgripper)|Renders the gripper of the control bar.|  
|[CControlBar::EnableDocking](#ccontrolbar__enabledocking)|Allows a control bar to be docked or floating.|  
|[CControlBar::GetBarStyle](#ccontrolbar__getbarstyle)|Retrieves the control bar style settings.|  
|[CControlBar::GetBorders](#ccontrolbar__getborders)|Retrieves the border values of the control bar.|  
|[CControlBar::GetCount](#ccontrolbar__getcount)|Returns the number of non- `HWND` elements in the control bar.|  
|[CControlBar::GetDockingFrame](#ccontrolbar__getdockingframe)|Returns a pointer to the frame to which a control bar is docked.|  
|[CControlBar::IsFloating](#ccontrolbar__isfloating)|Returns a nonzero value if the control bar in question is a floating control bar.|  
|[CControlBar::OnUpdateCmdUI](#ccontrolbar__onupdatecmdui)|Calls the Command UI handlers.|  
|[CControlBar::SetBarStyle](#ccontrolbar__setbarstyle)|Modifies the control bar style settings.|  
|[CControlBar::SetBorders](#ccontrolbar__setborders)|Sets the border values of the control bar.|  
|[CControlBar::SetInPlaceOwner](#ccontrolbar__setinplaceowner)|Changes the in-place owner of a control bar.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CControlBar::m_bAutoDelete](#ccontrolbar__m_bautodelete)|If nonzero, the `CControlBar` object is deleted when the Windows control bar is destroyed.|  
|[CControlBar::m_pInPlaceOwner](#ccontrolbar__m_pinplaceowner)|The in-place owner of the control bar.|  
  
## Remarks  
 A control bar is a window that is usually aligned to the left or right of a frame window. It may contain child items that are either `HWND`-based controls, which are windows that generate and respond to Windows messages, or non- `HWND`-based items, which are not windows and are managed by application code or framework code. List boxes and edit controls are examples of `HWND`-based controls; status-bar panes and bitmap buttons are examples of non- `HWND`-based controls.  
  
 Control-bar windows are usually child windows of a parent frame window and are usually siblings to the client view or MDI client of the frame window. A `CControlBar` object uses information about the parent window's client rectangle to position itself. It then informs the parent window as to how much space remains unallocated in the parent window's client area.  
  
 For more information on `CControlBar`, see:  
  
- [Control Bars](../../mfc/control-bars.md)  
  
- [Technical Note 31: Control Bars](../../mfc/tn031-control-bars.md).  
  
-   Knowledge Base article Q242577 : PRB: Update Command UI Handlers Do Not Work for Menu Attached to a Dialog Box  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CControlBar`  
  
## Requirements  
 **Header:** afxext.h  
  
##  <a name="ccontrolbar__calcdynamiclayout"></a>  CControlBar::CalcDynamicLayout  
 The framework calls this member function to calculate the dimensions of a dynamic toolbar.  
  
```  
virtual CSize CalcDynamicLayout(
    int nLength,  
    DWORD nMode);
```  
  
### Parameters  
 `nLength`  
 The requested dimension of the control bar, either horizontal or vertical, depending on `dwMode`.  
  
 `nMode`  
 The following predefined flags are used to determine the height and width of the dynamic control bar. Use the bitwise-OR (&#124;) operator to combine the flags.  
  
|Layout mode flags|What it means|  
|-----------------------|-------------------|  
|`LM_STRETCH`|Indicates whether the control bar should be stretched to the size of the frame. Set if the bar is not a docking bar (not available for docking). Not set when the bar is docked or floating (available for docking). If set, `LM_STRETCH` ignores `nLength` and returns dimensions based on the `LM_HORZ` state. `LM_STRETCH` works similarly to the `bStretch` parameter used in [CalcFixedLayout](#ccontrolbar__calcfixedlayout); see that member function for more information about the relationship between stretching and orientation.|  
|`LM_HORZ`|Indicates that the bar is horizontally or vertically oriented. Set if the bar is horizontally oriented, and if it is vertically oriented, it is not set. `LM_HORZ` works similarly to the `bHorz` parameter used in [CalcFixedLayout](#ccontrolbar__calcfixedlayout); see that member function for more information about the relationship between stretching and orientation.|  
|**LM_MRUWIDTH**|Most Recently Used Dynamic Width. Ignores `nLength` parameter and uses the remembered most recently used width.|  
|`LM_HORZDOCK`|Horizontal Docked Dimensions. Ignores `nLength` parameter and returns the dynamic size with the largest width.|  
|`LM_VERTDOCK`|Vertical Docked Dimensions. Ignores `nLength` parameter and returns the dynamic size with the largest height.|  
|`LM_LENGTHY`|Set if `nLength` indicates height (Y-direction) instead of width.|  
|`LM_COMMIT`|Resets **LM_MRUWIDTH** to current width of floating control bar.|  
  
### Return Value  
 The control bar size, in pixels, of a [CSize](../../atl-mfc-shared/reference/csize-class.md) object.  
  
### Remarks  
 Override this member function to provide your own dynamic layout in classes you derive from `CControlBar`. MFC classes derived from `CControlBar`, such as [CToolbar](../../mfc/reference/ctoolbar-class.md), override this member function and provide their own implementation.  
  
##  <a name="ccontrolbar__calcfixedlayout"></a>  CControlBar::CalcFixedLayout  
 Call this member function to calculate the horizontal size of a control bar.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 `bStretch`  
 Indicates whether the bar should be stretched to the size of the frame. The `bStretch` parameter is nonzero when the bar is not a docking bar (not available for docking) and is 0 when it is docked or floating (available for docking).  
  
 `bHorz`  
 Indicates that the bar is horizontally or vertically oriented. The `bHorz` parameter is nonzero if the bar is horizontally oriented and is 0 if it is vertically oriented.  
  
### Return Value  
 The control bar size, in pixels, of a `CSize` object.  
  
### Remarks  
 Control bars such as toolbars can stretch horizontally or vertically to accommodate the buttons contained in the control bar.  
  
 If `bStretch` is **TRUE**, stretch the dimension along the orientation provided by `bHorz`. In other words, if `bHorz` is **FALSE**, the control bar is stretched vertically. If `bStretch` is **FALSE**, no stretch occurs. The following table shows the possible permutations, and resulting control-bar styles, of `bStretch` and `bHorz`.  
  
|bStretch|bHorz|Stretching|Orientation|Docking/Not docking|  
|--------------|-----------|----------------|-----------------|--------------------------|  
|**TRUE**|**TRUE**|Horizontal stretching|Horizontally oriented|Not docking|  
|**TRUE**|**FALSE**|Vertical stretching|Vertically oriented|Not docking|  
|**FALSE**|**TRUE**|No stretching available|Horizontally oriented|Docking|  
|**FALSE**|**FALSE**|No stretching available|Vertically oriented|Docking|  
  
##  <a name="ccontrolbar__calcinsiderect"></a>  CControlBar::CalcInsideRect  
 The framework calls this function to calculate the client area of the control bar.  
  
```  
virtual void CalcInsideRect(
    CRect& rect,  
    BOOL bHorz) const;

 
```  
  
### Parameters  
 `rect`  
 Contains the current dimensions of the control bar; including the borders.  
  
 `bHorz`  
 Indicates that the bar is horizontally or vertically oriented. The `bHorz` parameter is nonzero if the bar is horizontally oriented and is 0 if it is vertically oriented.  
  
### Remarks  
 This function is called before the control bar is painted.  
  
 Override this function to customize the rendering of the borders and gripper bar of the control bar.  
  
##  <a name="ccontrolbar__ccontrolbar"></a>  CControlBar::CControlBar  
 Constructs a `CControlBar` object.  
  
```  
CControlBar();
```  
  
##  <a name="ccontrolbar__dopaint"></a>  CControlBar::DoPaint  
 Called by the framework to render the borders and gripper bar of the control bar.  
  
```  
virtual void DoPaint(CDC* pDC);
```  
  
### Parameters  
 `pDC`  
 Points to the device context to be used for rendering the borders and gripper of the control bar.  
  
### Remarks  
 Override this function to customize the drawing behavior of the control bar.  
  
 Another customization method is to override the `DrawBorders` and `DrawGripper` functions and add custom drawing code for the borders and gripper. Because these methods are called by the default `DoPaint` method, an override of `DoPaint` is not needed.  
  
##  <a name="ccontrolbar__drawborders"></a>  CControlBar::DrawBorders  
 Called by the framework to render the borders of the control bar.  
  
```  
virtual void DrawBorders(
    CDC* pDC,  
    CRect& rect);
```  
  
### Parameters  
 `pDC`  
 Points to the device context to be used for rendering the borders of the control bar.  
  
 `rect`  
 A `CRect` object containing the dimensions of the control bar.  
  
### Remarks  
 Override this function to customize the appearance of the control bar borders.  
  
##  <a name="ccontrolbar__drawgripper"></a>  CControlBar::DrawGripper  
 Called by the framework to render the gripper of the control bar.  
  
```  
virtual void DrawGripper(
    CDC* pDC,  
    const CRect& rect);
```  
  
### Parameters  
 `pDC`  
 Points to the device context to be used for rendering the control bar gripper.  
  
 `rect`  
 A `CRect` object containing the dimensions of the control bar gripper.  
  
### Remarks  
 Override this function to customize the appearance of the control bar gripper.  
  
##  <a name="ccontrolbar__enabledocking"></a>  CControlBar::EnableDocking  
 Call this function to enable a control bar to be docked.  
  
```  
void EnableDocking(DWORD dwDockStyle);
```  
  
### Parameters  
 `dwDockStyle`  
 Specifies whether the control bar supports docking and the sides of its parent window to which the control bar can be docked, if supported. Can be one or more of the following:  
  
- `CBRS_ALIGN_TOP` Allows docking at the top of the client area.  
  
- `CBRS_ALIGN_BOTTOM` Allows docking at the bottom of the client area.  
  
- `CBRS_ALIGN_LEFT` Allows docking on the left side of the client area.  
  
- `CBRS_ALIGN_RIGHT` Allows docking on the right side of the client area.  
  
- `CBRS_ALIGN_ANY` Allows docking on any side of the client area.  
  
- `CBRS_FLOAT_MULTI` Allows multiple control bars to be floated in a single mini-frame window.  
  
 If 0 (that is, indicating no flags), the control bar will not dock.  
  
### Remarks  
 The sides specified must match one of the sides enabled for docking in the destination frame window, or the control bar cannot be docked to that frame window.  
  
##  <a name="ccontrolbar__getbarstyle"></a>  CControlBar::GetBarStyle  
 Call this function to determine which **CBRS_** (control bar styles) settings are currently set for the control bar.  
  
```  
DWORD GetBarStyle();
```  
  
### Return Value  
 The current **CBRS_** (control bar styles) settings for the control bar. See [CControlBar::SetBarStyle](#ccontrolbar__setbarstyle) for the complete list of available styles.  
  
### Remarks  
 Does not handle **WS_** (window style) styles.  
  
##  <a name="ccontrolbar__getborders"></a>  CControlBar::GetBorders  
 Returns the current border values for the control bar.  
  
```  
CRect GetBorders() const;

 
```  
  
### Return Value  
 A `CRect` object that contains the current width (in pixels) of each side of the control bar object. For example, the value of the `left` member, of [CRect](../../atl-mfc-shared/reference/crect-class.md) object, is the width of the left hand border.  
  
##  <a name="ccontrolbar__getcount"></a>  CControlBar::GetCount  
 Returns the number of non- `HWND` items on the `CControlBar` object.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of non- `HWND` items on the `CControlBar` object. This function returns 0 for a [CDialogBar](../../mfc/reference/cdialogbar-class.md) object.  
  
### Remarks  
 The type of the item depends on the derived object: panes for [CStatusBar](../../mfc/reference/cstatusbar-class.md) objects, and buttons and separators for [CToolBar](../../mfc/reference/ctoolbar-class.md) objects.  
  
##  <a name="ccontrolbar__getdockingframe"></a>  CControlBar::GetDockingFrame  
 Call this member function to obtain a pointer to the current frame window to which your control bar is docked.  
  
```  
CFrameWnd* GetDockingFrame() const;

 
```  
  
### Return Value  
 A pointer to a frame window if successful; otherwise **NULL**.  
  
 If the control bar is not docked to a frame window (that is, if the control bar is floating), this function will return a pointer to its parent [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md).  
  
### Remarks  
 For more information about dockable control bars, see [CControlBar::EnableDocking](#ccontrolbar__enabledocking) and [CFrameWnd::DockControlBar](../../mfc/reference/cframewnd-class.md#cframewnd__dockcontrolbar).  
  
##  <a name="ccontrolbar__isfloating"></a>  CControlBar::IsFloating  
 Call this member function to determine whether the control bar is floating or docked.  
  
```  
BOOL IsFloating() const;

 
```  
  
### Return Value  
 Nonzero if the control bar is floating; otherwise 0.  
  
### Remarks  
 To change the state of a control bar from docked to floating, call [CFrameWnd::FloatControlBar](../../mfc/reference/cframewnd-class.md#cframewnd__floatcontrolbar).  
  
##  <a name="ccontrolbar__m_bautodelete"></a>  CControlBar::m_bAutoDelete  
 If nonzero, the `CControlBar` object is deleted when the Windows control bar is destroyed.  
  
```  
BOOL m_bAutoDelete;  
```  
  
### Remarks  
 `m_bAutoDelete` is a public variable of type **BOOL**.  
  
 A control-bar object is usually embedded in a frame-window object. In this case, `m_bAutoDelete` is 0 because the embedded control-bar object is destroyed when the frame window is destroyed.  
  
 Set this variable to a nonzero value if you allocate a `CControlBar` object on the heap and you do not plan to call **delete**.  
  
##  <a name="ccontrolbar__m_pinplaceowner"></a>  CControlBar::m_pInPlaceOwner  
 The in-place owner of the control bar.  
  
```  
CWnd* m_pInPlaceOwner;  
```  
  
##  <a name="ccontrolbar__onupdatecmdui"></a>  CControlBar::OnUpdateCmdUI  
 This member function is called by the framework to update the status of the toolbar or status bar.  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler) = 0;  
```  
  
### Parameters  
 `pTarget`  
 Points to the main frame window of the application. This pointer is used for routing update messages.  
  
 `bDisableIfNoHndler`  
 Flag that indicates whether a control that has no update handler should be automatically displayed as disabled.  
  
### Remarks  
 To update an individual button or pane, use the `ON_UPDATE_COMMAND_UI` macro in your message map to set an update handler appropriately. See [ON_UPDATE_COMMAND_UI](http://msdn.microsoft.com/library/c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4) for more information about using this macro.  
  
 `OnUpdateCmdUI` is called by the framework when the application is idle. The frame window to be updated must be a child window, at least indirectly, of a visible frame window. `OnUpdateCmdUI` is an advanced overridable.  
  
##  <a name="ccontrolbar__setbarstyle"></a>  CControlBar::SetBarStyle  
 Call this function to set the desired **CBRS_** styles for the control bar.  
  
```  
void SetBarStyle(DWORD dwStyle);
```  
  
### Parameters  
 `dwStyle`  
 The desired styles for the control bar. Can be one or more of the following:  
  
- `CBRS_ALIGN_TOP` Allows the control bar to be docked to the top of the client area of a frame window.  
  
- `CBRS_ALIGN_BOTTOM` Allows the control bar to be docked to the bottom of the client area of a frame window.  
  
- `CBRS_ALIGN_LEFT` Allows the control bar to be docked to the left side of the client area of a frame window.  
  
- `CBRS_ALIGN_RIGHT` Allows the control bar to be docked to the right side of the client area of a frame window.  
  
- `CBRS_ALIGN_ANY` Allows the control bar to be docked to any side of the client area of a frame window.  
  
- `CBRS_BORDER_TOP` Causes a border to be drawn on the top edge of the control bar when it would be visible.  
  
- `CBRS_BORDER_BOTTOM` Causes a border to be drawn on the bottom edge of the control bar when it would be visible.  
  
- `CBRS_BORDER_LEFT` Causes a border to be drawn on the left edge of the control bar when it would be visible.  
  
- `CBRS_BORDER_RIGHT` Causes a border to be drawn on the right edge of the control bar when it would be visible.  
  
- `CBRS_FLOAT_MULTI` Allows multiple control bars to be floated in a single mini-frame window.  
  
- `CBRS_TOOLTIPS` Causes tool tips to be displayed for the control bar.  
  
- `CBRS_FLYBY` Causes message text to be updated at the same time as tool tips.  
  
- **CBRS_GRIPPER** Causes a gripper, similar to that used on bands in a **CReBar** object, to be drawn for any `CControlBar`-derived class.  
  
### Remarks  
 Does not affect the **WS_** (window style) settings.  
  
##  <a name="ccontrolbar__setborders"></a>  CControlBar::SetBorders  
 Call this function to set the size of the control bar's borders.  
  
```  
void SetBorders(
    int cxLeft = 0,  
    int cyTop = 0,  
    int cxRight = 0,  
    int cyBottom = 0);

 
void SetBorders(
    LPCRECT lpRect);
```  
  
### Parameters  
 *cxLeft*  
 The width (in pixels) of the control bar's left border.  
  
 *cyTop*  
 The height (in pixels) of the control bar's top border.  
  
 *cxRight*  
 The width (in pixels) of the control bar's right border.  
  
 *cyBottom*  
 The height (in pixels) of the control bar's bottom border.  
  
 `lpRect`  
 A pointer to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the current width (in pixels)of each border of the control bar object.  
  
### Example  
 The following code example sets the top and bottom borders of the control bar to 5 pixels, and the left and right borders to 2 pixels:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#61](../../mfc/codesnippet/cpp/ccontrolbar-class_1.cpp)]  
  
##  <a name="ccontrolbar__setinplaceowner"></a>  CControlBar::SetInPlaceOwner  
 Changes the in-place owner of a control bar.  
  
```  
void SetInPlaceOwner(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 A pointer to a `CWnd` object.  
  
### Remarks  
  
## See Also  
 [MFC Sample CTRLBARS](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CToolBar Class](../../mfc/reference/ctoolbar-class.md)   
 [CDialogBar Class](../../mfc/reference/cdialogbar-class.md)   
 [CStatusBar Class](../../mfc/reference/cstatusbar-class.md)   
 [CReBar Class](../../mfc/reference/crebar-class.md)
