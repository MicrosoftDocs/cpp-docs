---
description: "Learn more about: CMFCDesktopAlertWndButton Class"
title: "CMFCDesktopAlertWndButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCDesktopAlertWndButton", "AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton", "AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCaptionButton", "AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCloseButton"]
helpviewer_keywords: ["CMFCDesktopAlertWndButton [MFC], IsCaptionButton", "CMFCDesktopAlertWndButton [MFC], IsCloseButton"]
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
---
# CMFCDesktopAlertWndButton Class

Allows buttons to be added to a desktop alert dialog box.

## Syntax

```
class CMFCDesktopAlertWndButton : public CMFCButton
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Default constructor.|
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCDesktopAlertWndButton::IsCaptionButton](#iscaptionbutton)|Determines whether the button is displayed in the caption area of the alert dialog box.|
|[CMFCDesktopAlertWndButton::IsCloseButton](#isclosebutton)|Determines whether the button closes the alert dialog box.|

### Data Members

|Name|Description|
|-|-|
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|A Boolean value that specifies whether the button is displayed in the caption area of the alert dialog box.|
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|A Boolean value that specifies whether the button closes the alert dialog box.|

### Remarks

By default, the constructor sets the `m_bIsCaptionButton` and `m_bIsCloseButton` data members to FALSE. The parent `CMFCDesktopAlertDialog` object sets `m_bIsCaptionButton` to TRUE if the button is positioned in the caption area of the alert dialog box. The `CMFCDesktopAlertDialog` class creates a `CMFCDesktopAlertWndButton` object that serves as the button that closes the alert dialog box and sets `m_bIsCloseButton` to TRUE.

Add `CMFCDesktopAlertWndButton` objects to a `CMFCDesktopAlertDialog` object as you would add any button. For more information about `CMFCDesktopAlertDialog`, see [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md).

## Example

The following example demonstrates how to use the `SetImage` method in the `CMFCDesktopAlertWndButton` class. This code snippet is part of the [Desktop Alert Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#4](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_1.h)]
[!code-cpp[NVC_MFC_DesktopAlertDemo#5](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)

## Requirements

**Header:** afxdesktopalertwnd.h

## <a name="iscaptionbutton"></a> CMFCDesktopAlertWndButton::IsCaptionButton

Determines whether the button is displayed in the caption area of the alert dialog box.

```
BOOL IsCaptionButton() const;
```

### Return Value

Nonzero if the button is displayed in the caption area of the alert dialog box; otherwise, 0.

## <a name="isclosebutton"></a> CMFCDesktopAlertWndButton::IsCloseButton

Determines whether the button closes the alert dialog box.

```
BOOL IsCloseButton() const;
```

### Return Value

Nonzero if the button closes the alert dialog box; otherwise, 0.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)
