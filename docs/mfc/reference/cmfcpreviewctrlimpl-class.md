---
title: "CMFCPreviewCtrlImpl Class"
description: "Learn more about: CMFCPreviewCtrlImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPreviewCtrlImpl", "AFXWIN/CMFCPreviewCtrlImpl", "AFXWIN/CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl", "AFXWIN/CMFCPreviewCtrlImpl::Create", "AFXWIN/CMFCPreviewCtrlImpl::Destroy", "AFXWIN/CMFCPreviewCtrlImpl::Focus", "AFXWIN/CMFCPreviewCtrlImpl::GetDocument", "AFXWIN/CMFCPreviewCtrlImpl::Redraw", "AFXWIN/CMFCPreviewCtrlImpl::SetDocument", "AFXWIN/CMFCPreviewCtrlImpl::SetHost", "AFXWIN/CMFCPreviewCtrlImpl::SetPreviewVisuals", "AFXWIN/CMFCPreviewCtrlImpl::SetRect", "AFXWIN/CMFCPreviewCtrlImpl::DoPaint", "AFXWIN/CMFCPreviewCtrlImpl::m_clrBackColor", "AFXWIN/CMFCPreviewCtrlImpl::m_clrTextColor", "AFXWIN/CMFCPreviewCtrlImpl::m_font", "AFXWIN/CMFCPreviewCtrlImpl::m_pDocument"]
helpviewer_keywords: ["CMFCPreviewCtrlImpl [MFC], CMFCPreviewCtrlImpl", "CMFCPreviewCtrlImpl [MFC], Create", "CMFCPreviewCtrlImpl [MFC], Destroy", "CMFCPreviewCtrlImpl [MFC], Focus", "CMFCPreviewCtrlImpl [MFC], GetDocument", "CMFCPreviewCtrlImpl [MFC], Redraw", "CMFCPreviewCtrlImpl [MFC], SetDocument", "CMFCPreviewCtrlImpl [MFC], SetHost", "CMFCPreviewCtrlImpl [MFC], SetPreviewVisuals", "CMFCPreviewCtrlImpl [MFC], SetRect", "CMFCPreviewCtrlImpl [MFC], DoPaint", "CMFCPreviewCtrlImpl [MFC], m_clrBackColor", "CMFCPreviewCtrlImpl [MFC], m_clrTextColor", "CMFCPreviewCtrlImpl [MFC], m_font", "CMFCPreviewCtrlImpl [MFC], m_pDocument"]
---
# `CMFCPreviewCtrlImpl` Class

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

This class implements a window that is placed on a host window provided by the Shell for Rich Preview.

## Syntax

