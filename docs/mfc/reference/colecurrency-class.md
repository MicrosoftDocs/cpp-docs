---
description: "Learn more about: COleCurrency Class"
title: "COleCurrency Class"
ms.date: "08/29/2019"
f1_keywords: ["COleCurrency", "AFXDISP/COleCurrency", "AFXDISP/COleCurrency::COleCurrency", "AFXDISP/COleCurrency::Format", "AFXDISP/COleCurrency::GetStatus", "AFXDISP/COleCurrency::ParseCurrency", "AFXDISP/COleCurrency::SetCurrency", "AFXDISP/COleCurrency::SetStatus", "AFXDISP/COleCurrency::m_cur", "AFXDISP/COleCurrency::m_status"]
helpviewer_keywords: ["COleCurrency [MFC], COleCurrency", "COleCurrency [MFC], Format", "COleCurrency [MFC], GetStatus", "COleCurrency [MFC], ParseCurrency", "COleCurrency [MFC], SetCurrency", "COleCurrency [MFC], SetStatus", "COleCurrency [MFC], m_cur", "COleCurrency [MFC], m_status"]
ms.assetid: 3a36e345-303f-46fb-a57c-858274378a8d
---
# COleCurrency Class

Encapsulates the `CURRENCY` data type of OLE automation.

## Syntax

```
class COleCurrency
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleCurrency::COleCurrency](#colecurrency)|Constructs a `COleCurrency` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleCurrency::Format](#format)|Generates a formatted string representation of a `COleCurrency` object.|
|[COleCurrency::GetStatus](#getstatus)|Gets the status (validity) of this `COleCurrency` object.|
|[COleCurrency::ParseCurrency](#parsecurrency)|Reads a CURRENCY value from a string and sets the value of `COleCurrency`.|
|[COleCurrency::SetCurrency](#setcurrency)|Sets the value of this `COleCurrency` object.|
|[COleCurrency::SetStatus](#setstatus)|Sets the status (validity) for this `COleCurrency` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator =](#operator_eq)|Copies a `COleCurrency` value.|
|[operator +, -](#operator_plus_minus)|Adds, subtracts, and changes sign of `COleCurrency` values.|
|[operator +=, -=](#operator_plus_minus_eq)|Adds and subtracts a `COleCurrency` value from this `COleCurrency` object.|
|[operator */](#operator_star)|Scales a `COleCurrency` value by an integer value.|
|[operator *=, /=](#operator_star_div_eq)|Scales this `COleCurrency` value by an integer value.|
|[operator <<](#operator_stream)|Outputs a `COleCurrency` value to `CArchive` or `CDumpContext`.|
|[operator >>](#operator_stream)|Inputs a `COleCurrency` object from `CArchive`.|
|[operator CURRENCY](#operator_currency)|Converts a `COleCurrency` value into a CURRENCY.|
|[operator ==, <, <=, etc.](#colecurrency_relational_operators)|Compares two `COleCurrency` values.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleCurrency::m_cur](#m_cur)|Contains the underlying CURRENCY for this `COleCurrency` object.|
|[COleCurrency::m_status](#m_status)|Contains the status of this `COleCurrency` object.|

## Remarks

`COleCurrency` does not have a base class.

CURRENCY is implemented as an 8-byte, two's-complement integer value scaled by 10,000. This gives a fixed-point number with 15 digits to the left of the decimal point and 4 digits to the right. The CURRENCY data type is extremely useful for calculations involving money, or for any fixed-point calculation where accuracy is important. It is one of the possible types for the `VARIANT` data type of OLE automation.

`COleCurrency` also implements some basic arithmetic operations for this fixed-point type. The supported operations have been selected to control the rounding errors which occur during fixed-point calculations.

## Inheritance Hierarchy

`COleCurrency`

## Requirements

**Header:** afxdisp.h

## <a name="colecurrency"></a> COleCurrency::COleCurrency

Constructs a `COleCurrency` object.

```
COleCurrency();
COleCurrency(CURRENCY cySrc);
COleCurrency(const COleCurrency& curSrc);
COleCurrency(const VARIANT& varSrc);

