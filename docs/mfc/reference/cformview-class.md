---
description: "Learn more about: CFormView Class"
title: "CFormView Class"
ms.date: "11/04/2016"
f1_keywords: ["CFormView", "AFXEXT/CFormView", "AFXEXT/CFormView::CFormView", "AFXEXT/CFormView::IsInitDlgCompleted"]
helpviewer_keywords: ["CFormView [MFC], CFormView", "CFormView [MFC], IsInitDlgCompleted"]
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
---
# CFormView Class

The base class used for form views.

## Syntax

```
class CFormView : public CScrollView
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CFormView::CFormView](#cformview)|Constructs a `CFormView` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFormView::IsInitDlgCompleted](#isinitdlgcompleted)|Used for synchronization during initialization.|

## Remarks

A form view is essentially a view that contains controls. These controls are laid out based on a dialog-template resource. Use `CFormView` if you want forms in your application. These views support scrolling, as needed, using the [CScrollView](../../mfc/reference/cscrollview-class.md) functionality.

When you are [Creating a Forms-Based Application](../../mfc/reference/creating-a-forms-based-mfc-application.md), you can base its view class on `CFormView`, making it a forms-based application.

You can also insert new [Form Topics](../../mfc/form-views-mfc.md) into document-view-based applications. Even if your application did not initially support forms, Visual C++ will add this support when you insert a new form.

The MFC Application Wizard and the Add Class command are the preferred methods for creating forms-based applications. If you need to create a forms-based application without using these methods, see [Creating a Forms-Based Application](../../mfc/reference/creating-a-forms-based-mfc-application.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

`CFormView`

## Requirements

**Header:** afxext.h

## <a name="cformview"></a> CFormView::CFormView

Constructs a `CFormView` object.

```
CFormView(LPCTSTR lpszTemplateName);
CFormView(UINT nIDTemplate);
```

### Parameters

*lpszTemplateName*<br/>
Contains a null-terminated string that is the name of a dialog-template resource.

*nIDTemplate*<br/>
Contains the ID number of a dialog-template resource.

### Remarks

When you create an object of a type derived from `CFormView`, invoke one of the constructors to create the view object and identify the dialog resource on which the view is based. You can identify the resource either by name (pass a string as the argument to the constructor) or by its ID (pass an unsigned integer as the argument).

The form-view window and child controls are not created until `CWnd::Create` is called. `CWnd::Create` is called by the framework as part of the document and view creation process, which is driven by the document template.

> [!NOTE]
> Your derived class *must* supply its own constructor. In the constructor, invoke the constructor, `CFormView::CFormView`, with the resource name or ID as an argument as shown in the preceding class overview.

### Example

[!code-cpp[NVC_MFCDocView#90](../../mfc/codesnippet/cpp/cformview-class_1.h)]

[!code-cpp[NVC_MFCDocView#91](../../mfc/codesnippet/cpp/cformview-class_2.cpp)]

## <a name="isinitdlgcompleted"></a> CFormView::IsInitDlgCompleted

Used by MFC to ensure that initialization is completed before performing other operations.

```
BOOL IsInitDlgCompleted() const;
```

### Return Value

True if the initialization function for this dialog has completed.

## See also

[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[CScrollView Class](../../mfc/reference/cscrollview-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)<br/>
[CScrollView Class](../../mfc/reference/cscrollview-class.md)
