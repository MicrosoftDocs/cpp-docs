---
title: "CAnimateCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimateCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "animation controls [C++], CAnimateCtrl class"
  - "Windows common controls [C++], CAnimateCtrl class"
  - "CAnimateCtrl class"
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
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
# CAnimateCtrl Class
Provides the functionality of the Windows common animation control.  
  
## Syntax  
  
```  
class CAnimateCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl)|Constructs a `CAnimateCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimateCtrl::Close](#canimatectrl__close)|Closes the AVI clip.|  
|[CAnimateCtrl::Create](#canimatectrl__create)|Creates an animation control and attaches it to a `CAnimateCtrl` object.|  
|[CAnimateCtrl::CreateEx](#canimatectrl__createex)|Creates an animation control with the specified Windows extended styles and attaches it to a `CAnimateCtrl` object.|  
|[CAnimateCtrl::IsPlaying](#canimatectrl__isplaying)|Indicates whether an Audio-Video Interleaved (AVI) clip is playing.|  
|[CAnimateCtrl::Open](#canimatectrl__open)|Opens an AVI clip from a file or resource and displays the first frame.|  
|[CAnimateCtrl::Play](#canimatectrl__play)|Plays the AVI clip without sound.|  
|[CAnimateCtrl::Seek](#canimatectrl__seek)|Displays a selected single frame of the AVI clip.|  
|[CAnimateCtrl::Stop](#canimatectrl__stop)|Stops playing the AVI clip.|  
  
## Remarks  
 This control (and therefore the `CAnimateCtrl` class) is available only to programs running under Windows 95, Windows 98, and Windows NT version 3.51 and later.  
  
 An animation control is a rectangular window that displays a clip in AVI (Audio Video Interleaved) format— the standard Windows video/audio format. An AVI clip is a series of bitmap frames, like a movie.  
  
 Animation controls can play only simple AVI clips. Specifically, the clips to be played by an animation control must meet the following requirements:  
  
-   There must be exactly one video stream and it must have at least one frame.  
  
-   There can be at most two streams in the file (typically the other stream, if present, is an audio stream, although the animation control ignores audio information).  
  
-   The clip must either be uncompressed or compressed with RLE8 compression.  
  
-   No palette changes are allowed in the video stream.  
  
 You can add the AVI clip to your application as an AVI resource, or it can accompany your application as a separate AVI file.  
  
 Because your thread continues executing while the AVI clip is displayed, one common use for an animation control is to indicate system activity during a lengthy operation. For example, the Find dialog box of File Explorer displays a moving magnifying glass as the system searches for a file.  
  
 If you create a `CAnimateCtrl` object within a dialog box or from a dialog resource using the dialog editor, it will be automatically destroyed when the user closes the dialog box.  
  
 If you create a `CAnimateCtrl` object within a window, you may need to destroy it. If you create the `CAnimateCtrl` object on the stack, it is destroyed automatically. If you create the `CAnimateCtrl` object on the heap by using the **new** function, you must call **delete** on the object to destroy it. If you derive a new class from `CAnimateCtrl` and allocate any memory in that class, override the `CAnimateCtrl` destructor to dispose of the allocations.  
  
 For more information on using `CAnimateCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CAnimateCtrl](../../mfc/using-canimatectrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CAnimateCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="canimatectrl__canimatectrl"></a>  CAnimateCtrl::CAnimateCtrl  
 Constructs a `CAnimateCtrl` object.  
  
```  
CAnimateCtrl();
```  
  
### Remarks  
 You must call the [Create](#canimatectrl__create) member function before you can perform any other operations on the object you create.  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]  
  
##  <a name="canimatectrl__close"></a>  CAnimateCtrl::Close  
 Closes the AVI clip that was previously opened in the animation control (if any) and removes it from memory.  
  
```  
BOOL Close();
```  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
##  <a name="canimatectrl__create"></a>  CAnimateCtrl::Create  
 Creates an animation control and attaches it to a `CAnimateCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the animation control's style. Apply any combination of the windows styles described in the Remarks section below and the animation control styles described in [Animation Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb761886) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifies the animation control's position and size. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](../../mfc/reference/rect-structure1.md) structure.  
  
 `pParentWnd`  
 Specifies the animation control's parent window, usually a `CDialog`. It must not be **NULL.**  
  
 `nID`  
 Specifies the animation control's ID.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 You construct a `CAnimateCtrl` in two steps. First, call the constructor, and then call **Create**, which creates the animation control and attaches it to the `CAnimateCtrl` object.  
  
 Apply the following [window styles](../../mfc/reference/window-styles.md) to an animation control.  
  
- **WS_CHILD** Always  
  
- **WS_VISIBLE** Usually  
  
- **WS_DISABLED** Rarely  
  
 If you want to use extended windows styles with your animation control, call [CreateEx](#canimatectrl__createex) instead of **Create**.  
  
 In addition to the window styles listed above, you may want to apply one or more of the animation control styles to an animation control. See the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information on [animation control styles](http://msdn.microsoft.com/library/windows/desktop/bb761886).  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
##  <a name="canimatectrl__createex"></a>  CAnimateCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CAnimateCtrl` object.  
  
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
 Specifies the animation control's style. Apply any combination of the window and animation control styles described in [Animation Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb761886) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#canimatectrl__create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="canimatectrl__isplaying"></a>  CAnimateCtrl::IsPlaying  
 Indicates whether an Audio-Video Interleaved (AVI) clip is playing.  
  
```  
BOOL IsPlaying() const;

 
```  
  
### Return Value  
 `true` if an AVI clip is playing; otherwise, `false`.  
  
### Remarks  
 This method sends the [ACM_ISPLAYING](http://msdn.microsoft.com/library/windows/desktop/bb761895) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="canimatectrl__open"></a>  CAnimateCtrl::Open  
 Call this function to open an AVI clip and display its first frame.  
  
```  
BOOL Open(LPCTSTR lpszFileName);

 
BOOL Open(UINT nID);
```  
  
### Parameters  
 `lpszFileName`  
 A `CString` object or a pointer to a null-terminated string that contains either the name of the AVI file or the name of an AVI resource. If this parameter is **NULL**, the system closes the AVI clip that was previously opened for the animation control, if any.  
  
 `nID`  
 The AVI resource identifier. If this parameter is **NULL**, the system closes the AVI clip that was previously opened for the animation control, if any.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The AVI resource is loaded from the module that created the animation control.  
  
 **Open** does not support sound in an AVI clip; you can open only silent AVI clips.  
  
 If the animation control has the `ACS_AUTOPLAY` style, the animation control will automatically start playing the clip immediately after it opens it. It will continue to play the clip in the background while your thread continues executing. When the clip is done playing, it will automatically be repeated.  
  
 If the animation control has the `ACS_CENTER` style, the AVI clip will be centered in the control and the size of the control will not change. If the animation control does not have the `ACS_CENTER` style, the control will be resized when the AVI clip is opened to the size of the images in the AVI clip. The position of the top left corner of the control will not change, only the size of the control.  
  
 If the animation control has the `ACS_TRANSPARENT` style, the first frame will be drawn using a transparent background rather than the background color specified in the animation clip.  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
##  <a name="canimatectrl__play"></a>  CAnimateCtrl::Play  
 Call this function to play an AVI clip in an animation control.  
  
```  
BOOL Play(
    UINT nFrom,  
    UINT nTo,  
    UINT nRep);
```  
  
### Parameters  
 `nFrom`  
 Zero-based index of the frame where playing begins. Value must be less than 65,536. A value of 0 means begin with the first frame in the AVI clip.  
  
 `nTo`  
 Zero-based index of the frame where playing ends. Value must be less than 65,536. A value of – 1 means end with the last frame in the AVI clip.  
  
 *nRep*  
 Number of times to replay the AVI clip. A value of – 1 means replay the file indefinitely.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The animation control will play the clip in the background while your thread continues executing. If the animation control has `ACS_TRANSPARENT` style, the AVI clip will be played using a transparent background rather than the background color specified in the animation clip.  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
##  <a name="canimatectrl__seek"></a>  CAnimateCtrl::Seek  
 Call this function to statically display a single frame of your AVI clip.  
  
```  
BOOL Seek(UINT nTo);
```  
  
### Parameters  
 `nTo`  
 Zero-based index of the frame to display. Value must be less than 65,536. A value of 0 means display the first frame in the AVI clip. A value of –1 means display the last frame in the AVI clip.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 If the animation control has `ACS_TRANSPARENT` style, the AVI clip will be drawn using a transparent background rather than the background color specified in the animation clip.  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
##  <a name="canimatectrl__stop"></a>  CAnimateCtrl::Stop  
 Call this function to stop playing an AVI clip in an animation control.  
  
```  
BOOL Stop();
```  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
  See the example for [CAnimateCtrl::CAnimateCtrl](#canimatectrl__canimatectrl).  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CAnimateCtrl::Create](#canimatectrl__create)   
 [ON_CONTROL](http://msdn.microsoft.com/library/2cb7ebdf-296b-4606-b191-3449835003db)