```cpp
class CMFCPreviewCtrlImpl : public CWnd;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl`](#dtor)|Destructs a preview control object.|
|[`CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl`](#cmfcpreviewctrlimpl)|Constructs a preview control object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[`CMFCPreviewCtrlImpl::Create`](#create)|Overloaded. Called by a Rich Preview handler to create the Windows window.|
|[`CMFCPreviewCtrlImpl::Destroy`](#destroy)|Called by a Rich Preview handler when it needs to destroy this control.|
|[`CMFCPreviewCtrlImpl::Focus`](#focus)|Sets input focus to this control.|
|[`CMFCPreviewCtrlImpl::GetDocument`](#getdocument)|Returns a document connected to this preview control.|
|[`CMFCPreviewCtrlImpl::Redraw`](#redraw)|Tells this control to redraw.|
|[`CMFCPreviewCtrlImpl::SetDocument`](#setdocument)|Called by the preview handler to create a relationship between the document implementation and the preview control.|
|[`CMFCPreviewCtrlImpl::SetHost`](#sethost)|Sets a new parent for this control.|
|[`CMFCPreviewCtrlImpl::SetPreviewVisuals`](#setpreviewvisuals)|Called by a Rich Preview handler when it needs to set visuals of rich preview content.|
|[`CMFCPreviewCtrlImpl::SetRect`](#setrect)|Sets a new bounding rectangle for this control.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[`CMFCPreviewCtrlImpl::DoPaint`](#dopaint)|Called by the framework to render the preview.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[`CMFCPreviewCtrlImpl::m_clrBackColor`](#m_clrbackcolor)|Background color of preview window.|
|[`CMFCPreviewCtrlImpl::m_clrTextColor`](#m_clrtextcolor)|Text color of preview window.|
|[`CMFCPreviewCtrlImpl::m_font`](#m_font)|Font used to display text in the preview window.|
|[`CMFCPreviewCtrlImpl::m_pDocument`](#m_pdocument)|A pointer to a document whose content is previewed in the control.|

## Requirements

**Header:** afxwin.h

## Inheritance Hierarchy

[CObject](cobject-class.md)

[CCmdTarget](ccmdtarget-class.md)

[CWnd](cwnd-class.md)

[CMFCPreviewCtrlImpl](cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimpl"></a> `CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl`

Constructs a preview control object.

### Syntax

```cpp
CMFCPreviewCtrlImpl();
```

## <a name="create"></a> `CMFCPreviewCtrlImpl::Create`

Overloaded. Called by a Rich Preview handler to create the Windows window.

### Syntax

```cpp
virtual BOOL Create(
    HWND hWndParent,
    const RECT* prc
);
virtual BOOL Create(
    HWND hWndParent,
    const RECT* prc,
    CCreateContext* pContext
);
```

### Parameters

*`hWndParent`*\
A handle to the host window supplied by the Shell for Rich Preview.

*`prc`*\
Specifies the initial size and position of the window.

*`pContext`*\
A pointer to a creation context.

### Return Value

`TRUE` if creation succeeded; otherwise `FALSE`.

## <a name="destroy"></a> `CMFCPreviewCtrlImpl::Destroy`

Called by a Rich Preview handler when it needs to destroy this control.

### Syntax

```cpp
virtual void Destroy();
```

## <a name="dopaint"></a> `CMFCPreviewCtrlImpl::DoPaint`

Called by the framework to render the preview.

### Syntax

```cpp
virtual void DoPaint(
    CPaintDC* pDC
);
```

### Parameters

*`pDC`*\
A pointer to a device context for painting.

## <a name="focus"></a> `CMFCPreviewCtrlImpl::Focus`

Sets input focus to this control.

### Syntax

```cpp
virtual void Focus();
```

## <a name="getdocument"></a> `CMFCPreviewCtrlImpl::GetDocument`

Returns a document connected to this preview control.

### Syntax

```cpp
ATL::IDocument* GetDocument();
```

### Return Value

A pointer to a document, whose content is previewed in the control.

## <a name="m_clrbackcolor"></a> `CMFCPreviewCtrlImpl::m_clrBackColor`

Background color of the preview window.

### Syntax

```cpp
COLORREF m_clrBackColor;
```

## <a name="m_clrtextcolor"></a> `CMFCPreviewCtrlImpl::m_clrTextColor`

Text color of the preview window.

### Syntax

```cpp
COLORREF m_clrTextColor;
```

## <a name="m_font"></a> `CMFCPreviewCtrlImpl::m_font`

Font used to display text in the preview window.

### Syntax

```cpp
CFont m_font;
```

## <a name="m_pdocument"></a> `CMFCPreviewCtrlImpl::m_pDocument`

A pointer to a document whose content is previewed in the control.

### Syntax

```cpp
ATL::IDocument* m_pDocument;
```

## <a name="redraw"></a> `CMFCPreviewCtrlImpl::Redraw`

Tells this control to redraw.

### Syntax

```cpp
virtual void Redraw();
```

## <a name="setdocument"></a> `CMFCPreviewCtrlImpl::SetDocument`

Called by the preview handler to create a relationship between the document implementation and the preview control.

### Syntax

```cpp
void SetDocument(
    IDocument* pDocument
);
```

### Parameters

*`pDocument`*\
A pointer to the document implementation.

## <a name="sethost"></a> `CMFCPreviewCtrlImpl::SetHost`

Sets a new parent for this control.

### Syntax

```cpp
virtual void SetHost(
    HWND hWndParent
);
```

### Parameters

*`hWndParent`*\
A handle to the new parent window.

## <a name="setpreviewvisuals"></a> `CMFCPreviewCtrlImpl::SetPreviewVisuals`

Called by a Rich Preview handler when it needs to set visuals of rich preview content.

### Syntax

```cpp
virtual void SetPreviewVisuals(
    COLORREF clrBack,
    COLORREF clrText,
    const LOGFONTW *plf
);
```

### Parameters

*`clrBack`*\
Background color of preview window.

*`clrText`*\
Text color of preview window.

*`plf`*\
Font used to display text in the preview window.

## <a name="setrect"></a> `CMFCPreviewCtrlImpl::SetRect`

Sets a new bounding rectangle for this control.

### Syntax

```cpp
virtual void SetRect(
    const RECT* prc,
    BOOL bRedraw
);
```

### Parameters

*`prc`*\
Specifies the new size and position of the preview control.

*`bRedraw`*\
Specifies whether the control should be redrawn.

### Remarks

Usually a new bounding rectangle is set when the host control is resized.

## <a name="dtor"></a> `CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl`

Destructs a preview control object.

### Syntax

```cpp
virtual ~CMFCPreviewCtrlImpl();
```
