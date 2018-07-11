---
title: "CMFCStatusBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCStatusBar", "AFXSTATUSBAR/CMFCStatusBar", "AFXSTATUSBAR/CMFCStatusBar::CalcFixedLayout", "AFXSTATUSBAR/CMFCStatusBar::CommandToIndex", "AFXSTATUSBAR/CMFCStatusBar::Create", "AFXSTATUSBAR/CMFCStatusBar::CreateEx", "AFXSTATUSBAR/CMFCStatusBar::DoesAllowDynInsertBefore", "AFXSTATUSBAR/CMFCStatusBar::EnablePaneDoubleClick", "AFXSTATUSBAR/CMFCStatusBar::EnablePaneProgressBar", "AFXSTATUSBAR/CMFCStatusBar::GetCount", "AFXSTATUSBAR/CMFCStatusBar::GetDrawExtendedArea", "AFXSTATUSBAR/CMFCStatusBar::GetExtendedArea", "AFXSTATUSBAR/CMFCStatusBar::GetItemID", "AFXSTATUSBAR/CMFCStatusBar::GetItemRect", "AFXSTATUSBAR/CMFCStatusBar::GetPaneInfo", "AFXSTATUSBAR/CMFCStatusBar::GetPaneProgress", "AFXSTATUSBAR/CMFCStatusBar::GetPaneStyle", "AFXSTATUSBAR/CMFCStatusBar::GetPaneText", "AFXSTATUSBAR/CMFCStatusBar::GetPaneWidth", "AFXSTATUSBAR/CMFCStatusBar::GetTipText", "AFXSTATUSBAR/CMFCStatusBar::InvalidatePaneContent", "AFXSTATUSBAR/CMFCStatusBar::PreCreateWindow", "AFXSTATUSBAR/CMFCStatusBar::SetDrawExtendedArea", "AFXSTATUSBAR/CMFCStatusBar::SetIndicators", "AFXSTATUSBAR/CMFCStatusBar::SetPaneAnimation", "AFXSTATUSBAR/CMFCStatusBar::SetPaneBackgroundColor", "AFXSTATUSBAR/CMFCStatusBar::SetPaneIcon", "AFXSTATUSBAR/CMFCStatusBar::SetPaneInfo", "AFXSTATUSBAR/CMFCStatusBar::SetPaneProgress", "AFXSTATUSBAR/CMFCStatusBar::SetPaneStyle", "AFXSTATUSBAR/CMFCStatusBar::SetPaneText", "AFXSTATUSBAR/CMFCStatusBar::SetPaneTextColor", "AFXSTATUSBAR/CMFCStatusBar::SetPaneWidth", "AFXSTATUSBAR/CMFCStatusBar::SetTipText", "AFXSTATUSBAR/CMFCStatusBar::OnDrawPane"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCStatusBar [MFC], CalcFixedLayout", "CMFCStatusBar [MFC], CommandToIndex", "CMFCStatusBar [MFC], Create", "CMFCStatusBar [MFC], CreateEx", "CMFCStatusBar [MFC], DoesAllowDynInsertBefore", "CMFCStatusBar [MFC], EnablePaneDoubleClick", "CMFCStatusBar [MFC], EnablePaneProgressBar", "CMFCStatusBar [MFC], GetCount", "CMFCStatusBar [MFC], GetDrawExtendedArea", "CMFCStatusBar [MFC], GetExtendedArea", "CMFCStatusBar [MFC], GetItemID", "CMFCStatusBar [MFC], GetItemRect", "CMFCStatusBar [MFC], GetPaneInfo", "CMFCStatusBar [MFC], GetPaneProgress", "CMFCStatusBar [MFC], GetPaneStyle", "CMFCStatusBar [MFC], GetPaneText", "CMFCStatusBar [MFC], GetPaneWidth", "CMFCStatusBar [MFC], GetTipText", "CMFCStatusBar [MFC], InvalidatePaneContent", "CMFCStatusBar [MFC], PreCreateWindow", "CMFCStatusBar [MFC], SetDrawExtendedArea", "CMFCStatusBar [MFC], SetIndicators", "CMFCStatusBar [MFC], SetPaneAnimation", "CMFCStatusBar [MFC], SetPaneBackgroundColor", "CMFCStatusBar [MFC], SetPaneIcon", "CMFCStatusBar [MFC], SetPaneInfo", "CMFCStatusBar [MFC], SetPaneProgress", "CMFCStatusBar [MFC], SetPaneStyle", "CMFCStatusBar [MFC], SetPaneText", "CMFCStatusBar [MFC], SetPaneTextColor", "CMFCStatusBar [MFC], SetPaneWidth", "CMFCStatusBar [MFC], SetTipText", "CMFCStatusBar [MFC], OnDrawPane"]
ms.assetid: f2960d1d-f4ed-41e8-bd99-0382b2f8d88e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCStatusBar Class
The `CMFCStatusBar` class implements a status bar similar to the `CStatusBar` class. However, the `CMFCStatusBar` class has features not offered by the `CStatusBar` class, such as the ability to display images, animations, and progress bars; and the ability to respond to mouse double-clicks. 

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]   
  
