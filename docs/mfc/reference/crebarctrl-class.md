---
title: "CReBarCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CReBarCtrl", "AFXCMN/CReBarCtrl", "AFXCMN/CReBarCtrl::CReBarCtrl", "AFXCMN/CReBarCtrl::BeginDrag", "AFXCMN/CReBarCtrl::Create", "AFXCMN/CReBarCtrl::CreateEx", "AFXCMN/CReBarCtrl::DeleteBand", "AFXCMN/CReBarCtrl::DragMove", "AFXCMN/CReBarCtrl::EndDrag", "AFXCMN/CReBarCtrl::GetBandBorders", "AFXCMN/CReBarCtrl::GetBandCount", "AFXCMN/CReBarCtrl::GetBandInfo", "AFXCMN/CReBarCtrl::GetBandMargins", "AFXCMN/CReBarCtrl::GetBarHeight", "AFXCMN/CReBarCtrl::GetBarInfo", "AFXCMN/CReBarCtrl::GetBkColor", "AFXCMN/CReBarCtrl::GetColorScheme", "AFXCMN/CReBarCtrl::GetDropTarget", "AFXCMN/CReBarCtrl::GetExtendedStyle", "AFXCMN/CReBarCtrl::GetImageList", "AFXCMN/CReBarCtrl::GetPalette", "AFXCMN/CReBarCtrl::GetRect", "AFXCMN/CReBarCtrl::GetRowCount", "AFXCMN/CReBarCtrl::GetRowHeight", "AFXCMN/CReBarCtrl::GetTextColor", "AFXCMN/CReBarCtrl::GetToolTips", "AFXCMN/CReBarCtrl::HitTest", "AFXCMN/CReBarCtrl::IDToIndex", "AFXCMN/CReBarCtrl::InsertBand", "AFXCMN/CReBarCtrl::MaximizeBand", "AFXCMN/CReBarCtrl::MinimizeBand", "AFXCMN/CReBarCtrl::MoveBand", "AFXCMN/CReBarCtrl::PushChevron", "AFXCMN/CReBarCtrl::RestoreBand", "AFXCMN/CReBarCtrl::SetBandInfo", "AFXCMN/CReBarCtrl::SetBandWidth", "AFXCMN/CReBarCtrl::SetBarInfo", "AFXCMN/CReBarCtrl::SetBkColor", "AFXCMN/CReBarCtrl::SetColorScheme", "AFXCMN/CReBarCtrl::SetExtendedStyle", "AFXCMN/CReBarCtrl::SetImageList", "AFXCMN/CReBarCtrl::SetOwner", "AFXCMN/CReBarCtrl::SetPalette", "AFXCMN/CReBarCtrl::SetTextColor", "AFXCMN/CReBarCtrl::SetToolTips", "AFXCMN/CReBarCtrl::SetWindowTheme", "AFXCMN/CReBarCtrl::ShowBand", "AFXCMN/CReBarCtrl::SizeToRect"]
dev_langs: ["C++"]
helpviewer_keywords: ["CReBarCtrl [MFC], CReBarCtrl", "CReBarCtrl [MFC], BeginDrag", "CReBarCtrl [MFC], Create", "CReBarCtrl [MFC], CreateEx", "CReBarCtrl [MFC], DeleteBand", "CReBarCtrl [MFC], DragMove", "CReBarCtrl [MFC], EndDrag", "CReBarCtrl [MFC], GetBandBorders", "CReBarCtrl [MFC], GetBandCount", "CReBarCtrl [MFC], GetBandInfo", "CReBarCtrl [MFC], GetBandMargins", "CReBarCtrl [MFC], GetBarHeight", "CReBarCtrl [MFC], GetBarInfo", "CReBarCtrl [MFC], GetBkColor", "CReBarCtrl [MFC], GetColorScheme", "CReBarCtrl [MFC], GetDropTarget", "CReBarCtrl [MFC], GetExtendedStyle", "CReBarCtrl [MFC], GetImageList", "CReBarCtrl [MFC], GetPalette", "CReBarCtrl [MFC], GetRect", "CReBarCtrl [MFC], GetRowCount", "CReBarCtrl [MFC], GetRowHeight", "CReBarCtrl [MFC], GetTextColor", "CReBarCtrl [MFC], GetToolTips", "CReBarCtrl [MFC], HitTest", "CReBarCtrl [MFC], IDToIndex", "CReBarCtrl [MFC], InsertBand", "CReBarCtrl [MFC], MaximizeBand", "CReBarCtrl [MFC], MinimizeBand", "CReBarCtrl [MFC], MoveBand", "CReBarCtrl [MFC], PushChevron", "CReBarCtrl [MFC], RestoreBand", "CReBarCtrl [MFC], SetBandInfo", "CReBarCtrl [MFC], SetBandWidth", "CReBarCtrl [MFC], SetBarInfo", "CReBarCtrl [MFC], SetBkColor", "CReBarCtrl [MFC], SetColorScheme", "CReBarCtrl [MFC], SetExtendedStyle", "CReBarCtrl [MFC], SetImageList", "CReBarCtrl [MFC], SetOwner", "CReBarCtrl [MFC], SetPalette", "CReBarCtrl [MFC], SetTextColor", "CReBarCtrl [MFC], SetToolTips", "CReBarCtrl [MFC], SetWindowTheme", "CReBarCtrl [MFC], ShowBand", "CReBarCtrl [MFC], SizeToRect"]
ms.assetid: 154570d7-e48c-425d-8c7e-c64542bcb4cc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CReBarCtrl Class
Encapsulates the functionality of a rebar control, which is a container for a child window.  
  
