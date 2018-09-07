---
title: "CMFCRibbonStatusBarPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCRibbonStatusBarPane", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::GetAlmostLargeText", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::GetTextAlign", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::IsAnimation", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::IsExtended", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnDrawBorder", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnFillBackground", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetAlmostLargeText", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetAnimationList", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::SetTextAlign", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::StartAnimation", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::StopAnimation", "AFXRIBBONSTATUSBARPANE/CMFCRibbonStatusBarPane::OnFinishAnimation"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCRibbonStatusBarPane [MFC], CMFCRibbonStatusBarPane", "CMFCRibbonStatusBarPane [MFC], GetAlmostLargeText", "CMFCRibbonStatusBarPane [MFC], GetTextAlign", "CMFCRibbonStatusBarPane [MFC], IsAnimation", "CMFCRibbonStatusBarPane [MFC], IsExtended", "CMFCRibbonStatusBarPane [MFC], OnDrawBorder", "CMFCRibbonStatusBarPane [MFC], OnFillBackground", "CMFCRibbonStatusBarPane [MFC], SetAlmostLargeText", "CMFCRibbonStatusBarPane [MFC], SetAnimationList", "CMFCRibbonStatusBarPane [MFC], SetTextAlign", "CMFCRibbonStatusBarPane [MFC], StartAnimation", "CMFCRibbonStatusBarPane [MFC], StopAnimation", "CMFCRibbonStatusBarPane [MFC], OnFinishAnimation"]
ms.assetid: 5d034c3c-ecca-4267-b88c-0f55a2884dd0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCRibbonStatusBarPane Class
The `CMFCRibbonStatusBarPane` class implements a ribbon element that you can add to a ribbon status bar.  
  
## Syntax  
  
```  
class CMFCRibbonStatusBarPane : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane](#cmfcribbonstatusbarpane)|Constructs and initializes a `CMFCRibbonStatusBarPane` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonStatusBarPane::GetAlmostLargeText](#getalmostlargetext)|Returns the string that defines the longest text string that can be displayed in the pane without truncation.|  
|[CMFCRibbonStatusBarPane::GetTextAlign](#gettextalign)|Returns the current setting of the text alignment.|  
|[CMFCRibbonStatusBarPane::IsAnimation](#isanimation)|Determines whether the animation is in progress.|  
|[CMFCRibbonStatusBarPane::IsExtended](#isextended)|Determines whether the pane is located in the extended area of the ribbon status bar.|  
|[CMFCRibbonStatusBarPane::OnDrawBorder](#ondrawborder)|(Overrides [CMFCRibbonButton::OnDrawBorder](../../mfc/reference/cmfcribbonbutton-class.md#ondrawborder).)|  
|[CMFCRibbonStatusBarPane::OnFillBackground](#onfillbackground)|(Overrides [CMFCRibbonButton::OnFillBackground](../../mfc/reference/cmfcribbonbutton-class.md#onfillbackground).)|  
|[CMFCRibbonStatusBarPane::SetAlmostLargeText](#setalmostlargetext)|Defines the longest text string that can be displayed in the pane without truncation.|  
|[CMFCRibbonStatusBarPane::SetAnimationList](#setanimationlist)|Assigns to the pane an image list that can be used for animation.|  
|[CMFCRibbonStatusBarPane::SetTextAlign](#settextalign)|Sets the text alignment.|  
|[CMFCRibbonStatusBarPane::StartAnimation](#startanimation)|Starts the animation that is assigned to the pane.|  
|[CMFCRibbonStatusBarPane::StopAnimation](#stopanimation)|Stops the animation that is assigned to the pane. .|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonStatusBarPane::OnFinishAnimation](#onfinishanimation)|Called by the framework when the animation that is assigned to the pane stops.|  
  
## Example  
 The following example demonstrates how to use the various methods in the `CMFCRibbonStatusBarPane` class. The example shows how to construct a `CMFCRibbonStatusBarPane` object, set the text alignment of the label of the status bar pane, define the longest text that can be displayed in the status bar pane without truncation, attach to the status bar pane an image list that can be used for animation, and start the animation.  
  
 [!code-cpp[NVC_MFC_RibbonApp#2](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbarpane-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonStatusBarPane](../../mfc/reference/cmfcribbonstatusbarpane-class.md)  
  
## Requirements  
 **Header:** afxribbonstatusbarpane.h  
  
##  <a name="cmfcribbonstatusbarpane"></a>  CMFCRibbonStatusBarPane::CMFCRibbonStatusBarPane  
 Construct a pane object in the status bar.  
  
```  
CMFCRibbonStatusBarPane(
    UINT nCmdID,  
    LPCTSTR lpszText,  
    BOOL bIsStatic=FALSE,  
    HICON hIcon=NULL,  
    LPCTSTR lpszAlmostLargeText=NULL);

