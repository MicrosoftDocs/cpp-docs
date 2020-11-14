---
title: "**`CStringT`** Class"
description: "API reference for the Microsoft ATL **`CStringT`** class"
ms.date: "11/13/2020"
f1_keywords: ["CStringT", "ATLSTR/ATL::CStringT", "ATLSTR/ATL::CStringT::CStringT", "ATLSTR/ATL::CStringT::AllocSysString", "ATLSTR/ATL::CStringT::AnsiToOem", "ATLSTR/ATL::CStringT::AppendFormat", "ATLSTR/ATL::CStringT::Collate", "ATLSTR/ATL::CStringT::CollateNoCase", "ATLSTR/ATL::CStringT::Compare", "ATLSTR/ATL::CStringT::CompareNoCase", "ATLSTR/ATL::CStringT::Delete", "ATLSTR/ATL::CStringT::Find", "ATLSTR/ATL::CStringT::FindOneOf", "ATLSTR/ATL::CStringT::Format", "ATLSTR/ATL::CStringT::FormatMessage", "ATLSTR/ATL::CStringT::FormatMessageV", "ATLSTR/ATL::CStringT::FormatV", "ATLSTR/ATL::CStringT::GetEnvironmentVariable", "ATLSTR/ATL::CStringT::Insert", "ATLSTR/ATL::CStringT::Left", "ATLSTR/ATL::CStringT::LoadString", "ATLSTR/ATL::CStringT::MakeLower", "ATLSTR/ATL::CStringT::MakeReverse", "ATLSTR/ATL::CStringT::MakeUpper", "ATLSTR/ATL::CStringT::Mid", "ATLSTR/ATL::CStringT::OemToAnsi", "ATLSTR/ATL::CStringT::Remove", "ATLSTR/ATL::CStringT::Replace", "ATLSTR/ATL::CStringT::ReverseFind", "ATLSTR/ATL::CStringT::Right", "ATLSTR/ATL::CStringT::SetSysString", "ATLSTR/ATL::CStringT::SpanExcluding", "ATLSTR/ATL::CStringT::SpanIncluding", "ATLSTR/ATL::CStringT::Tokenize", "ATLSTR/ATL::CStringT::Trim", "ATLSTR/ATL::CStringT::TrimLeft", "ATLSTR/ATL::CStringT::TrimRight", "CSTRINGT/CStringT", "CSTRINGT/CStringT::CStringT", "CSTRINGT/CStringT::AllocSysString", "CSTRINGT/CStringT::AnsiToOem", "CSTRINGT/CStringT::AppendFormat", "CSTRINGT/CStringT::Collate", "CSTRINGT/CStringT::CollateNoCase", "CSTRINGT/CStringT::Compare", "CSTRINGT/CStringT::CompareNoCase", "CSTRINGT/CStringT::Delete", "CSTRINGT/CStringT::Find", "CSTRINGT/CStringT::FindOneOf", "CSTRINGT/CStringT::Format", "CSTRINGT/CStringT::FormatMessage", "CSTRINGT/CStringT::FormatMessageV", "CSTRINGT/CStringT::FormatV", "CSTRINGT/CStringT::GetEnvironmentVariable", "CSTRINGT/CStringT::Insert", "CSTRINGT/CStringT::Left", "CSTRINGT/CStringT::LoadString", "CSTRINGT/CStringT::MakeLower", "CSTRINGT/CStringT::MakeReverse", "CSTRINGT/CStringT::MakeUpper", "CSTRINGT/CStringT::Mid", "CSTRINGT/CStringT::OemToAnsi", "CSTRINGT/CStringT::Remove", "CSTRINGT/CStringT::Replace", "CSTRINGT/CStringT::ReverseFind", "CSTRINGT/CStringT::Right", "CSTRINGT/CStringT::SetSysString", "CSTRINGT/CStringT::SpanExcluding", "CSTRINGT/CStringT::SpanIncluding", "CSTRINGT/CStringT::Tokenize", "CSTRINGT/CStringT::Trim", "CSTRINGT/CStringT::TrimLeft", "CSTRINGT/CStringT::TrimRight"]
helpviewer_keywords: ["strings [C++], in ATL", "shared classes, CStringT", "CStringT class"]
---
# CStringT Class

This class represents a **`CStringT`** object.

## Syntax

```cpp
template<typename BaseType, class StringTraits>
class CStringT :
    public CSimpleStringT<BaseType,
        _CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>::c_bIsMFCDLLTraits>
```

#### Parameters

*`BaseType`*\
The character type of the string class. Can be one of the following:

- **`char`** (for ANSI character strings).

- **`wchar_t`** (for Unicode character strings).

- **`TCHAR`** (for both ANSI and Unicode character strings).

*`StringTraits`*\
Determines if the string class needs C Run-Time (CRT) Library support and where string resources are located. Can be one of the following:

