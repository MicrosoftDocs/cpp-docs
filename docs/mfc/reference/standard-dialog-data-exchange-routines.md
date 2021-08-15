---
description: "Learn more about: Standard Dialog Data Exchange Routines"
title: "Standard Dialog Data Exchange Routines"
ms.date: "11/04/2016"
helpviewer_keywords: ["standard dialog, data exchange routines"]
ms.assetid: c6adb7f3-f9af-4cc5-a9ea-315c5b60ad1a
---
# Standard Dialog Data Exchange Routines

This topic lists the standard dialog data exchange (DDX) routines used for common MFC dialog controls.

> [!NOTE]
> The standard dialog data exchange routines are defined in the header file afxdd_.h. However, applications should include afxwin.h.

### DDX Functions

|Name|Description|
|-|-|
|[DDX_CBIndex](#ddx_cbindex)|Initializes or retrieves the index of the current selection of a combo box control.|
|[DDX_CBString](#ddx_cbstring)|Initializes or retrieves the current contents of the edit field of a combo box control.|
|[DDX_CBStringExact](#ddx_cbstringexact)|Initializes or retrieves the current contents of the edit field of a combo box control.|
|[DDX_Check](#ddx_check)|Initializes or retrieves the current state of a check box control.|
|[DDX_Control](#ddx_control)|Subclasses a given control within a dialog box.|
|[DDX_DateTimeCtrl](#ddx_datetimectrl)|Initializes or retrieves date and/or time data of a date and time picker control.|
|[DDX_IPAddress](#ddx_ipaddress)|Initializes or retrieves the current value of an IP address control.|
|[DDX_LBIndex](#ddx_lbindex)|Initializes or retrieves the index of the current selection of a list box control.|
|[DDX_LBString](#ddx_lbstring)|Initializes or retrieves the current selection within a list box control.|
|[DDX_LBStringExact](#ddx_lbstringexact)|Initializes or retrieves the current selection within a list box control.|
|[DDX_ManagedControl](#ddx_managedcontrol)|Creates a .NET control matching the control's resource ID.|
|[DDX_MonthCalCtrl](#ddx_monthcalctrl)|Initializes or retrieves the current value of a month calendar control.|
|[DDX_Radio](#ddx_radio)|Initializes or retrieves the 0-based index of the radio control that is currently checked within a radio control group.|
|[DDX_Scroll](#ddx_scroll)|Initializes or retrieves the current position of a scroll control's thumb.|
|[DDX_Slider](#ddx_slider)|Initializes or retrieves the current position of a slider control's thumb.|
|[DDX_Text](#ddx_text)|Initializes or retrieves the current value of an edit control.|

## <a name="ddx_cbindex"></a> DDX_CBIndex

The `DDX_CBIndex` function manages the transfer of **`int`** data between a combo box control in a dialog box, form view, or control view object and a **`int`** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_CBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the combo box control associated with the control property.

*index*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_CBIndex` is called, *index* is set to the index of the current combo box selection. If no item is selected, *index* is set to 0.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_cbstring"></a> DDX_CBString

The `DDX_CBString` function manages the transfer of `CString` data between the edit control of a combo box control in a dialog box, form view, or control view object and a `CString` data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_CBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the combo box control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_CBString` is called, *value* is set to the current combo box selection. If no item is selected, *value* is set to a string of zero length.

> [!NOTE]
> If the combo box is a drop-down list box, the value exchanged is limited to 255 characters.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_cbstringexact"></a> DDX_CBStringExact

The `DDX_CBStringExact` function manages the transfer of `CString` data between the edit control of a combo box control in a dialog box, form view, or control view object and a `CString` data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_CBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the combo box control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_CBStringExact` is called, *value* is set to the current combo box selection. If no item is selected, *value* is set to a string of zero length.

> [!NOTE]
> If the combo box is a drop-down list box, the value exchanged is limited to 255 characters.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_check"></a> DDX_Check

The `DDX_Check` function manages the transfer of **`int`** data between a check box control in a dialog box, form view, or control view object and a **`int`** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_Check(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the check box control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_Check` is called, *value* is set to the current state of the check box control. For a list of the possible state values, see [BM_GETCHECK](/windows/win32/Controls/bm-getcheck) in the Windows SDK.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_control"></a> DDX_Control

The `DDX_Control` function subclasses the control, specified by *nIDC*, of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_Control(
    CDataExchange* pDX,
    int nIDC,
    CWnd& rControl);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*nIDC*<br/>
The resource ID of the control to be subclassed.

*rControl*<br/>
A reference to a member variable of the dialog box, form view, or control view object related to the specified control.

### Remarks

The *pDX* object is supplied by the framework when the `DoDataExchange` function is called. Therefore, `DDX_Control` should only be called within your override of `DoDataExchange`.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_datetimectrl"></a> DDX_DateTimeCtrl

The `DDX_DateTimeCtrl` function manages the transfer of date and/or time data between a date and time picker control ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) in a dialog box or form view object and either a [CTime](../../atl-mfc-shared/reference/ctime-class.md) or a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) data member of the dialog box or form view object.

```cpp
void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    CTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction. You don't need to delete this object.

*nIDC*<br/>
The resource ID of the date and time picker control associated with the member variable.

*value*<br/>
In the first two versions, a reference to a `CTime` or `COleDateTime` member variable, dialog box, form view, or control view object with which data is exchanged. In the third version, a reference to a `CString` data member control view object.

### Remarks

When `DDX_DateTimeCtrl` is called, *value* is set to the current state of the date and time picker control, or the control is set to *value*, depending on the direction of the exchange.

In the third version above, `DDX_DateTimeCtrl` manages the transfer of `CString` data between a date time control and a [CString](../../atl-mfc-shared/reference/cstringt-class.md) data member of the control view object. The string is formatted using the current locale's rules for formatting dates and times.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_managedcontrol"></a> DDX_ManagedControl

Creates a .NET control matching the control's resource ID.

### Syntax

```cpp
template <typename T>
void DDX_ManagedControl(
   CDataExchange* pDX,
   int nIDC,
   CWinFormsControl<T>& control );
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange Class](cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the control associated with the control property.

*control*<br/>
A reference to a [CWinFormsControl Class](cwinformscontrol-class.md) object.

### Remarks

`DDX_ManagedControl` calls [CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol) to create a control matching the resource control ID. Use `DDX_ManagedControl` to create controls from resource IDs in [CDialog::OnInitDialog](cdialog-class.md#oninitdialog). For data exchange, you do not need to use the DDX/DDV functions with Windows Forms controls.

For more information, see [How to: Do DDX/DDV Data Binding with Windows Forms](../../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

### Requirements

**Header:** afxwinforms.h

## <a name="ddx_ipaddress"></a> DDX_IPAddress

The `DDX_IPAddress` function manages the transfer of data between an IP Address control and a data member of the control view object.

```cpp
void AFXAPI DDX_IPAddress(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the IP Address control associated with the control property.

*value*<br/>
A reference to the DWORD containing the four-field value of the IP Address control. The fields are filled or read as follows.

|Field|Bits containing the field value|
|-----------|-------------------------------------|
|3|0 through 7|
|2|8 through 15|
|1|16 through 23|
|0|24 through 31|

Use the Win32 [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress) to read the value, or use [IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress) to fill the value. These messages are described in the Windows SDK.

### Remarks

When `DDX_IPAddress` is called, *value* is either read from the IP Address control, or *value* is written to the control, depending on the direction of the exchange.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_lbindex"></a> DDX_LBIndex

The `DDX_LBIndex` function manages the transfer of **`int`** data between a list box control in a dialog box, form view, or control view object and an **`int`** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_LBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the list box control associated with the control property.

*index*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_LBIndex` is called, *index* is set to the index of the current list box selection. If no item is selected, *index* is set to -1.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_lbstring"></a> DDX_LBString

The `DDX_LBString` function manages the transfer of `CString` data between a list box control in a dialog box, form view, or control view object and a `CString` data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_LBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the list box control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_LBString` is called to transfer data to a list box control, the first item in the control whose beginning matches *value* is selected. (To match the entire item rather than just a prefix, use [DDX_LBStringExact](#ddx_lbstringexact).) If there are no matches, no items are selected. The matching is case-insensitive.

When `DDX_LBString` is called to transfer data from a list box control, *value* is set to the current list box selection. If no item is selected, *value* is set to a string of zero length.

> [!NOTE]
> If the list box is a drop-down list box, the value exchanged is limited to 255 characters.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_lbstringexact"></a> DDX_LBStringExact

The `DDX_CBStringExact` function manages the transfer of `CString` data between the edit control of a list box control in a dialog box, form view, or control view object and a `CString` data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_LBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the list box control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_LBStringExact` is called to transfer data to a list box control, the first item in the control that matches *value* is selected. (To match just a prefix rather than the entire item, use [DDX_LBString](#ddx_lbstring).) If there are no matches, no items are selected. The matching is case-insensitive.

When `DDX_CBStringExact` is called to transfer data from a list box control, *value* is set to the current list box selection. If no item is selected, *value* is set to a string of zero length.

> [!NOTE]
> If the list box is a drop-down list box, the value exchanged is limited to 255 characters.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_monthcalctrl"></a> DDX_MonthCalCtrl

The `DDX_MonthCalCtrl` function manages the transfer of date data between a month calendar control ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) in a dialog box, form view, or control view object and either a [CTime](../../atl-mfc-shared/reference/ctime-class.md) or a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,
    int nIDC,
    CTime& value);

void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction. You don't need to delete this object.

*nIDC*<br/>
The resource ID of the month calendar control associated with the member variable.

*value*<br/>
A reference to a `CTime` or `COleDateTime` member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

> [!NOTE]
> The control manages a date value only. The time fields in the time object are set to reflect the creation time of the control window, or whatever time was set in the control with a call to `CMonthCalCtrl::SetCurSel`.

When `DDX_MonthCalCtrl` is called, *value* is set to the current state of the month calendar control.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_radio"></a> DDX_Radio

The `DDX_Radio` function manages the transfer of **`int`** data between a radio control group in a dialog box, form view, or control view object and a **`int`** data member of the dialog box, form view, or control view object. The value of the **`int`** data member is determined according to which radio button within the group is selected.

```cpp
void AFXAPI DDX_Radio(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the first radio control in the group.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is exchanged.

### Remarks

When `DDX_Radio` is called, *value* is set to the current state of the radio control group. The value is set as a 0-based index of the radio control that is currently checked, or -1 if no radio controls are checked.

For example, in case that the first radio button in the group is checked (the button with WS_GROUP style) the value of the **`int`** member is 0 and so on.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_scroll"></a> DDX_Scroll

The `DDX_Scroll` function manages the transfer of **`int`** data between a scroll-bar control in a dialog box, form view, or control view object and an **`int`** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_Scroll(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the scroll-bar control associated with the control property.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

When `DDX_Scroll` is called, *value* is set to the current position of the control's thumb. For more information on the values associated with the current position of the control's thumb, see [GetScrollPos](/windows/win32/api/winuser/nf-winuser-getscrollpos) in the Windows SDK.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_slider"></a> DDX_Slider

The `DDX_Slider` function manages the transfer of **`int`** data between a slider control in a dialog box or form view and an **`int`** data member of the dialog box or form view object.

```cpp
void AFXAPI DDX_Slider(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The resource ID of the slider control.

*value*<br/>
A reference to the value to be exchanged. This parameter holds or sets the slider control's current position.

### Remarks

When `DDX_Slider` is called, *value* is set to the current position of the control's thumb, or the value receives the position, depending on the direction of the exchange.

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md). For information about slider controls, see [Using CSliderCtrl](../../mfc/using-csliderctrl.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddx_text"></a> DDX_Text

The `DDX_Text` function manages the transfer of **`int`**, **UINT**, **`long`**, DWORD, `CString`, **`float`**, or **`double`** data between an edit control in a dialog box, form view, or control view and a [CString](../../atl-mfc-shared/reference/cstringt-class.md) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    BYTE& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    short& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    int& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    UINT& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    long& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    CString& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    float& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    double& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    COleCurrency& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an edit control in the dialog box, form view, or control view object.

*value*<br/>
A reference to a data member in the dialog box, form view, or control view object. The data type of *value* depends on which of the overloaded versions of `DDX_Text` you use.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## See also

[Standard Dialog Data Validation Routines](standard-dialog-data-validation-routines.md)<br/>
[Macros and Globals](mfc-macros-and-globals.md)<br/>
[CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol)<br/>
[CDialog::OnInitDialog](cdialog-class.md#oninitdialog)