## Syntax  
  
```  
class CMFCStatusBar : public CPane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCStatusBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CMFCStatusBar::CommandToIndex](#commandtoindex)||  
|[CMFCStatusBar::Create](#create)|Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object. (Overrides [CPane::Create](../../mfc/reference/cpane-class.md#create).)|  
|[CMFCStatusBar::CreateEx](#createex)|Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object. (Overrides [CPane::CreateEx](../../mfc/reference/cpane-class.md#createex).)|  
|[CMFCStatusBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determines whether another pane can be dynamically inserted between this pane and the parent frame. (Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CMFCStatusBar::EnablePaneDoubleClick](#enablepanedoubleclick)|Enables or disables the handling of mouse double-clicks on the status bar.|  
|[CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar)|Displays a progress bar on the specified pane.|  
|[CMFCStatusBar::GetCount](#getcount)|Returns the number of panes on the status bar.|  
|[CMFCStatusBar::GetDrawExtendedArea](#getdrawextendedarea)||  
|[CMFCStatusBar::GetExtendedArea](#getextendedarea)||  
|[CMFCStatusBar::GetItemID](#getitemid)||  
|[CMFCStatusBar::GetItemRect](#getitemrect)||  
|[CMFCStatusBar::GetPaneInfo](#getpaneinfo)||  
|[CMFCStatusBar::GetPaneProgress](#getpaneprogress)||  
|[CMFCStatusBar::GetPaneStyle](#getpanestyle)|Returns the pane style. (Overrides [CBasePane::GetPaneStyle](../../mfc/reference/cbasepane-class.md#getpanestyle).)|  
|[CMFCStatusBar::GetPaneText](#getpanetext)||  
|[CMFCStatusBar::GetPaneWidth](#getpanewidth)|Returns the width, in pixels, of the specified pane of the status bar.|  
|[CMFCStatusBar::GetTipText](#gettiptext)|Returns the tool tip text for the specified pane of the status bar.|  
|[CMFCStatusBar::InvalidatePaneContent](#invalidatepanecontent)|Invalidates the specified pane and redraws its content.|  
|[CMFCStatusBar::PreCreateWindow](#precreatewindow)|Called by the framework before the creation of the Windows window attached to this `CWnd` object. (Overrides [CWnd::PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow).)|  
|[CMFCStatusBar::SetDrawExtendedArea](#setdrawextendedarea)||  
|[CMFCStatusBar::SetIndicators](#setindicators)||  
|[CMFCStatusBar::SetPaneAnimation](#setpaneanimation)|Assigns an animation to the specified pane.|  
|[CMFCStatusBar::SetPaneBackgroundColor](#setpanebackgroundcolor)|Sets the background color for the specified pane of the status bar.|  
|[CMFCStatusBar::SetPaneIcon](#setpaneicon)|Sets the indicator icon for the specified pane of the status bar.|  
|[CMFCStatusBar::SetPaneInfo](#setpaneinfo)||  
|[CMFCStatusBar::SetPaneProgress](#setpaneprogress)|Sets the current progress of the progress bar for the specified pane of the status bar.|  
|[CMFCStatusBar::SetPaneStyle](#setpanestyle)|Sets the style of the pane. (Overrides [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).)|  
|[CMFCStatusBar::SetPaneText](#setpanetext)||  
|[CMFCStatusBar::SetPaneTextColor](#setpanetextcolor)|Sets the text color for the specified pane of the status bar.|  
|[CMFCStatusBar::SetPaneWidth](#setpanewidth)|Sets the width in pixels of the specified pane of the status bar.|  
|[CMFCStatusBar::SetTipText](#settiptext)|Sets the tool tip text for the specified pane of the status bar.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCStatusBar::OnDrawPane](#ondrawpane)|Called by the framework when it redraws the pane of the status bar.|  
  
## Remarks  
 The following diagram shows a figure of the status bar from [Status Bar Demo sample](../../visual-cpp-samples.md) application.  
  
 ![Example of CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "cmfcstatusbar")  
  
## Example  
 The following example demonstrates the local variables that the application uses to call various methods in the `CMFCStatusBar` class. These variables are declared in StatusBarDemoView.h. The main frame is declared in MainFrm.h, the document is declared in StatusBarDemoDoc.h, and the view is declared in StatusBarDemoView.h. This code snippet is part of the [Status Bar Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_1.h)]  
  
## Example  
 The following example demonstrates how to get a reference to `CMFCStatusBar` object by introducing the `GetStatusBar` method in MainFrm.h and then calling this method from the `GetStatusBar` method in StatusBarDemoView.h. This code snippet is part of the [Status Bar Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_2.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_3.h)]  
  
## Example  
 The following example demonstrates how to call various methods in the `CMFCStatusBar` class in StatusBarDemoView.cpp. The constants are declared in MainFrm.h. The example shows how to set the icon, set the tooltip text of the status bar pane, display a progress bar on the specified pane, assign an animation to the specified pane, set the text and the width of the status bar pane, and set the current progress indicator of the progress bar for the status bar pane. This code snippet is part of the [Status Bar Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#6](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_4.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#1](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_5.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#2](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_6.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#3](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_7.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#4](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_8.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#5](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_9.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md)  
  
## Requirements  
 **Header:** afxstatusbar.h  
  
##  <a name="calcfixedlayout"></a>  CMFCStatusBar::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] *bStretch*  
 [in] *bHorz*  
  
### Return Value  
  
### Remarks  
  
##  <a name="commandtoindex"></a>  CMFCStatusBar::CommandToIndex  

  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### Parameters  
 [in] *nIDFind*  
  
### Return Value  
  
### Remarks  
  
##  <a name="create"></a>  CMFCStatusBar::Create  

  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### Parameters  
 [in] *pParentWnd*  
 [in] *dwStyle*  
 [in] *nID*  
  
### Return Value  
  
### Remarks  
  
##  <a name="createex"></a>  CMFCStatusBar::CreateEx  

  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### Parameters  
 [in] *pParentWnd*  
 [in] *dwCtrlStyle*  
 [in] *dwStyle*  
 [in] *nID*  
  
### Return Value  
  
### Remarks  
  
##  <a name="doesallowdyninsertbefore"></a>  CMFCStatusBar::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="enablepanedoubleclick"></a>  CMFCStatusBar::EnablePaneDoubleClick  
 Enables or disables the handling of mouse double-clicks on the status bar.  
  
```  
void EnablePaneDoubleClick(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] *bEnable*  
 If TRUE, enable the processing of the mouse double-click. Otherwise disable the processing of the mouse double-click.  
  
