---
description: "Learn more about: CPropExchange Class"
title: "CPropExchange Class"
ms.date: "11/04/2016"
f1_keywords: ["CPropExchange", "AFXCTL/CPropExchange", "AFXCTL/CPropExchange::ExchangeBlobProp", "AFXCTL/CPropExchange::ExchangeFontProp", "AFXCTL/CPropExchange::ExchangePersistentProp", "AFXCTL/CPropExchange::ExchangeProp", "AFXCTL/CPropExchange::ExchangeVersion", "AFXCTL/CPropExchange::GetVersion", "AFXCTL/CPropExchange::IsAsynchronous", "AFXCTL/CPropExchange::IsLoading"]
helpviewer_keywords: ["CPropExchange [MFC], ExchangeBlobProp", "CPropExchange [MFC], ExchangeFontProp", "CPropExchange [MFC], ExchangePersistentProp", "CPropExchange [MFC], ExchangeProp", "CPropExchange [MFC], ExchangeVersion", "CPropExchange [MFC], GetVersion", "CPropExchange [MFC], IsAsynchronous", "CPropExchange [MFC], IsLoading"]
ms.assetid: ed872180-e770-4942-892a-92139d501fab
---
# CPropExchange Class

Supports the implementation of persistence for your OLE controls.

## Syntax

```
class AFX_NOVTABLE CPropExchange
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPropExchange::ExchangeBlobProp](#exchangeblobprop)|Exchanges a binary large object (BLOB) property.|
|[CPropExchange::ExchangeFontProp](#exchangefontprop)|Exchanges a font property.|
|[CPropExchange::ExchangePersistentProp](#exchangepersistentprop)|Exchanges a property between a control and a file.|
|[CPropExchange::ExchangeProp](#exchangeprop)|Exchanges properties of any built-in type.|
|[CPropExchange::ExchangeVersion](#exchangeversion)|Exchanges the version number of an OLE control.|
|[CPropExchange::GetVersion](#getversion)|Retrieves the version number of an OLE control.|
|[CPropExchange::IsAsynchronous](#isasynchronous)|Determines if property exchanges are done asynchronously.|
|[CPropExchange::IsLoading](#isloading)|Indicates whether properties are being loaded into the control or saved from it.|

## Remarks

`CPropExchange` does not have a base class.

Establishes the context and direction of a property exchange.

Persistence is the exchange of the control's state information, usually represented by its properties, between the control itself and a medium.

The framework constructs an object derived from `CPropExchange` when it is notified that an OLE control's properties are to be loaded from or stored to persistent storage.

The framework passes a pointer to this `CPropExchange` object to your control's `DoPropExchange` function. If you used a wizard to create the starter files for your control, your control's `DoPropExchange` function calls `COleControl::DoPropExchange`. The base-class version exchanges the control's stock properties; you modify your derived class's version to exchange properties you have added to your control.

`CPropExchange` can be used to serialize a control's properties or initialize a control's properties upon the load or creation of a control. The `ExchangeProp` and `ExchangeFontProp` member functions of `CPropExchange` are able to store properties to and load them from different media.

For more information on using `CPropExchange`, see the article [MFC ActiveX Controls: Property Pages](../../mfc/mfc-activex-controls-property-pages.md).

## Inheritance Hierarchy

`CPropExchange`

## Requirements

**Header:** afxctl.h

## <a name="exchangeblobprop"></a> CPropExchange::ExchangeBlobProp

Serializes a property that stores binary large object (BLOB) data.

```
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,
    HGLOBAL* phBlob,
    HGLOBAL hBlobDefault = NULL) = 0;
```

### Parameters

*pszPropName*<br/>
The name of the property being exchanged.

*phBlob*<br/>
Pointer to a variable pointing to where the property is stored (variable is typically a member of your class).

*hBlobDefault*<br/>
Default value for the property.

### Return Value

Nonzero if the exchange was successful; 0 if unsuccessful.

### Remarks

The property's value is read from or written to, as appropriate, the variable referenced by *phBlob*. If *hBlobDefault* is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization fails.

The functions `CArchivePropExchange::ExchangeBlobProp`, `CResetPropExchange::ExchangeBlobProp`, and `CPropsetPropExchange::ExchangeBlobProp` override this pure virtual function.

## <a name="exchangefontprop"></a> CPropExchange::ExchangeFontProp

Exchanges a font property between a storage medium and the control.

```
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC* pFontDesc,
    LPFONTDISP pFontDispAmbient) = 0;
