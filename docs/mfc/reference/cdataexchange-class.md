---
description: "Learn more about: CDataExchange Class"
title: "CDataExchange Class"
ms.date: "11/04/2016"
f1_keywords: ["CDataExchange", "AFXWIN/CDataExchange", "AFXWIN/CDataExchange::CDataExchange", "AFXWIN/CDataExchange::Fail", "AFXWIN/CDataExchange::PrepareCtrl", "AFXWIN/CDataExchange::PrepareEditCtrl", "AFXWIN/CDataExchange::PrepareOleCtrl", "AFXWIN/CDataExchange::m_bSaveAndValidate", "AFXWIN/CDataExchange::m_pDlgWnd"]
helpviewer_keywords: ["CDataExchange [MFC], CDataExchange", "CDataExchange [MFC], Fail", "CDataExchange [MFC], PrepareCtrl", "CDataExchange [MFC], PrepareEditCtrl", "CDataExchange [MFC], PrepareOleCtrl", "CDataExchange [MFC], m_bSaveAndValidate", "CDataExchange [MFC], m_pDlgWnd"]
ms.assetid: 84ed6113-325d-493e-a75d-223f03a992b8
---
# CDataExchange Class

Supports the dialog data exchange (DDX) and dialog data validation (DDV) routines used by the Microsoft Foundation classes.

## Syntax

```
class CDataExchange
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDataExchange::CDataExchange](#cdataexchange)|Constructs a `CDataExchange` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDataExchange::Fail](#fail)|Called when validation fails. Resets focus to the previous control and throws an exception.|
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepares the specified control for data exchange or validation. Use for nonedit controls.|
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepares the specified edit control for data exchange or validation.|
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepares the specified OLE control for data exchange or validation. Use for nonedit controls.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag for the direction of DDX and DDV.|
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|The dialog box or window where the data exchange takes place.|

## Remarks

`CDataExchange` does not have a base class.

Use this class if you are writing data exchange routines for custom data types or controls, or if you are writing your own data validation routines. For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Boxes](../../mfc/dialog-boxes.md).

A `CDataExchange` object provides the context information needed for DDX and DDV to take place. The flag *m_bSaveAndValidate* is FALSE when DDX is used to fill the initial values of dialog controls from data members. The flag *m_bSaveAndValidate* is TRUE when DDX is used to set the current values of dialog controls into data members and when DDV is used to validate the data values. If the DDV validation fails, the DDV procedure will display a message box explaining the input error. The DDV procedure will then call `Fail` to reset the focus to the offending control and throw an exception to stop the validation process.

## Inheritance Hierarchy

`CDataExchange`

## Requirements

**Header:** afxwin.h

## <a name="cdataexchange"></a> CDataExchange::CDataExchange

Call this member function to construct a `CDataExchange` object.

```
CDataExchange(
    CWnd* pDlgWnd,
    BOOL bSaveAndValidate);
```

### Parameters

*pDlgWnd*<br/>
A pointer to the parent window that contains the control. Usually this is a [CDialog](../../mfc/reference/cdialog-class.md)-derived object.

*bSaveAndValidate*<br/>
If TRUE, this object validates data, then writes data from the controls to the members. If FALSE, this object will move data from members to controls.

### Remarks

Construct a `CDataExchange` object yourself to store extra information in the data exchange object to pass to your window's [CWnd::DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) member function.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]

## <a name="fail"></a> CDataExchange::Fail

The framework calls this member function when a dialog data validation (DDV) operation fails.

```cpp
void Fail();
```

### Remarks

`Fail` restores the focus and selection to the control whose validation failed (if there is a control to restore). `Fail` then throws an exception of type [CUserException](../../mfc/reference/cuserexception-class.md) to stop the validation process. The exception causes a message box explaining the error to be displayed. After DDV validation fails, the user can reenter data in the offending control.

Implementors of custom DDV routines can call `Fail` from their routines when a validation fails.

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## <a name="m_bsaveandvalidate"></a> CDataExchange::m_bSaveAndValidate

This flag indicates the direction of a dialog data exchange (DDX) operation.

```
BOOL m_bSaveAndValidate;
```

### Remarks

The flag is nonzero if the `CDataExchange` object is being used to move data from the dialog controls to dialog-class data members after the user edits the controls. The flag is zero if the object is being used to initialize dialog controls from dialog-class data members.

The flag is also nonzero during dialog data validation (DDV).

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## <a name="m_pdlgwnd"></a> CDataExchange::m_pDlgWnd

Contains a pointer to the [CWnd](../../mfc/reference/cwnd-class.md) object for which dialog data exchange (DDX) or validation (DDV) is taking place.

```
CWnd* m_pDlgWnd;
```

### Remarks

This object is usually a [CDialog](../../mfc/reference/cdialog-class.md) object. Implementors of custom DDX or DDV routines can use this pointer to obtain access to the dialog window that contains the controls they are operating on.

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## <a name="preparectrl"></a> CDataExchange::PrepareCtrl

The framework calls this member function to prepare the specified control for dialog data exchange (DDX) and validation (DDV).

```
HWND PrepareCtrl(int nIDC);
```

### Parameters

*nIDC*<br/>
The ID of the control to be prepared for DDX or DDV.

### Return Value

The HWND of the control being prepared for DDX or DDV.

### Remarks

Use [PrepareEditCtrl](#prepareeditctrl) instead for edit controls; use this member function for all other controls.

Preparation consists of storing the control's HWND in the `CDataExchange` class. The framework uses this handle to restore the focus to the previously focused control in the event of a DDX or DDV failure.

Implementors of custom DDX or DDV routines should call `PrepareCtrl` for all non-edit controls for which they are exchanging data via DDX or validating data via DDV.

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## <a name="prepareeditctrl"></a> CDataExchange::PrepareEditCtrl

The framework calls this member function to prepare the specified edit control for dialog data exchange (DDX) and validation (DDV).

```
HWND PrepareEditCtrl(int nIDC);
```

### Parameters

*nIDC*<br/>
The ID of the edit control to be prepared for DDX or DDV.

### Return Value

The HWND of the edit control being prepared for DDX or DDV.

### Remarks

Use [PrepareCtrl](#preparectrl) instead for all non-edit controls.

Preparation consists of two things. First, `PrepareEditCtrl` stores the control's HWND in the `CDataExchange` class. The framework uses this handle to restore the focus to the previously focused control in the event of a DDX or DDV failure. Second, `PrepareEditCtrl` sets a flag in the `CDataExchange` class to indicate that the control whose data is being exchanged or validated is an edit control.

Implementors of custom DDX or DDV routines should call `PrepareEditCtrl` for all edit controls for which they are exchanging data via DDX or validating data via DDV.

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## <a name="prepareolectrl"></a> CDataExchange::PrepareOleCtrl

The framework calls this member function to prepare the specified OLE control for dialog data exchange (DDX) and validation (DDV).

```
COleControlSite* PrepareOleCtrl(int nIDC);
```

### Parameters

*nIDC*<br/>
The ID of the OLE control to be prepared for DDX or DDV.

### Return Value

A pointer to the OLE control site.

### Remarks

Use [PrepareEditCtrl](#prepareeditctrl) instead for edit controls or [PrepareCtrl](#preparectrl) for all other non-OLE controls.

Implementors of custom DDX or DDV routines should call `PrepareOleCtrl` for all OLE controls for which they are exchanging data via DDX or validating data via DDV.

For more information on writing your own DDX and DDV routines, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md). For an overview of DDX and DDV, see [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and [Dialog Box Topics](../../mfc/dialog-boxes.md).

## See also

[MFC Sample VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWnd::DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)<br/>
[CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)
