---
description: "Learn more about: CPaintDC Class"
title: "CPaintDC Class"
ms.date: "11/04/2016"
f1_keywords: ["CPaintDC", "AFXWIN/CPaintDC", "AFXWIN/CPaintDC::CPaintDC", "AFXWIN/CPaintDC::m_ps", "AFXWIN/CPaintDC::m_hWnd"]
helpviewer_keywords: ["CPaintDC [MFC], CPaintDC", "CPaintDC [MFC], m_ps", "CPaintDC [MFC], m_hWnd"]
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
---
# CPaintDC Class

A device-context class derived from [CDC](../../mfc/reference/cdc-class.md).

## Syntax

```
class CPaintDC : public CDC
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPaintDC::CPaintDC](#cpaintdc)|Constructs a `CPaintDC` connected to the specified [CWnd](../../mfc/reference/cwnd-class.md).|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPaintDC::m_ps](#m_ps)|Contains the [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) used to paint the client area.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CPaintDC::m_hWnd](#m_hwnd)|The HWND to which this `CPaintDC` object is attached.|

## Remarks

It performs a [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) at construction time and [CWnd::EndPaint](../../mfc/reference/cwnd-class.md#endpaint) at destruction time.

A `CPaintDC` object can only be used when responding to a [WM_PAINT](/windows/win32/gdi/wm-paint) message, usually in your `OnPaint` message-handler member function.

For more information on using `CPaintDC`, see [Device Contexts](../../mfc/device-contexts.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CPaintDC`

## Requirements

**Header:** afxwin.h

## <a name="cpaintdc"></a> CPaintDC::CPaintDC

Constructs a `CPaintDC` object, prepares the application window for painting, and stores the [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) structure in the [m_ps](#m_ps) member variable.

```
explicit CPaintDC(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
Points to the `CWnd` object to which the `CPaintDC` object belongs.

### Remarks

An exception (of type `CResourceException`) is thrown if the Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.

### Example

[!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]

## <a name="m_hwnd"></a> CPaintDC::m_hWnd

The `HWND` to which this `CPaintDC` object is attached.

```
HWND m_hWnd;
```

### Remarks

*m_hWnd* is a protected variable of type HWND.

### Example

[!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]

## <a name="m_ps"></a> CPaintDC::m_ps

`m_ps` is a public member variable of type [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct).

```
PAINTSTRUCT m_ps;
```

### Remarks

It is the `PAINTSTRUCT` that is passed to and filled out by [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).

The `PAINTSTRUCT` contains information that the application uses to paint the client area of the window associated with a `CPaintDC` object.

Note that you can access the device-context handle through the `PAINTSTRUCT`. However, you can access the handle more directly through the `m_hDC` member variable that `CPaintDC` inherits from CDC.

### Example

  See the example for [CPaintDC::m_hWnd](#m_hwnd).

## See also

[MFC Sample MDI](../../overview/visual-cpp-samples.md)<br/>
[CDC Class](../../mfc/reference/cdc-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
