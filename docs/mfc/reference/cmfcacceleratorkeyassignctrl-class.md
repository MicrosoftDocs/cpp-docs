---
description: "Learn more about: CMFCAcceleratorKeyAssignCtrl Class"
title: "CMFCAcceleratorKeyAssignCtrl Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCAcceleratorKeyAssignCtrl", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::GetAccel", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsFocused", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsKeyDefined", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage", "AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::ResetKey"]
helpviewer_keywords: ["CMFCAcceleratorKeyAssignCtrl [MFC], CMFCAcceleratorKeyAssignCtrl", "CMFCAcceleratorKeyAssignCtrl [MFC], GetAccel", "CMFCAcceleratorKeyAssignCtrl [MFC], IsFocused", "CMFCAcceleratorKeyAssignCtrl [MFC], IsKeyDefined", "CMFCAcceleratorKeyAssignCtrl [MFC], PreTranslateMessage", "CMFCAcceleratorKeyAssignCtrl [MFC], ResetKey"]
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
---
# CMFCAcceleratorKeyAssignCtrl Class

The `CMFCAcceleratorKeyAssignCtrl` class extends the [CEdit Class](../../mfc/reference/cedit-class.md) to support extra system buttons such as ALT, CONTROL, and SHIFT.

## Syntax

```
class CMFCAcceleratorKeyAssignCtrl : public CEdit
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl](#cmfcacceleratorkeyassignctrl)|Constructs a `CMFCAcceleratorKeyAssignCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel)|Retrieves the `ACCEL` structure for a shortcut key pressed in the `CMFCAcceleratorKeyAssignCtrl` object.|
|[CMFCAcceleratorKeyAssignCtrl::IsFocused](#isfocused)||
|[CMFCAcceleratorKeyAssignCtrl::IsKeyDefined](#iskeydefined)|Determines whether a shortcut key has been defined.|
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](#pretranslatemessage)|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](#resetkey)|Resets the shortcut key.|

## Remarks

This class extends the functionality of the `CEdit` class by supporting shortcut keys, also known as accelerator keys. The `CMFCAcceleratorKeyAssignCtrl` class functions as a [CEdit Class](../../mfc/reference/cedit-class.md) and it can also recognize system buttons.

This class maps physical shortcut key combinations to string values. For example, assume the key combination ALT + B is mapped to the string "Alt + B". When the user presses this key combination in a `CMFCAcceleratorKeyAssignCtrl` object, "Alt + B" is displayed to the user. For more information about the mapping between shortcut keys and a string format, see [CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md).

## Example

The following example demonstrates how to construct a `CMFCAcceleratorKeyAssignCtrl` object and use its `ResetKey` method to reset the shortcut key.

[!code-cpp[NVC_MFC_RibbonApp#31](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkeyassignctrl-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

`CMFCAcceleratorKeyAssignCtrl`

## Requirements

**Header:** afxacceleratorkeyassignctrl.h

## <a name="cmfcacceleratorkeyassignctrl"></a> CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl

Constructs a [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.

```
CMFCAcceleratorKeyAssignCtrl();
```

## <a name="getaccel"></a> CMFCAcceleratorKeyAssignCtrl::GetAccel

Retrieves the `ACCEL` structure for a shortcut key pressed in the [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.

```
ACCEL const* GetAccel() const;
```

### Return Value

An `ACCEL` structure that describes the shortcut key.

### Remarks

Use this function to retrieve the `ACCEL` structure for a shortcut key that the user entered into your `CMFCAcceleratorKeyAssignCtrl` object.

## <a name="isfocused"></a> CMFCAcceleratorKeyAssignCtrl::IsFocused

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
BOOL IsFocused() const;
```

### Return Value

### Remarks

## <a name="iskeydefined"></a> CMFCAcceleratorKeyAssignCtrl::IsKeyDefined

Determines whether a shortcut key has been defined in the [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.

```
BOOL IsKeyDefined() const;
```

### Return Value

Nonzero if the user has already pressed a valid combination of keys that define a shortcut key; otherwise 0.

### Remarks

Use this function to determine whether the user entered a valid shortcut key in your `CMFCAcceleratorKeyAssignCtrl` object. If a shortcut key exists, you can use [CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel) method to obtain the `ACCEL` structure associated with this shortcut key.

## <a name="pretranslatemessage"></a> CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

[in] *pMsg*<br/>

### Return Value

### Remarks

## <a name="resetkey"></a> CMFCAcceleratorKeyAssignCtrl::ResetKey

Resets the shortcut key.

```cpp
void ResetKey();
```

### Remarks

The function clears the edit control text. This includes any shortcut keys that the user pressed.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md)
