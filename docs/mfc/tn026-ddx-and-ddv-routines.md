---
description: "Learn more about: TN026: DDX and DDV Routines"
title: "TN026: DDX and DDV Routines"
ms.date: "06/28/2018"
f1_keywords: ["DDX", "DDV"]
helpviewer_keywords: ["DDX (dialog data exchange), procedures", "TN026", "DDV (dialog data validation), procedures"]
ms.assetid: c2eba87a-4b47-4083-b28b-e2fa77dfb4c4
---
# TN026: DDX and DDV Routines

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes the dialog data exchange (DDX) and dialog data validation (DDV) architecture. It also describes how you write a DDX_ or DDV_ procedure and how you can extend ClassWizard to use your routines.

## Overview of Dialog Data Exchange

All dialog data functions are done with C++ code. There are no special resources or magic macros. The heart of the mechanism is a virtual function that is overridden in every dialog class that does dialog data exchange and validation. It is always found in this form:

```cpp
void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);   // call base class

    //{{AFX_DATA_MAP(CMyDialog)
        <data_exchange_function_call>
        <data_validation_function_call>
    //}}AFX_DATA_MAP
}
```

The special format AFX comments allow ClassWizard to locate and edit the code within this function. Code that is not compatible with ClassWizard should be placed outside of the special format comments.

In the above example, \<data_exchange_function_call> is in the form:

```cpp
DDX_Custom(pDX, nIDC, field);
```

and \<data_validation_function_call> is optional and is in the form:

```cpp
DDV_Custom(pDX, field, ...);
```

More than one DDX_/DDV_ pair may be included in each `DoDataExchange` function.

See 'afxdd_.h' for a list of all the dialog data exchange routines and dialog data validation routines provided with MFC.

Dialog data is just that: member data in the `CMyDialog` class. It is not stored in a struct or anything similar.

## Notes

Although we call this "dialog data," all features are available in any class derived from `CWnd` and are not limited to just dialogs.

Initial values of data are set in the standard C++ constructor, usually in a block with `//{{AFX_DATA_INIT` and `//}}AFX_DATA_INIT` comments.

`CWnd::UpdateData` is the operation that does the initialization and error handling around the call to `DoDataExchange`.

You can call `CWnd::UpdateData` at any time to perform data exchange and validation. By default `UpdateData`(TRUE) is called in the default `CDialog::OnOK` handler and `UpdateData`(FALSE) is called in the default `CDialog::OnInitDialog`.

The DDV_ routine should immediately follow the DDX_ routine for that *field*.

## How Does It Work

You do not need to understand the following in order to use dialog data. However, understanding how this works behind the scenes will help you write your own exchange or validation procedure.

The `DoDataExchange` member function is much like the `Serialize` member function - it is responsible for getting or setting data to/from an external form (in this case controls in a dialog) from/to member data in the class. The *pDX* parameter is the context for doing data exchange and is similar to the `CArchive` parameter to `CObject::Serialize`. The *pDX* (a `CDataExchange` object) has a direction flag much like `CArchive` has a direction flag:

- If `!m_bSaveAndValidate`, then load the data state into the controls.

- If `m_bSaveAndValidate`, then set the data state from the controls.

Validation only occurs when `m_bSaveAndValidate` is set. The value of `m_bSaveAndValidate` is determined by the BOOL parameter to `CWnd::UpdateData`.

There are three other interesting `CDataExchange` members:

- `m_pDlgWnd`: The window (usually a dialog) that contains the controls. This is to prevent callers of the DDX_ and DDV_ global functions from having to pass 'this' to every DDX/DDV routine.

- `PrepareCtrl`, and `PrepareEditCtrl`: Prepares a dialog control for data exchange. Stores that control's handle for setting the focus if a validation fails. `PrepareCtrl` is used for non-edit controls and `PrepareEditCtrl` is used for edit controls.

- `Fail`: Called after bringing up a message box alerting the user to the input error. This routine will restore the focus to the last control (the last call to `PrepareCtrl` or `PrepareEditCtrl`) and throw an exception. This member function may be called from both DDX_ and DDV_ routines.

## User Extensions

There are several ways to extend the default DDX/DDV mechanism. You can:

- Add new data types.

    ```cpp
    CTime
    ```

- Add new exchange procedures (DDX_).

    ```cpp
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);
    ```

- Add new validation procedures (DDV_).

    ```cpp
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);
    // make sure time is in the future or past
    ```