## Syntax  
  
```  
class CReBarCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CReBarCtrl::CReBarCtrl](#crebarctrl)|Constructs a `CReBarCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CReBarCtrl::BeginDrag](#begindrag)|Places the rebar control into drag-and-drop mode.|  
|[CReBarCtrl::Create](#create)|Creates the rebar control and attaches it to the `CReBarCtrl` object.|  
|[CReBarCtrl::CreateEx](#createex)|Creates a rebar control with the specified Windows extended styles and attaches it to a `CReBarCtrl` object.|  
|[CReBarCtrl::DeleteBand](#deleteband)|Deletes a band from a rebar control.|  
|[CReBarCtrl::DragMove](#dragmove)|Updates the drag position in the rebar control after a call to `BeginDrag`.|  
|[CReBarCtrl::EndDrag](#enddrag)|Terminates the rebar control's drag-and-drop operation.|  
|[CReBarCtrl::GetBandBorders](#getbandborders)|Retrieves the borders of a band.|  
|[CReBarCtrl::GetBandCount](#getbandcount)|Retrieves the count of bands currently in the rebar control.|  
|[CReBarCtrl::GetBandInfo](#getbandinfo)|Retrieves information about a specified band in a rebar control.|  
|[CReBarCtrl::GetBandMargins](#getbandmargins)|Retrieves the margins of a band.|  
|[CReBarCtrl::GetBarHeight](#getbarheight)|Retrieves the height of the rebar control.|  
|[CReBarCtrl::GetBarInfo](#getbarinfo)|Retrieves information about the rebar control and the image list it uses.|  
|[CReBarCtrl::GetBkColor](#getbkcolor)|Retrieves a rebar control's default background color.|  
|[CReBarCtrl::GetColorScheme](#getcolorscheme)|Retrieves the [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) structure associated with the rebar control.|  
|[CReBarCtrl::GetDropTarget](#getdroptarget)|Retrieves a rebar control's `IDropTarget` interface pointer.|  
|[CReBarCtrl::GetExtendedStyle](#getextendedstyle)|Gets the extended style of the current rebar control.|  
|[CReBarCtrl::GetImageList](#getimagelist)|Retrieves the image list associated with a rebar control.|  
|[CReBarCtrl::GetPalette](#getpalette)|Retrieves the rebar control's current palette.|  
|[CReBarCtrl::GetRect](#getrect)|Retrieves the bounding rectangle for a given band in a rebar control.|  
|[CReBarCtrl::GetRowCount](#getrowcount)|Retrieves the number of band rows in a rebar control.|  
|[CReBarCtrl::GetRowHeight](#getrowheight)|Retrieves the height of a specified row in a rebar control.|  
|[CReBarCtrl::GetTextColor](#gettextcolor)|Retrieves a rebar control's default text color.|  
|[CReBarCtrl::GetToolTips](#gettooltips)|Retrieves the handle to any tool tip control associated with the rebar control.|  
|[CReBarCtrl::HitTest](#hittest)|Determines which portion of a rebar band is at a given point on the screen, if a rebar band exists at that point.|  
|[CReBarCtrl::IDToIndex](#idtoindex)|Converts a band identifier (ID) to a band index in a rebar control.|  
|[CReBarCtrl::InsertBand](#insertband)|Inserts a new band in a rebar control.|  
|[CReBarCtrl::MaximizeBand](#maximizeband)|Resizes a band in a rebar control to its largest size.|  
|[CReBarCtrl::MinimizeBand](#minimizeband)|Resizes a band in a rebar control to its smallest size.|  
|[CReBarCtrl::MoveBand](#moveband)|Moves a band from one index to another.|  
|[CReBarCtrl::PushChevron](#pushchevron)|Programmatically pushes a chevron.|  
|[CReBarCtrl::RestoreBand](#restoreband)|Resizes a band in a rebar control to its ideal size.|  
|[CReBarCtrl::SetBandInfo](#setbandinfo)|Sets characteristics of an existing band in a rebar control.|  
|[CReBarCtrl::SetBandWidth](#setbandwidth)|Sets the width of the specified docked band in the current rebar control.|  
|[CReBarCtrl::SetBarInfo](#setbarinfo)|Sets the characteristics of a rebar control.|  
|[CReBarCtrl::SetBkColor](#setbkcolor)|Sets a rebar control's default background color.|  
|[CReBarCtrl::SetColorScheme](#setcolorscheme)|Sets the color scheme for the buttons on a rebar control.|  
|[CReBarCtrl::SetExtendedStyle](#setextendedstyle)|Sets the extended styles for the current rebar control.|  
|[CReBarCtrl::SetImageList](#setimagelist)|Sets a rebar control's image list.|  
|[CReBarCtrl::SetOwner](#setowner)|Sets a rebar control's owner window.|  
|[CReBarCtrl::SetPalette](#setpalette)|Sets the rebar control's current palette.|  
|[CReBarCtrl::SetTextColor](#settextcolor)|Sets a rebar control's default text color.|  
|[CReBarCtrl::SetToolTips](#settooltips)|Associates a tool tip control with the rebar control.|  
|[CReBarCtrl::SetWindowTheme](#setwindowtheme)|Sets the visual style of the rebar control.|  
|[CReBarCtrl::ShowBand](#showband)|Shows or hides a given band in a rebar control.|  
|[CReBarCtrl::SizeToRect](#sizetorect)|Fits a rebar control to a specified rectangle.|  
  
## Remarks  
 The application in which the rebar control resides assigns the child window contained by the rebar control to the rebar band. The child window is usually another common control.  
  
 Rebar controls contain one or more bands. Each band can contain a combination of a gripper bar, a bitmap, a text label, and a child window. The band can contain only one of each of these items.  
  
 The rebar control can display the child window over a specified background bitmap. All rebar control bands can be resized, except those that use the RBBS_FIXEDSIZE style. As you reposition or resize a rebar control band, the rebar control manages the size and position of the child window assigned to that band. To resize or change the order of bands within the control, click and drag a band's gripper bar.  
  
 The following illustration shows a rebar control that has three bands:  
  
-   Band 0 contains a flat, transparent toolbar control.  
  
-   Band 1 contains both transparent standard and transparent dropdown buttons.  
  
-   Band 2 contains a combo box and four standard buttons.  
  
     ![Example of a Rebar menu](../../mfc/reference/media/vc4scc1.gif "vc4scc1")  
  
## Rebar control  
 Rebar controls support:  
  
-   Image lists.  
  
-   Message-handling.  
  
-   Custom draw functionality.  
  
-   A variety of control styles in addition to standard window styles. For a list of these styles, see [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the Windows SDK.  
  
 For more information, see [Using CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CReBarCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="begindrag"></a>  CReBarCtrl::BeginDrag  
 Implements the behavior of the Win32 message [RB_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb774429), as described in the Windows SDK.  
  
```  
void BeginDrag(
    UINT uBand,  
    DWORD dwPos = (DWORD)-1);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band that the drag-and-drop operation will affect.  
  
 *dwPos*  
 A DWORD value that contains the starting mouse coordinates. The horizontal coordinate is contained in the LOWORD and the vertical coordinate is contained in the HIWORD. If you pass (DWORD)-1, the rebar control will use the position of the mouse the last time the control's thread called `GetMessage` or `PeekMessage`.  
  
##  <a name="create"></a>  CReBarCtrl::Create  
 Creates the rebar control and attaches it to the `CReBarCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 *dwStyle*  
 Specifies the combination of rebar control styles applied to the control. See [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the Windows SDK for a list of supported styles.  
  
 *rect*  
 A reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure, which is the position and size of the rebar control.  
  
 *pParentWnd*  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the rebar control. It must not be NULL.  
  
 *nID*  
 Specifies the rebar control's control ID.  
  
### Return Value  
 Nonzero if the object was created successfully; otherwise 0.  
  
### Remarks  
 Create a rebar control in two steps:  
  
1.  Call [CReBarCtrl](#crebarctrl) to construct a `CReBarCtrl` object.  
  
2.  Call this member function, which creates the Windows rebar control and attaches it to the `CReBarCtrl` object.  
  
 When you call `Create`, the common controls are initialized.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#3](../../mfc/reference/codesnippet/cpp/crebarctrl-class_1.cpp)]  
  
##  <a name="createex"></a>  CReBarCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CReBarCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 *dwExStyle*  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the Windows SDK.  
  
 *dwStyle*  
 Specifies the combination of rebar control styles applied to the control. For a list of supported styles, see [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the Windows SDK.  
  
 *rect*  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.  
  
 *pParentWnd*  
 A pointer to the window that is the control's parent.  
  
 *nID*  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="crebarctrl"></a>  CReBarCtrl::CReBarCtrl  
 Creates a `CReBarCtrl` object.  
  
```  
CReBarCtrl();
```  
  
### Example  
  See the example for [CReBarCtrl::Create](#create).  
  
##  <a name="deleteband"></a>  CReBarCtrl::DeleteBand  
 Implements the behavior of the Win32 message [RB_DELETEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774431), as described in the Windows SDK.  
  
```  
BOOL DeleteBand(UINT uBand);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band to be deleted.  
  
### Return Value  
 Nonzero if the band deleted successfully; otherwise zero.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#4](../../mfc/reference/codesnippet/cpp/crebarctrl-class_2.cpp)]  
  
##  <a name="dragmove"></a>  CReBarCtrl::DragMove  
 Implements the behavior of the Win32 message [RB_DRAGMOVE](/windows/desktop/Controls/rb-dragmove), as described in the Windows SDK.  
  
```  
void DragMove(DWORD dwPos = (DWORD)-1);
```  
  
### Parameters  
 *dwPos*  
 A DWORD value that contains the new mouse coordinates. The horizontal coordinate is contained in the LOWORD and the vertical coordinate is contained in the HIWORD. If you pass (DWORD)-1, the rebar control will use the position of the mouse the last time the control's thread called `GetMessage` or `PeekMessage`.  
  
##  <a name="enddrag"></a>  CReBarCtrl::EndDrag  
 Implements the behavior of the Win32 message [RB_ENDDRAG](http://msdn.microsoft.com/library/windows/desktop/bb774435), as described in the Windows SDK.  
  
```  
void EndDrag();
```  
  
##  <a name="getbandborders"></a>  CReBarCtrl::GetBandBorders  
 Implements the behavior of the Win32 message [RB_GETBANDBORDERS](http://msdn.microsoft.com/library/windows/desktop/bb774437), as described in the Windows SDK.  
  
```  
void GetBandBorders(
    UINT uBand,  
    LPRECT prc) const;  
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band for which the borders will be retrieved.  
  
 *prc*  
 A pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that will receive the band borders. If the rebar control has the RBS_BANDBORDERS style, each member of this structure will receive the number of pixels, on the corresponding side of the band, that constitute the border. If the rebar control does not have the RBS_BANDBORDERS style, only the left member of this structure receives valid information. For a description of rebar control styles, see [Rebar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb774377) in the Windows SDK.  
  
##  <a name="getbandcount"></a>  CReBarCtrl::GetBandCount  
 Implements the behavior of the Win32 message [RB_GETBANDCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774439), as described in the Windows SDK.  
  
```  
UINT GetBandCount() const;  
```  
  
### Return Value  
 The number of bands assigned to the control.  
  
##  <a name="getbandinfo"></a>  CReBarCtrl::GetBandInfo  
 Implements the behavior of the Win32 message [RB_GETBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774451) as described in the Windows SDK.  
  
```  
BOOL GetBandInfo(
    UINT uBand,  
    REBARBANDINFO* prbbi) const;  
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band for which the information will be retrieved.  
  
 *prbbi*  
 A pointer to a [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) structure to receive the band information. You must set the `cbSize` member of this structure to `sizeof(REBARBANDINFO)` and set the `fMask` member to the items you want to retrieve before sending this message.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="getbandmargins"></a>  CReBarCtrl::GetBandMargins  
 Retrieves the margins of the band.  
  
```  
void GetBandMargins(PMARGINS pMargins);
```  
  
### Parameters  
 *pMargins*  
 A pointer to a [MARGINS](http://msdn.microsoft.com/library/windows/desktop/bb773244)structure that will receive the information.  
  
### Remarks  
 This member function emulates the functionality of the [RB_GETBANDMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb774453) message, as described in the Windows SDK.  
  
##  <a name="getbarheight"></a>  CReBarCtrl::GetBarHeight  
 Retrieves the height of the rebar bar.  
  
```  
UINT GetBarHeight() const;  
```  
  
### Return Value  
 Value that represents the height, in pixels, of the control.  
  
##  <a name="getbarinfo"></a>  CReBarCtrl::GetBarInfo  
 Implements the behavior of the Win32 message [RB_GETBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774457), as described in the Windows SDK.  
  
```  
BOOL GetBarInfo(REBARINFO* prbi) const;  
```  
  
### Parameters  
 *prbi*  
 A pointer to a [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) structure that will receive the rebar control information. You must set the *cbSize* member of this structure to `sizeof(REBARINFO)` before sending this message.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="getbkcolor"></a>  CReBarCtrl::GetBkColor  
 Implements the behavior of the Win32 message [RB_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774459), as described in the Windows SDK.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### Return Value  
 A COLORREF value that represent the current default background color.  
  
##  <a name="getcolorscheme"></a>  CReBarCtrl::GetColorScheme  
 Retrieves the [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) structure for the rebar control.  
  
```  
BOOL GetColorScheme(COLORSCHEME* lpcs);
```  
  
### Parameters  
 *lpcs*  
 A pointer to a [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) structure, as described in the Windows SDK.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The `COLORSCHEME` structure includes the button highlight color and the button shadow color.  
  
##  <a name="getdroptarget"></a>  CReBarCtrl::GetDropTarget  
 Implements the behavior of the Win32 message [RB_GETDROPTARGET](http://msdn.microsoft.com/library/windows/desktop/bb774463), as described in the Windows SDK.  
  
```  
IDropTarget* GetDropTarget() const;  
```  
  
### Return Value  
 A pointer to an [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interface.  
  
##  <a name="getextendedstyle"></a>  CReBarCtrl::GetExtendedStyle  
 Gets the extended styles of the current rebar control.  
  
```  
DWORD GetExtendedStyle() const;  
```  
  
### Return Value  
 A bitwise combination (OR) of flags that indicate the extended styles. The possible flags are RBS_EX_SPLITTER and RBS_EX_TRANSPARENT. For more information, see the *dwMask* parameter of the [CReBarCtrl::SetExtendedStyle](#setextendedstyle) method.  
  
### Remarks  
 This method sends the [RB_GETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb774433) message, which is described in the Windows SDK.  
  
##  <a name="getimagelist"></a>  CReBarCtrl::GetImageList  
 Gets the `CImageList` object associated with a rebar control.  
  
```  
CImageList* GetImageList() const;  
```  
  
### Return Value  
 A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object. Returns NULL if no image list is set for the control.  
  
### Remarks  
 This member function uses size and mask information stored in the [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) structure, as described in the Windows SDK.  
  
##  <a name="getpalette"></a>  CReBarCtrl::GetPalette  
 Retrieves the rebar control's current palette.  
  
```  
CPalette* GetPalette() const;  
```  
  
### Return Value  
 A pointer to a [CPalette](../../mfc/reference/cpalette-class.md) object specifying the rebar control's current palette.  
  
### Remarks  
 Note that this member function uses a `CPalette` object as its return value, rather than an HPALETTE.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#5](../../mfc/reference/codesnippet/cpp/crebarctrl-class_3.cpp)]  
  
##  <a name="getrect"></a>  CReBarCtrl::GetRect  
 Implements the behavior of the Win32 message [RB_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb774469), as described in the Windows SDK.  
  
```  
BOOL GetRect(
    UINT uBand,  
    LPRECT prc) const;  
```  
  
### Parameters  
 *uBand*  
 Zero-based index of a band in the rebar control.  
  
 *prc*  
 A pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that will receive the bounds of the rebar band.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#6](../../mfc/reference/codesnippet/cpp/crebarctrl-class_4.cpp)]  
  
##  <a name="getrowcount"></a>  CReBarCtrl::GetRowCount  
 Implements the behavior of the Win32 message [RB_GETROWCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774471), as described in the Windows SDK.  
  
```  
UINT GetRowCount() const;  
```  
  
### Return Value  
 A UINT value that represents the number of band rows in the control.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#7](../../mfc/reference/codesnippet/cpp/crebarctrl-class_5.cpp)]  
  
##  <a name="getrowheight"></a>  CReBarCtrl::GetRowHeight  
 Implements the behavior of the Win32 message [RB_GETROWHEIGHT](http://msdn.microsoft.com/library/windows/desktop/bb774473), as described in the Windows SDK.  
  
```  
UINT GetRowHeight(UINT uRow) const;  
```  
  
### Parameters  
 *uRow*  
 Zero-based index of the band that will have its height retrieved.  
  
### Return Value  
 A UINT value that represents the row height, in pixels.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#8](../../mfc/reference/codesnippet/cpp/crebarctrl-class_6.cpp)]  
  
##  <a name="gettextcolor"></a>  CReBarCtrl::GetTextColor  
 Implements the behavior of the Win32 message [RB_GETTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774475), as described in the Windows SDK.  
  
```  
COLORREF GetTextColor() const;  
```  
  
### Return Value  
 A COLORREF value that represent the current default text color.  
  
##  <a name="gettooltips"></a>  CReBarCtrl::GetToolTips  
 Implements the behavior of the Win32 message [RB_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb774477), as described in the Windows SDK.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### Return Value  
 A pointer to a [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) object.  
  
### Remarks  
 Note that the MFC implementation of `GetToolTips` returns a pointer to a `CToolTipCtrl`, rather than an HWND.  
  
##  <a name="hittest"></a>  CReBarCtrl::HitTest  
 Implements the behavior of the Win32 message [RB_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb774494), as described in the Windows SDK.  
  
```  
int HitTest(RBHITTESTINFO* prbht);
```  
  
### Parameters  
 *prbht*  
 A pointer to a [RBHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774391) structure. Before sending the message, the `pt` member of this structure must be initialized to the point that will be tested, in client coordinates.  
  
### Return Value  
 The zero-based index of the band at the given point, or -1 if no rebar band was at the point.  
  
##  <a name="idtoindex"></a>  CReBarCtrl::IDToIndex  
 Implements the behavior of the Win32 message [RB_IDTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774496), as described in the Windows SDK.  
  
```  
int IDToIndex(UINT uBandID) const;  
```  
  
### Parameters  
 *uBandID*  
 The application-defined identifier of the specified band, passed in the `wID` member of the [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) structure when the band is inserted.  
  
### Return Value  
 The zero-based band index if successful, or -1 otherwise. If duplicate band indices exist, the first one is returned.  
  
##  <a name="insertband"></a>  CReBarCtrl::InsertBand  
 Implements the behavior of the Win32 message [RB_INSERTBAND](http://msdn.microsoft.com/library/windows/desktop/bb774498), as described in the Windows SDK.  
  
```  
BOOL InsertBand(
    UINT uIndex,  
    REBARBANDINFO* prbbi);
```  
  
### Parameters  
 *uIndex*  
 Zero-based index of the location where the band will be inserted. If you set this parameter to -1, the control will add the new band at the last location.  
  
 *prbbi*  
 A pointer to a [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) structure that defines the band to be inserted. You must set the *cbSize* member of this structure to `sizeof(REBARBANDINFO)` before calling this function.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#9](../../mfc/reference/codesnippet/cpp/crebarctrl-class_7.cpp)]  
  
##  <a name="maximizeband"></a>  CReBarCtrl::MaximizeBand  
 Resizes a band in a rebar control to its largest size.  
  
```  
void MaximizeBand(UINT uBand);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band to be maximized.  
  
### Remarks  
 Implements the behavior of the Win32 message [RB_MAXIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774500) with `fIdeal` set to 0, as described in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#10](../../mfc/reference/codesnippet/cpp/crebarctrl-class_8.cpp)]  
  
##  <a name="minimizeband"></a>  CReBarCtrl::MinimizeBand  
 Resizes a band in a rebar control to its smallest size.  
  
```  
void MinimizeBand(UINT uBand);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band to be minimized.  
  
### Remarks  
 Implements the behavior of the Win32 message [RB_MINIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774502), as described in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#11](../../mfc/reference/codesnippet/cpp/crebarctrl-class_9.cpp)]  
  
##  <a name="moveband"></a>  CReBarCtrl::MoveBand  
 Implements the behavior of the Win32 message [RB_MOVEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774504), as described in the Windows SDK.  
  
```  
BOOL MoveBand(
    UINT uFrom,  
    UINT uTo);
```  
  
### Parameters  
 *uFrom*  
 Zero-based index of the band to be moved.  
  
 *uTo*  
 Zero-based index of the new band position. This parameter value must never be greater than the number of bands minus one. To obtain the number of bands, call [GetBandCount](#getbandcount).  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="pushchevron"></a>  CReBarCtrl::PushChevron  
 Implements the behavior of the Win32 message [RB_PUSHCHEVRON](http://msdn.microsoft.com/library/windows/desktop/bb774506), as described in the Windows SDK.  
  
```  
void PushChevron(
    UINT uBand,  
    LPARAM lAppValue);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band whose chevron is to be pushed.  
  
 *lAppValue*  
 An application defined 32-bit value. See *lAppValue* in [RB_PUSHCHEVRON](http://msdn.microsoft.com/library/windows/desktop/bb774506) in the Windows SDK.  
  
##  <a name="restoreband"></a>  CReBarCtrl::RestoreBand  
 Resizes a band in a rebar control to its ideal size.  
  
```  
void RestoreBand(UINT uBand);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band to be maximized.  
  
### Remarks  
 Implements the behavior of the Win32 message [RB_MAXIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774500) with `fIdeal` set to 1, as described in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#12](../../mfc/reference/codesnippet/cpp/crebarctrl-class_10.cpp)]  
  
##  <a name="setbandinfo"></a>  CReBarCtrl::SetBandInfo  
 Implements the behavior of the Win32 message [RB_SETBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774508), as described in the Windows SDK.  
  
```  
BOOL SetBandInfo(
    UINT uBand,  
    REBARBANDINFO* prbbi);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of the band to receive the new settings.  
  
 *prbbi*  
 Pointer to a [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) structure that defines the band to be inserted. You must set the `cbSize` member of this structure to `sizeof(REBARBANDINFO)` before sending this message.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#13](../../mfc/reference/codesnippet/cpp/crebarctrl-class_11.cpp)]  
  
##  <a name="setbandwidth"></a>  CReBarCtrl::SetBandWidth  
 Sets the width of the specified docked band in the current rebar control.  
  
```  
BOOL SetBandWidth(
    UINT uBand,   
    int cxWidth);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *uBand*|Zero-based index of a rebar band.|  
|[in] *cxWidth*|New width of the rebar band, in pixels.|  
  
### Return Value  
 TRUE if the method is successful; otherwise, FALSE.  
  
### Remarks  
 This method sends the [RB_SETBANDWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb774511) message, which is described in the Windows SDK.  
  
### Example  
 The following code example defines the variable, `m_rebar`, that is used to access the current rebar control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CReBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/crebarctrl-class_12.h)]  
  
### Example  
 The following code example sets each rebar band to be the same width.  
  
 [!code-cpp[NVC_MFC_CReBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/crebarctrl-class_13.cpp)]  
  
##  <a name="setbarinfo"></a>  CReBarCtrl::SetBarInfo  
 Implements the behavior of the Win32 message [RB_SETBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774513), as described in the Windows SDK.  
  
```  
BOOL SetBarInfo(REBARINFO* prbi);
```  
  
### Parameters  
 *prbi*  
 A pointer to a [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) structure that contains the information to be set. You must set the `cbSize` member of this structure to `sizeof(REBARINFO)` before sending this message  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
 [!code-cpp[NVC_MFC_CReBarCtrl#14](../../mfc/reference/codesnippet/cpp/crebarctrl-class_14.cpp)]  
  
##  <a name="setbkcolor"></a>  CReBarCtrl::SetBkColor  
 Implements the behavior of the Win32 message [RB_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774515), as described in the Windows SDK.  
  
```  
COLORREF SetBkColor(COLORREF clr);
```  
  
### Parameters  
 *clr*  
 The COLORREF value that represents the new default background color.  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that represents the previous default background color.  
  
### Remarks  
 See this topic for more information about when to set the background color, and how to set the default.  
  
##  <a name="setcolorscheme"></a>  CReBarCtrl::SetColorScheme  
 Sets the color scheme for the buttons on a rebar control.  
  
```  
void SetColorScheme(const COLORSCHEME* lpcs);
```  
  
### Parameters  
 *lpcs*  
 A pointer to a [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) structure, as described in the Windows SDK.  
  
### Remarks  
 The `COLORSCHEME` structure includes both the button highlight color and the button shadow color.  
  
##  <a name="setextendedstyle"></a>  CReBarCtrl::SetExtendedStyle  
 Sets the extended styles for the current rebar control.  
  
```  
DWORD SetExtendedStyle(
    DWORD dwMask,   
    DWORD dwStyleEx);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *dwMask*|A bitwise combination (OR) of flags that specify which flags in the *dwStyleEx* parameter apply. Use one or more of the following values:<br /><br /> RBS_EX_SPLITTER: By default, show the splitter on the bottom in horizontal mode, and to the right in vertical mode.<br /><br /> RBS_EX_TRANSPARENT: Forward the [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055) message to the parent window.|  
|[in] *dwStyleEx*|A bitwise combination (OR) of flags that specify the styles to apply. To set a style, specify the same flag that is used in the *dwMask* parameter. To reset a style, specify binary zero.|  
  
### Return Value  
 The previous extended style.  
  
### Remarks  
 This method sends the [RB_SETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb774519) message, which is described in the Windows SDK.  
  
##  <a name="setimagelist"></a>  CReBarCtrl::SetImageList  
 Assigns an image list to a rebar control.  
  
```  
BOOL SetImageList(CImageList* pImageList);
```  
  
### Parameters  
 *pImageList*  
 A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object containing the image list to be assigned to the rebar control.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="setowner"></a>  CReBarCtrl::SetOwner  
 Implements the behavior of the Win32 message [RB_SETPARENT](http://msdn.microsoft.com/library/windows/desktop/bb774522), as described in the Windows SDK.  
  
```  
CWnd* SetOwner(CWnd* pWnd);
```  
  
### Parameters  
 *pWnd*  
 A pointer to a `CWnd` object to set as the owner of the rebar control.  
  
### Return Value  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the current owner of the rebar control.  
  
### Remarks  
 Note that this member function uses pointers to `CWnd` objects for both the current and selected owner of the rebar control, rather than handles to windows.  
  
> [!NOTE]
>  This member function does not change the actual parent that was set when the control was created; rather it sends notification messages to the window you specify.  
  
##  <a name="setpalette"></a>  CReBarCtrl::SetPalette  
 Implements the behavior of the Win32 message [RB_SETPALETTE](http://msdn.microsoft.com/library/windows/desktop/bb774520), as described in the Windows SDK.  
  
```  
CPalette* SetPalette(HPALETTE hPal);
```  
  
### Parameters  
 *hPal*  
 An HPALETTE that specifies the new palette that the rebar control will use.  
  
### Return Value  
 A pointer to a [CPalette](../../mfc/reference/cpalette-class.md) object specifying the rebar control's previous palette.  
  
### Remarks  
 Note that this member function uses a `CPalette` object as its return value, rather than an HPALETTE.  
  
##  <a name="settextcolor"></a>  CReBarCtrl::SetTextColor  
 Implements the behavior of the Win32 message [RB_SETTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774524), as described in the Windows SDK.  
  
```  
COLORREF SetTextColor(COLORREF clr);
```  
  
### Parameters  
 *clr*  
 A COLORREF value that represents the new text color in the `CReBarCtrl` object.  
  
### Return Value  
 The [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value representing the previous text color associated with the `CReBarCtrl` object.  
  
### Remarks  
 It is provided to support text color flexibility in a rebar control.  
  
##  <a name="settooltips"></a>  CReBarCtrl::SetToolTips  
 Associates a tool tip control with a rebar control.  
  
```  
void SetToolTips(CToolTipCtrl* pToolTip);
```  
  
### Parameters  
 *pToolTip*  
 A pointer to a [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) object  
  
### Remarks  
 You must destroy the `CToolTipCtrl` object when you are done with it.  
  
##  <a name="setwindowtheme"></a>  CReBarCtrl::SetWindowTheme  
 Sets the visual style of the rebar control.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### Parameters  
 *pszSubAppName*  
 A pointer to a Unicode string that contains the rebar visual style to set.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [RB_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb774530) message, as described in the Windows SDK.  
  
##  <a name="showband"></a>  CReBarCtrl::ShowBand  
 Implements the behavior of the Win32 message [RB_SHOWBAND](http://msdn.microsoft.com/library/windows/desktop/bb774532), as described in the Windows SDK.  
  
```  
BOOL ShowBand(
    UINT uBand,  
    BOOL fShow = TRUE);
```  
  
### Parameters  
 *uBand*  
 Zero-based index of a band in the rebar control.  
  
 *fShow*  
 Indicates if the band should be shown or hidden. If this value is TRUE, the band will be shown. Otherwise, the band will be hidden.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="sizetorect"></a>  CReBarCtrl::SizeToRect  
 Implements the behavior of the Win32 message [RB_SIZETORECT](http://msdn.microsoft.com/library/windows/desktop/bb774534), as described in the Windows SDK.  
  
```  
BOOL SizeToRect(CRect& rect);
```  
  
### Parameters  
 *rect*  
 A reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that specifies the rectangle that the rebar control should be sized to.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 Note that this member function uses a `CRect` object as a parameter, rather than a `RECT` structure.  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


