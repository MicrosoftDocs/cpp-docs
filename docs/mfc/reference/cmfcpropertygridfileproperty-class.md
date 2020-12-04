---
description: "Learn more about: CMFCPropertyGridFileProperty Class"
title: "CMFCPropertyGridFileProperty Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPropertyGridFileProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty"]
helpviewer_keywords: ["CMFCPropertyGridFileProperty [MFC], CMFCPropertyGridFileProperty"]
ms.assetid: 2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d
---
# CMFCPropertyGridFileProperty Class

The `CMFCPropertyGridFileProperty` class supports a property list control item that opens a file selection dialog box.

## Syntax

```
class CMFCPropertyGridFileProperty : public CMFCPropertyGridProperty
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty](#cmfcpropertygridfileproperty)|Constructs a `CMFCPropertyGridFileProperty` object.|
|`CMFCPropertyGridFileProperty::~CMFCPropertyGridFileProperty`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCPropertyGridFileProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|`CMFCPropertyGridFileProperty::OnClickButton`|(Overrides [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|

### Remarks

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridFileProperty](../../mfc/reference/cmfcpropertygridfileproperty-class.md)

## Requirements

**Header:** afxpropertygridctrl.h

## <a name="cmfcpropertygridfileproperty"></a> CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty

Constructs a `CMFCPropertyGridFileProperty` object.

```
CMFCPropertyGridFileProperty(
    const CString& strName,
    BOOL bOpenFileDialog,
    const CString& strFileName,
    LPCTSTR lpszDefExt=NULL,
    DWORD dwFlags=OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,
    LPCTSTR lpszFilter=NULL,
    LPCTSTR lpszDescr=NULL,
    DWORD_PTR dwData=0);
```

### Parameters

*strName*<br/>
[in] The property name.

*bOpenFileDialog*<br/>
[in] TRUE to open an **Open File** dialog box; FALSE to open a **Save File** dialog box.

*strFileName*<br/>
[in] The initial file name.

*lpszDefExt*<br/>
[in] A string of one or more file name extensions. The default value is NULL.

*dwFlags*<br/>
[in] Dialog box flags. The default value is a bitwise combination (OR) of OFN_HIDEREADONLY and OFN_OVERWRITEPROMPT.

*lpszFilter*<br/>
[in] A string of one or more file filters. The default value is NULL.

*lpszDescr*<br/>
[in] The property item description. The default value is NULL.

*dwData*<br/>
[in] Application-specific data that is associated with the property item. For example, a 32-bit integer or a pointer to other data. The default value is 0.

### Return Value

### Remarks

For a full list of available flags, see [OPENFILENAME structure](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

### Example

The following example demonstrates how to create an object using the constructor of the `CMFCPropertyGridFileProperty` class. This example is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#22](../../mfc/codesnippet/cpp/cmfcpropertygridfileproperty-class_1.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)
