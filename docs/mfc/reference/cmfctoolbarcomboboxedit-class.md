---
description: "Learn more about: CMFCToolBarComboBoxEdit Class"
title: "CMFCToolBarComboBoxEdit Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarComboBoxEdit", "AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit", "AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit"]
helpviewer_keywords: ["CMFCToolBarComboBoxEdit [MFC], CMFCToolBarComboBoxEdit"]
ms.assetid: 4789c34a-ce58-48ba-a26f-38748b601352
---
# CMFCToolBarComboBoxEdit Class

The framework uses the `CMFCToolBarComboBoxEdit` class to create a toolbar button that behaves like an editable combo box control.

## Syntax

```
class CMFCToolBarComboBoxEdit : public CEdit
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit](#cmfctoolbarcomboboxedit)|Constructs a `CMFCToolBarComboBoxEdit` object.|
|`CMFCToolBarComboBoxEdit::~CMFCToolBarComboBoxEdit`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCToolBarComboBoxEdit::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|

### Remarks

Derive a class from the `CMFCToolBarComboBoxEdit` class to customize its edit operations.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md)

## Requirements

**Header:** afxtoolbarcomboboxbutton.h

## <a name="cmfctoolbarcomboboxedit"></a> CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit

Constructs a `CMFCToolBarComboBoxEdit` object.

```
CMFCToolBarComboBoxEdit(CMFCToolBarComboBoxButton& combo);
```

### Parameters

*combo*<br/>
[in] A reference to a [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) object, which is a toolbar button that contains a combo box control.

### Example

The following example demonstrates how to construct an object of the `CMFCToolBarComboBoxEdit` class. This code snippet is part of the [IE Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#5](../../mfc/reference/codesnippet/cpp/cmfctoolbarcomboboxedit-class_1.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)