### Remarks  
 If the status bar is enabled to process double clicks, Windows sends the WM_COMMAND notification together with a resource ID to the owner of the status bar every time that the user double clicks on the status bar pane.  
  
##  <a name="enablepaneprogressbar"></a>  CMFCStatusBar::EnablePaneProgressBar  
 Display a progress bar on the specified pane.  
  
```  
void EnablePaneProgressBar(
    int nIndex,  
    long nTotal=100,  
    BOOL bDisplayText=FALSE,  
    COLORREF clrBar=-1,  
    COLORREF clrBarDest=-1,  
    COLORREF clrProgressText=-1);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane whose progress bar to enable.  
  
 [in] *nTotal*  
 Specifies the maximum value for the progress bar.  
  
 [in] *bDisplayText*  
 Specifies whether the progress bar should display the current progress value.  
  
 [in] *clrBar*  
 Specifies the background color of the progress bar.  
  
 [in] *clrBarDest*  
 Specifies the secondary color of the progress bar background. Use different value than *clrBar* to fill by a color blended into a gradient.  
  
 [in] *clrProgressText*  
 Specifies the color of the text of the progress bar.  
  
### Remarks  
 If you want to disable the progress bar call `EnablePaneProgressBar` with *nTotal* set to -1. By default *nTotal* is set to 100. Therefore, you do not need any additional calculations to display progress as percentage.  
  
 You should pass different values for *clrBar* and *clrBarDest* so that the background color of the progress bar displays a color blended into a gradient. .  
  
 To set the current progress, call the [CMFCStatusBar::SetPaneProgress](#setpaneprogress) method.  
  
##  <a name="getcount"></a>  CMFCStatusBar::GetCount  
 Retrieves the number of panes in the status bar.  
  
```  
int GetCount() const;  
```  
  
### Return Value  
 The number of panes in the status bar.  
  
##  <a name="getdrawextendedarea"></a>  CMFCStatusBar::GetDrawExtendedArea  

  
```  
BOOL GetDrawExtendedArea() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getextendedarea"></a>  CMFCStatusBar::GetExtendedArea  

  
```  
virtual BOOL GetExtendedArea(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getitemid"></a>  CMFCStatusBar::GetItemID  

  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getitemrect"></a>  CMFCStatusBar::GetItemRect  

  
```  
void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *lpRect*  
  
