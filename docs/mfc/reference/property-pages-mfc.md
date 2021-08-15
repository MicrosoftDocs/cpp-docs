---
description: "Learn more about: Property Pages (MFC)"
title: "Property Pages (MFC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["property page data transfer functions in MFC", "property pages [MFC], global MFC functions"]
ms.assetid: 734f88bc-c776-4136-9b0e-f45c761a45c1
---
# Property Pages (MFC)

Property pages display the current values of specific OLE control properties in a customizable, graphical interface for viewing and editing by supporting a data-mapping mechanism based on dialog data exchange (DDX).

This data-mapping mechanism maps property page controls to the individual properties of the OLE control. The value of the control property reflects the status or content of the property page control. The mapping between property page controls and properties is specified by **DDP_** function calls in the property page's `DoDataExchange` member function. The following is a list of **DDP_** functions that exchange data entered using the property page of your control:

### Property Page Data Transfer

|Name|Description|
|-|-|
|[DDP_CBIndex](#ddp_cbindex)|Links the selected string's index in a combo box with a control's property.|
|[DDP_CBString](#ddp_cbstring)|Links the selected string in a combo box with a control's property. The selected string can begin with the same letters as the property's value but does not need to match it fully.|
|[DDP_CBStringExact](#ddp_cbstringexact)|Links the selected string in a combo box with a control's property. The selected string and the property's string value must match exactly.|
|[DDP_Check](#ddp_check)|Links a check box in the control's property page with a control's property.|
|[DDP_LBIndex](#ddp_lbindex)|Links the selected string's index in a list box with a control's property.|
|[DDP_LBString](#ddp_lbstring)|Links the selected string in a list box with a control's property. The selected string can begin with the same letters as the property's value but need not match it fully.|
|[DDP_LBStringExact](#ddp_lbstringexact)|Links the selected string in a list box with a control's property. The selected string and the property's string value must match exactly.|
|[DDP_PostProcessing](#ddp_postprocessing)|Finishes the transfer of property values from your control.|
|[DDP_Radio](#ddp_radio)|Links a radio button group in the control's property page with a control's property.|
|[DDP_Text](#ddp_text)|Links a control in the control's property page with a control's property. This function handles several different types of properties, such as **`double`**, **`short`**, BSTR, and **`long`**.|

For more information about the `DoDataExchange` function and property pages, see the article [ActiveX Controls: Property Pages](../../mfc/mfc-activex-controls-property-pages.md).

The following is a list of macros used to create and manage property pages for an OLE control:

### Property Pages

|Name|Description|
|-|-|
|[BEGIN_PROPPAGEIDS](#begin_proppageids)|Begins the list of property page IDs.|
|[END_PROPPAGEIDS](#end_proppageids)|Ends the list of property page IDs.|
|[PROPPAGEID](#proppageid)|Declares a property page of the control class.|

## <a name="ddp_cbindex"></a> DDP_CBIndex

Call this function in your property page's `DoDataExchange` function to synchronize the value of an integer property with the index of the current selection in a combo box on the property page.

```cpp
void AFXAPI DDP_CBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the combo box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the combo box control specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_CBIndex` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_cbstring"></a> DDP_CBString

Call this function in your property page's `DoDataExchange` function to synchronize the value of a string property with the current selection in a combo box on the property page.

```cpp
void AFXAPI DDP_CBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the combo box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the combo box string specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_CBString` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_cbstringexact"></a> DDP_CBStringExact

Call this function in your property page's `DoDataExchange` function to synchronize the value of a string property that exactly matches the current selection in a combo box on the property page.

```cpp
void AFXAPI DDP_CBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the combo box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the combo box string specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_CBStringExact` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_check"></a> DDP_Check

Call this function in your property page's `DoDataExchange` function to synchronize the value of the property with the associated property page check box control.

```cpp
void AFXAPI DDP_Check(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the check box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the check box control specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_Check` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_lbindex"></a> DDP_LBIndex

Call this function in your property page's `DoDataExchange` function to synchronize the value of an integer property with the index of the current selection in a list box on the property page.

```cpp
void AFXAPI DDP_LBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the list box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the list box string specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_LBIndex` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_lbstring"></a> DDP_LBString

Call this function in your property page's `DoDataExchange` function to synchronize the value of a string property with the current selection in a list box on the property page.

```cpp
void AFXAPI DDP_LBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the list box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the list box string specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_LBString` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_lbstringexact"></a> DDP_LBStringExact

Call this function in your property page's `DoDataExchange` function to synchronize the value of a string property that exactly matches the current selection in a list box on the property page.

```cpp
void AFXAPI DDP_LBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the list box control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the list box string specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_LBStringExact` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_postprocessing"></a> DDP_PostProcessing

Call this function in your property page's `DoDataExchange` function, to finish the transfer of property values from the property page to your control when property values are being saved.

```cpp
void AFXAPI DDP_PostProcessing(CDataExchange * pDX);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

### Remarks

This function should be called after all data exchange functions are completed. For example:

[!code-cpp[NVC_MFCAxCtl#15](../../mfc/reference/codesnippet/cpp/property-pages-mfc_1.cpp)]

### Requirements

  **Header** afxctl.h

## <a name="ddp_radio"></a> DDP_Radio

Call this function in your control's `DoPropExchange` function to synchronize the value of the property with the associated property page radio button control.

```cpp
void AFXAPI DDP_Radio(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the radio button control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the radio button control specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_Radio` function call.

### Requirements

  **Header** afxctl.h

## <a name="ddp_text"></a> DDP_Text

Call this function in your control's `DoDataExchange` function to synchronize the value of the property with the associated property page control.

```cpp
void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    BYTE & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    UINT & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    long & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    DWORD & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    float & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    double & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    CString & member,
    LPCTSTR pszPropName);
```

### Parameters

*pDX*<br/>
Pointer to a `CDataExchange` object. The framework supplies this object to establish the context of the data exchange, including its direction.

*id*<br/>
The resource ID of the control associated with the control property specified by *pszPropName*.

*member*<br/>
The member variable associated with the property page control specified by *id* and the property specified by *pszPropName*.

*pszPropName*<br/>
The property name of the control property to be exchanged with the control specified by *id*.

### Remarks

This function should be called before the corresponding `DDX_Text` function call.

### Requirements

  **Header** afxctl.h

## <a name="begin_proppageids"></a> BEGIN_PROPPAGEIDS

Begins the definition of your control's list of property page IDs.

```
BEGIN_PROPPAGEIDS(class_name,  count)
```

### Parameters

*class_name*<br/>
The name of the control class for which property pages are being specified.

*count*<br/>
The number of property pages used by the control class.

### Remarks

In the implementation (.cpp) file that defines the member functions for your class, start the property page list with the BEGIN_PROPPAGEIDS macro, then add macro entries for each of your property pages, and complete the property page list with the END_PROPPAGEIDS macro.

For more information on property pages, see the article [ActiveX Controls: Property Pages](../../mfc/mfc-activex-controls-property-pages.md).

### Requirements

  **Header** afxctl.h

## <a name="end_proppageids"></a> END_PROPPAGEIDS

Ends the definition of your property page ID list.

```
END_PROPPAGEIDS(class_name)
```

### Parameters

*class_name*<br/>
The name of the control class that owns the property page.

### Requirements

  **Header** afxctl.h

## <a name="proppageid"></a> PROPPAGEID

Adds a property page for use by your OLE control.

```
PROPPAGEID(clsid)
```

### Parameters

*clsid*<br/>
The unique class ID of a property page.

### Remarks

All PROPPAGEID macros must be placed between the BEGIN_PROPPAGEIDS and END_PROPPAGEIDS macros in your control's implementation file.

### Requirements

  **Header** afxctl.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
