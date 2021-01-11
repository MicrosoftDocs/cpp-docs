---
description: "Learn more about: CHtmlEditCtrl Class"
title: "CHtmlEditCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CHtmlEditCtrl", "AFXHTML/CHtmlEditCtrl", "AFXHTML/CHtmlEditCtrl::CHtmlEditCtrl", "AFXHTML/CHtmlEditCtrl::Create", "AFXHTML/CHtmlEditCtrl::GetDHtmlDocument", "AFXHTML/CHtmlEditCtrl::GetStartDocument"]
helpviewer_keywords: ["CHtmlEditCtrl [MFC], CHtmlEditCtrl", "CHtmlEditCtrl [MFC], Create", "CHtmlEditCtrl [MFC], GetDHtmlDocument", "CHtmlEditCtrl [MFC], GetStartDocument"]
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
---
# CHtmlEditCtrl Class

Provides the functionality of the WebBrowser ActiveX control in an MFC window.

## Syntax

```
class CHtmlEditCtrl: public CWnd,
    public CHtmlEditCtrlBase<CHtmlEditCtrl>
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHtmlEditCtrl::CHtmlEditCtrl](#chtmleditctrl)|Constructs a `CHtmlEditCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHtmlEditCtrl::Create](#create)|Creates a WebBrowser ActiveX control and attaches it to the `CHtmlEditCtrl` object. This function automatically puts the WebBrowser ActiveX control into edit mode.|
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Retrieves the [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) interface on the document currently loaded in the contained WebBrowser control.|
|[CHtmlEditCtrl::GetStartDocument](#getstartdocument)|Retrieves the URL to a default document to load in the contained WebBrowser control.|

## Remarks

The hosted WebBrowser control is automatically put into edit mode after it is created.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHtmlEditCtrl`

## Requirements

**Header:** afxhtml.h

## <a name="chtmleditctrl"></a> CHtmlEditCtrl::CHtmlEditCtrl

Constructs a `CHtmlEditCtrl` object.

```
CHtmlEditCtrl();
```

## <a name="create"></a> CHtmlEditCtrl::Create

Creates a WebBrowser ActiveX control and attaches it to the `CHtmlEditCtrl` object. The WebBrowser ActiveX control automatically navigates to a default document and then is placed in edit mode by this function.

```
virtual BOOL Create(
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID,
    CCreateContext* pContext = NULL);
```

### Parameters

*lpszWindowName*<br/>
This parameter is unused.

*dwStyle*<br/>
This parameter is unused.

*rect*<br/>
Specifies the control's size and position.

*pParentWnd*<br/>
Specifies the control's parent window. It must not be NULL.

*nID*<br/>
Specifies the control's ID.

*pContext*<br/>
This parameter is unused.

### Return Value

Returns TRUE on success, FALSE on failure.

## <a name="getdhtmldocument"></a> CHtmlEditCtrl::GetDHtmlDocument

Retrieves the [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) interface on the document currently loaded in the contained WebBrowser control

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### Parameters

*ppDocument*<br/>
The document interface.

## <a name="getstartdocument"></a> CHtmlEditCtrl::GetStartDocument

Retrieves the URL to a default document to load in the contained WebBrowser control.

```
virtual LPCTSTR GetStartDocument();
```

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)