CMFCRibbonStatusBarPane(
    UINT nCmdID,  
    LPCTSTR lpszText,  
    HBITMAP hBmpAnimationList,  
    int cxAnimation=16,  
    COLORREF clrTrnsp=RGB(192,192 1,192) 1,  
    HICON hIcon=NULL,  
    BOOL bIsStatic=FALSE);

CMFCRibbonStatusBarPane(
    UINT nCmdID,  
    LPCTSTR lpszText,  
    UINT uiAnimationListResID,  
    int cxAnimation=16,  
    COLORREF clrTrnsp=RGB(192, 192 1, 192) 1,  
    HICON hIcon=NULL,  
    BOOL bIsStatic=FALSE);
```  
  
### Parameters  
 [in] *nCmdID*  
 Specifies the command ID of the pane.  
  
 [in] *lpszText*  
 Specifies text string to be displayed on pane.  
  
 [in] *bIsStatic*  
 If TRUE, the status pane cannot be highlighted or selected by clicking it.  
  
 [in] *hIcon*  
 Specifies a handle to an icon to be displayed on the pane.  
  
 [in] *lpszAlmostLargeText*  
 Specifies the longest text string that can be displayed by the pane.  
  
 [in] *hBmpAnimationList*  
 Specifies a handle to an image list that is used for animation.  
  
 [in] *cxAnimation*  
 Specifies the width, in pixels, of the icon in the image list that is used for animation.  
  
 [in] *clrTrnsp*  
 Specifies the transparent color of images in the image list that are used for animation.  
  
 [in] *uiAnimationListResID*  
 Specifies a resource ID of an image list that is used for animation.  
  
##  <a name="getalmostlargetext"></a>  CMFCRibbonStatusBarPane::GetAlmostLargeText  
 Gets the longest text string that the status bar pane can display.  
  
```  
LPCTSTR GetAlmostLargeText() const;  
```  
  
### Return Value  
 The longest text string that the status bar pane can display.  
  
##  <a name="gettextalign"></a>  CMFCRibbonStatusBarPane::GetTextAlign  
 Gets the current setting of the text alignment of the label of the status bar pane.  
  
```  
int GetTextAlign() const;  
```  
  
### Return Value  
 The current text alignment which can be one of the following:  
  
-   TA_LEFT  
  
-   TA_CENTER  
  
-   TA_RIGHT.  
  
##  <a name="isanimation"></a>  CMFCRibbonStatusBarPane::IsAnimation  
 Determines whether the animation is in progress.  
  
```  
BOOL IsAnimation() const;  
```  
  
### Return Value  
 TRUE if animation is in progress; FALSE otherwise.  
  
##  <a name="isextended"></a>  CMFCRibbonStatusBarPane::IsExtended  
 Determine whether the pane is located in the extended area of the ribbon status bar.  
  
```  
BOOL IsExtended() const;  
```  
  
### Return Value  
 TRUE if pane is on status bar extended area. FALSE otherwise.  
  
##  <a name="ondrawborder"></a>  CMFCRibbonStatusBarPane::OnDrawBorder  
 For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.  
  
```  
virtual void OnDrawBorder(CDC*);
```  
  
### Parameters  
 [in] *CDC**  
  
### Remarks  
  
##  <a name="onfillbackground"></a>  CMFCRibbonStatusBarPane::OnFillBackground  
 For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.  
  
```  
virtual COLORREF OnFillBackground(CDC* pDC);
```  
  
### Parameters  
 [in] *pDC*  
  
### Return Value  
  
### Remarks  
  
##  <a name="onfinishanimation"></a>  CMFCRibbonStatusBarPane::OnFinishAnimation  
 Framework calls this method when the animation that is assigned to the pane ends.  
  
```  
virtual void OnFinishAnimation();
```  
  
### Remarks  
 `StopAnimation` method calls the `OnFinishAnimation` method, which you can use to clean up data when the animation ends.  
  
##  <a name="setalmostlargetext"></a>  CMFCRibbonStatusBarPane::SetAlmostLargeText  
 Define the longest text that can be displayed in the status bar pane without truncation.  
  
```  
void SetAlmostLargeText(LPCTSTR lpszAlmostLargeText);
```  
  
### Parameters  
 [in] *lpszAlmostLargeText*  
 Specifies the longest string that can be displayed on the status bar pane without truncation.  
  
### Remarks  
 The library calculates the size of text that *lpszAlmostLargeText* specifies and resizes the pane accordingly. The text will be truncated if it still does not fit in the pane.  
  
##  <a name="setanimationlist"></a>  CMFCRibbonStatusBarPane::SetAnimationList  
 Attaches to the status bar pane an image list that can be used for animation.  
  
```  
void SetAnimationList(
    HBITMAP hBmpAnimationList,  
    int cxAnimation=16,  
    COLORREF clrTransp=RGB(192, 192 1, 192) 1);