COleCurrency(
    long nUnits,
    long nFractionalUnits);
```

### Parameters

*cySrc*<br/>
A CURRENCY value to be copied into the new `COleCurrency` object.

*curSrc*<br/>
An existing `COleCurrency` object to be copied into the new `COleCurrency` object.

*varSrc*<br/>
An existing `VARIANT` data structure (possibly a `COleVariant` object) to be converted to a currency value (VT_CY) and copied into the new `COleCurrency` object.

*nUnits*, *nFractionalUnits*
Indicate the units and fractional part (in 1/10,000's) of the value to be copied into the new `COleCurrency` object.

### Remarks

All of these constructors create new `COleCurrency` objects initialized to the specified value. A brief description of each of these constructors follows. Unless otherwise noted, the status of the new `COleCurrency` item is set to valid.

- COleCurrency() Constructs a `COleCurrency` object initialized to 0 (zero).

- COleCurrency(`cySrc`) Constructs a `COleCurrency` object from a [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1) value.

- COleCurrency(`curSrc`) Constructs a `COleCurrency` object from an existing `COleCurrency` object. The new object has the same status as the source object.

- COleCurrency(`varSrc`) Constructs a `COleCurrency` object. Attempts to convert a [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) structure or `COleVariant` object to a currency (VT_CY) value. If this conversion is successful, the converted value is copied into the new `COleCurrency` object. If it is not, the value of the `COleCurrency` object is set to zero (0) and its status to invalid.

- COleCurrency(`nUnits`, `nFractionalUnits`) Constructs a `COleCurrency` object from the specified numerical components. If the absolute value of the fractional part is greater than 10,000, the appropriate adjustment is made to the units. Note that the units and fractional part are specified by signed long values.

For more information, see the [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1) and [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) entries in the Windows SDK.

### Example

The following examples show the effects of the zero-parameter and two-parameter constructors:

[!code-cpp[NVC_MFCOleContainer#10](../../mfc/codesnippet/cpp/colecurrency-class_1.cpp)]

## <a name="format"></a> COleCurrency::Format

Call this member function to create a formatted representation of the currency value.

```
CString Format(DWORD  dwFlags = 0, LCID  lcid = LANG_USER_DEFAULT) const;
```

### Parameters

*dwFlags*<br/>
Indicates flags for locale settings. Only the following flag is relevant to currency:

- LOCALE_NOUSEROVERRIDE Use the system default locale settings, rather than custom user settings.

*lcid*<br/>
Indicates locale ID to use for the conversion.

### Return Value

A `CString` that contains the formatted currency value.

### Remarks

It formats the value using the local language specifications (locale IDs). A currency symbol is not included in the value returned. If the status of this `COleCurrency` object is null, the return value is an empty string. If the status is invalid, the return string is specified by the string resource IDS_INVALID_CURRENCY.

### Example

[!code-cpp[NVC_MFCOleContainer#11](../../mfc/codesnippet/cpp/colecurrency-class_2.cpp)]

## <a name="getstatus"></a> COleCurrency::GetStatus

Call this member function to get the status (validity) of a given `COleCurrency` object.

```
CurrencyStatus GetStatus() const;
```

### Return Value

Returns the status of this `COleCurrency` value.

### Remarks

The return value is defined by the `CurrencyStatus` enumerated type that is defined within the `COleCurrency` class.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

For a brief description of these status values, see the following list:

- `COleCurrency::valid` Indicates that this `COleCurrency` object is valid.

- `COleCurrency::invalid` Indicates that this `COleCurrency` object is invalid; that is, its value may be incorrect.

- `COleCurrency::null` Indicates that this `COleCurrency` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ NULL.)

The status of a `COleCurrency` object is invalid in the following cases:

- If its value is set from a VARIANT or `COleVariant` value that could not be converted to a currency value.

- If this object has experienced an overflow or underflow during an arithmetic assignment operation, for example `+=` or **\*=**.

- If an invalid value was assigned to this object.

- If the status of this object was explicitly set to invalid using [SetStatus](#setstatus).

For more information on operations that may set the status to invalid, see the following member functions:

- [COleCurrency](#colecurrency)

- [operator =](#operator_eq)

- [operator + -](#operator_plus_minus)

- [operator += and -=](#operator_plus_minus_eq)

- [operator * /](#operator_star)

- [operator *= and /=](#operator_star_div_eq)

### Example

[!code-cpp[NVC_MFCOleContainer#12](../../mfc/codesnippet/cpp/colecurrency-class_3.cpp)]

## <a name="m_cur"></a> COleCurrency::m_cur

The underlying [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1) structure for this `COleCurrency` object.

### Remarks

> [!CAUTION]
> Changing the value in the `CURRENCY` structure accessed by the pointer returned by this function will change the value of this `COleCurrency` object. It does not change the status of this `COleCurrency` object.

For more information, see the [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1) entry in the Windows SDK.

## <a name="m_status"></a> COleCurrency::m_status

The type of this data member is the enumerated type `CurrencyStatus`, which is defined within the `COleCurrency` class.

```
enum CurrencyStatus{
    valid = 0,
    invalid = 1,
    null = 2,
};
```

### Remarks

For a brief description of these status values, see the following list:

- `COleCurrency::valid` Indicates that this `COleCurrency` object is valid.

- `COleCurrency::invalid` Indicates that this `COleCurrency` object is invalid; that is, its value may be incorrect.

- `COleCurrency::null` Indicates that this `COleCurrency` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ NULL.)

The status of a `COleCurrency` object is invalid in the following cases:

- If its value is set from a VARIANT or `COleVariant` value that could not be converted to a currency value.

- If this object has experienced an overflow or underflow during an arithmetic assignment operation, for example `+=` or **\*=**.

- If an invalid value was assigned to this object.

- If the status of this object was explicitly set to invalid using [SetStatus](#setstatus).

For more information on operations that may set the status to invalid, see the following member functions:

- [COleCurrency](#colecurrency)

- [operator =](#operator_eq)

- [operator +, -](#operator_plus_minus)

- [operator +=, -=](#operator_plus_minus_eq)

- [operator */](#operator_star)

- [operator *=, /=](#operator_star_div_eq)

> [!CAUTION]
> This data member is for advanced programming situations. You should use the inline member functions [GetStatus](#getstatus) and [SetStatus](#setstatus). See `SetStatus` for further cautions regarding explicitly setting this data member.

## <a name="operator_eq"></a> COleCurrency::operator =

These overloaded assignment operators copy the source currency value into this `COleCurrency` object.

```
const COleCurrency& operator=(CURRENCY cySrc);
const COleCurrency& operator=(const COleCurrency& curSrc);
const COleCurrency& operator=(const VARIANT& varSrc);
```

### Remarks

A brief description of each operator follows:

- **operator =(** `cySrc` **)** The `CURRENCY` value is copied into the `COleCurrency` object and its status is set to valid.

- **operator =(** `curSrc` **)** The value and status of the operand, an existing `COleCurrency` object are copied into this `COleCurrency` object.

- **operator =(** *varSrc* **)** If the conversion of the `VARIANT` value (or [COleVariant](../../mfc/reference/colevariant-class.md) object) to a currency ( `VT_CY`) is successful, the converted value is copied into this `COleCurrency` object and its status is set to valid. If the conversion is not successful, the value of the `COleCurrency` object is set to 0 and its status to invalid.

For more information, see the [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy-r1) and [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) entries in the Windows SDK.

### Example

[!code-cpp[NVC_MFCOleContainer#15](../../mfc/codesnippet/cpp/colecurrency-class_4.cpp)]

## <a name="operator_plus_minus"></a> COleCurrency::operator +, -

These operators allow you to add and subtract two `COleCurrency` values to and from each other and to change the sign of a `COleCurrency` value.

```
COleCurrency operator+(const COleCurrency& cur) const;
COleCurrency operator-(const COleCurrency& cur) const;
COleCurrency operator-() const;
```

### Remarks

If either of the operands is null, the status of the resulting `COleCurrency` value is null.

If the arithmetic operation overflows, the resulting `COleCurrency` value is invalid.

If the operand is invalid and the other is not null, the status of the resulting `COleCurrency` value is invalid.

For more information on the valid, invalid, and null status values, see the [m_status](#m_status) member variable.

### Example

[!code-cpp[NVC_MFCOleContainer#16](../../mfc/codesnippet/cpp/colecurrency-class_5.cpp)]

## <a name="operator_plus_minus_eq"></a> COleCurrency::operator +=, -=

Allow you to add and subtract a `COleCurrency` value to and from this `COleCurrency` object.

```
const COleCurrency& operator+=(const COleCurrency& cur);
const COleCurrency& operator-=(const COleCurrency& cur);
```

### Remarks

If either of the operands is null, the status of this `COleCurrency` object is set to null.

If the arithmetic operation overflows, the status of this `COleCurrency` object is set to invalid.

If either of the operands is invalid and the other is not null, the status of this `COleCurrency` object is set to invalid.

For more information on the valid, invalid, and null status values, see the [m_status](#m_status) member variable.

### Example

[!code-cpp[NVC_MFCOleContainer#17](../../mfc/codesnippet/cpp/colecurrency-class_6.cpp)]

## <a name="operator_star"></a> COleCurrency::operator \* and /

Allow you to scale a `COleCurrency` value by an integral value.

```
COleCurrency operator*(long nOperand) const;
COleCurrency operator/(long nOperand) const;
```

### Remarks

If the `COleCurrency` operand is null, the status of the resulting `COleCurrency` value is null.

If the arithmetic operation overflows or underflows, the status of the resulting `COleCurrency` value is invalid.

If the `COleCurrency` operand is invalid, the status of the resulting `COleCurrency` value is invalid.

For more information on the valid, invalid, and null status values, see the [m_status](#m_status) member variable.

### Example

[!code-cpp[NVC_MFCOleContainer#18](../../mfc/codesnippet/cpp/colecurrency-class_7.cpp)]

## <a name="operator_star_div_eq"></a> COleCurrency::operator \*=, /=

Allow you to scale this `COleCurrency` value by an integral value.

```
const COleCurrency& operator*=(long nOperand);
const COleCurrency& operator/=(long nOperand);
```

### Remarks

If the `COleCurrency` operand is null, the status of this `COleCurrency` object is set to null.

If the arithmetic operation overflows, the status of this `COleCurrency` object is set to invalid.

If the `COleCurrency` operand is invalid, the status of this `COleCurrency` object is set to invalid.

For more information on the valid, invalid, and null status values, see the [m_status](#m_status) member variable.

### Example

[!code-cpp[NVC_MFCOleContainer#19](../../mfc/codesnippet/cpp/colecurrency-class_8.cpp)]

## <a name="operator_stream"></a> COleCurrency::operator &lt;&lt;, &gt;&gt;

Supports diagnostic dumping and storing to an archive.

```
friend CDumpContext& operator<<(
    CDumpContext& dc,
    COleCurrency curSrc);

