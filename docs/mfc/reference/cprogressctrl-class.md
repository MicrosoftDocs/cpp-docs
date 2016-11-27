---
title: "CProgressCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CProgressCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CProgressCtrl class"
  - "progress controls [C++], CProgressCtrl class"
  - "Internet Explorer 4.0 common controls"
ms.assetid: 222630f4-1598-4026-8198-51649b1192ab
caps.latest.revision: 25
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
# CProgressCtrl Class
Provides the functionality of the Windows common progress bar control.  
  
## Syntax  
  
```  
class CProgressCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CProgressCtrl::CProgressCtrl](#cprogressctrl__cprogressctrl)|Constructs a `CProgressCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CProgressCtrl::Create](#cprogressctrl__create)|Creates a progress bar control and attaches it to a `CProgressCtrl` object.|  
|[CProgressCtrl::CreateEx](#cprogressctrl__createex)|Creates a progress control with the specified Windows extended styles and attaches it to a `CProgressCtrl` object.|  
|[CProgressCtrl::GetBarColor](#cprogressctrl__getbarcolor)|Gets the color of the progress indicator bar for the current progress bar control.|  
|[CProgressCtrl::GetBkColor](#cprogressctrl__getbkcolor)|Gets the background color of the current progress bar.|  
|[CProgressCtrl::GetPos](#cprogressctrl__getpos)|Gets the current position of the progress bar.|  
|[CProgressCtrl::GetRange](#cprogressctrl__getrange)|Gets the lower and upper limits of the range of the progress bar control.|  
|[CProgressCtrl::GetState](#cprogressctrl__getstate)|Gets the state of the current progress bar control.|  
|[CProgressCtrl::GetStep](#cprogressctrl__getstep)|Retrieves the step increment for the progress bar of the current progress bar control.|  
|[CProgressCtrl::OffsetPos](#cprogressctrl__offsetpos)|Advances the current position of a progress bar control by a specified increment and redraws the bar to reflect the new position.|  
|[CProgressCtrl::SetBarColor](#cprogressctrl__setbarcolor)|Sets the color of the progress indicator bar in the current progress bar control.|  
|[CProgressCtrl::SetBkColor](#cprogressctrl__setbkcolor)|Sets the background color for the progress bar.|  
|[CProgressCtrl::SetMarquee](#cprogressctrl__setmarquee)|Turns marquee mode on or off for the current progress bar control.|  
|[CProgressCtrl::SetPos](#cprogressctrl__setpos)|Sets the current position for a progress bar control and redraws the bar to reflect the new position.|  
|[CProgressCtrl::SetRange](#cprogressctrl__setrange)|Sets the minimum and maximum ranges for a progress bar control and redraws the bar to reflect the new ranges.|  
|[CProgressCtrl::SetState](#cprogressctrl__setstate)|Sets the state of the current progress bar control.|  
|[CProgressCtrl::SetStep](#cprogressctrl__setstep)|Specifies the step increment for a progress bar control.|  
|[CProgressCtrl::StepIt](#cprogressctrl__stepit)|Advances the current position for a progress bar control by the step increment (see [SetStep](#cprogressctrl__setstep)) and redraws the bar to reflect the new position.|  
  
## Remarks  
 A progress bar control is a window that an application can use to indicate the progress of a lengthy operation. It consists of a rectangle that is gradually filled, from left to right, with the system highlight color as an operation progresses.  
  
 A progress bar control has a range and a current position. The range represents the total duration of the operation, and the current position represents the progress the application has made toward completing the operation. The window procedure uses the range and the current position to determine the percentage of the progress bar to fill with the highlight color. Because the range and current position values are expressed as signed integers, the possible range of current position values is from â€“2,147,483,648 to 2,147,483,647 inclusive.  
  
 For more information on using `CProgressCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CProgressCtrl](../../mfc/using-cprogressctrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CProgressCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="cprogressctrl__cprogressctrl"></a>  CProgressCtrl::CProgressCtrl  
 Constructs a `CProgressCtrl` object.  
  
```  
CProgressCtrl();
```  
  
### Remarks  
 After constructing the `CProgressCtrl` object, call `CProgressCtrl::Create` to create the progress bar control.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]  
  
##  <a name="cprogressctrl__create"></a>  CProgressCtrl::Create  
 Creates a progress bar control and attaches it to a `CProgressCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the progress bar control's style. Apply any combination of window stylesdescribed in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)], in addition to the following progress bar control styles, to the control:  
  
- `PBS_VERTICAL` Displays progress information vertically, top to bottom. Without this flag, the progress bar control displays horizontally, left to right.  
  
- `PBS_SMOOTH` Displays gradual, smooth filling in the progress bar control. Without this flag, the control will fill with blocks.  
  
 `rect`  
 Specifies the progress bar control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure. Because the control must be a child window, the specified coordinates are relative to the client area of the `pParentWnd`.  
  
 `pParentWnd`  
 Specifies the progress bar control's parent window, usually a `CDialog`. It must not be **NULL.**  
  
 `nID`  
 Specifies the progress bar control's ID.  
  
### Return Value  
 **TRUE** if the `CProgressCtrl` object is successfully created; otherwise **FALSE**.  
  
### Remarks  
 You construct a `CProgressCtrl` object in two steps. First, call the constructor, which creates the `CProgressCtrl` object, and then call **Create**, which creates the progress bar control.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]  
  
##  <a name="cprogressctrl__createex"></a>  CProgressCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CProgressCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwExStyle`  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifies the progress bar control's style. Apply any combination of window styles described in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#cprogressctrl__create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="cprogressctrl__getbarcolor"></a>  CProgressCtrl::GetBarColor  
 Gets the color of the progress indicator bar for the current progress bar control.  
  
```  
COLORREF GetBarColor() const;

 
```  
  
### Return Value  
 The color of the current progress bar, represented as a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value, or `CLR_DEFAULT` if the progress indicator bar color is the default color.  
  
### Remarks  
 This method sends the [PBM_GETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760826) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cprogressctrl__getbkcolor"></a>  CProgressCtrl::GetBkColor  
 Gets the background color of the current progress bar.  
  
```  
COLORREF GetBkColor() const;

 
```  
  
### Return Value  
 The background color of the current progress bar, represented as a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value.  
  
### Remarks  
 This method sends the [PBM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760828) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cprogressctrl__getpos"></a>  CProgressCtrl::GetPos  
 Retrieves the current position of the progress bar.  
  
```  
int GetPos();
```  
  
### Return Value  
 The position of the progress bar control.  
  
### Remarks  
 The position of the progress bar control is not the physical location on the screen, but rather is between the upper and lower range indicated in [SetRange](#cprogressctrl__setrange).  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]  
  
##  <a name="cprogressctrl__getrange"></a>  CProgressCtrl::GetRange  
 Gets the current lower and upper limits, or range, of the progress bar control.  
  
```  
void GetRange(
    int& nLower,  
    int& nUpper);
```  
  
### Parameters  
 `nLower`  
 A reference to an integer receiving the lower limit of the progress bar control.  
  
 `nUpper`  
 A reference to an integer receiving the upper limit of the progress bar control.  
  
### Remarks  
 This function copies the values of the lower and upper limits to the integers referenced by `nLower` and `nUpper`, respectively.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]  
  
##  <a name="cprogressctrl__getstate"></a>  CProgressCtrl::GetState  
 Gets the state of the current progress bar control.  
  
```  
int GetState() const;

 
```  
  
### Return Value  
 The state of the current progress bar control, which is one of the following values:  
  
|Value|State|  
|-----------|-----------|  
|`PBST_NORMAL`|In progress|  
|`PBST_ERROR`|Error|  
|`PBST_PAUSED`|Paused|  
  
### Remarks  
 This method sends the [PBM_GETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760834) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_progressCtrl`, that is used to programmatically access the progress bar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### Example  
 The following code example retrieves the state of the current progress bar control.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]  
  
##  <a name="cprogressctrl__getstep"></a>  CProgressCtrl::GetStep  
 Retrieves the step increment for the progress bar of the current progress bar control.  
  
```  
int GetStep() const;

 
```  
  
### Return Value  
 The step increment of the progress bar.  
  
### Remarks  
 The step increment is the amount by which a call to [CProgressCtrl::StepIt](#cprogressctrl__stepit) increases the current position of the progress bar.  
  
 This method sends the [PBM_GETSTEP](http://msdn.microsoft.com/library/windows/desktop/bb760836) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_progressCtrl`, that is used to programmatically access the progress bar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### Example  
 The following code example retrieves the step increment of the current progress bar control.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]  
  
##  <a name="cprogressctrl__offsetpos"></a>  CProgressCtrl::OffsetPos  
 Advances the progress bar control's current position by the increment specified by `nPos` and redraws the bar to reflect the new position.  
  
```  
int OffsetPos(int nPos);
```  
  
### Parameters  
 `nPos`  
 Amount to advance the position.  
  
### Return Value  
 The previous position of the progress bar control.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]  
  
##  <a name="cprogressctrl__setbarcolor"></a>  CProgressCtrl::SetBarColor  
 Sets the color of the progress indicator bar in the current progress bar control.  
  
```  
COLORREF SetBarColor(COLORREF clrBar);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `clrBar`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that specifies the new color of the progress indicator bar. Specify `CLR_DEFAULT` to cause the progress bar to use its default color.|  
  
### Return Value  
 The previous color of the progress indicator bar, represented as a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value, or `CLR_DEFAULT` if the color of the progress indicator bar is the default color.  
  
### Remarks  
 The `SetBarColor` method sets the progress bar color only if a [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)][theme](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx) is not in effect.  
  
 This method sends the [PBM_SETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760838) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_progressCtrl`, that is used to programmatically access the progress bar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### Example  
 The following code example changes the color of the progress bar to red, green, blue, or the default.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]  
  
##  <a name="cprogressctrl__setbkcolor"></a>  CProgressCtrl::SetBkColor  
 Sets the background color for the progress bar.  
  
```  
COLORREF SetBkColor(COLORREF clrNew);
```  
  
### Parameters  
 `clrNew`  
 A **COLORREF** value that specifies the new background color. Specify the `CLR_DEFAULT` value to use the default background color for the progress bar.  
  
### Return Value  
 The [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value indicating the previous background color, or **CLR_DEFAULT** if the background color is the default color.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#6](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]  
  
##  <a name="cprogressctrl__setmarquee"></a>  CProgressCtrl::SetMarquee  
 Turns marquee mode on or off for the current progress bar control.  
  
```  
BOOL SetMarquee(
    BOOL fMarqueeMode,   
    int nInterval);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `fMarqueeMode`|`true` to turn marquee mode on, or `false` to turn marquee mode off.|  
|[in] `nInterval`|Time in milliseconds between updates of the marquee animation.|  
  
### Return Value  
 This method always returns `true`.  
  
### Remarks  
 When marquee mode is turned on, the progress bar is animated and scrolls like a sign on a theater marquee.  
  
 This method sends the [PBM_SETMARQUEE](http://msdn.microsoft.com/library/windows/desktop/bb760842) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_progressCtrl`, that is used to programmatically access the progress bar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### Example  
 The following code example starts and stops the marquee scrolling animation.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]  
  
##  <a name="cprogressctrl__setpos"></a>  CProgressCtrl::SetPos  
 Sets the progress bar control's current position as specified by `nPos` and redraws the bar to reflect the new position.  
  
```  
int SetPos(int nPos);
```  
  
### Parameters  
 `nPos`  
 New position of the progress bar control.  
  
### Return Value  
 The previous position of the progress bar control.  
  
### Remarks  
 The position of the progress bar control is not the physical location on the screen, but rather is between the upper and lower range indicated in [SetRange](#cprogressctrl__setrange).  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#7](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]  
  
##  <a name="cprogressctrl__setrange"></a>  CProgressCtrl::SetRange  
 Sets the upper and lower limits of the progress bar control's range and redraws the bar to reflect the new ranges.  
  
```  
void SetRange(
    short nLower,  
    short nUpper);

 
void SetRange32(
    int nLower,  
    int nUpper);
```  
  
### Parameters  
 `nLower`  
 Specifies the lower limit of the range (default is zero).  
  
 `nUpper`  
 Specifies the upper limit of the range (default is 100).  
  
### Remarks  
 The member function `SetRange32` sets the 32-bit range for the progress control.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#8](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]  
  
##  <a name="cprogressctrl__setstate"></a>  CProgressCtrl::SetState  
 Sets the state of the current progress bar control.  
  
```  
int SetState(int iState);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iState`|The state to set the progress bar. Use one of the following values:<br /><br /> - `PBST_NORMAL` - In progress<br />- `PBST_ERROR` - Error<br />- `PBST_PAUSED` - Paused|  
  
### Return Value  
 The previous state of the current progress bar control.  
  
### Remarks  
 This method sends the [PBM_SETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760850) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_progressCtrl`, that is used to programmatically access the progress bar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### Example  
 The following code example sets the state of the current progress bar control to Paused or In Progress.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]  
  
##  <a name="cprogressctrl__setstep"></a>  CProgressCtrl::SetStep  
 Specifies the step increment for a progress bar control.  
  
```  
int SetStep(int nStep);
```  
  
### Parameters  
 *nStep*  
 New step increment.  
  
### Return Value  
 The previous step increment.  
  
### Remarks  
 The step increment is the amount by which a call to `CProgressCtrl::StepIt` increases the progress bar's current position.  
  
 The default step increment is 10.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]  
  
##  <a name="cprogressctrl__stepit"></a>  CProgressCtrl::StepIt  
 Advances the current position for a progress bar control by the step increment and redraws the bar to reflect the new position.  
  
```  
int StepIt();
```  
  
### Return Value  
 The previous position of the progress bar control.  
  
### Remarks  
 The step increment is set by the `CProgressCtrl::SetStep` member function.  
  
### Example  
 [!code-cpp[NVC_MFC_CProgressCtrl#10](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]  
  
## See Also  
 [MFC Sample CMNCTRL2](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


