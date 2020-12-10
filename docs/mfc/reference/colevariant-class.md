---
description: "Learn more about: COleVariant Class"
title: "COleVariant Class"
ms.date: "11/04/2016"
f1_keywords: ["COleVariant", "AFXDISP/COleVariant", "AFXDISP/COleVariant::COleVariant", "AFXDISP/COleVariant::Attach", "AFXDISP/COleVariant::ChangeType", "AFXDISP/COleVariant::Clear", "AFXDISP/COleVariant::Detach", "AFXDISP/COleVariant::GetByteArrayFromVariantArray", "AFXDISP/COleVariant::SetString"]
helpviewer_keywords: ["COleVariant [MFC], COleVariant", "COleVariant [MFC], Attach", "COleVariant [MFC], ChangeType", "COleVariant [MFC], Clear", "COleVariant [MFC], Detach", "COleVariant [MFC], GetByteArrayFromVariantArray", "COleVariant [MFC], SetString"]
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
---
# COleVariant Class

Encapsulates the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) data type.

## Syntax

```
class COleVariant : public tagVARIANT
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleVariant::COleVariant](#colevariant)|Constructs a `COleVariant` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleVariant::Attach](#attach)|Attaches a VARIANT to a `COleVariant`.|
|[COleVariant::ChangeType](#changetype)|Changes the variant type of this `COleVariant` object.|
|[COleVariant::Clear](#clear)|Clears this `COleVariant` object.|
|[COleVariant::Detach](#detach)|Detaches a VARIANT from a `COleVariant` and returns the VARIANT.|
|[COleVariant::GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Retrieves a byte array from an existing variant array.|
|[COleVariant::SetString](#setstring)|Sets the string to a particular type, typically ANSI.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[COleVariant::operator LPCVARIANT](#operator_lpcvariant)|Converts a `COleVariant` value into an `LPCVARIANT`.|
|[COleVariant::operator LPVARIANT](#operator_lpvariant)|Converts a `COleVariant` object into an `LPVARIANT`.|
|[COleVariant::operator =](#operator_eq)|Copies a `COleVariant` value.|
|[COleVariant::operator ==](#operator_eq_eq)|Compares two `COleVariant` values.|
|[COleVariant::operator &lt;&lt;, &gt;&gt;](#operator_lt_lt__gt_gt)|Outputs a `COleVariant` value to `CArchive` or `CDumpContext` and inputs a `COleVariant` object from `CArchive`.|

## Remarks

This data type is used in OLE automation. Specifically, the [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams) structure contains a pointer to an array of VARIANT structures. A `DISPPARAMS` structure is used to pass parameters to [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

> [!NOTE]
> This class is derived from the `VARIANT` structure. This means you can pass a `COleVariant` in a parameter that calls for a `VARIANT` and that the data members of the `VARIANT` structure are accessible data members of `COleVariant`.

The two related MFC classes [COleCurrency](../../mfc/reference/colecurrency-class.md) and [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) encapsulate the variant data types CURRENCY ( `VT_CY`) and DATE ( `VT_DATE`). The `COleVariant` class is used extensively in the DAO classes; see these classes for typical usage of this class, for example [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) and [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

For more information, see the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1), [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams), and [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) entries in the Windows SDK.

For more information on the `COleVariant` class and its use in OLE automation, see "Passing Parameters in OLE Automation" in the article [Automation](../../mfc/automation.md).

## Inheritance Hierarchy

`tagVARIANT`

`COleVariant`

## Requirements

**Header:** afxdisp.h

## <a name="attach"></a> COleVariant::Attach

Call this function to attach the given [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) object to the current `COleVariant` object.

```cpp
void Attach(VARIANT& varSrc);
```

### Parameters

*varSrc*<br/>
An existing `VARIANT` object to be attached to the current `COleVariant` object.

### Remarks

This function sets the VARTYPE of *varSrc* to VT_EMPTY.

For more information, see the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) and [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum) entries in the Windows SDK.

## <a name="colevariant"></a> COleVariant::COleVariant

Constructs a `COleVariant` object.

```
COleVariant();
COleVariant(const VARIANT& varSrc);
COleVariant(const COleVariant& varSrc);
COleVariant(LPCVARIANT pSrc);
COleVariant(LPCTSTR lpszSrc);
COleVariant(LPCTSTR lpszSrc, VARTYPE vtSrc);
COleVariant(CString& strSrc);
COleVariant(BYTE nSrc);
COleVariant(short nSrc, VARTYPE vtSrc = VT_I2);
COleVariant(long lSrc,VARTYPE vtSrc = VT_I4);
COleVariant(const COleCurrency& curSrc);
COleVariant(float fltSrc);
COleVariant(double dblSrc);
COleVariant(const COleDateTime& timeSrc);
COleVariant(const CByteArray& arrSrc);
COleVariant(const CLongBinary& lbSrc);
COleVariant(LPCITEMIDLIST pidl);
```

### Parameters

*varSrc*<br/>
An existing `COleVariant` or `VARIANT` object to be copied into the new `COleVariant` object.

*pSrc*<br/>
A pointer to a `VARIANT` object that will be copied into the new `COleVariant` object.

*lpszSrc*<br/>
A null-terminated string to be copied into the new `COleVariant` object.

*vtSrc*<br/>
The `VARTYPE` for the new `COleVariant` object.

*strSrc*<br/>
A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object to be copied into the new `COleVariant` object.

*nSrc*, *lSrc*
A numerical value to be copied into the new `COleVariant` object.

*vtSrc*<br/>
The `VARTYPE` for the new `COleVariant` object.

*curSrc*<br/>
A [COleCurrency](../../mfc/reference/colecurrency-class.md) object to be copied into the new `COleVariant` object.

*fltSrc*, *dblSrc*<br/>
A numerical value to be copied into the new `COleVariant` object.

*timeSrc*<br/>
A [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object to be copied into the new `COleVariant` object.

*arrSrc*<br/>
A [CByteArray](../../mfc/reference/cbytearray-class.md) object to be copied into the new `COleVariant` object.

*lbSrc*<br/>
A [CLongBinary](../../mfc/reference/clongbinary-class.md) object to be copied into the new `COleVariant` object.

*pidl*<br/>
A pointer to a [ITEMIDLIST](/windows/win32/api/shtypes/ns-shtypes-itemidlist) structure to be copied into the new `COleVariant` object.

### Remarks

All these constructors create new `COleVariant` objects initialized to the specified value. A brief description of each of these constructors follows.

- **COleVariant( )** Creates an empty `COleVariant` object, VT_EMPTY.

- **COleVariant(** *varSrc* **)** Copies an existing `VARIANT` or `COleVariant` object. The variant type is retained.

- **COleVariant(** *pSrc* **)** Copies an existing `VARIANT` or `COleVariant` object. The variant type is retained.

- **COleVariant(** *lpszSrc* **)** Copies a string into the new object, VT_BSTR (UNICODE).

- **COleVariant(** *lpszSrc* **,** *vtSrc* **)** Copies a string into the new object. The parameter *vtSrc* must be VT_BSTR (UNICODE) or VT_BSTRT (ANSI).

- **COleVariant(** *strSrc* **)** Copies a string into the new object, VT_BSTR (UNICODE).

- **COleVariant(** *nSrc* **)** Copies an 8-bit integer into the new object, VT_UI1.

- **COleVariant(** *nSrc* **,** *vtSrc* **)** Copies a 16-bit integer (or Boolean value) into the new object. The parameter *vtSrc* must be VT_I2 or VT_BOOL.

- **COleVariant(** *lSrc* **,** *vtSrc* **)** Copies a 32-bit integer (or SCODE value) into the new object. The parameter *vtSrc* must be VT_I4, VT_ERROR, or VT_BOOL.

- **COleVariant(** *curSrc* **)** Copies a `COleCurrency` value into the new object, VT_CY.

- **COleVariant(** *fltSrc* **)** Copies a 32-bit floating-point value into the new object, VT_R4.

- **COleVariant(** *dblSrc* **)** Copies a 64-bit floating-point value into the new object, VT_R8.

- **COleVariant(** *timeSrc* **)** Copies a `COleDateTime` value into the new object, VT_DATE.

- **COleVariant(** *arrSrc* **)** Copies a `CByteArray` object into the new object, VT_EMPTY.

- **COleVariant(** *lbSrc* **)** Copies a `CLongBinary` object into the new object, VT_EMPTY.

For more information on SCODE, see [Structure of COM Error Codes](/windows/win32/com/structure-of-com-error-codes) in the Windows SDK.

## <a name="changetype"></a> COleVariant::ChangeType

Converts the type of variant value in this `COleVariant` object.

```cpp
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```

### Parameters

*vartype*<br/>
The VARTYPE for this `COleVariant` object.

*pSrc*<br/>
A pointer to the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) object to be converted. If this value is NULL, this `COleVariant` object is used as the source for the conversion.

### Remarks

For more information, see the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum), and [VariantChangeType](/windows/win32/api/oleauto/nf-oleauto-variantchangetype) entries in the Windows SDK.

## <a name="clear"></a> COleVariant::Clear

Clears the `VARIANT`.

```cpp
void Clear();
```

### Remarks

This sets the VARTYPE for this object to VT_EMPTY. The `COleVariant` destructor calls this function.

For more information, see the `VARIANT`, VARTYPE, and `VariantClear` entries in the Windows SDK.

## <a name="detach"></a> COleVariant::Detach

Detaches the underlying [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) object from this `COleVariant` object.

```
VARIANT Detach();
```

### Remarks

This function sets the VARTYPE for this `COleVariant` object to VT_EMPTY.

> [!NOTE]
> After calling `Detach`, it is the caller's responsibility to call `VariantClear` on the resulting `VARIANT` structure.

For more information, see the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum), and [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) entries in the Windows SDK.

## <a name="getbytearrayfromvariantarray"></a> COleVariant::GetByteArrayFromVariantArray

Retrieves a byte array from an existing variant array

```cpp
void GetByteArrayFromVariantArray(CByteArray& bytes);
```

### Parameters

*bytes*<br/>
A reference to an existing [CByteArray](../../mfc/reference/cbytearray-class.md) object.

## <a name="operator_lpcvariant"></a> COleVariant::operator LPCVARIANT

This casting operator returns a `VARIANT` structure whose value is copied from this `COleVariant` object.

```
operator LPCVARIANT() const;
```

### Remarks

## <a name="operator_lpvariant"></a> COleVariant::operator LPVARIANT

Call this casting operator to access the underlying `VARIANT` structure for this `COleVariant` object.

```
operator LPVARIANT();
```

### Remarks

> [!CAUTION]
> Changing the value in the `VARIANT` structure accessed by the pointer returned by this function will change the value of this `COleVariant` object.

## <a name="operator_eq"></a> COleVariant::operator =

These overloaded assignment operators copy the source value into this `COleVariant` object.

```
const COleVariant& operator=(const VARIANT& varSrc);
const COleVariant& operator=(LPCVARIANT pSrc);
const COleVariant& operator=(const COleVariant& varSrc);
const COleVariant& operator=(const LPCTSTR lpszSrc);
const COleVariant& operator=(const CString& strSrc);
const COleVariant& operator=(BYTE nSrc);
const COleVariant& operator=(short nSrc);
const COleVariant& operator=(long lSrc);
const COleVariant& operator=(const COleCurrency& curSrc);
const COleVariant& operator=(float fltSrc);
const COleVariant& operator=(double dblSrc);
const COleVariant& operator=(const COleDateTime& dateSrc);
const COleVariant& operator=(const CByteArray& arrSrc);
const COleVariant& operator=(const CLongBinary& lbSrc);
```

### Remarks

A brief description of each operator follows:

- **operator =(** *varSrc* **)** Copies an existing VARIANT or `COleVariant` object into this object.

- **operator =(** *pSrc* **)** Copies the VARIANT object accessed by *pSrc* into this object.

- **operator =(** *lpszSrc* **)** Copies a null-terminated string into this object and sets the VARTYPE to VT_BSTR.

- **operator =(** *strSrc* **)** Copies a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object into this object and sets the VARTYPE to VT_BSTR.

- **operator =(** *nSrc* **)** Copies an 8- or 16-bit integer value into this object. If *nSrc* is an 8-bit value, the VARTYPE of this is set to VT_UI1. If *nSrc* is a 16-bit value and the VARTYPE of this is VT_BOOL, it is kept; otherwise, it is set to VT_I2.

- **operator =(** *lSrc* **)** Copies a 32-bit integer value into this object. If the VARTYPE of this is VT_ERROR, it is kept; otherwise, it is set to VT_I4.

- **operator =(** *curSrc* **)** Copies a [COleCurrency](../../mfc/reference/colecurrency-class.md) object into this object and sets the VARTYPE to VT_CY.

- **operator =(** *fltSrc* **)** Copies a 32-bit floating-point value into this object and sets the VARTYPE to VT_R4.

- **operator =(** *dblSrc* **)** Copies a 64-bit floating-point value into this object and sets the VARTYPE to VT_R8.

- **operator =(** *dateSrc* **)** Copies a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object into this object and sets the VARTYPE to VT_DATE.

- **operator =(** *arrSrc* **)** Copies a [CByteArray](../../mfc/reference/cbytearray-class.md) object into this `COleVariant` object.

- **operator =(** *lbSrc* **)** Copies a [CLongBinary](../../mfc/reference/clongbinary-class.md) object into this `COleVariant` object.

For more information, see the [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) and [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum) entries in the Windows SDK.

## <a name="operator_eq_eq"></a> COleVariant::operator ==

This operator compares two variant values and returns nonzero if they are equal; otherwise 0.

```
BOOL operator==(const VARIANT& varSrc) const;
BOOL operator==(LPCVARIANT pSrc) const;
```

## <a name="operator_lt_lt__gt_gt"></a> COleVariant::operator &lt;&lt;, &gt;&gt;

Outputs a `COleVariant` value to `CArchive` or `CdumpContext` and inputs a `COleVariant` object from `CArchive`.

```
friend CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    OleVariant varSrc);

