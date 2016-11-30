---
title: "CPagerCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPagerCtrl class"
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
caps.latest.revision: 26
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
# CPagerCtrl Class
The `CPagerCtrl` class wraps the Windows pager control, which can scroll into view a contained window that does not fit the containing window.  
  
## Syntax  
  
```  
class CPagerCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPagerCtrl::CPagerCtrl](#cpagerctrl__cpagerctrl)|Constructs a `CPagerCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPagerCtrl::Create](#cpagerctrl__create)|Creates a pager control with specified styles and attaches it to the current `CPagerCtrl` object.|  
|[CPagerCtrl::CreateEx](#cpagerctrl__createex)|Creates a pager control with specified extended styles and attaches it to the current `CPagerCtrl` object.|  
|[CPagerCtrl::ForwardMouse](#cpagerctrl__forwardmouse)|Enables or disables forwarding [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messages to the window that is contained in the current pager control.|  
|[CPagerCtrl::GetBkColor](#cpagerctrl__getbkcolor)|Retrieves the background color of the current pager control.|  
|[CPagerCtrl::GetBorder](#cpagerctrl__getborder)|Retrieves the border size of the current pager control.|  
|[CPagerCtrl::GetButtonSize](#cpagerctrl__getbuttonsize)|Retrieves the button size of the current pager control.|  
|[CPagerCtrl::GetButtonState](#cpagerctrl__getbuttonstate)|Retrieves the state of the specified button in the current pager control.|  
|[CPagerCtrl::GetDropTarget](#cpagerctrl__getdroptarget)|Retrieves the [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interface for the current pager control.|  
|[CPagerCtrl::GetScrollPos](#cpagerctrl__getscrollpos)|Retrieves the scroll position of the current pager control.|  
|[CPagerCtrl::IsButtonDepressed](#cpagerctrl__isbuttondepressed)|Indicates whether the specified button of the current pager control is in `pressed` state.|  
|[CPagerCtrl::IsButtonGrayed](#cpagerctrl__isbuttongrayed)|Indicates whether the specified button of the current pager control is in `grayed` state.|  
|[CPagerCtrl::IsButtonHot](#cpagerctrl__isbuttonhot)|Indicates whether the specified button of the current pager control is in `hot` state.|  
|[CPagerCtrl::IsButtonInvisible](#cpagerctrl__isbuttoninvisible)|Indicates whether the specified button of the current pager control is in `invisible` state.|  
|[CPagerCtrl::IsButtonNormal](#cpagerctrl__isbuttonnormal)|Indicates whether the specified button of the current pager control is in `normal` state.|  
|[CPagerCtrl::RecalcSize](#cpagerctrl__recalcsize)|Causes the current pager control to recalculate the size of the contained window.|  
|[CPagerCtrl::SetBkColor](#cpagerctrl__setbkcolor)|Sets the background color of the current pager control.|  
|[CPagerCtrl::SetBorder](#cpagerctrl__setborder)|Sets the border size of the current pager control.|  
|[CPagerCtrl::SetButtonSize](#cpagerctrl__setbuttonsize)|Sets the button size of the current pager control.|  
|[CPagerCtrl::SetChild](#cpagerctrl__setchild)|Sets the contained window for the current pager control.|  
|[CPagerCtrl::SetScrollPos](#cpagerctrl__setscrollpos)|Sets the scroll position of the current pager control.|  
  
## Remarks  
 A pager control is a window that contains another window that is linear and larger than the containing window, and enables you to scroll the contained window into view. The pager control displays two scroll buttons that automatically disappear when the contained window is scrolled to its farthest extent, and reappear otherwise. You can create a pager control that scrolls either horizontally or vertically.  
  
 For example, if your application has a toolbar that is not wide enough to show all of its items, you can assign the toolbar to a pager control and users will be able to scroll the toolbar to the left or right to access all of the items. Microsoft Internet Explorer Version 4.0 (commctrl.dll version 4.71) introduces the pager control.  
  
 The `CPagerCtrl` class is derived from the [CWnd](../../mfc/reference/cwnd-class.md) class. For more information and an illustration of a pager control, see [Pager Controls](http://msdn.microsoft.com/library/windows/desktop/bb760855).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPagerCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="cpagerctrl__cpagerctrl"></a>  CPagerCtrl::CPagerCtrl  
 Constructs a `CPagerCtrl` object.  
  
```  
CPagerCtrl();
```  
  
### Remarks  
 Use the [CPagerCtrl::Create](#cpagerctrl__create) or [CPagerCtrl::CreateEx](#cpagerctrl__createex) method to create a pager control and attach it to the `CPagerCtrl` object.  
  
##  <a name="cpagerctrl__create"></a>  CPagerCtrl::Create  
 Creates a pager control with specified styles and attaches it to the current `CPagerCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwStyle`|A bitwise combination (OR) of [window styles](../../mfc/reference/window-styles.md) and [pager control styles](http://msdn.microsoft.com/library/windows/desktop/bb760859) to be applied to the control.|  
|[in] `rect`|A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that contains the position and size of the control in client coordinates.|  
|[in] `pParentWnd`|A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control. This parameter cannot be `NULL`.|  
|[in] `nID`|The ID of the control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 To create a pager control, declare a `CPagerCtrl` variable, then call the [CPagerCtrl::Create](#cpagerctrl__create) or [CPagerCtrl::CreateEx](#cpagerctrl__createex) method on that variable.  
  
### Example  
 The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#cpagerctrl__setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#cpagerctrl__setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#cpagerctrl__setborder) method to set the border thickness to 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="cpagerctrl__createex"></a>  CPagerCtrl::CreateEx  
 Creates a pager control with specified extended styles and attaches it to the current `CPagerCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwExStyle`|A bitwise combination of extended styles to be applied to the control. For more information, see the `dwExStyle` parameter of the [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) function.|  
|[in] `dwStyle`|A bitwise combination (OR) of [window styles](../../mfc/reference/window-styles.md) and [pager control styles](http://msdn.microsoft.com/library/windows/desktop/bb760859) to be applied to the control.|  
|[in] `rect`|A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that contains the position and size of the control in client coordinates.|  
|[in] `pParentWnd`|A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control. This parameter cannot be `NULL`.|  
|[in] `nID`|The ID of the control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 To create a pager control, declare a `CPagerCtrl` variable, then call the [CPagerCtrl::Create](#cpagerctrl__create) or [CPagerCtrl::CreateEx](#cpagerctrl__createex) method on that variable.  
  
##  <a name="cpagerctrl__forwardmouse"></a>  CPagerCtrl::ForwardMouse  
 Enables or disables forwarding [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messages to the window that is contained in the current pager control.  
  
```  
void ForwardMouse(BOOL bForward);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `bForward`|`true` to forward mouse messages, or `false` to not forward mouse messages.|  
  
### Remarks  
 This method sends the [PGM_FORWARDMOUSE](http://msdn.microsoft.com/library/windows/desktop/bb760867) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cpagerctrl__getborder"></a>  CPagerCtrl::GetBorder  
 Retrieves the border size of the current pager control.  
  
```  
int GetBorder() const;

 
```  
  
### Return Value  
 The current border size, measured in pixels.  
  
### Remarks  
 This method sends the [PGM_GETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760869) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following example uses the [CPagerCtrl::GetBorder](#cpagerctrl__getborder) method to retrieve the thickness of the pager control's border.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]  
  
##  <a name="cpagerctrl__getbkcolor"></a>  CPagerCtrl::GetBkColor  
 Retrieves the background color of the current pager control.  
  
```  
COLORREF GetBkColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that contains the current background color of the pager control.  
  
### Remarks  
 This method sends the [PGM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760868) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following example uses the [CPagerCtrl::SetBkColor](#cpagerctrl__setbkcolor) method to set the background color of the pager control to red, and the [CPagerCtrl::GetBkColor](#cpagerctrl__getbkcolor) method to confirm that the change was made.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="cpagerctrl__getbuttonsize"></a>  CPagerCtrl::GetButtonSize  
 Retrieves the button size of the current pager control.  
  
```  
int GetButtonSize() const;

 
```  
  
### Return Value  
 The current button size, measured in pixels.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760870) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If the pager control has the `PGS_HORZ` style, the button size determines the width of the pager buttons, and if the pager control has the `PGS_VERT` style, the button size determines the height of the pager buttons. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
##  <a name="cpagerctrl__getbuttonstate"></a>  CPagerCtrl::GetButtonState  
 Retrieves the state of the specified scroll button in the current pager control.  
  
```  
DWORD GetButtonState(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 The state of the button specified by the `iButton` parameter. The state is either `PGF_INVISIBLE`, `PGF_NORMAL`, `PGF_GRAYED`, `PGF_DEPRESSED`, or `PGF_HOT`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cpagerctrl__getdroptarget"></a>  CPagerCtrl::GetDropTarget  
 Retrieves the [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interface for the current pager control.  
  
```  
IDropTarget* GetDropTarget() const;

 
```  
  
### Return Value  
 A pointer to the `IDropTarget` interface for the current pager control.  
  
### Remarks  
 `IDropTarget` is one of the interfaces you implement to support drag-and-drop operations in your application.  
  
 This method sends the [PGM_GETDROPTARGET](http://msdn.microsoft.com/library/windows/desktop/bb760872) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. The caller of this method is responsible for calling the `Release` member of the [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interface when the interface is no longer needed.  
  
##  <a name="cpagerctrl__getscrollpos"></a>  CPagerCtrl::GetScrollPos  
 Retrieves the scroll position of the current pager control.  
  
```  
int GetScrollPos() const;

 
```  
  
### Return Value  
 The current scroll position, measured in pixels.  
  
### Remarks  
 This method sends the [PGM_GETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760874) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following example uses the [CPagerCtrl::GetScrollPos](#cpagerctrl__getscrollpos) method to retrieve the current scroll position of the pager control. If the pager control is not already scrolled to zero, the leftmost position, the example uses the [CPagerCtrl::SetScrollPos](#cpagerctrl__setscrollpos) method to set the scroll position to zero.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]  
  
##  <a name="cpagerctrl__isbuttondepressed"></a>  CPagerCtrl::IsButtonDepressed  
 Indicates whether the specified scroll button of the current pager control is in pressed state.  
  
```  
BOOL IsButtonDepressed(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 `true` if the specified button is in pressed state; otherwise, `false`.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. It then tests whether the state that is returned is `PGF_DEPRESSED`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
##  <a name="cpagerctrl__isbuttongrayed"></a>  CPagerCtrl::IsButtonGrayed  
 Indicates whether the specified scroll button of the current pager control is in grayed state.  
  
```  
BOOL IsButtonGrayed(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 `true` if the specified button is in grayed state; otherwise, `false`.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. It then tests whether the state that is returned is `PGF_GRAYED`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
##  <a name="cpagerctrl__isbuttonhot"></a>  CPagerCtrl::IsButtonHot  
 Indicates whether the specified scroll button of the current pager control is in hot state.  
  
```  
BOOL IsButtonHot(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 `true` if the specified button is in hot state; otherwise, `false`.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. It then tests whether the state that is returned is `PGF_HOT`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
##  <a name="cpagerctrl__isbuttoninvisible"></a>  CPagerCtrl::IsButtonInvisible  
 Indicates whether the specified scroll button of the current pager control is in invisible state.  
  
```  
BOOL IsButtonInvisible(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 `true` if the specified button is in invisible state; otherwise, `false`.  
  
### Remarks  
 Windows makes the scroll button in a particular direction invisible when the contained window is scrolled to its farthest extent because clicking the button further cannot bring more of the contained window into view.  
  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. It then tests whether the state that is returned is `PGF_INVISIBLE`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
### Example  
 The following example uses the [CPagerCtrl::IsButtonInvisible](#cpagerctrl__isbuttoninvisible) method to determine whether the pager control's left and right scroll buttons are visible.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]  
  
##  <a name="cpagerctrl__isbuttonnormal"></a>  CPagerCtrl::IsButtonNormal  
 Indicates whether the specified scroll button of the current pager control is in normal state.  
  
```  
BOOL IsButtonNormal(int iButton) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButton`|Indicates the button for which the state is retrieved. If the pager control style is `PGS_HORZ`, specify `PGB_TOPORLEFT` for the left button and `PGB_BOTTOMORRIGHT` for the right button. If the pager control style is `PGS_VERT`, specify `PGB_TOPORLEFT` for the top button and `PGB_BOTTOMORRIGHT` for the bottom button. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### Return Value  
 `true` if the specified button is in normal state; otherwise, `false`.  
  
### Remarks  
 This method sends the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. It then tests whether the state that is returned is `PGF_NORMAL`. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) message.  
  
##  <a name="cpagerctrl__recalcsize"></a>  CPagerCtrl::RecalcSize  
 Causes the current pager control to recalculate the size of the contained window.  
  
```  
void RecalcSize();
```  
  
### Remarks  
 This method sends the [PGM_RECALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760876) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Consequently, the pager control sends the [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notification to obtain the scrollable dimensions of the contained window.  
  
### Example  
 The following example uses the [CPagerCtrl::RecalcSize](#cpagerctrl__recalcsize) method to request the current pager control to recalculate its size.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]  
  
### Example  
 The following example uses [message reflection](../../mfc/tn062-message-reflection-for-windows-controls.md) to enable the pager control to recalculate its own size instead of requiring the control's parent dialog to perform the calculation. The example derives the `MyPagerCtrl` class from the [CPagerCtrl class](../../mfc/reference/cpagerctrl-class.md), then uses a message map to associate the [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notification with the `OnCalcsize` notification handler. In this example, the notification handler sets the width and height of the pager control to fixed values.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]  
  
##  <a name="cpagerctrl__setbkcolor"></a>  CPagerCtrl::SetBkColor  
 Sets the background color of the current pager control.  
  
```  
COLORREF SetBkColor(COLORREF clrBk);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `clrBk`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that contains the new background color of the pager control.|  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that contains the previous background color of the pager control.  
  
### Remarks  
 This method sends the [PGM_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760878) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following example uses the [CPagerCtrl::SetBkColor](#cpagerctrl__setbkcolor) method to set the background color of the pager control to red, and the [CPagerCtrl::GetBkColor](#cpagerctrl__getbkcolor) method to confirm that the change was made.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="cpagerctrl__setborder"></a>  CPagerCtrl::SetBorder  
 Sets the border size of the current pager control.  
  
```  
int SetBorder(int iBorder);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iBorder`|The new border size, measured in pixels. If the `iBorder` parameter is negative, the border size is set to zero.|  
  
### Return Value  
 The previous border size, measured in pixels.  
  
### Remarks  
 This method sends the [PGM_SETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760880) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#cpagerctrl__setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#cpagerctrl__setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#cpagerctrl__setborder) method to set the border thickness to 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="cpagerctrl__setbuttonsize"></a>  CPagerCtrl::SetButtonSize  
 Sets the button size of the current pager control.  
  
```  
int SetButtonSize(int iButtonSize);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iButtonSize`|The new button size, measured in pixels.|  
  
### Return Value  
 The previous button size, measured in pixels.  
  
### Remarks  
 This method sends the [PGM_SETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760886) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If the pager control has the `PGS_HORZ` style, the button size determines the width of the pager buttons, and if the pager control has the `PGS_VERT` style, the button size determines the height of the pager buttons. The default button size is three-fourths of the width of the scroll bar, and the minimum button size is 12 pixels. For more information, see [Pager Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
### Example  
 The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#cpagerctrl__setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#cpagerctrl__setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#cpagerctrl__setborder) method to set the border thickness to 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="cpagerctrl__setchild"></a>  CPagerCtrl::SetChild  
 Sets the contained window for the current pager control.  
  
```  
void SetChild(HWND hwndChild);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `hwndChild`|Handle to the window to be contained.|  
  
### Remarks  
 This method sends the [PGM_SETCHILD](http://msdn.microsoft.com/library/windows/desktop/bb760884) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 This method does not change the parent of the contained window; it only assigns a window handle to the pager control for scrolling. In most cases, the contained window will be a child window of the pager control.  
  
### Example  
 The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#cpagerctrl__setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#cpagerctrl__setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#cpagerctrl__setborder) method to set the border thickness to 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="cpagerctrl__setscrollpos"></a>  CPagerCtrl::SetScrollPos  
 Sets the scroll position of the current pager control.  
  
```  
void SetScrollPos(int iPos);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iPos`|The new scroll position, measured in pixels.|  
  
### Remarks  
 This method sends the [PGM_SETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760886) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [CPagerCtrl Class](../../mfc/reference/cpagerctrl-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Pager Controls](http://msdn.microsoft.com/library/windows/desktop/bb760855)



