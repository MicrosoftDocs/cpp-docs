---
title: "CLinkCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CLinkCtrl", "AFXCMN/CLinkCtrl", "AFXCMN/CLinkCtrl::CLinkCtrl", "AFXCMN/CLinkCtrl::Create", "AFXCMN/CLinkCtrl::CreateEx", "AFXCMN/CLinkCtrl::GetIdealHeight", "AFXCMN/CLinkCtrl::GetIdealSize", "AFXCMN/CLinkCtrl::GetItem", "AFXCMN/CLinkCtrl::GetItemID", "AFXCMN/CLinkCtrl::GetItemState", "AFXCMN/CLinkCtrl::GetItemUrl", "AFXCMN/CLinkCtrl::HitTest", "AFXCMN/CLinkCtrl::SetItem", "AFXCMN/CLinkCtrl::SetItemID", "AFXCMN/CLinkCtrl::SetItemState", "AFXCMN/CLinkCtrl::SetItemUrl"]
dev_langs: ["C++"]
helpviewer_keywords: ["CLinkCtrl [MFC], CLinkCtrl", "CLinkCtrl [MFC], Create", "CLinkCtrl [MFC], CreateEx", "CLinkCtrl [MFC], GetIdealHeight", "CLinkCtrl [MFC], GetIdealSize", "CLinkCtrl [MFC], GetItem", "CLinkCtrl [MFC], GetItemID", "CLinkCtrl [MFC], GetItemState", "CLinkCtrl [MFC], GetItemUrl", "CLinkCtrl [MFC], HitTest", "CLinkCtrl [MFC], SetItem", "CLinkCtrl [MFC], SetItemID", "CLinkCtrl [MFC], SetItemState", "CLinkCtrl [MFC], SetItemUrl"]
ms.assetid: d1cd876a-ecca-42db-8ac4-9cd327df0cd4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CLinkCtrl Class
Provides the functionality of the Windows common SysLink control.  
  
## Syntax  
  
