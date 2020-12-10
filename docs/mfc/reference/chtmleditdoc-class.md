---
description: "Learn more about: CHtmlEditDoc Class"
title: "CHtmlEditDoc Class"
ms.date: "11/04/2016"
f1_keywords: ["CHtmlEditDoc", "AFXHTML/CHtmlEditDoc", "AFXHTML/CHtmlEditDoc::CHtmlEditDoc", "AFXHTML/CHtmlEditDoc::GetView", "AFXHTML/CHtmlEditDoc::IsModified", "AFXHTML/CHtmlEditDoc::OpenURL"]
helpviewer_keywords: ["CHtmlEditDoc [MFC], CHtmlEditDoc", "CHtmlEditDoc [MFC], GetView", "CHtmlEditDoc [MFC], IsModified", "CHtmlEditDoc [MFC], OpenURL"]
ms.assetid: b2cca61f-e5d6-4099-b0d1-46bf85f0bd64
---
# CHtmlEditDoc Class

With [CHtmlEditView](../../mfc/reference/chtmleditview-class.md), provides the functionality of the WebBrowser editing platform within the context of the MFC document-view architecture.

## Syntax

```
class AFX_NOVTABLE CHtmlEditDoc : public CDocument
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHtmlEditDoc::CHtmlEditDoc](#chtmleditdoc)|Constructs a `CHtmlEditDoc` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHtmlEditDoc::GetView](#getview)|Retrieves the `CHtmlEditView` object attached to this document.|
|[CHtmlEditDoc::IsModified](#ismodified)|Returns whether the associated view's WebBrowser control contains a document that has been modified by the user.|
|[CHtmlEditDoc::OpenURL](#openurl)|Opens a URL.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`CHtmlEditDoc`

## Requirements

**Header:** afxhtml.h

## <a name="chtmleditdoc"></a> CHtmlEditDoc::CHtmlEditDoc

Constructs a `CHtmlEditDoc` object.

```
CHtmlEditDoc();
```

## <a name="getview"></a> CHtmlEditDoc::GetView

Retrieves the [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) object attached to this document.

```
virtual CHtmlEditView* GetView() const;
```

### Return Value

Returns a pointer to the document's `CHtmlEditView` object.

## <a name="ismodified"></a> CHtmlEditDoc::IsModified

Returns whether the associated view's WebBrowser control contains a document that has been modified by the user.

```
virtual BOOL IsModified();
```

## <a name="openurl"></a> CHtmlEditDoc::OpenURL

Opens a URL.

```
virtual BOOL OpenURL(LPCTSTR lpszURL);
```

### Parameters

*lpszURL*<br/>
The URL to open.

### Return Value

Returns TRUE on success, FALSE on failure.

## See also

[HTMLEdit Sample](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