```

### Parameters

*pszPropName*<br/>
The name of the property being exchanged.

*font*<br/>
A reference to a [CFontHolder](../../mfc/reference/cfontholder-class.md) object that contains the font property.

*pFontDesc*<br/>
A pointer to a [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc) structure containing values for initializing the default state of the font property when *pFontDispAmbient* is NULL.

*pFontDispAmbient*<br/>
A pointer to the `IFontDisp` interface of a font to be used for initializing the default state of the font property.

### Return Value

Nonzero if the exchange was successful; 0 if unsuccessful.

### Remarks

If the font property is being loaded from the medium to the control, the font's characteristics are retrieved from the medium and the `CFontHolder` object referenced by *font* is initialized with them. If the font property is being stored, the characteristics in the font object are written to the medium.

The functions `CArchivePropExchange::ExchangeFontProp`, `CResetPropExchange::ExchangeFontProp`, and `CPropsetPropExchange::ExchangeFontProp` override this pure virtual function.

## <a name="exchangepersistentprop"></a> CPropExchange::ExchangePersistentProp

Exchanges a property between the control and a file.

```
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,
    LPUNKNOWN* ppUnk,
    REFIID iid,
    LPUNKNOWN pUnkDefault) = 0;
```

### Parameters

*pszPropName*<br/>
The name of the property being exchanged.

*ppUnk*<br/>
A pointer to a variable containing a pointer to the property's `IUnknown` interface (this variable is typically a member of your class).

*iid*<br/>
Interface ID of the interface on the property that the control will use.

*pUnkDefault*<br/>
Default value for the property.

### Return Value

Nonzero if the exchange was successful; 0 if unsuccessful.

### Remarks

If the property is being loaded from the file to the control, the property is created and initialized from the file. If the property is being stored, its value is written to the file.

The functions `CArchivePropExchange::ExchangePersistentProp`, `CResetPropExchange::ExchangePersistentProp`, and `CPropsetPropExchange::ExchangePersistentProp` override this pure virtual function.

## <a name="exchangeprop"></a> CPropExchange::ExchangeProp

Exchanges a property between a storage medium and the control.

```
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,
    VARTYPE vtProp,
    void* pvProp,
    const void* pvDefault = NULL) = 0 ;
```

### Parameters

*pszPropName*<br/>
The name of the property being exchanged.

*vtProp*<br/>
A symbol specifying the type of the property being exchanged. Possible values are:

|Symbol|Property Type|
|------------|-------------------|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_BOOL|**BOOL**|
|VT_BSTR|`CString`|
|VT_CY|**CY**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|

*pvProp*<br/>
A pointer to the property's value.

*pvDefault*<br/>
Pointer to a default value for the property.

### Return Value

Nonzero if the exchange was successful; 0 if unsuccessful.

### Remarks

If the property is being loaded from the medium to the control, the property's value is retrieved from the medium and stored in the object pointed to by *pvProp*. If the property is being stored to the medium, the value of the object pointed to by *pvProp* is written to the medium.

The functions `CArchivePropExchange::ExchangeProp`, `CResetPropExchange::ExchangeProp`, and `CPropsetPropExchange::ExchangeProp` override this pure virtual function.

## <a name="exchangeversion"></a> CPropExchange::ExchangeVersion

Called by the framework to handle persistence of a version number.

```
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,
    DWORD dwVersionDefault,
    BOOL bConvert);
```

### Parameters

*dwVersionLoaded*<br/>
Reference to a variable where the version number of the persistent data being loaded will be stored.

*dwVersionDefault*<br/>
The current version number of the control.

*bConvert*<br/>
Indicates whether to convert persistent data to the current version or keep it at the same version that was loaded.

### Return Value

Nonzero if the function succeeded; 0 otherwise.

## <a name="getversion"></a> CPropExchange::GetVersion

Call this function to retrieve the version number of the control.

```
DWORD GetVersion();
```

### Return Value

The version number of the control.

## <a name="isasynchronous"></a> CPropExchange::IsAsynchronous

Determines if property exchanges are done asynchronously.

```
BOOL IsAsynchronous();
```

### Return Value

Returns TRUE if properties are exchanged asynchronously, otherwise FALSE.

## <a name="isloading"></a> CPropExchange::IsLoading

Call this function to determine whether properties are being loaded to the control or saved from it.

```
BOOL IsLoading();
```

### Return Value

Nonzero if properties are being loaded; otherwise 0.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleControl::DoPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)