- Pass arbitrary expressions to the validation procedures.

    ```cpp
    DDV_MinMax(pDX, age, 0, m_maxAge);
    ```

    > [!NOTE]
    > Such arbitrary expressions cannot be edited by ClassWizard and therefore should be moved outside of the special format comments (//{{AFX_DATA_MAP(CMyClass)).

Have the `DoDialogExchange` member function include conditionals or any other valid C++ statements with intermixed exchange and validation function calls.

```cpp
//{{AFX_DATA_MAP(CMyClass)
DDX_Check(pDX, IDC_SEX, m_bFemale);
DDX_Text(pDX, IDC_EDIT1, m_age);
//}}AFX_DATA_MAP
if (m_bFemale)
    DDV_MinMax(pDX, age, 0, m_maxFemaleAge);
else
    DDV_MinMax(pDX, age, 0, m_maxMaleAge);
```

> [!NOTE]
> As shown above, such code cannot be edited by ClassWizard and should be used only outside of the special format comments.

## ClassWizard Support

ClassWizard supports a subset of DDX/DDV customizations by allowing you to integrate your own DDX_ and DDV_ routines into the ClassWizard user interface. Doing this is only cost beneficial if you plan to reuse particular DDX and DDV routines in a project or in many projects.

To do this, special entries are made in DDX.CLW (previous versions of Visual C++ stored this information in APSTUDIO.INI) or in your project's .CLW file. The special entries can be entered either in the [General Info] section of your project's .CLW file or in the [ExtraDDX] section of the DDX.CLW file in the \Program Files\Microsoft Visual Studio\Visual C++\bin directory. You may need to create the DDX.CLW file if it doesn't already exist. If you plan to use the custom DDX_/DDV_ routines only in a certain project, add the entries to the [General Info] section of your project .CLW file instead. If you plan to use the routines on many projects, add the entries to the [ExtraDDX] section of DDX.CLW.

The general format of these special entries is:

> ExtraDDXCount=*n*

where *n* is the number of ExtraDDX? lines to follow, of the form

> ExtraDDX?=*keys*; *vb-keys*; *prompt*; *type*; *initValue*; *DDX_Proc* [; *DDV_Proc*; *prompt1*; *arg1* [; *prompt2*; *fmt2*]]

where ? is a number 1 - *n* indicating which DDX type in the list that is being defined.

Each field is delimited by a ';' character. The fields and their purpose are described below.

- *keys*

  A list of single characters indicating for which dialog controls this variable type is allowed.

  |Character|Allowed control|
  |-|-|
  E | edit
  C | two-state check box
  c | tri-state check box
  R | first radio button in a group
  L | nonsorted list box
  l | sorted list box
  M | combo box (with edit item)
  N | nonsorted drop list
  n | sorted drop list
  1 | if the DDX insert should be added to head of list (default is add to tail) This is generally used for DDX routines that transfer the 'Control' property.

- *vb-keys*

  This field is used only in the 16-bit product for VBX controls (VBX controls are not supported in the 32-bit product)

- *prompt*

  String to place in the Property combo box (no quotes)

- *type*

  Single identifier for type to emit in the header file. In our example above with DDX_Time, this would be set to CTime.

- *vb-keys*

  Not used in this version and should always be empty

- *initValue*

  Initial value — 0 or blank. If it is blank, then no initialization line will be written in the //{{AFX_DATA_INIT section of the implementation file. A blank entry should be used for C++ objects (such as `CString`, `CTime`, and so on) that have constructors that guarantee correct initialization.

- *DDX_Proc*

  Single identifier for the DDX_ procedure. The C++ function name must start with "DDX_," but don't include "DDX_" in the \<DDX_Proc> identifier. In the example above, the \<DDX_Proc> identifier would be Time. When ClassWizard writes the function call to the implementation file in the {{AFX_DATA_MAP section, it appends this name to DDX_, thus arriving at DDX_Time.

- *comment*

  Comment to show in dialog for variable with this DDX. Place any text you would like here, and usually provide something that describes the operation performed by the DDX/DDV pair.

- *DDV_Proc*

  The DDV portion of the entry is optional. Not all DDX routines have corresponding DDV routines. Often, it is more convenient to include the validation phase as an integral part of the transfer. This is often the case when your DDV routine doesn't require any parameters, because ClassWizard does not support DDV routines without any parameters.

- *arg*

  Single identifier for the DDV_ procedure. The C++ function name must start with "DDV_", but do not include "DDX_" in the \<DDX_Proc> identifier.

  *arg* is followed by 1 or 2 DDV args:

  - *promptN*

      String to place above the edit item (with & for accelerator).

  - *fmtN*

      Format character for the arg type, one of:

      |Character|Type|
      |-|-|
      |d | int|
      |u | unsigned int|
      |D | long int (that is, long)|
      |U | long unsigned (that is, DWORD)|
      |f | float|
      |F | double|
      |s | string|

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