friend CArchive& operator<<(
    CArchive& ar,
    COleCurrency curSrc);

friend CArchive& operator>>(
    CArchive& ar,
    COleCurrency& curSrc);
```

### Remarks

The extraction ( **>>**) operator supports loading from an archive.

## <a name="operator_currency"></a> COleCurrency::operator CURRENCY

Returns a `CURRENCY` structure whose value is copied from this `COleCurrency` object.

```
operator CURRENCY() const;
```

### Remarks

## <a name="parsecurrency"></a> COleCurrency::ParseCurrency

Call this member function to parse a string to read a currency value.

```
BOOL ParseCurrency(
    LPCTSTR lpszCurrency,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT);

throw(CMemoryException*);
throw(COleException*);
```

### Parameters

*lpszCurrency*<br/>
A pointer to the null-terminated string which is to be parsed.

*dwFlags*<br/>
Indicates flags for locale settings, possibly the following flag:

- LOCALE_NOUSEROVERRIDE Use the system default locale settings, rather than custom user settings.

*lcid*<br/>
Indicates locale ID to use for the conversion.

### Return Value

Nonzero if the string was successfully converted to a currency value, otherwise 0.

### Remarks

It uses local language specifications (locale IDs) for the meaning of nonnumeric characters in the source string.

For a discussion of locale ID values, see [Supporting Multiple Languages](/previous-versions/windows/desktop/automat/supporting-multiple-national-languages).

If the string was successfully converted to a currency value, the value of this `COleCurrency` object is set to that value and its status to valid.

If the string could not be converted to a currency value or if there was a numerical overflow, the status of this `COleCurrency` object is invalid.

If the string conversion failed due to memory allocation errors, this function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md). In any other error state, this function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#13](../../mfc/codesnippet/cpp/colecurrency-class_9.cpp)]

## <a name="colecurrency_relational_operators"></a> COleCurrency Relational Operators

Compare two currency values and return nonzero if the condition is true; otherwise 0.

```
BOOL operator==(const COleCurrency& cur) const;
BOOL operator!=(const COleCurrency& cur) const;
BOOL operator<(const COleCurrency& cur) const;
BOOL operator>(const COleCurrency& cur) const;
BOOL operator<=(const COleCurrency& cur) const;
BOOL operator>=(const COleCurrency& cur) const;
```

### Remarks

> [!NOTE]
> The return value of the ordering operations ( **<**, **\<=**, **>**, **>=**) is undefined if the status of either operand is null or invalid. The equality operators ( `==`, `!=`) consider the status of the operands.

### Example

[!code-cpp[NVC_MFCOleContainer#20](../../mfc/codesnippet/cpp/colecurrency-class_10.cpp)]

## <a name="setcurrency"></a> COleCurrency::SetCurrency

Call this member function to set the units and fractional part of this `COleCurrency` object.

```cpp
void SetCurrency(
    long nUnits,
    long nFractionalUnits);