### Remarks  
  
##  <a name="getpaneinfo"></a>  CMFCStatusBar::GetPaneInfo  

  
```  
void GetPaneInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& cxWidth) const;  
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *nID*  
 [in] *nStyle*  
 [in] *cxWidth*  
  
### Remarks  
  
##  <a name="getpaneprogress"></a>  CMFCStatusBar::GetPaneProgress  

  
```  
long GetPaneProgress(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanestyle"></a>  CMFCStatusBar::GetPaneStyle  

  
```  
UINT GetPaneStyle(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanetext"></a>  CMFCStatusBar::GetPaneText  

  
```  
void GetPaneText(
    int nIndex,  
    CString& s) const;  
  
CString GetPaneText(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *s*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanewidth"></a>  CMFCStatusBar::GetPaneWidth  
 Retrieves the width of the pane of a status bar.  
  
```  
int GetPaneWidth(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the status bar pane.  
  
### Return Value  
 The width of the status bar pane that *nIndex* specifies; otherwise, zero if a status-bar pane does not exist.  
  
##  <a name="gettiptext"></a>  CMFCStatusBar::GetTipText  
 Retrieve the tooltip text of a status bar's pane.  
  
```  
CString GetTipText(int nIndex) const;  
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane for which to retrieve tool tip text.  
  
### Return Value  
 The tooltip text of the status-bar pane that *nIndex* specifies. Otherwise, the empty string if a status bar pane does not exist for the specified *nIndex* or if its tooltip text is empty.  
  
##  <a name="invalidatepanecontent"></a>  CMFCStatusBar::InvalidatePaneContent  
 Invalidate the status bar pane and redraw its content.  
  
```  
void InvalidatePaneContent(int nIndex);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane whose content is to be invalidated and redrawn.  
  
### Remarks  
 When the status bar is invalidated, it is marked for redrawing. Windows redraws it when the `UpdateWindow` method sends a WM_PAINT message to the `OnPaint` method.  
  
##  <a name="ondrawpane"></a>  CMFCStatusBar::OnDrawPane  
 Redraw the pane of the status bar.  
  
```  
virtual void OnDrawPane(
    CDC* pDC,  
    CMFCStatusBarPaneInfo* pPane);
```  
  
### Parameters  
 [in] *pDC*  
 A pointer to a device context for drawing.  
  
 [in] *pPane*  
 A pointer to a `CMFCStatusBarPaneInfo` structure that contains the information about the pane to be redrawn.  
  
### Remarks  
 By default, `OnDrawPane` redraws the pane by using the device context *pDC* according to the pane's style and content.  
  
 Override this method in a `CMFCStatusBar`-derived class to customize the appearance of a pane.  
  
##  <a name="precreatewindow"></a>  CMFCStatusBar::PreCreateWindow  

  
```  
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```  
  
### Parameters  
 [in] *cs*  
  
### Return Value  
  
### Remarks  
  
##  <a name="setdrawextendedarea"></a>  CMFCStatusBar::SetDrawExtendedArea  

  
```  
void SetDrawExtendedArea(BOOL bSet = TRUE);
```  
  
### Parameters  
 [in] *bSet*  
  
### Remarks  
  
##  <a name="setindicators"></a>  CMFCStatusBar::SetIndicators  

  
```  
BOOL SetIndicators(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### Parameters  
 [in] *lpIDArray*  
 [in] *nIDCount*  
  
### Return Value  
  
### Remarks  
  
##  <a name="setpaneanimation"></a>  CMFCStatusBar::SetPaneAnimation  
 Assigns an animation to the specified pane.  
  
```  
void SetPaneAnimation(
    int nIndex,  
    HIMAGELIST hImageList,  
    UINT nFrameRate=500,  
    BOOL bUpdate=TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane to which you want to assign to it an animation.  
  
 [in] *hImageList*  
 Specifies a handle to the image list that holds the animation frames.  
  
 [in] *nFrameRate*  
 Specifies the frame rate, in milliseconds, for the animation.  
  
 [in] *bUpdate*  
 If TRUE, update the pane content immediately. Otherwise, the pane content is updated when it is invalidated.  
  
### Remarks  
 If you want to disable the current animation, call `SetPaneAnimation` with `hImageList` set to NULL.  
  
##  <a name="setpanebackgroundcolor"></a>  CMFCStatusBar::SetPaneBackgroundColor  
 Sets the background color of the status bar pane.  
  
```  
void SetPaneBackgroundColor(
    int nIndex,  
    COLORREF clrBackground=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane for which to set a new background color.  
  
 [in] *clrBackground*  
 Specifies the new background color.  
  
 [in] *bUpdate*  
 If TRUE, update the pane content immediately. Otherwise, do not update the pane content until the pane is invalidated by another method.  
  
##  <a name="setpaneicon"></a>  CMFCStatusBar::SetPaneIcon  
 Set the icon of the status bar pane.  
  
```  
void SetPaneIcon(
    int nIndex,  
    HICON hIcon,  
    BOOL bUpdate=TRUE);

 
void SetPaneIcon(
    int nIndex,  
    HBITMAP hBmp,  
    COLORREF clrTransparent=RGB(255, 0, 255),  
    BOOL bUpdate=TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane for which to set the image.  
  
 [in] *hIcon*  
 Specifies a handle to the icon to be set as the pane image.  
  
 [in] *bUpdate*  
 Specifies whether to update the pane content immediately.  
  
 [in] *hBmp*  
 Specifies a handle to the bitmap to be set as the pane image.  
  
 [in] *clrTransparent*  
 Specifies the transparent color of the bitmap that the *hBmp* indicates.  
  
### Remarks  
 You can pass either HICON or HBITMAP together with the transparent color to set the pane's image. If you do not want to display the image any longer, pass the NULL value as the image handle.  
  
 If there is any running animation that [CMFCStatusBar::SetPaneAnimation](#setpaneanimation) has set, the animation will be stopped.  
  
##  <a name="setpaneinfo"></a>  CMFCStatusBar::SetPaneInfo  

  
```  
void SetPaneInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int cxWidth);
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *nID*  
 [in] *nStyle*  
 [in] *cxWidth*  
  
### Remarks  
  
##  <a name="setpaneprogress"></a>  CMFCStatusBar::SetPaneProgress  
 Set the current progress indicator of the progress bar for the specified pane.  
  
```  
void SetPaneProgress(
    int nIndex,  
    long nCurr,  
    BOOL bUpdate=TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane for which to update the progress indicator.  
  
 [in] *nCurr*  
 Specifies the current value of the progress indicator.  
  
 [in] *bUpdate*  
 Specifies whether the pane should be updated immediately.  
  
### Remarks  
 Call this method when you want to update the progress indicator for the progress bar in the specified pane.  
  
 To use this function for the given pane, you must call [CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar) first.  
  
##  <a name="setpanestyle"></a>  CMFCStatusBar::SetPaneStyle  

  
```  
void SetPaneStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *nStyle*  
  
### Remarks  
  
##  <a name="setpanetext"></a>  CMFCStatusBar::SetPaneText  

  
```  
virtual BOOL SetPaneText(
    int nIndex,  
    LPCTSTR lpszNewText,  
    BOOL bUpdate = TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 [in] *lpszNewText*  
 [in] *bUpdate*  
  
### Return Value  
  
### Remarks  
  
##  <a name="setpanetextcolor"></a>  CMFCStatusBar::SetPaneTextColor  
 Sets the text color of the specified pane.  
  
```  
void SetPaneTextColor(
    int nIndex,  
    COLORREF clrText=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### Parameters  
 [in] *nIndex*  
 Specifies the index of the pane to which you want to assign a new text color.  
  
 [in] *clrText*  
 Specifies the text color.  
  
 [in] *bUpdate*  
 If TRUE, update the pane content immediately. Otherwise, do not update the pane content until the pane is invalidated by another method.  
  
##  <a name="setpanewidth"></a>  CMFCStatusBar::SetPaneWidth  
 Set the width of the status bar pane.  
  
```  
void SetPaneWidth(
    int nIndex,  
    int cx);
```  
  
### Parameters  
 [in] *nIndex*  
 The index of the status bar pane for which to set a new width.  
  
 [in] *cx*  
 The new width of the status bar pane, in pixels.  
  
##  <a name="settiptext"></a>  CMFCStatusBar::SetTipText  
 Set the tooltip text of a status bar pane.  
  
```  
void SetTipText(
    int nIndex,  
    LPCTSTR pszTipText);
```  
  
### Parameters  
 [in] *nIndex*  
 The index of the pane to which you want to assign the tooltip text.  
  
 [in] *pszTipText*  
 The new tooltip text.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CStatusBar Class](../../mfc/reference/cstatusbar-class.md)
