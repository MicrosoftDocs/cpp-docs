---
title: "CAtlPreviewCtrlImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlPreviewCtrlImpl", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Create", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Destroy", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Focus", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::OnPaint", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Redraw", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetHost", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetPreviewVisuals", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetRect", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::DoPaint", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_plf", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrBack", "ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrText"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlPreviewCtrlImpl class"]
ms.assetid: 39b3299e-07e4-4abc-9b6e-b54bfa3b0802
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlPreviewCtrlImpl Class
This class is an ATL implementation of a window that is placed on a host window provided by the Shell  for Rich Preview.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl](#dtor)|Destructs a preview control object.|  
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](#catlpreviewctrlimpl)|Constructs a preview control object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::Create](#create)|Called by a Rich Preview handler to create the Windows window.|  
|[CAtlPreviewCtrlImpl::Destroy](#destroy)|Called by a Rich Preview handler when it needs to destroy this control.|  
|[CAtlPreviewCtrlImpl::Focus](#focus)|Sets input focus to this control.|  
|[CAtlPreviewCtrlImpl::OnPaint](#onpaint)|Handles the WM_PAINT message.|  
|[CAtlPreviewCtrlImpl::Redraw](#redraw)|Tells this control to redraw.|  
|[CAtlPreviewCtrlImpl::SetHost](#sethost)|Sets a new parent for this control.|  
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Called by a Rich Preview handler when it needs to set visuals of rich preview content.|  
|[CAtlPreviewCtrlImpl::SetRect](#setrect)|Sets a new bounding rectangle for this control.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::DoPaint](#dopaint)|Called by the framework to render the preview.|  
  
### Protected Constants  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m_plf](#m_plf)|Font used to display text in the preview window.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m_clrBack](#m_clrback)|Background color of the preview window.|  
|[CAtlPreviewCtrlImpl::m_clrText](#m_clrtext)|Text color of preview window.|  

  
## Remarks  
  
## Inheritance Hierarchy  
 `TBase`  
  
 `ATL::CMessageMap`  
  
 `ATL::CWindowImplRoot<TBase>`  
  
 `ATL::CWindowImplBaseT<TBase,TWinTraits>`  
  
 [ATL::CWindowImpl\<CAtlPreviewCtrlImpl>](../../atl/reference/cwindowimpl-class.md)  
  
 `IPreviewCtrl`  
  
 `ATL::CAtlPreviewCtrlImpl`  
  
## Requirements  
 **Header:** atlpreviewctrlimpl.h  
  
##  <a name="catlpreviewctrlimpl"></a>  CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl  
 Constructs a preview control object.  
  
```
CAtlPreviewCtrlImpl(void) : m_clrText(0),
   m_clrBack(RGB(255, 255, 255)), m_plf(NULL);
```  
  
### Remarks  
  
##  <a name="dtor"></a>  CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl  
 Destructs a preview control object.  
  
```
virtual ~CAtlPreviewCtrlImpl(void);
```  
  
### Remarks  
  
##  <a name="create"></a>  CAtlPreviewCtrlImpl::Create  
 Called by a Rich Preview handler to create the Windows window.  
  
```
virtual BOOL Create(HWND hWndParent, const RECT* prc);
```  
  
### Parameters  
 *hWndParent*  
 A handle to the host window supplied by the Shell for Rich Preview.  
  
 *prc*  
 Specifies the initial size and position of the window.  
  
### Return Value  
 TRUE if successful; otherwise FALSE.  
  
### Remarks  
  
##  <a name="destroy"></a>  CAtlPreviewCtrlImpl::Destroy  
 Called by a Rich Preview handler when it needs to destroy this control.  
  
```
virtual void Destroy();
```  
  
### Remarks  
  
##  <a name="dopaint"></a>  CAtlPreviewCtrlImpl::DoPaint  
 Called by the framework to render the preview.  
  
```
virtual void DoPaint(HDC hdc);
```  
  
### Parameters  
 *hdc*  
 A handle to a device context for painting.  
  
### Remarks  
  
##  <a name="focus"></a>  CAtlPreviewCtrlImpl::Focus  
 Sets input focus to this control.  
  
```
virtual void Focus();
```  
  
### Remarks  
  
##  <a name="m_clrback"></a>  CAtlPreviewCtrlImpl::m_clrBack  
 Background color of the preview window.  
  
```
COLORREF m_clrBack;
```  
  
### Remarks  
  
##  <a name="m_clrtext"></a>  CAtlPreviewCtrlImpl::m_clrText  
 Text color of the preview window.  
  
```
COLORREF m_clrText;
```  
  
### Remarks  
  
##  <a name="m_plf"></a>  CAtlPreviewCtrlImpl::m_plf  
 Font used to display text in the preview window.  
  
```
const LOGFONTW* m_plf;
```  
  
### Remarks  
  
##  <a name="onpaint"></a>  CAtlPreviewCtrlImpl::OnPaint  
 Handles the WM_PAINT message.  
  
```
LRESULT OnPaint(  
    UINT nMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```  
  
### Parameters  
 *nMsg*  
 Set to WM_PAINT.  
  
 *wParam*  
 This parameter is not used.  
  
 *lParam*  
 This parameter is not used.  
  
 *bHandled*  
 When this function returns, it contains TRUE.  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
  
##  <a name="redraw"></a>  CAtlPreviewCtrlImpl::Redraw  
 Tells this control to redraw.  
  
```
virtual void Redraw();
```  
  
### Remarks  
  
##  <a name="sethost"></a>  CAtlPreviewCtrlImpl::SetHost  
 Sets a new parent for this control.  
  
```
virtual void SetHost(HWND hWndParent);
```  
  
### Parameters  
 *hWndParent*  
 A handle to the new parent window.  
  
### Remarks  
  
##  <a name="setpreviewvisuals"></a>  CAtlPreviewCtrlImpl::SetPreviewVisuals  
 Called by a Rich Preview handler when it needs to set visuals of rich preview content.  
  
```
virtual void SetPreviewVisuals(
    COLORREF clrBack,
    COLORREF clrText,
    const LOGFONTW* plf);
```  
  
### Parameters  
 *clrBack*  
 Background color of the preview window.  
  
 *clrText*  
 Text color of the preview window.  
  
 *plf*  
 Font used to display text in the preview window.  
  
### Remarks  
  
##  <a name="setrect"></a>  CAtlPreviewCtrlImpl::SetRect  
 Sets a new bounding rectangle for this control.  
  
```
virtual void SetRect(const RECT* prc, BOOL bRedraw);
```  
  
### Parameters  
 *prc*  
 Specifies the new size and position of the preview control.  
  
 *bRedraw*  
 Specifies whether the control should be redrawn.  
  
### Remarks  
  
## See Also  
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)