```

### Parameters

*nUnits*, *nFractionalUnits*
Indicate the units and fractional part (in 1/10,000's) of the value to be copied into this `COleCurrency` object.

### Remarks

If the absolute value of the fractional part is greater than 10,000, the appropriate adjustment is made to the units, as shown in the third of the following examples.

Note that the units and fractional part are specified by signed long values. The fourth of the following examples shows what happens when the parameters have different signs.

### Example

[!code-cpp[NVC_MFCOleContainer#14](../../mfc/codesnippet/cpp/colecurrency-class_11.cpp)]

## <a name="setstatus"></a> COleCurrency::SetStatus

Call this member function to set the status (validity) of this `COleCurrency` object.

```cpp
void SetStatus(CurrencyStatus  status  );
```

### Parameters

*status*<br/>
The new status for this `COleCurrency` object.

### Remarks

The *status* parameter value is defined by the `CurrencyStatus` enumerated type, which is defined within the `COleCurrency` class.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

For a brief description of these status values, see the following list:

- `COleCurrency::valid` Indicates that this `COleCurrency` object is valid.

- `COleCurrency::invalid` Indicates that this `COleCurrency` object is invalid; that is, its value may be incorrect.

- `COleCurrency::null` Indicates that this `COleCurrency` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ NULL.)

> [!CAUTION]
> This function is for advanced programming situations. This function does not alter the data in this object. It will most often be used to set the status to null or invalid. Note that the assignment operator ( [operator =](#operator_eq)) and [SetCurrency](#setcurrency) do set the status to of the object based on the source value(s).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleVariant Class](../../mfc/reference/colevariant-class.md)
