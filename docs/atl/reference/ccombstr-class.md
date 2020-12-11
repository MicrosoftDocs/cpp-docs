---
description: "Learn more about: CComBSTR Class"
title: "CComBSTR Class"
ms.date: "11/04/2016"
f1_keywords: ["CComBSTR", "ATLBASE/ATL::CComBSTR", "ATLBASE/ATL::CComBSTR::CComBSTR", "ATLBASE/ATL::CComBSTR::Append", "ATLBASE/ATL::CComBSTR::AppendBSTR", "ATLBASE/ATL::CComBSTR::AppendBytes", "ATLBASE/ATL::CComBSTR::ArrayToBSTR", "ATLBASE/ATL::CComBSTR::AssignBSTR", "ATLBASE/ATL::CComBSTR::Attach", "ATLBASE/ATL::CComBSTR::BSTRToArray", "ATLBASE/ATL::CComBSTR::ByteLength", "ATLBASE/ATL::CComBSTR::Copy", "ATLBASE/ATL::CComBSTR::CopyTo", "ATLBASE/ATL::CComBSTR::Detach", "ATLBASE/ATL::CComBSTR::Empty", "ATLBASE/ATL::CComBSTR::Length", "ATLBASE/ATL::CComBSTR::LoadString", "ATLBASE/ATL::CComBSTR::ReadFromStream", "ATLBASE/ATL::CComBSTR::ToLower", "ATLBASE/ATL::CComBSTR::ToUpper", "ATLBASE/ATL::CComBSTR::WriteToStream", "ATLBASE/ATL::CComBSTR::m_str"]
helpviewer_keywords: ["BSTRs, wrapper", "CComBSTR class", "CComBSTR"]
ms.assetid: 8fea1879-a05e-47a5-a803-8dec60eaa534
---
# CComBSTR Class

This class is a wrapper for [BSTR](/previous-versions/windows/desktop/automat/bstr)s.

## Syntax

