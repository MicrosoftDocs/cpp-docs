---
description: "Learn more about: Standard Dialog Data Validation Routines"
title: "Standard Dialog Data Validation Routines"
ms.date: "11/04/2016"
helpviewer_keywords: ["standard dialog, data validation routines"]
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
---
# Standard Dialog Data Validation Routines

This topic lists the standard dialog data validation (DDV) routines used for common MFC dialog controls.

> [!NOTE]
> The standard dialog data exchange routines are defined in the header file afxdd_.h. However, applications should include afxwin.h.

### DDV Functions

|Name|Description|
|-|-|
|[DDV_MaxChars](#ddv_maxchars)|Verifies the number of characters in a given control value does not exceed a given maximum.|
|[DDV_MinMaxByte](#ddv_minmaxbyte)|Verifies a given control value does not exceed a given **BYTE** range.|
|[DDV_MinMaxDateTime](#ddv_minmaxdatetime)|Verifies a given control value does not exceed a given time range.|
|[DDV_MinMaxDouble](#ddv_minmaxdouble)|Verifies a given control value does not exceed a given **`double`** range.|
|[DDV_MinMaxDWord](#ddv_minmaxdword)|Verifies a given control value does not exceed a given **DWORD** range.|
|[DDV_MinMaxFloat](#ddv_minmaxfloat)|Verifies a given control value does not exceed a given **`float`** range.|
|[DDV_MinMaxInt](#ddv_minmaxint)|Verifies a given control value does not exceed a given **`int`** range.|
|[DDV_MinMaxLong](#ddv_minmaxlong)|Verifies a given control value does not exceed a given **`long`** range.|
|[DDV_MinMaxLongLong](#ddv_minmaxlonglong)|Verifies a given control value does not exceed a given **LONGLONG** range.|
|[DDV_MinMaxMonth](#ddv_minmaxmonth)|Verifies a given control value does not exceed a given date range.|
|[DDV_MinMaxShort](#ddv_minmaxshort)|Verifies a given control value does not exceed a given **`short`** range.|
|[DDV_MinMaxSlider](#ddv_minmaxslider)|Verifies a given slider control value falls within the given range.|
|[DDV_MinMaxUInt](#ddv_minmaxuint)|Verifies a given control value does not exceed a given **UINT** range.|
|[DDV_MinMaxUnsigned](#ddv_minmaxuint)|Verifies a given control value falls between two specified values.|
|[DDV_MinMaxULongLong](#ddv_minmaxulonglong)|Verifies a given control value does not exceed a given **ULONGLONG** range.|

## <a name="ddv_maxchars"></a> DDV_MaxChars

Call `DDV_MaxChars` to verify that the amount of characters in the control associated with *value* does not exceed *nChars*.

```cpp
void AFXAPI DDV_MaxChars(
    CDataExchange* pDX,
    CString const& value,
    int nChars);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*nChars*<br/>
Maximum number of characters allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxbyte"></a> DDV_MinMaxByte

Call `DDV_MinMaxByte` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxByte(
    CDataExchange* pDX,
    BYTE value,
    BYTE minVal,
    BYTE maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type BYTE) allowed.

*maxVal*<br/>
Maximum value (of type BYTE) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxdatetime"></a> DDV_MinMaxDateTime

Call `DDV_MinMaxDateTime` to verify that the time/date value in the date and time picker control ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) associated with *refValue* falls between *refMinRange* and *refMaxRange*.

```cpp
void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,
    CTime& refValue,
    const CTime* refMinRange,
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,
    COleDateTime& refValue,
    const COleDateTime* refMinRange,
    const COleDateTime* refMaxRange);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction. You don't need to delete this object.

*refValue*<br/>
A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) or [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object associated with a member variable of the dialog box, form view, or control view object. This object contains the data to be validated.

*refMinRange*<br/>
Minimum date/time value allowed.

*refMaxRange*<br/>
Maximum date/time value allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxdouble"></a> DDV_MinMaxDouble

Call `DDV_MinMaxDouble` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxDouble(
    CDataExchange* pDX,
    double const& value,
    double minVal,
    double maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`double`**) allowed.

*maxVal*<br/>
Maximum value (of type **`double`**) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxdword"></a> DDV_MinMaxDWord

Call `DDV_MinMaxDWord` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxDWord(
    CDataExchange* pDX,
    DWORD const& value,
    DWORD minVal,
    DWORD maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type DWORD) allowed.

*maxVal*<br/>
Maximum value (of type DWORD) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxfloat"></a> DDV_MinMaxFloat

Call `DDV_MinMaxFloat` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxFloat(
    CDataExchange* pDX,
    float value,
    float minVal,
    float maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`float`**) allowed.

*maxVal*<br/>
Maximum value (of type **`float`**) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxint"></a> DDV_MinMaxInt

Call `DDV_MinMaxInt` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxInt(
    CDataExchange* pDX,
    int value,
    int minVal,
    int maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`int`**) allowed.

*maxVal*<br/>
Maximum value (of type **`int`**) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxlong"></a> DDV_MinMaxLong

Call `DDV_MinMaxLong` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxLong(
    CDataExchange* pDX,
    long value,
    long minVal,
    long maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`long`**) allowed.

*maxVal*<br/>
Maximum value (of type **`long`**) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxlonglong"></a> DDV_MinMaxLongLong

Call `DDV_MinMaxLongLong` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxLongLong(
    CDataExchange* pDX,
    LONGLONG value,
    LONGLONG minVal,
    LONGLONG maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type LONGLONG) allowed.

*maxVal*<br/>
Maximum value (of type LONGLONG) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxmonth"></a> DDV_MinMaxMonth

Call `DDV_MinMaxMonth` to verify that the time/date value in the month calendar control ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) associated with *refValue* falls between *refMinRange* and *refMaxRange*.

```cpp
void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,
    CTime& refValue,
    const CTime* refMinRange,
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,
    COleDateTime& refValue,
    const COleDateTime* refMinRange,
    const COleDateTime* refMaxRange);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction.

*refValue*<br/>
A reference to an object of type `CTime` or `COleDateTime` associated with a member variable of the dialog box, form view, or control view object. This object contains the data to be validated. MFC passes this reference when `DDV_MinMaxMonth` is called.

*refMinRange*<br/>
Minimum date/time value allowed.

*refMaxRange*<br/>
Maximum date/time value allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxshort"></a> DDV_MinMaxShort

Call `DDV_MinMaxShort` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxShort(
    CDataExchange* pDX,
    short value,
    short minVal,
    short maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`short`**) allowed.

*maxVal*<br/>
Maximum value (of type **`short`**) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxslider"></a> DDV_MinMaxSlider

Call `DDV_MinMaxSlider` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxSlider(
    CDataExchange* pDX,
    DWORD value,
    DWORD minVal,
    DWORD maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to the value to be validated. This parameter holds or sets the slider control's current thumb position.

*minVal*<br/>
Minimum value allowed.

*maxVal*<br/>
Maximum value allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md). For information about slider controls, see [Using CSliderCtrl](../../mfc/using-csliderctrl.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxuint"></a> DDV_MinMaxUInt

Call `DDV_MinMaxUInt` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxUInt(
    CDataExchange* pDX,
    UINT value,
    UINT minVal,
    UINT maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type UINT) allowed.

*maxVal*<br/>
Maximum value (of type UINT) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## <a name="ddv_minmaxulonglong"></a> DDV_MinMaxULongLong

Call `DDV_MinMaxULongLong` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

```cpp
void AFXAPI DDV_MinMaxULongLong(
    CDataExchange* pDX,
    ULONGLONG value,
    ULONGLONG  minVal ,
    ULONGLONG  maxVal);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type ULONGLONG) allowed.

*maxVal*<br/>
Maximum value (of type ULONGLONG) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdd_.h

## DDV_MinMaxUnsigned

Call `DDV_MinMaxUnsigned` to verify that the value in the control associated with *value* falls between *minVal* and *maxVal*.

### Syntax

```cpp
   void AFXAPI DDV_MinMaxUnsigned(
       CDataExchange* pDX,
       unsigned value,
       unsigned minVal,
       unsigned maxVal );
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*value*<br/>
A reference to a member variable of the dialog box, form view, or control view object with which data is validated.

*minVal*<br/>
Minimum value (of type **`unsigned`** ) allowed.

*maxVal*<br/>
Maximum value (of type **`unsigned`** ) allowed.

### Remarks

For more information about DDV, see [Dialog Data Exchange and Validation](../dialog-data-exchange-and-validation.md).

### Requirements

**Header:** afxdd_.h

## See also

[Standard Dialog Data Exchange Routines](standard-dialog-data-exchange-routines.md)<br/>
[Macros and Globals](mfc-macros-and-globals.md)<br/>
[DDX_Slider](standard-dialog-data-exchange-routines.md#ddx_slider)<br/>
[DDX_FieldSlider](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md#ddx_fieldslider)
