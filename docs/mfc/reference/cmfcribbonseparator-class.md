---
description: "Learn more about: CMFCRibbonSeparator Class"
title: "CMFCRibbonSeparator Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CMFCRibbonSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::AddToListBox", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CopyFrom", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::GetRegularSize", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsSeparator", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsTabStop", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDraw", "AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDrawOnList"]
helpviewer_keywords: ["CMFCRibbonSeparator [MFC], CMFCRibbonSeparator", "CMFCRibbonSeparator [MFC], AddToListBox", "CMFCRibbonSeparator [MFC], CopyFrom", "CMFCRibbonSeparator [MFC], GetRegularSize", "CMFCRibbonSeparator [MFC], IsSeparator", "CMFCRibbonSeparator [MFC], IsTabStop", "CMFCRibbonSeparator [MFC], OnDraw", "CMFCRibbonSeparator [MFC], OnDrawOnList"]
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
---
# CMFCRibbonSeparator Class

Implements the ribbon separator.

## Syntax

```
class CMFCRibbonSeparator : public CMFCRibbonBaseElement
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Constructs a `CMFCRibbonSeparator` object.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Adds a separator to the **Commands** list in the **Customize** dialog box. (Overrides [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|
|`CMFCRibbonSeparator::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCRibbonSeparator::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|

### Protected Methods

|Name|Description|
|-|-|
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|A copy method that sets a separator's member variables from another object.|
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Returns the size of a separator.|
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indicates whether this is a separator.|
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indicates whether this is a tab stop.|
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.|
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Called by the system to draw the separator on the **Commands** list.|

## Remarks

A ribbon separator is a vertical or horizontal line that logically separates ribbon elements. A separator can be drawn on the ribbon control, the main application menu, the ribbon status bar, and the Quick Access Toolbar.

To use a separator in your application, construct the new object and add it to the main application menu as shown here:

```
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```

Call [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) to add separators to ribbon panels. The separators are allocated and added internally by the `AddSeparator` method.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)

## Requirements

**Header:** afxbaseribbonelement.h

## <a name="addtolistbox"></a> CMFCRibbonSeparator::AddToListBox

Adds a separator to the **Commands** list in the **Customize** dialog box.

```
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,
    BOOL bDeep);
```

### Parameters

*pWndListBox*<br/>
[in] A pointer to the **Commands** list where the separator is added.

*bDeep*<br/>
[in] Ignored.

### Return Value

Zero-based index to the string in the list box specified by *pWndListBox*.

## <a name="cmfcribbonseparator"></a> CMFCRibbonSeparator::CMFCRibbonSeparator

Constructs a `CMFCRibbonSeparator` object.

```
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```

### Parameters

*bIsHoriz*<br/>
[in] If TRUE, the separator is horizontal; if FALSE, the separator is vertical.

### Remarks

Horizontal separators are used in application menus. Vertical separators are used in toolbars.

### Example

The following example demonstrates how to construct an object of the `CMFCRibbonSeparator` class.

[!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]

## <a name="copyfrom"></a> CMFCRibbonSeparator::CopyFrom

A copy method that sets a separator's member variables from another object.

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### Parameters

*Src*<br/>
[in] The source ribbon element to copy from.

## <a name="getregularsize"></a> CMFCRibbonSeparator::GetRegularSize

Returns the size of a separator.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device content.

### Return Value

The size of the separator on the given device context.

## <a name="isseparator"></a> CMFCRibbonSeparator::IsSeparator

Indicates whether this is a separator.

```
virtual BOOL IsSeparator() const;
```

### Return Value

Always TRUE for this class.

## <a name="istabstop"></a> CMFCRibbonSeparator::IsTabStop

Indicates whether this is a tab stop.

```
virtual BOOL IsTabStop() const;
```

### Return Value

Always FALSE for this class.

### Remarks

A ribbon separator is not a tab stop.

## <a name="ondraw"></a> CMFCRibbonSeparator::OnDraw

Called by the system to draw the separator on either the ribbon or the Quick Access Toolbar.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

## <a name="ondrawonlist"></a> CMFCRibbonSeparator::OnDrawOnList

Called by the system to draw the separator on the **Commands** list.

```
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### Parameters

*pDC*\
[in] A pointer to a device context.

*strText*\
[in] Text displayed on the list.

*nTextOffset*\
[in] Spacing between the text and the left side of the bounding rectangle.

*rect*\
[in] Specifies the bounding rectangle.

*bIsSelected*\
[in] Ignored.

*bHighlighted*\
[in] Ignored.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