friend CArchive& AFXAPI operator<<(
    CArchive& ar,
    COleVariant varSrc);

friend CArchive& AFXAPI operator>>(
    CArchive& ar,
    COleVariant& varSrc);
```

### Remarks

The `COleVariant` insertion (**\<\<**) operator supports diagnostic dumping and storing to an archive. The extraction (**>>**) operator supports loading from an archive.

## <a name="setstring"></a> COleVariant::SetString

Sets the string to a particular type.

```cpp
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```

### Parameters

*lpszSrc*<br/>
A null-terminated string to be copied into the new `COleVariant` object.

*VtSrc*<br/>
The VARTYPE for the new `COleVariant` object.

### Remarks

The parameter *vtSrc* must be VT_BSTR (UNICODE) or VT_BSTRT (ANSI). `SetString` is typically used to set strings to ANSI, since the default for the [COleVariant::COleVariant](#colevariant) constructor with a string or string pointer parameter and no VARTYPE is UNICODE.

A DAO recordset in a non-UNICODE build expects strings to be ANSI. Thus, for DAO functions that use `COleVariant` objects, if you are not creating a UNICODE recordset, you must use the **COleVariant::COleVariant(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to VT_BSTRT (ANSI) or use `SetString` with *vtSrc* set to VT_BSTRT to make ANSI strings. For example, the `CDaoRecordset` functions [CDaoRecordset::Seek](../../mfc/reference/cdaorecordset-class.md#seek) and [CDaoRecordset::SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) use `COleVariant` objects as parameters. These objects must be ANSI if the DAO recordset is not UNICODE.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
