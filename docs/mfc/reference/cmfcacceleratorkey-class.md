---
description: "Learn more about: CMFCAcceleratorKey Class"
title: "CMFCAcceleratorKey Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCAcceleratorKey", "AFXACCELERATORKEY/CMFCAcceleratorKey", "AFXACCELERATORKEY/CMFCAcceleratorKey::CMFCAcceleratorKey", "AFXACCELERATORKEY/CMFCAcceleratorKey::Format", "AFXACCELERATORKEY/CMFCAcceleratorKey::SetAccelerator"]
helpviewer_keywords: ["CMFCAcceleratorKey [MFC], CMFCAcceleratorKey", "CMFCAcceleratorKey [MFC], Format", "CMFCAcceleratorKey [MFC], SetAccelerator"]
ms.assetid: d140fbf7-23db-45ea-a63e-414a5ec7b3d5
---
# CMFCAcceleratorKey Class

A helper class that implements virtual key mapping and formatting.

## Syntax

```
class CMFCAcceleratorKey : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCAcceleratorKey::CMFCAcceleratorKey](#cmfcacceleratorkey)|Constructs a `CMFCAcceleratorKey` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCAcceleratorKey::Format](#format)|Translates the ACCEL structure to its visual representation.|
|[CMFCAcceleratorKey::SetAccelerator](#setaccelerator)|Sets the shortcut key for the `CMFCAcceleratorKey` object.|

## Remarks

Accelerator keys are also known as shortcut keys. If you want to display keyboard shortcuts that a user enters, the [CMFCAcceleratorKeyAssignCtrl Class](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) maps keyboard shortcuts, such as Alt+Shift+S, to a custom text format, such as "Alt + Shift + S". Each `CMFCAcceleratorKey` object maps a single shortcut key to a text format.

For more information about how to use shortcut keys and accelerator tables, see [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md).

## Example

The following example demonstrates how to construct a `CMFCAcceleratorKey` object and how to use its `Format` method.

[!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAcceleratorKey`

## Requirements

**Header:** afxacceleratorkey.h

## <a name="cmfcacceleratorkey"></a> CMFCAcceleratorKey::CMFCAcceleratorKey

Constructs a [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object.

```
CMFCAcceleratorKey();
CMFCAcceleratorKey(LPACCEL lpAccel);
```

### Parameters

*lpAccel*<br/>
[in] A pointer to a shortcut key.

### Remarks

If you do not provide a shortcut key when you create a `CMFCAccleratorKey`, use the [CMFCAcceleratorKey::SetAccelerator](#setaccelerator) method to associate a shortcut key with your `CMFCAcceleratorKey` object.

## <a name="format"></a> CMFCAcceleratorKey::Format

Translates the ACCEL structure to its associated string value.

```cpp
void Format(CString& str) const;
```

### Parameters

*str*<br/>
[out] A reference to a `CString` object where the method writes the translated shortcut key.

### Remarks

This method retrieves the string format of the associated shortcut key. You can set the string format of a [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object using either the constructor or the method [CMFCAcceleratorKey::SetAccelerator](#setaccelerator).

## <a name="setaccelerator"></a> CMFCAcceleratorKey::SetAccelerator

Sets the shortcut key for the [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) object.

```cpp
void SetAccelerator(LPACCEL lpAccel);
```

### Parameters

*lpAccel*<br/>
[in] A pointer to a shortcut key.

### Remarks

Use this method to set the shortcut key for a `CMFCAcceleratorKey` if you did not provide a shortcut key when you created the `CMFCAcceleratorKey`.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)
