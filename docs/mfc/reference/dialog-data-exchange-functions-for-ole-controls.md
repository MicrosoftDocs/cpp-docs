---
description: "Learn more about: Dialog Data Exchange Functions for OLE Controls"
title: "Dialog Data Exchange Functions for OLE Controls"
ms.date: "11/04/2016"
f1_keywords: ["AFXDISP/DDX_OCBool", "AFXDISP/DDX_OCBoolRO", "AFXDISP/DDX_OCColor", "AFXDISP/DDX_OCColorRO", "AFXDISP/DDX_OCFloat", "AFXDISP/DDX_OCFloatRO", "AFXDISP/DDX_OCInt", "AFXDISP/DDX_OCIntRO", "AFXDISP/DDX_OCShort", "AFXDISP/DDX_OCShortRO", "AFXDISP/DDX_OCText", "AFXDISP/DDX_OCTextRO"]
helpviewer_keywords: ["OLE controls [MFC], DDX functions", "DDX (dialog data exchange), OLE support"]
ms.assetid: 7ef1f288-ff65-40d4-aad2-5497bc00bb27
---
# Dialog Data Exchange Functions for OLE Controls

This topic lists the DDX_OC functions used to exchange data between a property of an OLE control in a dialog box, form view, or control view object and a data member of the dialog box, form view, or control view object.

### DDX_OC Functions

|Name|Description|
|-|-|
|[DDX_OCBool](#ddx_ocbool)|Manages the transfer of **BOOL** data between a property of an OLE control and a **BOOL** data member.|
|[DDX_OCBoolRO](#ddx_ocboolro)|Manages the transfer of **BOOL** data between a read-only property of an OLE control and a **BOOL** data member.|
|[DDX_OCColor](#ddx_occolor)|Manages the transfer of **OLE_COLOR** data between a property of an OLE control and an **OLE_COLOR** data member.|
|[DDX_OCColorRO](#ddx_occolorro)|Manages the transfer of **OLE_COLOR** data between a read-only property of an OLE control and an **OLE_COLOR** data member.|
|[DDX_OCFloat](#ddx_ocfloat)|Manages the transfer of **`float`** (or **`double`**) data between a property of an OLE control and a **`float`** (or **`double`**) data member.|
|[DDX_OCFloatRO](#ddx_ocfloatro)|Manages the transfer of **`float`** (or **`double`**) data between a read-only property of an OLE control and a **`float`** (or **`double`**) data member.|
|[DDX_OCInt](#ddx_ocint)|Manages the transfer of **`int`** (or **`long`**) data between a property of an OLE control and an **`int`** (or **`long`**) data member.|
|[DDX_OCIntRO](#ddx_ocintro)|Manages the transfer of **`int`** (or **`long`**) data between a read-only property of an OLE control and an **`int`** (or **`long`**) data member.|
|[DDX_OCShort](#ddx_ocshort)|Manages the transfer of **`short`** data between a property of an OLE control and a **`short`** data member.|
|[DDX_OCShortRO](#ddx_ocshortro)|Manages the transfer of **`short`** data between a read-only property of an OLE control and a **`short`** data member.|
|[DDX_OCText](#ddx_octext)|Manages the transfer of **CString** data between a property of an OLE control and a **CString** data member.|
|[DDX_OCTextRO](#ddx_octextro)|Manages the transfer of **CString** data between a read-only property of an OLE control and a **CString** data member.|

## <a name="ddx_ocbool"></a> DDX_OCBool

The `DDX_OCBool` function manages the transfer of **BOOL** data between a property of an OLE control in a dialog box, form view, or control view object and a **BOOL** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCBool(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    BOOL& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header:** afxdisp.h

## <a name="ddx_ocboolro"></a> DDX_OCBoolRO

The `DDX_OCBoolRO` function manages the transfer of **BOOL** data between a read-only property of an OLE control in a dialog box, form view, or control view object and a **BOOL** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCBoolRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    BOOL& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_occolor"></a> DDX_OCColor

The `DDX_OCColor` function manages the transfer of OLE_COLOR data between a property of an OLE control in a dialog box, form view, or control view object and a OLE_COLOR data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCColor(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    OLE_COLOR& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_occolorro"></a> DDX_OCColorRO

The `DDX_OCColorRO` function manages the transfer of OLE_COLOR data between a read-only property of an OLE control in a dialog box, form view, or control view object and a OLE_COLOR data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCColorRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    OLE_COLOR& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocfloat"></a> DDX_OCFloat

The `DDX_OCFloat` function manages the transfer of **`float`** (or **`double`**) data between a property of an OLE control in a dialog box, form view, or control view object and a **`float`** (or **`double`**) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    float& value);

void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    double& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocfloatro"></a> DDX_OCFloatRO

The `DDX_OCFloatRO` function manages the transfer of **`float`** (or **`double`**) data between a read-only property of an OLE control in a dialog box, form view, or control view object and a **`float`** (or **`double`**) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    float& value);

void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    double& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocint"></a> DDX_OCInt

The `DDX_OCInt` function manages the transfer of **`int`** (or **`long`**) data between a property of an OLE control in a dialog box, form view, or control view object and a **`int`** (or **`long`**) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCInt(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    int& value);

void AFXAPI DDX_OCInt(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    long& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocintro"></a> DDX_OCIntRO

The `DDX_OCIntRO` function manages the transfer of **`int`** (or **`long`**) data between a read-only property of an OLE control in a dialog box, form view, or control view object and a **`int`** (or **`long`**) data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    int& value);

void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    long& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocshort"></a> DDX_OCShort

The `DDX_OCShort` function manages the transfer of short data between a property of an OLE control in a dialog box, form view, or control view object and a short data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCShort(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    short& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_ocshortro"></a> DDX_OCShortRO

The `DDX_OCShortRO` function manages the transfer of short data between a read-only property of an OLE control in a dialog box, form view, or control view object and a short data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCShortRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    short& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_octext"></a> DDX_OCText

The **DDX_OCText** function manages the transfer of **CString** data between a property of an OLE control in a dialog box, form view, or control view object and a **CString** data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCText(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a **CDataExchange** object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## <a name="ddx_octextro"></a> DDX_OCTextRO

The `DDX_OCTextRO` function manages the transfer of `CString` data between a read-only property of an OLE control in a dialog box, form view, or control view object and a `CString` data member of the dialog box, form view, or control view object.

```cpp
void AFXAPI DDX_OCTextRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*nIDC*<br/>
The ID of an OLE control in the dialog box, form view, or control view object.

*dispid*<br/>
The dispatch ID of a property of the control.

*value*<br/>
A reference to a member variable of the dialog box, form view or control view object with which data is exchanged.

### Remarks

For more information about DDX, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### Requirements

  **Header** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