- **`StrTraitATL<wchar_t | char | TCHAR, ChTraitsCRT<wchar_t | char | TCHAR>>`**

   The class requires CRT support and searches for resource strings in the module specified by `m_hInstResource` (a member of the application's module class).

- **`StrTraitATL<wchar_t | char | TCHAR, ChTraitsOS<wchar_t | char |TCHAR>>`**

   The class does not require CRT support and searches for resource strings in the module specified by `m_hInstResource` (a member of the application's module class).

- **`StrTraitMFC<wchar_t | char | TCHAR, ChTraitsCRT<wchar_t | char | TCHAR>>`**

   The class requires CRT support and searches for resource strings using the standard MFC search algorithm.

- **`StrTraitMFC<wchar_t | char | TCHAR, ChTraitsOS<wchar_t | char | TCHAR>>`**

   The class does not require CRT support and searches for resource strings using the standard MFC search algorithm.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CStringT::CStringT`](#cstringt)|Constructs a **`CStringT`** object in various ways.|
|[`CStringT::~CStringT`](#_dtorcstringt)|Destroys a **`CStringT`** object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[`CStringT::AllocSysString`](#allocsysstring)|Allocates a `BSTR` from **`CStringT`** data.|
|[`CStringT::AnsiToOem`](#ansitooem)|Makes an in-place conversion from the ANSI character set to the OEM character set.|
|[`CStringT::AppendFormat`](#appendformat)|Appends formatted data to an existing **`CStringT`** object.|
|[`CStringT::Collate`](#collate)|Compares two strings (case-sensitive, uses locale-specific information).|
|[`CStringT::CollateNoCase`](#collatenocase)|Compares two strings (case-insensitive, uses locale-specific information).|
|[`CStringT::Compare`](#compare)|Compares two strings (case-sensitive).|
|[`CStringT::CompareNoCase`](#comparenocase)|Compares two strings (case-insensitive).|
|[`CStringT::Delete`](#delete)|Deletes a character or characters from a string.|
|[`CStringT::Find`](#find)|Finds a character or substring inside a larger string.|
|[`CStringT::FindOneOf`](#findoneof)|Finds the first matching character from a set.|
|[`CStringT::Format`](#format)|Formats the string as `sprintf` does.|
|[`CStringT::FormatMessage`](#formatmessage)|Formats a message string.|
|[`CStringT::FormatMessageV`](#formatmessagev)|Formats a message string using a variable argument list.|
|[`CStringT::FormatV`](#formatv)|Formats the string using a variable list of arguments.|
|[`CStringT::GetEnvironmentVariable`](#getenvironmentvariable)|Sets the string to the value of the specified environment variable.|
|[`CStringT::Insert`](#insert)|Inserts a single character or a substring at the given index within the string.|
|[`CStringT::Left`](#left)|Extracts the left part of a string.|
|[`CStringT::LoadString`](#loadstring)|Loads an existing **`CStringT`** object from a Windows resource.|
|[`CStringT::MakeLower`](#makelower)|Converts all the characters in this string to lowercase characters.|
|[`CStringT::MakeReverse`](#makereverse)|Reverses the string.|
|[`CStringT::MakeUpper`](#makeupper)|Converts all the characters in this string to uppercase characters.|
|[`CStringT::Mid`](#mid)|Extracts the middle part of a string.|
|[`CStringT::OemToAnsi`](#oemtoansi)|Makes an in-place conversion from the OEM character set to the ANSI character set.|
|[`CStringT::Remove`](#remove)|Removes indicated characters from a string.|
|[`CStringT::Replace`](#replace)|Replaces indicated characters with other characters.|
|[`CStringT::ReverseFind`](#reversefind)|Finds a character inside a larger string; starts from the end.|
|[`CStringT::Right`](#right)|Extracts the right part of a string.|
|[`CStringT::SetSysString`](#setsysstring)|Sets an existing `BSTR` object with data from a **`CStringT`** object.|
|[`CStringT::SpanExcluding`](#spanexcluding)|Extracts characters from the string, starting with the first character, that are not in the set of characters identified by `pszCharSet`.|
|[`CStringT::SpanIncluding`](#spanincluding)|Extracts a substring that contains only the characters in a set.|
|[`CStringT::Tokenize`](#tokenize)|Extracts specified tokens in a target string.|
|[`CStringT::Trim`](#trim)|Trims all leading and trailing whitespace characters from the string.|
|[`CStringT::TrimLeft`](#trimleft)|Trims leading whitespace characters from the string.|
|[`CStringT::TrimRight`](#trimright)|Trims trailing whitespace characters from the string.|

### Operators

|Name|Description|
|-|-|
|[`CStringT::operator =`](#operator_eq)|Assigns a new value to a **`CStringT`** object.|
|[`CStringT::operator +`](#operator_add)|Concatenates two strings, or a character and a string.|
|[`CStringT::operator +=`](#operator_add_eq)|Concatenates a new string to the end of an existing string.|
|[`CStringT::operator ==`](#operator_eq_eq)|Determines if two strings are logically equal.|
|[`CStringT::operator !=`](#operator_neq)|Determines if two strings aren't logically equal.|
|[`CStringT::operator <`](#operator_lt)|Determines if the string on the left side of the operator is less than to the string on the right side.|
|[`CStringT::operator >`](#operator_gt)|Determines if the string on the left side of the operator is greater than to the string on the right side.|
|[`CStringT::operator <=`](#operator_lt_eq)|Determines if the string on the left side of the operator is less than or equal to the string on the right side.|
|[`CStringT::operator >=`](#operator_gt_eq)|Determines if the string on the left side of the operator is greater than or equal to the string on the right side.|

## Remarks

**`CStringT`** inherits from [CSimpleStringT Class](../../atl-mfc-shared/reference/csimplestringt-class.md). Advanced features, such as character manipulation, ordering, and searching, are implemented by **`CStringT`**.

> [!NOTE]
> **`CStringT`** objects are capable of throwing exceptions. This occurs when a **`CStringT`** object runs out of memory for any reason.

A **`CStringT`** object consists of a variable-length sequence of characters. **`CStringT`** provides functions and operators using syntax similar to that of Basic. Concatenation and comparison operators, together with simplified memory management, make **`CStringT`** objects easier to use than ordinary character arrays.

> [!NOTE]
> Although it is possible to create **`CStringT`** instances that contain embedded null characters, we recommend against it. Calling methods and operators on **`CStringT`** objects that contain embedded null characters can produce unintended results.

By using different combinations of the `BaseType` and `StringTraits` parameters, **`CStringT`** objects can come in the following types, which are have been predefined by the ATL libraries.

If using in an ATL application:

`CString`, `CStringA`, and `CStringW` are exported from the MFC DLL (MFC90.DLL), never from user DLLs. This is done to prevent **`CStringT`** from being multiply defined.

> [!NOTE]
> If your code contains the workaround for linker errors that is described in [Exporting String Classes Using CStringT](../../atl-mfc-shared/exporting-string-classes-using-cstringt.md), you should remove that code. It is no longer needed.

The following string types are available within MFC-based applications:

|CStringT type|Declaration|
|-------------------|-----------------|
|`CStringA`|An ANSI character type string with CRT support.|
|`CStringW`|A Unicode character type string with CRT support.|
|`CString`|Both ANSI and Unicode character types with CRT support.|

The following string types are available in projects where ATL_CSTRING_NO_CRT is defined:

|CStringT type|Declaration|
|-------------------|-----------------|
|`CAtlStringA`|An ANSI character type string without CRT support.|
|`CAtlStringW`|A Unicode character type string without CRT support.|
|`CAtlString`|Both ANSI and Unicode character types without CRT support.|

The following string types are available in projects where ATL_CSTRING_NO_CRT is not defined:

|CStringT type|Declaration|
|-------------------|-----------------|
|`CAtlStringA`|An ANSI character type string with CRT support.|
|`CAtlStringW`|A Unicode character type string with CRT support.|
|`CAtlString`|Both ANSI and Unicode character types with CRT support.|

`CString` objects also have the following characteristics:

- **`CStringT`** objects can grow as a result of concatenation operations.

- **`CStringT`** objects follow "value semantics." Think of a **`CStringT`** object as an actual string, not as a pointer to a string.

- You can freely substitute **`CStringT`** objects for `PCXSTR` function arguments.

- Custom memory management for string buffers. For more information, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## CStringT Predefined Types

Because **`CStringT`** uses a template argument to define the character type (either [wchar_t](../../c-runtime-library/standard-types.md) or [char](../../c-runtime-library/standard-types.md)) supported, method parameter types can be complicated at times. To simplify this issue, a set of predefined types is defined and used throughout the **`CStringT`** class. The following table lists the various types:

|Name|Description|
|----------|-----------------|
|`XCHAR`|A single character (either **`wchar_t`** or **`char`**) with the same character type as the **`CStringT`** object.|
|`YCHAR`|A single character (either **`wchar_t`** or **`char`**) with the opposite character type as the **`CStringT`** object.|
|`PXSTR`|A pointer to a character string (either **`wchar_t`** or **`char`**) with the same character type as the ****`CStringT`**** object.|
|`PYSTR`|A pointer to a character string (either **`wchar_t`** or **`char`**) with the opposite character type as the **`CStringT`** object.|
|`PCXSTR`|A pointer to a **`const`** character string (either **`wchar_t`** or **`char`**) with the same character type as the **`CStringT`** object.|
|`PCYSTR`|A pointer to a **`const`** character string (either **`wchar_t`** or **`char`**) with the opposite character type as the **`CStringT`** object.|

> [!NOTE]
> Code that previously used undocumented methods of `CString` (such as `AssignCopy`) must be replaced with code that uses the following documented methods of **`CStringT`** (such as `GetBuffer` or `ReleaseBuffer`). These methods are inherited from `CSimpleStringT`.

## Inheritance Hierarchy

[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)

**`CStringT`**

## Requirements

|Header|Use for|
|------------|-------------|
|cstringt.h|MFC-only string objects|
|atlstr.h|Non-MFC string objects|

## <a name="allocsysstring"></a> `CStringT::AllocSysString`

Allocates an Automation-compatible string of the type `BSTR` and copies the contents of the **`CStringT`** object into it, including the terminating null character.

```cpp
BSTR AllocSysString() const;
```

### Return Value

The newly allocated string.

### Remarks

In MFC programs, a [CMemoryException Class](../../mfc/reference/cmemoryexception-class.md) is thrown if insufficient memory exists. In ATL programs, a [CAtlException](../../atl/reference/catlexception-class.md) is thrown. This function is normally used to return strings for Automation.

Commonly, if this string is passed to a COM function as an [in] parameter, then this requires the caller to free the string. This can be done by using [SysFreeString](/windows/win32/api/oleauto/nf-oleauto-sysfreestring), as described in the Windows SDK. For more information, see [Allocating and Releasing Memory for a BSTR](../../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md).

For more information about OLE allocation functions in Windows, see [SysAllocString](/windows/win32/api/oleauto/nf-oleauto-sysallocstring) in the Windows SDK.

### Example

The following example demonstrates the use of `CStringT::AllocSysString`.

[!code-cpp[NVC_ATLMFC_Utilities#105](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_1.cpp)]

## <a name="ansitooem"></a> `CStringT::AnsiToOem`

Converts all the characters in this **`CStringT`** object from the ANSI character set to the OEM character set.

```cpp
void AnsiToOem();
```

### Remarks

The function is not available if _UNICODE is defined.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#106](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_2.cpp)]

## <a name="appendformat"></a> `CStringT::AppendFormat`

Appends formatted data to an existing **`CStringT`** object.

```cpp
void __cdecl AppendFormat(PCXSTR pszFormat, [, argument] ...);
void __cdecl AppendFormat(UINT nFormatID, [, argument] ...);
```

### Parameters

*`pszFormat`*\
A format-control string.

*`nFormatID`*\
The string resource identifier that contains the format-control string.

*`argument`*\
Optional arguments.

### Remarks

This function formats and appends a series of characters and values in the **`CStringT`**. Each optional argument (if any) is converted and appended according to the corresponding format specification in *`pszFormat`* or from the string resource identified by *`nFormatID`*.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#107](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_3.cpp)]

## <a name="collate"></a> `CStringT::Collate`

Compares two strings using the generic-text function `_tcscoll`.

```cpp
int Collate(PCXSTR psz) const throw();
```

### Parameters

*`psz`*\
The other string used for comparison.

### Return Value

Zero if the strings are identical, < 0 if this **`CStringT`** object is less than *`psz`*, or > 0 if this **`CStringT`** object is greater than *`psz`*.

### Remarks

The generic-text function `_tcscoll`, which is defined in TCHAR.H, maps to either `strcoll`, `wcscoll`, or `_mbscoll`, depending on the character set that is defined at compile time. Each function performs a case-sensitive comparison of the strings according to the code page currently in use. For more information, see [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

## <a name="collatenocase"></a> `CStringT::CollateNoCase`

Compares two strings using the generic-text function `_tcscoll`.

```cpp
int CollateNoCase(PCXSTR psz) const throw();
```

### Parameters

*`psz`*\
The other string used for comparison.

### Return Value

Zero if the strings are identical (ignoring case), < 0 if this **`CStringT`** object is less than *`psz`* (ignoring case), or > 0 if this **`CStringT`** object is greater than *`psz`* (ignoring case).

### Remarks

The generic-text function `_tcscoll`, which is defined in TCHAR.H, maps to either `stricoll`, `wcsicoll`, or `_mbsicoll`, depending on the character set that is defined at compile time. Each function performs a case-insensitive comparison of the strings, according to the code page currently in use. For more information, see [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

### Example

[!code-cpp[NVC_ATLMFC_Utilities#109](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_4.cpp)]

## <a name="compare"></a> `CStringT::Compare`

Compares two strings (case-sensitive).

```cpp
int Compare(PCXSTR psz) const;
```

### Parameters

*`psz`*\
The other string used for comparison.

### Return Value

Zero if the strings are identical, < 0 if this **`CStringT`** object is less than *`psz`*, or > 0 if this **`CStringT`** object is greater than *`psz`*.

### Remarks

The generic-text function `_tcscmp`, which is defined in TCHAR.H, maps to either `strcmp`, `wcscmp`, or `_mbscmp`, depending on the character set that is defined at compile time. Each function performs a case-sensitive comparison of the strings and is not affected by locale. For more information, see [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md).

If the string contains embedded nulls, for purposes of comparison the string is considered to be truncated at the first embedded null character.

### Example

The following example demonstrates the use of `CStringT::Compare`.

[!code-cpp[NVC_ATLMFC_Utilities#110](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_5.cpp)]

## <a name="comparenocase"></a> `CStringT::CompareNoCase`

Compares two strings (case-insensitive).

```cpp
int CompareNoCase(PCXSTR psz) const throw();
```

### Parameters

*`psz`*\
The other string used for comparison.

### Return Value

Zero if the strings are identical (ignoring case), <0 if this **`CStringT`** object is less than *`psz`* (ignoring case), or >0 if this **`CStringT`** object is greater than *`psz`* (ignoring case).

### Remarks

The generic-text function `_tcsicmp`, which is defined in TCHAR.H, maps to either `_stricmp`, `_wcsicmp` or `_mbsicmp`, depending on the character set that is defined at compile time. Each function performs a case-insensitive comparison of the strings. The comparison depends on the LC_CTYPE aspect of the locale but not LC_COLLATE. For more information, see [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md).

### Example

[!code-cpp[NVC_ATLMFC_Utilities#111](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_6.cpp)]

## <a name="cstringt"></a> `CStringT::CStringT`

Constructs a **`CStringT`** object.

```cpp
CStringT() throw() :
    CThisSimpleString(StringTraits::GetDefaultManager());

explicit CStringT(IAtlStringMgr* pStringMgr) throw() :
    CThisSimpleString( pStringMgr);

CStringT(const VARIANT& varSrc);

CStringT(const VARIANT& varSrc, IAtlStringMgr* pStringMgr);

CStringT(const CStringT& strSrc) :
    CThisSimpleString( strSrc);

operator CSimpleStringT<
                    BaseType,
                    !_CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>
                    :: c_bIsMFCDLLTraits> &()

template <bool bMFCDLL>
CStringT(const CSimpleStringT<BaseType, bMFCDLL>& strSrc) :
    CThisSimpleString( strSrc);

template <class SystemString>
CStringT(SystemString^ pString) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(const YCHAR* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(LPCSTR pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CStringT(LPCWSTR pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CSTRING_EXPLICIT CStringT(const unsigned char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

/*CSTRING_EXPLICIT*/ CStringT(char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(unsigned char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(wchar_t* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const unsigned char* pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CSTRING_EXPLICIT CStringT(char ch, int nLength = 1) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(wchar_t ch, int nLength = 1) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pch, int nLength) :
    CThisSimpleString( pch, nLength, StringTraits::GetDefaultManager());

CStringT(const YCHAR* pch, int nLength) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pch, int nLength, AtlStringMgr* pStringMgr) :
    CThisSimpleString( pch, nLength, pStringMgr);

CStringT(const YCHAR* pch, int nLength, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);
```

### Parameters

*`pch`*\
A pointer to an array of characters of length *nLength*, not null-terminated.

*`nLength`*\
A count of the number of characters in *pch*.

*`ch`*\
A single character.

*`pszSrc`*\
A null-terminated string to be copied into this **`CStringT`** object.

*`pStringMgr`*\
A pointer to the memory manager for the **`CStringT`** object. For more information on `IAtlStringMgr` and memory management for **`CStringT`**, see [Memory Management with CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

*`strSrc`*\
An existing **`CStringT`** object to be copied into this **`CStringT`** object. For more information on `CThisString` and `CThisSimpleString`, see the Remarks section.

*`varSrc`*\
A variant object to be copied into this **`CStringT`** object.

*`BaseType`*\
The character type of the string class. Can be one of the following:

**`char`** (for ANSI character strings).

**`wchar_t`** (for Unicode character strings).

`TCHAR` (for both ANSI and Unicode character strings).

*`bMFCDLL`*\
Boolean that specifies whether the project is an MFC DLL (`TRUE`) or not (`FALSE`).

*`SystemString`*\
Must be `System::String`, and the project must be compiled with `/clr`.

*`pString`*\
A handle for a **`CStringT`** object.

### Remarks

Because the constructors copy the input data into new allocated storage, you should be aware that memory exceptions may result. Note that some of these constructors act as conversion functions. This allows you to substitute, for example, an **`LPTSTR`** where a **`CStringT`** object is expected.

- **`CStringT`**( `LPCSTR` `lpsz` ): Constructs a Unicode **`CStringT`** from an ANSI string. You can also use this constructor to load a string resource as shown in the example below.

- `CStringT(` `LPCWSTR` `lpsz` ): Constructs a **`CStringT`** from a Unicode string.

- **`CStringT`**( `const unsigned char*` `psz` ): Allows you to construct a **`CStringT`** from a pointer to **`unsigned char`**.

> [!NOTE]
> Define the` _CSTRING_DISABLE_NARROW_WIDE_CONVERSION` macro to turn off implicit string conversion between ANSI and Unicode strings. The macro excludes from compilation constructors that support conversion.

Note that the *`strSrc`* parameter can be either a **`CStringT`** or `CThisSimpleString` object. For **`CStringT`**, use one of its default instantiations (`CString`, `CStringA`, or `CStringW`); for `CThisSimpleString`, use a **`this`** pointer. `CThisSimpleString` declares an instance of the [CSimpleStringT Class](../../atl-mfc-shared/reference/csimplestringt-class.md), which is a smaller string class with less built-in functionality than the **`CStringT`** class.

The overload operator `CSimpleStringT<>&()` constructs a **`CStringT`** object from a `CSimpleStringT` declaration.

> [!NOTE]
> Although it is possible to create **`CStringT`** instances that contain embedded null characters, we recommend against it. Calling methods and operators on **`CStringT`** objects that contain embedded null characters can produce unintended results.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#112](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_7.cpp)]

## <a name="_dtorcstringt"></a> `CStringT::~CStringT`

Destroys the **`CStringT`** object.

```cpp
~CStringT() throw();
```

### Remarks

Destroys the **`CStringT`** object.

## <a name="delete"></a> `CStringT::Delete`

Deletes a character or characters from a string starting with the character at the given index.

```cpp
int Delete(int iIndex, int nCount = 1);
```

### Parameters

*`iIndex`*\
The zero-based index of the first character in the **`CStringT`** object to delete.

*`nCount`*\
The number of characters to be removed.

### Return Value

The length of the changed string.

### Remarks

If *`nCount`* is longer than the string, the rest of the string will be removed.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#113](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_8.cpp)]

```Output
Before: Soccer is best,
    but hockey is quicker!
After: Soccer best,
    but hockey is quicker!
```

## <a name="find"></a> `CStringT::Find`

Searches this string for the first match of a character or substring.

```cpp
int Find(PCXSTR pszSub, int iStart=0) const throw();
int Find(XCHAR ch, int iStart=0) const throw();
```

### Parameters

*`pszSub`*\
A substring to search for.

*`iStart`*\
The index of the character in the string to begin the search with, or 0 to start from the beginning.

*`ch`*\
A single character to search for.

### Return Value

The zero-based index of the first character in this **`CStringT`** object that matches the requested substring or characters; -1 if the substring or character is not found.

### Remarks

The function is overloaded to accept both single characters (similar to the run-time function `strchr`) and strings (similar to `strstr`).

### Example

[!code-cpp[NVC_ATLMFC_Utilities#114](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_9.cpp)]

## <a name="findoneof"></a> `CStringT::FindOneOf`

Searches this string for the first character that matches any character contained in *`pszCharSet`*.

```cpp
int FindOneOf(PCXSTR pszCharSet) const throw();
```

### Parameters

*`pszCharSet`*\
String containing characters for matching.

### Return Value

The zero-based index of the first character in this string that is also in *`pszCharSet`*; -1 if there is no match.

### Remarks

Finds the first occurrence of any of the characters in *`pszCharSet`*.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#115](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_10.cpp)]

## <a name="format"></a> `CStringT::Format`

Writes formatted data to a **`CStringT`** in the same way that [sprintf_s](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) formats data into a C-style character array.

```cpp
void __cdecl Format(UINT nFormatID, [, argument]...);
void __cdecl Format(PCXSTR pszFormat,  [, argument] ...);
```

### Parameters

*`nFormatID`*\
The string resource identifier that contains the format-control string.

*`pszFormat`*\
A format-control string.

*`argument`*\
Optional arguments.

### Remarks

This function formats and stores a series of characters and values in the **`CStringT`**. Each optional argument (if any) is converted and output according to the corresponding format specification in *`pszFormat`* or from the string resource identified by *`nFormatID`*.

The call will fail if the string object itself is offered as a parameter to `Format`. For example, the following code will cause unpredictable results:

[!code-cpp[NVC_ATLMFC_Utilities#116](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_11.cpp)]

For more information, see [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

### Example

[!code-cpp[NVC_ATLMFC_Utilities#117](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_12.cpp)]

## <a name="formatmessage"></a> `CStringT::FormatMessage`

Formats a message string.

```cpp
void __cdecl FormatMessage(UINT nFormatID, [, argument]...);
void __cdecl FormatMessage(PCXSTR pszFormat, [, argument]...);
```

### Parameters

*`nFormatID`*\
The string resource identifier that contains the unformatted message text.

*`pszFormat`*\
Points to the format-control string. It will be scanned for inserts and formatted accordingly. The format string is similar to run-time function *printf*-style format strings, except it allows for the parameters to be inserted in an arbitrary order.

*`argument`*\
Optional arguments.

### Remarks

The function requires a message definition as input. The message definition is determined by *`pszFormat`* or from the string resource identified by *`nFormatID`*. The function copies the formatted message text to the **`CStringT`** object, processing any embedded insert sequences if requested.

> [!NOTE]
> `FormatMessage` attempts to allocate system memory for the newly formatted string. If this attempt fails, a memory exception is automatically thrown.

Each insert must have a corresponding parameter following the *`pszFormat`* or *`nFormatID`* parameter. Within the message text, several escape sequences are supported for dynamically formatting the message. For more information, see the Windows [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) function in the Windows SDK.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#118](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_13.cpp)]

## <a name="formatmessagev"></a> `CStringT::FormatMessageV`

Formats a message string using a variable argument list.

```cpp
void FormatMessageV(PCXSTR pszFormat, va_list* pArgList);
```

### Parameters

*`pszFormat`*\
Points to the format-control string. It will be scanned for inserts and formatted accordingly. The format string is similar to run-time function `printf`-style format strings, except it allows for the parameters to be inserted in an arbitrary order.

*`pArgList`*\
Pointer to a list of arguments.

### Remarks

The function requires a message definition as input, determined by *`pszFormat`*. The function copies the formatted message text and a variable list of arguments to the **`CStringT`** object, processing any embedded insert sequences if requested.

> [!NOTE]
> `FormatMessageV` calls [CStringT::FormatMessage](#formatmessage), which attempts to allocate system memory for the newly formatted string. If this attempt fails, a memory exception is automatically thrown.

For more information, see the Windows [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) function in the Windows SDK.

## <a name="formatv"></a> `CStringT::FormatV`

Formats a message string using a variable argument list.

```cpp
void FormatV(PCXSTR pszFormat, va_list args);
```

### Parameters

*`pszFormat`*\
Points to the format-control string. It will be scanned for inserts and formatted accordingly. The format string is similar to run-time function `printf`-style format strings, except it allows for the parameters to be inserted in an arbitrary order.

*`args`*\
Pointer to a list of arguments.

### Remarks

Writes a formatted string and a variable list of arguments to a **`CStringT`** string in the same way that `vsprintf_s` formats data into a C-style character array.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#119](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_14.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#120](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_15.cpp)]

## <a name="getenvironmentvariable"></a> `CStringT::GetEnvironmentVariable`

Sets the string to the value of the specified environment variable.

```cpp
BOOL GetEnvironmentVariable(PCXSTR pszVar);
```

### Parameters

*`pszVar`*\
Pointer to a null-terminated string that specifies the environment variable.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Retrieves the value of the specified variable from the environment block of the calling process. The value is in the form of a null-terminated string of characters.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#121](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_16.cpp)]

## <a name="insert"></a> `CStringT::Insert`

Inserts a single character or a substring at the given index within the string.

```cpp
int Insert(int iIndex, PCXSTR psz);
int Insert(int iIndex, XCHAR ch);
```

### Parameters

*`iIndex`*\
The index of the character before which the insertion will take place.

*`psz`*\
A pointer to the substring to be inserted.

*`ch`*\
The character to be inserted.

### Return Value

The length of the changed string.

### Remarks

The *`iIndex`* parameter identifies the first character that will be moved to make room for the character or substring. If *nIndex* is zero, the insertion will occur before the entire string. If *nIndex* is higher than the length of the string, the function will concatenate the present string and the new material provided by either *`ch`* or *`psz`*.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#122](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_17.cpp)]

## <a name="left"></a> `CStringT::Left`

Extracts the leftmost *`nCount`* characters from this **`CStringT`** object and returns a copy of the extracted substring.

```cpp
CStringT Left(int nCount) const;
```

### Parameters

*`nCount`*\
The number of characters to extract from this **`CStringT`** object.

### Return Value

A **`CStringT`** object that contains a copy of the specified range of characters. The returned **`CStringT`** object may be empty.

### Remarks

If *`nCount`* exceeds the string length, then the entire string is extracted. `Left` is similar to the Basic `Left` function.

For multi-byte character sets (MBCS), *`nCount`* treats each 8-bit sequence as a character, so that *`nCount`* returns the number of multi-byte characters multiplied by two.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#123](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_18.cpp)]

## <a name="loadstring"></a> `CStringT::LoadString`

Reads a Windows string resource, identified by *nID*, into an existing **`CStringT`** object.

```cpp
BOOL LoadString(HINSTANCE hInstance, UINT nID, WORD wLanguageID);
BOOL LoadString(HINSTANCE hInstance, UINT nID);
BOOL LoadString(UINT nID);
```

### Parameters

*`hInstance`*\
A handle to the instance of the module.

*`nID`*\
A Windows string resource ID.

*`wLanguageID`*\
The language of the string resource.

### Return Value

Nonzero if resource load was successful; otherwise 0.

### Remarks

Loads the string resource (*nID*) from the specified module (*hInstance*) using the specified language (*wLanguage*).

### Example

[!code-cpp[NVC_ATLMFC_Utilities#124](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_19.cpp)]

## <a name="makelower"></a> `CStringT::MakeLower`

Converts the **`CStringT`** object to a lowercase string.

```cpp
CStringT& MakeLower();
```

### Return Value

The resulting lowercase string.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#125](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_20.cpp)]

## <a name="makereverse"></a> `CStringT::MakeReverse`

Reverses the order of the characters in the **`CStringT`** object.

```cpp
CStringT& MakeReverse();
```

### Return Value

The resulting reversed string.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#126](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_21.cpp)]

## <a name="makeupper"></a> `CStringT::MakeUpper`

Converts the **`CStringT`** object to an uppercase string.

```cpp
CStringT& MakeUpper();
```

### Return Value

The resulting uppercase string.

### Remarks

### Example

[!code-cpp[NVC_ATLMFC_Utilities#127](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_22.cpp)]

## <a name="mid"></a> `CStringT::Mid`

Extracts a substring of length *`nCount`* characters from this **`CStringT`** object, starting at position *`iFirst`* (zero-based).

```cpp
CStringT Mid(int iFirst, int nCount) const;
CStringT Mid(int iFirst) const;
```

### Parameters

*`iFirst`*\
The zero-based index of the first character in this **`CStringT`** object that is to be included in the extracted substring.

*`nCount`*\
The number of characters to extract from this **`CStringT`** object. If this parameter is not supplied, then the remainder of the string is extracted.

### Return Value

A **`CStringT`** object that contains a copy of the specified range of characters. Note that the returned **`CStringT`** object may be empty.

### Remarks

The function returns a copy of the extracted substring. `Mid` is similar to the Basic Mid function (except that indexes in Basic are one-based).

For multibyte character sets (MBCS), *`nCount`* refers to each 8-bit character; that is, a lead and trail byte in one multibyte character are counted as two characters.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#128](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_23.cpp)]

## <a name="oemtoansi"></a> `CStringT::OemToAnsi`

Converts all the characters in this **`CStringT`** object from the OEM character set to the ANSI character set.

```cppcpp
void OemToAnsi();
```

### Remarks

This function is not available if _UNICODE is defined.

### Example

See the example for [CStringT::AnsiToOem](#ansitooem).

## <a name="operator_eq"></a> `CStringT::operator =`

Assigns a new value to the string.

```cpp
CStringT& operator=(const CStringT& strSrc);

template<bool bMFCDLL>
CStringT& operator=(const CSimpleStringT<BaseType, bMFCDLL>& str);
CStringT& operator=(PCXSTR pszSrc);
CStringT& operator=(PCYSTR pszSrc);
CStringT& operator=(const unsigned char* pszSrc);
CStringT& operator=(XCHAR ch);
CStringT& operator=(YCHAR ch);
CStringT& operator=(const VARIANT& var);
```

### Parameters

*`strSrc`*\
A **`CStringT`** to assign to this string.

*`str`*\
A reference to a `CThisSimpleString` object.

*`bMFCDLL`*\
A boolean specifying whether the project is an MFC DLL or not.

*`BaseType`*\
The string base type.

*`var`*\
A variant object to assign to this string.

*`ch`*\
An ANSI or Unicode character to assign to the string.

*`pszSrc`*\
A pointer to the original string being assigned.

### Remarks

The assignment operator accepts another **`CStringT`** object, a character pointer, or a single character. You should be aware that memory exceptions can occur whenever you use this operator because new storage can be allocated.

For information on `CThisSimpleString`, see the Remarks section of [CStringT::CStringT](#cstringt).

> [!NOTE]
> Although it is possible to create **`CStringT`** instances that contain embedded null characters, we recommend against it. Calling methods and operators on **`CStringT`** objects that contain embedded null characters can produce unintended results.

## <a name="operator_add"></a> `CStringT::operator +`

Concatenates two strings or a character and a string.

```cpp
friend CStringT operator+(const CStringT& str1, const CStringT& str2);
friend CStringT operator+(const CStringT& str1, PCXSTR psz2);
friend CStringT operator+(PCXSTR psz1, const CStringT& str2,);
friend CStringT operator+(char ch1, const CStringT& str2,);
friend CStringT operator+(const CStringT& str1, char ch2);
friend CStringT operator+(const CStringT& str1, wchar_t ch2);
friend CStringT operator+(wchar_t ch1, const CStringT& str2,);
```

### Parameters

*`ch1`*\
An ANSI or Unicode character to concatenate with a string.

*`ch2`*\
An ANSI or Unicode character to concatenate with a string.

*`str1`*\
A **`CStringT`** to concatenate with a string or character.

*`str2`*\
A **`CStringT`** to concatenate with a string or character.

*`psz1`*\
A pointer to a null-terminated string to concatenate with a string or character.

*`psz2`*\
A pointer to a string to concatenate with a string or character.

### Remarks

There are seven overload forms of the `CStringT::operator+` function. The first version concatenates two existing **`CStringT`** objects. The next two concatenate a **`CStringT`** object and a null-terminated string. The next two concatenate a **`CStringT`** object and an ANSI character. The last two concatenate a **`CStringT`** object and a Unicode character.

> [!NOTE]
> Although it is possible to create **`CStringT`** instances that contain embedded null characters, we recommend against it. Calling methods and operators on **`CStringT`** objects that contain embedded null characters can produce unintended results.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#140](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_24.cpp)]

## <a name="operator_add_eq"></a> `CStringT::operator +=`

Concatenates characters to the end of the string.

```cpp
CStringT& operator+=(const CThisSimpleString& str);

template<bool bMFCDLL>
CStringT& operator+=(const const CSimpleStringT<BaseType, bMFCDLL>& str);

template<int t_nSize>
CStringT& operator+=(const CStaticString<XCHAR, t_nSize>& strSrc);
CStringT& operator+=(PCXSTR pszSrc);
CStringT& operator+=(PCYSTR pszSrc);
CStringT& operator+=(char ch);
CStringT& operator+=(unsigned char ch);
CStringT& operator+=(wchar_t ch);
CStringT& operator+=(const VARIANT& var);
```

### Parameters

*`str`*\
A reference to a `CThisSimpleString` object.

*`bMFCDLL`*\
A boolean specifying whether the project is an MFC DLL or not.

*`BaseType`*\
The string base type.

*`var`*\
A variant object to concatenate to this string.

*`ch`*\
An ANSI or Unicode character to concatenate with a string.

*`pszSrc`*\
A pointer to the original string being concatenated.

*`strSrc`*\
A **`CStringT`** to concatenate to this string.

### Remarks

The operator accepts another **`CStringT`** object, a character pointer, or a single character. You should be aware that memory exceptions can occur whenever you use this concatenation operator because new storage can be allocated for characters added to this **`CStringT`** object.

For information on `CThisSimpleString`, see the Remarks section of [CStringT::CStringT](#cstringt).

> [!NOTE]
> Although it is possible to create **`CStringT`** instances that contain embedded null characters, we recommend against it. Calling methods and operators on **`CStringT`** objects that contain embedded null characters can produce unintended results.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#141](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_25.cpp)]

## <a name="operator_eq_eq"></a> `CStringT::operator ==`

Determines whether two strings are logically equal.

```cpp
friend bool operator==(const CStringT& str1, const CStringT& str2) throw();
friend bool operator==(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator==(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator==(const CStringT& str1, XCHAR ch2) throw();
friend bool operator==(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator==(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator==(XCHAR ch1, const CStringT& str2,) throw();
```

### Parameters

*`ch1`*\
An ANSI or Unicode character for comparison.

*`ch2`*\
An ANSI or Unicode character for comparison.

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a null-terminated string for comparison.

*`psz2`*\
A pointer to a null-terminated string for comparison.

### Remarks

Tests whether a string or character on the left side is equal to a string or character on the right side, and returns `TRUE` or `FALSE` accordingly.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#142](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_26.cpp)]

## <a name="operator_neq"></a> `CStringT::operator !=`

Determines whether two strings are logically not equal.

```cpp
friend bool operator!=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator!=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator!=(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator!=(const CStringT& str1, XCHAR ch2) throw();
friend bool operator!=(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator!=(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator!=(XCHAR ch1, const CStringT& str2,) throw();
```

### Parameters

*`ch1`*\
An ANSI or Unicode character to concatenate with a string.

*`ch2`*\
An ANSI or Unicode character to concatenate with a string.

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a null-terminated string for comparison.

*`psz2`*\
A pointer to a null-terminated string for comparison.

### Remarks

Tests if a string or character on the left side is not equal to a string or character on the right side.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#143](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_27.cpp)]

## <a name="operator_lt"></a> `CStringT::operator <`

Determines whether the string on the left side of the operator is less than the string on the right side.

```cpp
friend bool operator<(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<(PCXSTR psz1, const CStringT& str2) throw();
```

### Parameters

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a null-terminated string for comparison.

*`psz2`*\
A pointer to a null-terminated string for comparison.

### Remarks

A lexicographical comparison between strings, character by character until:

- It finds two corresponding characters unequal, and the result of their comparison is taken as the result of the comparison between the strings.

- It finds no inequalities, but one string has more characters than the other, and the shorter string is considered less than the longer string.

- It finds no inequalities and finds that the strings have the same number of characters, and so the strings are equal.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#144](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_28.cpp)]

## <a name="operator_gt"></a> `CStringT::operator >`

Determines whether the string on the left side of the operator is greater than the string on the right side.

```cpp
friend bool operator>(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>(PCXSTR psz1, const CStringT& str2) throw();
```

### Parameters

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a null-terminated string for comparison.

*`psz2`*\
A pointer to a null-terminated string for comparison.

### Remarks

A lexicographical comparison between strings, character by character until:

- It finds two corresponding characters unequal, and the result of their comparison is taken as the result of the comparison between the strings.

- It finds no inequalities, but one string has more characters than the other, and the shorter string is considered less than the longer string.

- It finds no inequalities and finds that the strings have the same number of characters, so the strings are equal.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#145](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_29.cpp)]

## <a name="operator_lt_eq"></a> `CStringT::operator <=`

Determines whether the string on the left side of the operator is less than or equal to the string on the right side.

```cpp
friend bool operator<=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<=(PCXSTR psz1, const CStringT& str2) throw();
```

### Parameters

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a null-terminated string for comparison.

*`psz2`*\
A pointer to a null-terminated string for comparison.

### Remarks

A lexicographical comparison between strings, character by character until:

- It finds two corresponding characters unequal, and the result of their comparison is taken as the result of the comparison between the strings.

- It finds no inequalities, but one string has more characters than the other, and the shorter string is considered less than the longer string.

- It finds no inequalities and finds that the strings have the same number of characters, so the strings are equal.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#146](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_30.cpp)]

## <a name="operator_gt_eq"></a> `CStringT::operator >=`

Determines whether the string on the left side of the operator is greater than or equal to the string on the right side.

```cpp
friend bool operator>=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>=(PCXSTR psz1, const CStringT& str2) throw();
```

### Parameters

*`str1`*\
A **`CStringT`** for comparison.

*`str2`*\
A **`CStringT`** for comparison.

*`psz1`*\
A pointer to a string for comparison.

*`psz2`*\
A pointer to a string for comparison.

### Remarks

A lexicographical comparison between strings, character by character until:

- It finds two corresponding characters unequal, and the result of their comparison is taken as the result of the comparison between the strings.

- It finds no inequalities, but one string has more characters than the other, and the shorter string is considered less than the longer string.

- It finds no inequalities and finds that the strings have the same number of characters, so the strings are equal.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#147](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_31.cpp)]

## <a name="remove"></a> `CStringT::Remove`

Removes all instances of the specified character from the string.

```cpp
int Remove(XCHAR chRemove);
```

### Parameters

*`chRemove`*\
The character to be removed from a string.

### Return Value

The count of characters removed from the string. Zero if the string is not changed.

### Remarks

Comparisons for the character are case-sensitive.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#129](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_32.cpp)]

## <a name="replace"></a> `CStringT::Replace`

There are two versions of `Replace`.The first version replaces one or more copies of a substring by using another substring. Both substrings are null-terminated. The second version replaces one or more copies of a character by using another character. Both versions operate on the character data stored in **`CStringT`**.

```cpp
int Replace(PCXSTR pszOld, PCXSTR pszNew);
int Replace(XCHAR chOld, XCHAR chNew);
```

### Parameters

*`pszOld`*\
A pointer to a null-terminated string to be replaced by *`pszNew`*.

*`pszNew`*\
A pointer to a null-terminated string that replaces *`pszOld`*.

*`chOld`*\
The character to be replaced by *`chNew`*.

*`chNew`*\
The character replacing *`chOld`*.

### Return Value

Returns the number of replaced instances of the character or substring, or zero if the string is not changed.

### Remarks

`Replace` can change the string length because *`pszNew`* and *`pszOld`* do not have to be the same length, and several copies of the old substring can be changed to the new one. The function performs a case-sensitive match.

Examples of **`CStringT`** instances are `CString`, `CStringA`, and `CStringW`.

For `CStringA`, `Replace` works with ANSI or multibyte (MBCS) characters. For `CStringW`, `Replace` works with wide characters.

For `CString`, the character data type is selected at compile time, based on whether the constants in the following table are defined.

|Defined Constant|Character Data Type|
|----------------------|-------------------------|
|_UNICODE|Wide characters|
|_MBCS|Multi-byte characters|
|Neither|Single-byte characters|
|Both|Undefined|

### Example

[!code-cpp[NVC_ATLMFC_Utilities#200](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_33.cpp)]

## <a name="reversefind"></a> `CStringT::ReverseFind`

Searches this **`CStringT`** object for the last match of a character.

```cpp
int ReverseFind(XCHAR ch) const throw();
```

### Parameters

*`ch`*\
The character to search for.

### Return Value

The zero-based index of the last character in this **`CStringT`** object that matches the requested character, or -1 if the character is not found.

### Remarks

The function is similar to the run-time function `strrchr`.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#130](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_34.cpp)]

## <a name="right"></a> `CStringT::Right`

Extracts the last (that is, rightmost) *`nCount`* characters from this **`CStringT`** object and returns a copy of the extracted substring.

```cpp
CStringT Right(int nCount) const;
```

### Parameters

*`nCount`*\
The number of characters to extract from this **`CStringT`** object.

### Return Value

A **`CStringT`** object that contains a copy of the specified range of characters. Note that the returned **`CStringT`** object can be empty.

### Remarks

If *`nCount`* exceeds the string length, then the entire string is extracted. `Right` is similar to the Basic `Right` function (except that indexes in Basic are zero-based).

For multibyte character sets (MBCS), *`nCount`* refers to each 8-bit character; that is, a lead and trail byte in one multibyte character are counted as two characters.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#131](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_35.cpp)]

## <a name="setsysstring"></a> `CStringT::SetSysString`

Reallocates the **`BSTR`** pointed to by *`pbstr`* and copies the contents of the **`CStringT`** object into it, including the NULL character.

```cpp
BSTR SetSysString(BSTR* pbstr) const;
```

### Parameters

*`pbstr`*\
A pointer to a character string.

### Return Value

The new string.

### Remarks

Depending on the contents of the **`CStringT`** object, the value of the **`BSTR`** referenced by *`pbstr`* can change. The function throws a `CMemoryException` if insufficient memory exists.

This function is normally used to change the value of strings passed by reference for Automation.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#132](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_36.cpp)]

## <a name="spanexcluding"></a> `CStringT::SpanExcluding`

Extracts characters from the string, starting with the first character, that are not in the set of characters identified by *`pszCharSet`*.

```cpp
CStringT SpanExcluding(PCXSTR pszCharSet) const;
```

### Parameters

*`pszCharSet`*\
A string interpreted as a set of characters.

### Return Value

A substring that contains characters in the string that are not in *`pszCharSet`*, beginning with the first character in the string and ending with the first character found in the string that is also in *`pszCharSet`* (that is, starting with the first character in the string and up to but excluding the first character in the string that is found *`pszCharSet`*). It returns the entire string if no character in *`pszCharSet`* is found in the string.

### Remarks

`SpanExcluding` extracts and returns all characters preceding the first occurrence of a character from *`pszCharSet`* (in other words, the character from *`pszCharSet`* and all characters following it in the string, are not returned). If no character from *`pszCharSet`* is found in the string, then `SpanExcluding` returns the entire string.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#133](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_37.cpp)]

## <a name="spanincluding"></a> `CStringT::SpanIncluding`

Extracts characters from the string, starting with the first character, that are in the set of characters identified by *`pszCharSet`*.

```cpp
CStringT SpanIncluding(PCXSTR pszCharSet) const;
```

### Parameters

*`pszCharSet`*\
A string interpreted as a set of characters.

### Return Value

A substring that contains characters in the string that are in *`pszCharSet`*, beginning with the first character in the string and ending when a character is found in the string that is not in *`pszCharSet`*. `SpanIncluding` returns an empty substring if the first character in the string is not in the specified set.

### Remarks

If the first character of the string is not in the character set, then `SpanIncluding` returns an empty string. Otherwise, it returns a sequence of consecutive characters that are in the set.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#134](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_38.cpp)]

## <a name="tokenize"></a> `CStringT::Tokenize`

Finds the next token in a target string

```cpp
CStringT Tokenize(PCXSTR pszTokens, int& iStart) const;
```

### Parameters

*`pszTokens`*\
A string containing token delimiters. The order of these delimiters is not important.

*`iStart`*\
The zero-based index to begin the search.

### Return Value

A **`CStringT`** object containing the current token value.

### Remarks

The `Tokenize` function finds the next token in the target string. The set of characters in *pszTokens* specifies possible delimiters of the token to be found. On each call to `Tokenize` the function starts at *`iStart`*, skips leading delimiters, and returns a **`CStringT`** object containing the current token, which is the string of characters up to the next delimiter character. The value of *`iStart`* is updated to be the position following the ending delimiter character, or -1 if the end of the string was reached. More tokens can be broken out of the remainder of the target string by a series of calls to `Tokenize`, using *`iStart`* to keep track of where in the string the next token is to be read. When there are no more tokens the function will return an empty string and *`iStart`* will be set to -1.

Unlike the CRT tokenize functions like [`strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l`](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md), `Tokenize` does not modify the target string.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#135](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_39.cpp)]

### Remarks

The output from this example is as follows:

```Output
Resulting Token: First
Resulting Token: Second
Resulting Token: Third
```

## <a name="trim"></a> `CStringT::Trim`

Trims leading and trailing characters from the string.

```cpp
CStringT& Trim(XCHAR chTarget);
CStringT& Trim(PCXSTR pszTargets);
CStringT& Trim();
```

### Parameters

*`chTarget`*\
The target character to be trimmed.

*`pszTargets`*\
A pointer to a string containing the target characters to be trimmed. All leading and trailing occurrences of characters in *`pszTargets`* will be trimmed from the **`CStringT`** object.

### Return Value

Returns the trimmed string.

### Remarks

Removes all leading and trailing occurrences of one of the following:

- The character specified by *`chTarget`*.

- All characters found in the string specified by *`pszTargets`*.

- Whitespace.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#136](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_40.cpp)]

### Remarks

The output from this example is as follows:

```Output
Before: "******Soccer is best, but liquor is quicker!!!!!"
After : "Soccer is best, but liquor is quicker"
```

## <a name="trimleft"></a> `CStringT::TrimLeft`

Trims leading characters from the string.

```cpp
CStringT& TrimLeft(XCHAR chTarget);
CStringT& TrimLeft(PCXSTR pszTargets);
CStringT& TrimLeft();
```

### Parameters

*`chTarget`*\
The target character to be trimmed.

*`pszTargets`*\
A pointer to a string containing the target characters to be trimmed. All leading occurrences of characters in *`pszTargets`* will be trimmed from the **`CStringT`** object.

### Return Value

The resulting trimmed string.

### Remarks

Removes all leading and trailing occurrences of one of the following:

- The character specified by *`chTarget`*.

- All characters found in the string specified by *`pszTargets`*.

- Whitespace.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#137](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_41.cpp)]

## <a name="trimright"></a> `CStringT::TrimRight`

Trims trailing characters from the string.

```cpp
CStringT& TrimRight(XCHAR chTarget);
CStringT& TrimRight(PCXSTR pszTargets);
CStringT& TrimRight();
```

### Parameters

*`chTarget`*\
The target character to be trimmed.

*`pszTargets`*\
A pointer to a string containing the target characters to be trimmed. All trailing occurrences of characters in *`pszTargets`* will be trimmed from the **`CStringT`** object.

### Return Value

Returns the **`CStringT`** object that contains the trimmed string.

### Remarks

Removes trailing occurrences of one of the following:

- The character specified by *`chTarget`*.

- All characters found in the string specified by *`pszTargets`*.

- Whitespace.

The `CStringT& TrimRight(XCHAR chTarget)` version accepts one character parameter and removes all copies of that character from the end of **`CStringT`** string data. It starts from the end of the string and works toward the front. It stops when it finds a different character or when **`CStringT`** runs out of character data.

The `CStringT& TrimRight(PCXSTR pszTargets)` version accepts a null-terminated string that contains all the different characters to search for. It removes all copies of those characters in the **`CStringT`** object. It starts at the end of the string and works toward the front. It stops when it finds a character that is not in the target string, or when **`CStringT`** runs out of character data. It does not try to match the whole target string to a substring at the end of **`CStringT`**.

The `CStringT& TrimRight()` version requires no parameters. It trims any trailing whitespace characters from the end of the **`CStringT`** string. Whitespace characters can be line breaks, spaces, or tabs.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#138](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_42.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)\
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)\
[CSimpleStringT Class](../../atl-mfc-shared/reference/csimplestringt-class.md)