BOOL SetAnimationList(
    UINT uiAnimationListResID,  
    int cxAnimation=16,  
    COLORREF clrTransp=RGB(192, 192 1, 192) 1);
```  
  
### Parameters  
 [in] *hBmpAnimationList*  
 Specifies a handle to an image list.  
  
 [in] *cxAnimation*  
 Specifies the width, in pixels, of the frame in the image list.  
  
 [in] *clrTransp*  
 Specifies the transparent color of the image list.  
  
 [in] *uiAnimationListResID*  
 Specifies the resource ID of the image list.  
  
### Return Value  
 TRUE if the image list is successfully attached to the status bar pane; FALSE otherwise.  
  
##  <a name="settextalign"></a>  CMFCRibbonStatusBarPane::SetTextAlign  
 Sets the text alignment of the label of the status bar pane.  
  
```  
void SetTextAlign(int nAlign);
```  
  
### Parameters  
 [in] *nAlign*  
 Specifies the text alignment.  
  
### Remarks  
 *nAlign* can have one of the following values:  
  
- TA_LEFT: left alignment  
  
- TA_CENTER: center alignment  
  
- TA_RIGHT: right alignment  
  
##  <a name="startanimation"></a>  CMFCRibbonStatusBarPane::StartAnimation  
 Starts the animation that you assign to the pane.  
  
```  
void StartAnimation(
    UINT nFrameDelay=500,  
    UINT nDuration=-1);
```  
  
### Parameters  
 [in] *nFrameDelay*  
 Specifies the animation frame rate, in milliseconds.  
  
 [in] *nDuration*  
 Specifies how long to play the animation, in milliseconds. Use -1 for an infinite loop.  
  
### Remarks  
 You must specify a handle to an image list before you call `StartAnimation` by using `SetAnimationList`.  
  
##  <a name="stopanimation"></a>  CMFCRibbonStatusBarPane::StopAnimation  
 Stops the animation that you assigned to the status bar pane.  
  
```  
void StopAnimation();
```  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonStatusBar Class](../../mfc/reference/cmfcribbonstatusbar-class.md)