```  
class CLinkCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CLinkCtrl::CLinkCtrl](#clinkctrl)|Constructs a `CLinkCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CLinkCtrl::Create](#create)|Creates a link control and attaches it to a `CLinkCtrl` object.|  
|[CLinkCtrl::CreateEx](#createex)|Creates a link control with extended styles and attaches it to a `CLinkCtrl` object.|  
|[CLinkCtrl::GetIdealHeight](#getidealheight)|Retrieves the ideal height of the link control.|  
|[CLinkCtrl::GetIdealSize](#getidealsize)|Calculates the preferred height of the link text for the current link control, depending on the specified width of the link.|  
|[CLinkCtrl::GetItem](#getitem)|Retrieves the states and attributes of a link control item.|  
|[CLinkCtrl::GetItemID](#getitemid)|Retrieves the ID of a link control item.|  
|[CLinkCtrl::GetItemState](#getitemstate)|Retrieves the state of the link control item.|  
|[CLinkCtrl::GetItemUrl](#getitemurl)|Retrieves the URL represented by the link control item.|  
|[CLinkCtrl::HitTest](#hittest)|Determines whether the user clicked the specified link.|  
|[CLinkCtrl::SetItem](#setitem)|Sets the states and attributes of a link control item.|  
|[CLinkCtrl::SetItemID](#setitemid)|Sets the ID of a link control item.|  
|[CLinkCtrl::SetItemState](#setitemstate)|Sets the state of the link control item.|  
|[CLinkCtrl::SetItemUrl](#setitemurl)|Sets the URL represented by the link control item.|  
  
## Remarks  
 A "link control" provides a convenient way to embed hypertext links in a window. The actual control is a window that renders marked-up text and launches appropriate applications when the user clicks an embedded link. Multiple links are supported within one control and can be accessed by a zero-based index.  
  
 This control (and therefore the `CLinkCtrl` class) is available only to programs running under Windows XP and later.  
  
 For more information, see [SysLink Control](http://msdn.microsoft.com/library/windows/desktop/bb760706) in the Windows SDK.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CLinkCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="clinkctrl"></a>  CLinkCtrl::CLinkCtrl  
 Constructs a `CLinkCtrl` object.  
  
```  
CLinkCtrl();
```  
  
##  <a name="create"></a>  CLinkCtrl::Create  
 Creates a link control and attaches it to a `CLinkCtrl` object.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszLinkMarkup,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);

 
virtual BOOL Create(DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```  
  
### Parameters  
 *lpszLinkMarkup*  
 Pointer to a zero-terminated string that contains the marked up text to display. For more information, see the section "Markup and Link Access" in the topic [Overview of SysLink Controls](http://msdn.microsoft.com/library/windows/desktop/bb760706).  
  
 *dwStyle*  
 Specifies the link control's style. Apply any combination of control styles. See [Common Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775498) in the `Windows SDK` for more information.  
  
 *rect*  
 Specifies the link control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](../../mfc/reference/rect-structure1.md) structure.  
  
 *pParentWnd*  
 Specifies the link control's parent window. It must not be NULL.  
  
 *nID*  
 Specifies the link control's ID.  
  
### Return Value  
 TRUE if initialization was successful; otherwise FALSE.  
  
### Remarks  
 You construct a `CLinkCtrl` object in two steps. First, call the constructor and then call `Create`, which creates the link control and attaches it to the `CLinkCtrl` object. If you want to use extended windows styles with your control, call [CLinkCtrl::CreateEx](#createex) instead of `Create`.  
  
 The second form of the `Create` method is deprecated. Use the first form that specifies the *lpszLinkMarkup* parameter.  
  
### Example  
 The following code example defines two variables, named `m_Link1` and `m_Link2`, that are used to access two link controls.  
  
 [!code-cpp[NVC_MFC_CLinkCtrl_s1#2](../../mfc/reference/codesnippet/cpp/clinkctrl-class_1.h)]  
  
### Example  
 The following code example creates one link control based on the location of another link control. The resource loader creates the first link control when your application starts. When your application enters the OnInitDialog method, you create the second link control relative to the position of the first link control. Then you resize the second link control to fit the text that it displays.  
  
 [!code-cpp[NVC_MFC_CLinkCtrl_s1#1](../../mfc/reference/codesnippet/cpp/clinkctrl-class_2.cpp)]  
  
##  <a name="createex"></a>  CLinkCtrl::CreateEx  
 Creates a link control with extended styles and attaches it to a `CLinkCtrl` object.  
  
```  
virtual BOOL CreateEx(
    LPCTSTR lpszLinkMarkup,   
    DWORD dwExStyle,  
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);

 
virtual BOOL CreateEx(DWORD  dwExStyle,
    DWORD  dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT  nID);
```  
  
### Parameters  
 *lpszLinkMarkup*  
 Pointer to a zero-terminated string that contains the marked up text to display. For more information, see the section "Markup and Link Access" in the topic [Overview of SysLink Controls](http://msdn.microsoft.com/library/windows/desktop/bb760706).  
  
 *dwExStyle*  
 Specifies the extended style of the link control. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the Windows SDK.  
  
 *dwStyle*  
 Specifies the link control's style. Apply any combination of control styles. For more information, see [Common Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775498) in the Windows SDK.  
  
 *rect*  
 Specifies the link control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](../../mfc/reference/rect-structure1.md) structure.  
  
 *pParentWnd*  
 Specifies the link control's parent window. It must not be NULL.  
  
 *nID*  
 Specifies the link control's ID.  
  
### Return Value  
 TRUE if initialization was successful; otherwise FALSE.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#create) to apply extended Windows style constants.  
  
 The second form of the `CreateEx` method is deprecated. Use the first form that specifies the *lpszLinkMarkup* parameter.  
  
##  <a name="getidealheight"></a>  CLinkCtrl::GetIdealHeight  
 Retrieves the ideal height of the link control.  
  
```  
int GetIdealHeight() const;  
```  
  
### Return Value  
 The ideal height of the control, in pixels.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LM_GETIDEALHEIGHT](http://msdn.microsoft.com/library/windows/desktop/bb760716), as described in the Windows SDK.  
  
##  <a name="getidealsize"></a>  CLinkCtrl::GetIdealSize  
 Calculates the preferred height of the link text for the current link control, depending on the specified width of the link.  
  
```  
int GetIdealSize(
    int cxMaxWidth,   
    SIZE* pSize) const;  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *cxMaxWidth*|The maximum width of the link, in pixels.|  
|[out] \* *pSize*|A pointer to a Windows [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure. When this method returns, the *cy* member of the `SIZE` structure contains the ideal link text height for the link text width that is specified by *cxMaxWidth*. The *cx* member of the structure contains the link text width that is actually needed.|  
  
### Return Value  
 The preferred height of the link text, in pixels. The return value is the same as the value of the *cy* member of the `SIZE` structure.  
  
### Remarks  
 For an example of the `GetIdealSize` method, see the example in [CLinkCtrl::Create](#create).  
  
 This method sends the [LM_GETIDEALSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760718) message, which is described in the Windows SDK.  
  
##  <a name="getitem"></a>  CLinkCtrl::GetItem  
 Retrieves the states and attributes of a link control item.  
  
```  
BOOL GetItem(PLITEM pItem) const;  
```  
  
### Parameters  
 *pItem*  
 A pointer to a [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) structure to receive item information.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720), as described in the Windows SDK.  
  
##  <a name="getitemid"></a>  CLinkCtrl::GetItemID  
 Retrieves the ID of a link control item.  
  
```  
BOOL GetItemID(
    int iLink,  
    CString& strID) const;  
  
BOOL GetItemID(
    int iLink,  
    LPWSTR szID,  
    UINT cchID) const;  
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *strID*  
 A [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) object containing the ID of the specified item.  
  
 *szID*  
 A null-terminated string containing the ID of the specified item.  
  
 *cchID*  
 The size in characters of the *szID* buffer.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
> [!NOTE]
>  This function also returns FALSE if the buffer of *szID or strID* is smaller than MAX_LINKID_TEXT.  
  
### Remarks  
 Retrieves the ID of a specific link control item. For more information, see the Win32 message [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) in the Windows SDK.  
  
##  <a name="getitemstate"></a>  CLinkCtrl::GetItemState  
 Retrieves the state of the link control item.  
  
```  
BOOL GetItemState(
    int iLink,  
    UINT* pnState,  
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED) const;  
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *pnState*  
 The value of the specified state item.  
  
 *stateMask*  
 Combination of flags describing which state item to get. For a list of values, see the description of the `state` member in the [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) structure. Allowable items are identical to those allowed in `state`.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Retrieves the value of the specified state item of a specific link control item. For more information, see the Win32 message [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) in the Windows SDK.  
  
##  <a name="getitemurl"></a>  CLinkCtrl::GetItemUrl  
 Retrieves the URL represented by the link control item.  
  
```  
BOOL GetItemUrl(
    int iLink,  
    CString& strUrl) const;  
  
BOOL GetItemUrl(
    int iLink,  
    LPWSTR szUrl,  
    UINT cchUrl) const;  
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *strUrl*  
 A [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) object containing the URL represented by the specified item  
  
 *szUrl*  
 A null-terminated string containing the URL represented by the specified item  
  
 *cchUrl*  
 The size in characters of the *szURL* buffer.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
> [!NOTE]
>  This function also returns FALSE if the buffer of *szUrl or strUrl* is smaller than MAX_LINKID_TEXT.  
  
### Remarks  
 Retrieves the URL represented by the specified link control item. For more information, see the Win32 message [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) in the Windows SDK.  
  
##  <a name="hittest"></a>  CLinkCtrl::HitTest  
 Determines if the user clicked the specified link.  
  
```  
BOOL HitTest(PLHITTESTINFO phti) const;  
```  
  
### Parameters  
 *phti*  
 Pointer to a `LHITTESTINFO` structure containing any information about the link the user clicked.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LM_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb760722), as described in the Windows SDK.  
  
##  <a name="setitem"></a>  CLinkCtrl::SetItem  
 Sets the states and attributes of a link control item.  
  
```  
BOOL SetItem(PLITEM pItem);
```  
  
### Parameters  
 *pItem*  
 A pointer to a [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) structure containing the information to set.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724), as described in the Windows SDK.  
  
##  <a name="setitemid"></a>  CLinkCtrl::SetItemID  
 Retrieves the ID of a link control item.  
  
```  
BOOL SetItemID(
    int iLink,  
    LPCWSTR szID);
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *szID*  
 A null-terminated string containing the ID of the specified item.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Sets the ID of a specific link control item. For more information, see the Win32 message [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) in the Windows SDK.  
  
##  <a name="setitemstate"></a>  CLinkCtrl::SetItemState  
 Retrieves the state of the link control item.  
  
```  
BOOL SetItemState(
    int iLink,  
    UINT state,  
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED);
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *pnState*  
 The value of the specified state item being set.  
  
 *stateMask*  
 Combination of flags describing the state item being set. For a list of values, see the description of the `state` member in the [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) structure. Allowable items are identical to those allowed in `state`.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Sets the value of the specified state item of a specific link control item. For more information, see the Win32 message [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) in the Windows SDK.  
  
##  <a name="setitemurl"></a>  CLinkCtrl::SetItemUrl  
 Sets the URL represented by the link control item.  
  
```  
BOOL SetItemUrl(
    int iLink,  
    LPCWSTR szUrl);
```  
  
### Parameters  
 *iLink*  
 The index of a link control item.  
  
 *szUrl*  
 A null-terminated string containing the URL represented by the specified item  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 Sets the URL represented by the specified link control item. For more information, see the Win32 message [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) in the Windows SDK.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)