```
class CComBSTR
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComBSTR::CComBSTR](#ccombstr)|The constructor.|
|[CComBSTR::~CComBSTR](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComBSTR::Append](#append)|Appends a string to `m_str`.|
|[CComBSTR::AppendBSTR](#appendbstr)|Appends a BSTR to `m_str`.|
|[CComBSTR::AppendBytes](#appendbytes)|Appends a specified number of bytes to `m_str`.|
|[CComBSTR::ArrayToBSTR](#arraytobstr)|Creates a BSTR from the first character of each element in the safearray and attaches it to the `CComBSTR` object.|
|[CComBSTR::AssignBSTR](#assignbstr)|Assigns a BSTR to `m_str`.|
|[CComBSTR::Attach](#attach)|Attaches a BSTR to the `CComBSTR` object.|
|[CComBSTR::BSTRToArray](#bstrtoarray)|Creates a zero-based one-dimensional safearray, where each element of the array is a character from the `CComBSTR` object.|
|[CComBSTR::ByteLength](#bytelength)|Returns the length of `m_str` in bytes.|
|[CComBSTR::Copy](#copy)|Returns a copy of `m_str`.|
|[CComBSTR::CopyTo](#copyto)|Returns a copy of `m_str` via an **[out]** parameter|
|[CComBSTR::Detach](#detach)|Detaches `m_str` from the `CComBSTR` object.|
|[CComBSTR::Empty](#empty)|Frees `m_str`.|
|[CComBSTR::Length](#length)|Returns the length of `m_str`.|
|[CComBSTR::LoadString](#loadstring)|Loads a string resource.|
|[CComBSTR::ReadFromStream](#readfromstream)|Loads a BSTR object from a stream.|
|[CComBSTR::ToLower](#tolower)|Converts the string to lowercase.|
|[CComBSTR::ToUpper](#toupper)|Converts the string to uppercase.|
|[CComBSTR::WriteToStream](#writetostream)|Saves `m_str` to a stream.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CComBSTR::operator BSTR](#operator_bstr)|Casts a `CComBSTR` object to a BSTR.|
|[CComBSTR::operator !](#operator_not)|Returns TRUE or FALSE, depending on whether `m_str`is NULL.|
|[CComBSTR::operator !=](#operator_neq)|Compares a `CComBSTR` with a string.|
|[CComBSTR::operator &](#operator_amp)|Returns the address of `m_str`.|
|[CComBSTR::operator +=](#operator_add_eq)|Appends a `CComBSTR` to the object.|
|[CComBSTR::operator <](#operator_lt)|Compares a `CComBSTR` with a string.|
|[CComBSTR::operator =](#operator_eq)|Assigns a value to `m_str`.|
|[CComBSTR::operator ==](#operator_eq_eq)|Compares a `CComBSTR` with a string.|
|[CComBSTR::operator >](#operator_gt)|Compares a `CComBSTR` with a string.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComBSTR::m_str](#m_str)|Contains the BSTR associated with the `CComBSTR` object.|

## Remarks

The `CComBSTR` class is a wrapper for BSTRs, which are length-prefixed strings. The length is stored as an integer at the memory location preceding the data in the string.

A [BSTR](/previous-versions/windows/desktop/automat/bstr) is null-terminated after the last counted character but may also contain null characters embedded within the string. The string length is determined by the character count, not the first null character.

> [!NOTE]
> The `CComBSTR` class provides a number of members (constructors, assignment operators, and comparison operators) that take either ANSI or Unicode strings as arguments. The ANSI versions of these functions are less efficient than their Unicode counterparts because temporary Unicode strings are often created internally. For efficiency, use the Unicode versions where possible.

> [!NOTE]
> Because of the improved lookup behavior implemented in Visual Studio .NET, code such as `bstr = L"String2" + bstr;`, which may have compiled in previous releases, should instead be implemented as `bstr = CStringW(L"String2") + bstr`.

For a list of cautions when using `CComBSTR`, see [Programming with CComBSTR](../../atl/programming-with-ccombstr-atl.md).

## Requirements

**Header:** atlbase.h

## <a name="append"></a> CComBSTR::Append

Appends either *lpsz* or the BSTR member of *bstrSrc* to [m_str](#m_str).

```
HRESULT Append(const CComBSTR& bstrSrc) throw();
HRESULT Append(wchar_t ch) throw();
HRESULT Append(char ch) throw();
HRESULT Append(LPCOLESTR lpsz) throw();
HRESULT Append(LPCSTR lpsz) throw();
HRESULT Append(LPCOLESTR lpsz, int nLen) throw();
```

### Parameters

*bstrSrc*<br/>
[in] A `CComBSTR` object to append.

*ch*<br/>
[in] A character to append.

*lpsz*<br/>
[in] A zero-terminated character string to append. You can pass a Unicode string via the LPCOLESTR overload or an ANSI string via the LPCSTR version.

*nLen*<br/>
[in] The number of characters from *lpsz* to append.

### Return Value

S_OK on success, or any standard HRESULT error value.

### Remarks

An ANSI string will be converted to Unicode before being appended.

### Example

[!code-cpp[NVC_ATL_Utilities#32](../../atl/codesnippet/cpp/ccombstr-class_1.cpp)]

## <a name="appendbstr"></a> CComBSTR::AppendBSTR

Appends the specified BSTR to [m_str](#m_str).

```
HRESULT AppendBSTR(BSTR p) throw();
```

### Parameters

*p*<br/>
[in] A BSTR to append.

### Return Value

S_OK on success, or any standard HRESULT error value.

### Remarks

Do not pass an ordinary wide-character string to this method. The compiler cannot catch the error and run time errors will occur.

### Example

[!code-cpp[NVC_ATL_Utilities#33](../../atl/codesnippet/cpp/ccombstr-class_2.cpp)]

## <a name="appendbytes"></a> CComBSTR::AppendBytes

Appends the specified number of bytes to [m_str](#m_str) without conversion.

```
HRESULT AppendBytes(const char* lpsz, int nLen) throw();
```

### Parameters

*lpsz*<br/>
[in] A pointer to an array of bytes to append.

*p*<br/>
[in] The number of bytes to append.

### Return Value

S_OK on success, or any standard HRESULT error value.

### Example

[!code-cpp[NVC_ATL_Utilities#34](../../atl/codesnippet/cpp/ccombstr-class_3.cpp)]

## <a name="arraytobstr"></a> CComBSTR::ArrayToBSTR

Frees any existing string held in the `CComBSTR` object, then creates a BSTR from the first character of each element in the safearray and attaches it to the `CComBSTR` object.

```
HRESULT ArrayToBSTR(const SAFEARRAY* pSrc) throw();
```

### Parameters

*pSrc*<br/>
[in] The safearray containing the elements used to create the string.

### Return Value

S_OK on success, or any standard HRESULT error value.

## <a name="assignbstr"></a> CComBSTR::AssignBSTR

Assigns a BSTR to [m_str](#m_str).

```
HRESULT AssignBSTR(const BSTR bstrSrc) throw();
```

### Parameters

*bstrSrc*<br/>
[in] A BSTR to assign to the current `CComBSTR` object.

### Return Value

S_OK on success, or any standard HRESULT error value.

## <a name="attach"></a> CComBSTR::Attach

Attaches a BSTR to the `CComBSTR` object by setting the [m_str](#m_str) member to *src*.

```cpp
void Attach(BSTR src) throw();
```

### Parameters

*src*<br/>
[in] The BSTR to attach to the object.

### Remarks

Do not pass an ordinary wide-character string to this method. The compiler cannot catch the error and run time errors will occur.

> [!NOTE]
> This method will assert if `m_str` is non- NULL.

### Example

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="bstrtoarray"></a> CComBSTR::BSTRToArray

Creates a zero-based one-dimensional safearray, where each element of the array is a character from the `CComBSTR` object.

```
HRESULT BSTRToArray(LPSAFEARRAY* ppArray) throw();
```

### Parameters

*ppArray*<br/>
[out] The pointer to the safearray used to hold the results of the function.

### Return Value

S_OK on success, or any standard HRESULT error value.

## <a name="bytelength"></a> CComBSTR::ByteLength

Returns the number of bytes in `m_str`, excluding the terminating null character.

```
unsigned int ByteLength() const throw();
```

### Return Value

The length of the [m_str](#m_str) member in bytes.

### Remarks

Returns 0 if `m_str` is NULL.

### Example

[!code-cpp[NVC_ATL_Utilities#36](../../atl/codesnippet/cpp/ccombstr-class_5.cpp)]

## <a name="ccombstr"></a> CComBSTR::CComBSTR

The constructor. The default constructor sets the [m_str](#m_str) member to NULL.

```
CComBSTR() throw();
CComBSTR(const CComBSTR& src);
CComBSTR(REFGUID  guid);
CComBSTR(int nSize);
CComBSTR(int nSize, LPCOLESTR sz);
CComBSTR(int nSize, LPCSTR sz);
CComBSTR(LPCOLESTR pSrc);
CComBSTR(LPCSTR pSrc);
CComBSTR(CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### Parameters

*nSize*<br/>
[in] The number of characters to copy from *sz* or the initial size in characters for the `CComBSTR`.

*sz*<br/>
[in] A string to copy. The Unicode version specifies an LPCOLESTR; the ANSI version specifies an LPCSTR.

*pSrc*<br/>
[in] A string to copy. The Unicode version specifies an LPCOLESTR; the ANSI version specifies an LPCSTR.

*src*<br/>
[in] A `CComBSTR` object.

*guid*<br/>
[in] A reference to a `GUID` structure.

### Remarks

The copy constructor sets `m_str` to a copy of the BSTR member of *src*. The `REFGUID` constructor converts the GUID to a string using `StringFromGUID2` and stores the result.

The other constructors set `m_str` to a copy of the specified string. If you pass a value for *nSize*, then only *nSize* characters will be copied, followed by a terminating null character.

`CComBSTR` supports move semantics. You can use the move constructor (the constructor that takes an rvalue reference (`&&`) to create a new object that uses the same underlying data as the old object you pass in as an argument, without the overhead of copying the object.

The destructor frees the string pointed to by `m_str`.

### Example

[!code-cpp[NVC_ATL_Utilities#37](../../atl/codesnippet/cpp/ccombstr-class_6.cpp)]

## <a name="dtor"></a> CComBSTR::~CComBSTR

The destructor.

```
~CComBSTR();
```

### Remarks

The destructor frees the string pointed to by `m_str`.

## <a name="copy"></a> CComBSTR::Copy

Allocates and returns a copy of `m_str`.

```
BSTR Copy() const throw();
```

### Return Value

A copy of the [m_str](#m_str) member. If `m_str` is NULL, returns NULL.

### Example

[!code-cpp[NVC_ATL_Utilities#38](../../atl/codesnippet/cpp/ccombstr-class_7.cpp)]

## <a name="copyto"></a> CComBSTR::CopyTo

Allocates and returns a copy of [m_str](#m_str) via the parameter.

```
HRESULT CopyTo(BSTR* pbstr) throw();

HRESULT CopyTo(VARIANT* pvarDest) throw();
```

### Parameters

*pbstr*<br/>
[out] The address of a BSTR in which to return the string allocated by this method.

*pvarDest*<br/>
[out] The address of a VARIANT in which to return the string allocated by this method.

### Return Value

A standard HRESULT value indicating the success or failure of the copy.

### Remarks

After calling this method, the VARIANT pointed to by *pvarDest* will be of type VT_BSTR.

### Example

[!code-cpp[NVC_ATL_Utilities#39](../../atl/codesnippet/cpp/ccombstr-class_8.cpp)]

## <a name="detach"></a> CComBSTR::Detach

Detaches [m_str](#m_str) from the `CComBSTR` object and sets `m_str` to NULL.

```
BSTR Detach() throw();
```

### Return Value

The BSTR associated with the `CComBSTR` object.

### Example

[!code-cpp[NVC_ATL_Utilities#40](../../atl/codesnippet/cpp/ccombstr-class_9.cpp)]

## <a name="empty"></a> CComBSTR::Empty

Frees the [m_str](#m_str) member.

```cpp
void Empty() throw();
```

### Example

[!code-cpp[NVC_ATL_Utilities#41](../../atl/codesnippet/cpp/ccombstr-class_10.cpp)]

## <a name="length"></a> CComBSTR::Length

Returns the number of characters in `m_str`, excluding the terminating null character.

```
unsigned int Length() const throw();
```

### Return Value

The length of the [m_str](#m_str) member.

### Example

[!code-cpp[NVC_ATL_Utilities#42](../../atl/codesnippet/cpp/ccombstr-class_11.cpp)]

## <a name="loadstring"></a> CComBSTR::LoadString

Loads a string resource specified by *nID* and stores it in this object.

```
bool LoadString(HINSTANCE hInst, UINT nID) throw();
bool LoadString(UINT nID) throw();
```

### Parameters

See [LoadString](/windows/win32/api/winuser/nf-winuser-loadstringw) in the Windows SDK.

### Return Value

Returns TRUE if the string is successfully loaded; otherwise, returns FALSE.

### Remarks

The first function loads the resource from the module identified by you via the *hInst* parameter. The second function loads the resource from the resource module associated with the [CComModule](../../atl/reference/ccommodule-class.md)-derived object used in this project.

### Example

[!code-cpp[NVC_ATL_Utilities#43](../../atl/codesnippet/cpp/ccombstr-class_12.cpp)]

## <a name="m_str"></a> CComBSTR::m_str

Contains the BSTR associated with the `CComBSTR` object.

```
BSTR m_str;
```

### Example

[!code-cpp[NVC_ATL_Utilities#49](../../atl/codesnippet/cpp/ccombstr-class_13.cpp)]

## <a name="operator_bstr"></a> CComBSTR::operator BSTR

Casts a `CComBSTR` object to a BSTR.

```
operator BSTR() const throw();
```

### Remarks

Allows you to pass `CComBSTR` objects to functions that have **[in] BSTR** parameters.

### Example

See the example for [CComBSTR::m_str](#m_str).

## <a name="operator_not"></a> CComBSTR::operator !

Checks whether BSTR string is NULL.

```
bool operator!() const throw();
```

### Return Value

Returns TRUE if the [m_str](#m_str) member is NULL; otherwise, FALSE.

### Remarks

This operator only checks for a NULL value, not for an empty string.

### Example

[!code-cpp[NVC_ATL_Utilities#35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]

## <a name="operator_neq"></a> CComBSTR::operator !=

Returns the logical opposite of [operator ==](#operator_eq_eq).

```
bool operator!= (const CComBSTR& bstrSrc) const throw();
bool operator!= (LPCOLESTR pszSrc) const;
bool operator!= (LPCSTR pszSrc) const;
bool operator!= (int nNull) const throw();
```

### Parameters

*bstrSrc*<br/>
[in] A `CComBSTR` object.

*pszSrc*<br/>
[in] A zero-terminated string.

*nNull*<br/>
[in] Must be NULL.

### Return Value

Returns TRUE if the item being compared is not equal to the `CComBSTR` object; otherwise, returns FALSE.

### Remarks

`CComBSTR`s are compared textually in the context of the user's default locale. The final comparison operator just compares the contained string against NULL.

## <a name="operator_amp"></a> CComBSTR::operator &amp;

Returns the address of the BSTR stored in the [m_str](#m_str) member.

```
BSTR* operator&() throw();
```

### Remarks

`CComBstr operator &` has a special assertion associated with it to help identify memory leaks. The program will assert when the `m_str` member is initialized. This assertion was created to identify situations where a programmer uses the `& operator` to assign a new value to `m_str` member without freeing the first allocation of `m_str`. If `m_str` equals NULL, the program assumes that m_str wasn't allocated yet. In this case, the program will not assert.

This assertion is not enabled by default. Define ATL_CCOMBSTR_ADDRESS_OF_ASSERT to enable this assertion.

### Example

[!code-cpp[NVC_ATL_Utilities#46](../../atl/codesnippet/cpp/ccombstr-class_14.cpp)]

[!code-cpp[NVC_ATL_Utilities#47](../../atl/codesnippet/cpp/ccombstr-class_15.cpp)]

## <a name="operator_add_eq"></a> CComBSTR::operator +=

Appends a string to the `CComBSTR` object.

```
CComBSTR& operator+= (const CComBSTR& bstrSrc);
CComBSTR& operator+= (const LPCOLESTR pszSrc);
```

### Parameters

*bstrSrc*<br/>
[in] A `CComBSTR` object to append.

*pszSrc*<br/>
[in] A zero-terminated string to append.

### Remarks

`CComBSTR`s are compared textually in the context of the user's default locale. The LPCOLESTR comparison is done using `memcmp` on the raw data in each string. The LPCSTR comparison is carried out in the same way once a temporary Unicode copy of *pszSrc* has been created. The final comparison operator just compares the contained string against NULL.

### Example

[!code-cpp[NVC_ATL_Utilities#48](../../atl/codesnippet/cpp/ccombstr-class_16.cpp)]

## <a name="operator_lt"></a> CComBSTR::operator &lt;

Compares a `CComBSTR` with a string.

```
bool operator<(const CComBSTR& bstrSrc) const throw();
bool operator<(LPCOLESTR pszSrc) const throw();
bool operator<(LPCSTR pszSrc) const throw();
```

### Return Value

Returns TRUE if the item being compared is less than the `CComBSTR` object; otherwise, returns FALSE.

### Remarks

The comparison is performed using the user's default locale.

## <a name="operator_eq"></a> CComBSTR::operator =

Sets the [m_str](#m_str) member to a copy of *pSrc* or to a copy of the BSTR member of *src*. The move assignment operator moves `src` without copying it.

```
CComBSTR& operator= (const CComBSTR& src);
CComBSTR& operator= (LPCOLESTR pSrc);
CComBSTR& operator= (LPCSTR pSrc);
CComBSTR& operator= (CComBSTR&& src) throw(); // (Visual Studio 2017)
```

### Remarks

The *pSrc* parameter specifies either an LPCOLESTR for Unicode versions or LPCSTR for ANSI versions.

### Example

See the example for [CComBSTR::Copy](#copy).

## <a name="operator_eq_eq"></a> CComBSTR::operator ==

Compares a `CComBSTR` with a string. `CComBSTR`s are compared textually in the context of the user's default locale.

```
bool operator== (const CComBSTR& bstrSrc) const throw();
bool operator== (LPCOLESTR pszSrc) const;
bool operator== (LPCSTR pszSrc) const;
bool operator== (int nNull) const throw();
```

### Parameters

*bstrSrc*<br/>
[in] A `CComBSTR` object.

*pszSrc*<br/>
[in] A zero-terminated string.

*nNull*<br/>
[in] Must be NULL.

### Return Value

Returns TRUE if the item being compared is equal to the `CComBSTR` object; otherwise, returns FALSE.

### Remarks

The final comparison operator just compares the contained string against NULL.

## <a name="operator_gt"></a> CComBSTR::operator &gt;

Compares a `CComBSTR` with a string.

```
bool operator>(const CComBSTR& bstrSrc) const throw();
```

### Return Value

Returns TRUE if the item being compared is greater than the `CComBSTR` object; otherwise, returns FALSE.

### Remarks

The comparison is performed using the user's default locale.

## <a name="readfromstream"></a> CComBSTR::ReadFromStream

Sets the [m_str](#m_str) member to the BSTR contained in the specified stream.

```
HRESULT ReadFromStream(IStream* pStream) throw();
```

### Parameters

*pStream*<br/>
[in] A pointer to the [IStream](/windows/win32/api/objidl/nn-objidl-istream) interface on the stream containing the data.

### Return Value

A standard HRESULT value.

### Remarks

`ReadToStream` requires the contents of the stream at the current position to be compatible with the data format written out by a call to [WriteToStream](#writetostream).

### Example

[!code-cpp[NVC_ATL_Utilities#44](../../atl/codesnippet/cpp/ccombstr-class_17.cpp)]

## <a name="tolower"></a> CComBSTR::ToLower

Converts the contained string to lowercase.

```
HRESULT ToLower() throw();
```

### Return Value

A standard HRESULT value.

### Remarks

See `CharLowerBuff` for more information on how the conversion is performed.

## <a name="toupper"></a> CComBSTR::ToUpper

Converts the contained string to uppercase.

```
HRESULT ToUpper() throw();
```

### Return Value

A standard HRESULT value.

### Remarks

See `CharUpperBuff` for more information on how the conversion is performed.

## <a name="writetostream"></a> CComBSTR::WriteToStream

Saves the [m_str](#m_str) member to a stream.

```
HRESULT WriteToStream(IStream* pStream) throw();
```

### Parameters

*pStream*<br/>
[in] A pointer to the [IStream](/windows/win32/api/objidl/nn-objidl-istream) interface on a stream.

### Return Value

A standard HRESULT value.

### Remarks

You can recreate a BSTR from the contents of the stream using the [ReadFromStream](#readfromstream) function.

### Example

[!code-cpp[NVC_ATL_Utilities#45](../../atl/codesnippet/cpp/ccombstr-class_18.cpp)]

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[ATL and MFC String Conversion Macros](string-conversion-macros.md)
