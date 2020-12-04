---
description: "Learn more about: CSimpleStringT Class"
title: "CSimpleStringT Class"
ms.date: "10/18/2018"
f1_keywords: ["CSimpleStringT", "ATLSIMPSTR/ATL::CSimpleStringT", "ATLSIMPSTR/ATL::CSimpleStringT::PCXSTR", "ATLSIMPSTR/ATL::CSimpleStringT::PXSTR", "ATLSIMPSTR/ATL::CSimpleStringT::CSimpleStringT", "ATLSIMPSTR/ATL::CSimpleStringT::Append", "ATLSIMPSTR/ATL::CSimpleStringT::AppendChar", "ATLSIMPSTR/ATL::CSimpleStringT::CopyChars", "ATLSIMPSTR/ATL::CSimpleStringT::CopyCharsOverlapped", "ATLSIMPSTR/ATL::CSimpleStringT::Empty", "ATLSIMPSTR/ATL::CSimpleStringT::FreeExtra", "ATLSIMPSTR/ATL::CSimpleStringT::GetAllocLength", "ATLSIMPSTR/ATL::CSimpleStringT::GetAt", "ATLSIMPSTR/ATL::CSimpleStringT::GetBuffer", "ATLSIMPSTR/ATL::CSimpleStringT::GetBufferSetLength", "ATLSIMPSTR/ATL::CSimpleStringT::GetLength", "ATLSIMPSTR/ATL::CSimpleStringT::GetManager", "ATLSIMPSTR/ATL::CSimpleStringT::GetString", "ATLSIMPSTR/ATL::CSimpleStringT::IsEmpty", "ATLSIMPSTR/ATL::CSimpleStringT::LockBuffer", "ATLSIMPSTR/ATL::CSimpleStringT::Preallocate", "ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBuffer", "ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBufferSetLength", "ATLSIMPSTR/ATL::CSimpleStringT::SetAt", "ATLSIMPSTR/ATL::CSimpleStringT::SetManager", "ATLSIMPSTR/ATL::CSimpleStringT::SetString", "ATLSIMPSTR/ATL::CSimpleStringT::StringLength", "ATLSIMPSTR/ATL::CSimpleStringT::Truncate", "ATLSIMPSTR/ATL::CSimpleStringT::UnlockBuffer"]
helpviewer_keywords: ["shared classes, CSimpleStringT", "strings [C++], ATL class", "CSimpleStringT class"]
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
---
# CSimpleStringT Class

This class represents a `CSimpleStringT` object.

## Syntax

```
template <typename BaseType>
class CSimpleStringT
```

### Parameters

*BaseType*<br/>
The character type of the string class. Can be one of the following:

- **`char`** (for ANSI character strings).

- **`wchar_t`** (for Unicode character strings).

- TCHAR (for both ANSI and Unicode character strings).

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CSimpleStringT::PCXSTR](#pcxstr)|A pointer to a constant string.|
|[CSimpleStringT::PXSTR](#pxstr)|A pointer to a string.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSimpleStringT::CSimpleStringT](#ctor)|Constructs `CSimpleStringT` objects in various ways.|
|[CSimpleStringT::~CSimpleStringT](#dtor)|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleStringT::Append](#append)|Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.|
|[CSimpleStringT::AppendChar](#appendchar)|Appends a character to an existing `CSimpleStringT` object.|
|[CSimpleStringT::CopyChars](#copychars)|Copies a character or characters to another string.|
|[CSimpleStringT::CopyCharsOverlapped](#copycharsoverlapped)|Copies a character or characters to another string in which the buffers overlap.|
|[CSimpleStringT::Empty](#empty)|Forces a string to have a length of zero.|
|[CSimpleStringT::FreeExtra](#freeextra)|Frees any extra memory previously allocated by the string object.|
|[CSimpleStringT::GetAllocLength](#getalloclength)|Retrieves the allocated length of a `CSimpleStringT` object.|
|[CSimpleStringT::GetAt](#getat)|Returns the character at a given position.|
|[CSimpleStringT::GetBuffer](#getbuffer)|Returns a pointer to the characters in a `CSimpleStringT`.|
|[CSimpleStringT::GetBufferSetLength](#getbuffersetlength)|Returns a pointer to the characters in a `CSimpleStringT`, truncating to the specified length.|
|[CSimpleStringT::GetLength](#getlength)|Returns the number of characters in a `CSimpleStringT` object.|
|[CSimpleStringT::GetManager](#getmanager)|Retrieves the memory manager of the `CSimpleStringT` object.|
|[CSimpleStringT::GetString](#getstring)|Retrieves the character string|
|[CSimpleStringT::IsEmpty](#isempty)|Tests whether a `CSimpleStringT` object contains no characters.|
|[CSimpleStringT::LockBuffer](#lockbuffer)|Disables reference counting and protects the string in the buffer.|
|[CSimpleStringT::Preallocate](#preallocate)|Allocates a specific amount of memory for the character buffer.|
|[CSimpleStringT::ReleaseBuffer](#releasebuffer)|Releases control of the buffer returned by `GetBuffer`.|
|[CSimpleStringT::ReleaseBufferSetLength](#releasebuffersetlength)|Releases control of the buffer returned by `GetBuffer`.|
|[CSimpleStringT::SetAt](#setat)|Sets a character at a given position.|
|[CSimpleStringT::SetManager](#setmanager)|Sets the memory manager of a `CSimpleStringT` object.|
|[CSimpleStringT::SetString](#setstring)|Sets the string of a `CSimpleStringT` object.|
|[CSimpleStringT::StringLength](#stringlength)|Returns the number of characters in the specified string.|
|[CSimpleStringT::Truncate](#truncate)|Truncates the string to a specified length.|
|[CSimpleStringT::UnlockBuffer](#unlockbuffer)|Enables reference counting and releases the string in the buffer.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CSimpleStringT::operator PCXSTR](#operator_pcxstr)|Directly accesses characters stored in a `CSimpleStringT` object as a C-style string.|
|[CSimpleStringT::operator\[\]](#operator_at)|Returns the character at a given position — operator substitution for `GetAt`.|
|[CSimpleStringT::operator +=](#operator_add_eq)|Concatenates a new string to the end of an existing string.|
|[CSimpleStringT::operator =](#operator_eq)|Assigns a new value to a `CSimpleStringT` object.|

### Remarks

`CSimpleStringT` is the base class for the various string classes supported by Visual C++. It provides minimal support for memory management of the string object and basic buffer manipulation. For more advanced string objects, see [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md).

### Requirements

**Header:** atlsimpstr.h

## <a name="append"></a> CSimpleStringT::Append

Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.

### Syntax

```cpp
void Append(const CSimpleStringT& strSrc);
void Append(PCXSTR pszSrc, int nLength);
void Append(PCXSTR pszSrc);
```

#### Parameters

*strSrc*<br/>
The `CSimpleStringT` object to be appended.

*pszSrc*<br/>
A pointer to a string containing the characters to be appended.

*nLength*<br/>
The number of characters to append.

### Remarks

Call this method to append an existing `CSimpleStringT` object to another `CSimpleStringT` object.

### Example

The following example demonstrates the use of `CSimpleStringT::Append`.

```cpp
CSimpleString str1(pMgr), str2(pMgr);
str1.SetString(_T("Soccer is"));
str2.SetString(_T(" an elegant game"));
str1.Append(str2);
ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
```

## <a name="appendchar"></a> CSimpleStringT::AppendChar

Appends a character to an existing `CSimpleStringT` object.

### Syntax

```cpp
void AppendChar(XCHAR ch);
```

#### Parameters

*ch*<br/>
The character to be appended

### Remarks

Call this function to append the specified character to the end of an existing `CSimpleStringT` object.

## <a name="copychars"></a> CSimpleStringT::CopyChars

Copies a character or characters to a `CSimpleStringT` object.

### Syntax

```
static void CopyChars(
    XCHAR* pchDest,
    const XCHAR* pchSrc,
    int nChars) throw();
```

#### Parameters

*pchDest*<br/>
A pointer to a character string.

*pchSrc*<br/>
A pointer to a string containing the characters to be copied.

*nChars*<br/>
The number of *pchSrc* characters to be copied.

### Remarks

Call this method to copy characters from *pchSrc* to the *pchDest* string.

### Example

The following example demonstrates the use of `CSimpleStringT::CopyChars`.

```cpp
CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
TCHAR* pszSrc = _T("Hello world!");
_tprintf_s(_T("%s\n"), str);
str.CopyChars(str.GetBuffer(), pszSrc, 12);
_tprintf_s(_T("%s\n"), str);
```

## <a name="copycharsoverlapped"></a> CSimpleStringT::CopyCharsOverlapped

Copies a character or characters to a `CSimpleStringT` object.

### Syntax

```
static void CopyCharsOverlapped(
    XCHAR* pchDest,
    const XCHAR* pchSrc,
    int nChars) throw();
```

#### Parameters

*pchDest*<br/>
A pointer to a character string.

*pchSrc*<br/>
A pointer to a string containing the characters to be copied.

*nChars*<br/>
The number of *pchSrc* characters to be copied.

### Remarks

Call this method to copy characters from *pchSrc* to the *pchDest* string. Unlike `CopyChars`, `CopyCharsOverlapped` provides a safe method for copying from character buffers that might be overlapped.

### Example

See the example for [CSimpleStringT::CopyChars](#copychars), or the source code for `CSimpleStringT::SetString` (located in atlsimpstr.h).

## <a name="ctor"></a> CSimpleStringT::CSimpleStringT

Constructs a `CSimpleStringT` object.

### Syntax

```
CSimpleStringT(const XCHAR* pchSrc, int nLength, IAtlStringMgr* pStringMgr);
CSimpleStringT(PCXSTR pszSrc, IAtlStringMgr* pStringMgr);
CSimpleStringT(const CSimpleStringT& strSrc);
explicit CSimpleStringT(IAtlStringMgr* pStringMgr) throw();
```

#### Parameters

*strSrc*<br/>
An existing `CSimpleStringT` object to be copied into this `CSimpleStringT` object.

*pchSrc*<br/>
A pointer to an array of characters of length *nLength*, not null terminated.

*pszSrc*<br/>
A null-terminated string to be copied into this `CSimpleStringT` object.

*nLength*<br/>
A count of the number of characters in `pch`.

*pStringMgr*<br/>
A pointer to the memory manager of the `CSimpleStringT` object. For more information about `IAtlStringMgr` and memory management for `CSimpleStringT`, see [Memory Management and CStringT](../memory-management-with-cstringt.md).

### Remarks

Construct a new `CSimpleStringT` object. Because the constructors copy the input data into new allocated storage, memory exceptions may result.

### Example

The following example demonstrates the use of `CSimpleStringT::CSimpleStringT` by using the ATL **`typedef`** `CSimpleString`. `CSimpleString` is a commonly used specialization of the class template `CSimpleStringT`.

```cpp
CSimpleString s1(pMgr);
// Empty string
CSimpleString s2(_T("cat"), pMgr);
// From a C string literal

CSimpleString s3(s2);
// Copy constructor
CSimpleString s4(s2 + _T(" ") + s3);

// From a string expression
CSimpleString s5(_T("xxxxxx"), 6, pMgr);
// s5 = "xxxxxx"
```

## <a name="empty"></a> CSimpleStringT::Empty

Makes this `CSimpleStringT` object an empty string and frees memory as appropriate.

### Syntax

```cpp
void Empty() throw();
```

### Remarks

For more information, see [Strings: CString Exception Cleanup](../cstring-exception-cleanup.md).

### Example

The following example demonstrates the use of `CSimpleStringT::Empty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="freeextra"></a> CSimpleStringT::FreeExtra

Frees any extra memory previously allocated by the string but no longer needed.

### Syntax

```cpp
void FreeExtra();
```

### Remarks

This should reduce the memory overhead consumed by the string object. The method reallocates the buffer to the exact length returned by [GetLength](#getlength).

### Example

```cpp
CAtlString basestr;
IAtlStringMgr* pMgr;

pMgr= basestr.GetManager();
ASSERT(pMgr != NULL);

// Create a CSimpleString with 28 characters
CSimpleString str(_T("Many sports are fun to play."), 28, pMgr);
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// Assigning a smaller string won't cause CSimpleString to free its
// memory, because it assumes the string will grow again anyway.
str = _T("Soccer is best!");
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// This call forces CSimpleString to release the extra
// memory it doesn't need.
str.FreeExtra();
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());
```

### Remarks

The output from this example is as follows:

```Output
Alloc length is 1031, String length is 1024
Alloc length is 1031, String length is 15
Alloc length is 15, String length is 15
```

## <a name="getalloclength"></a> CSimpleStringT::GetAllocLength

Retrieves the allocated length of a `CSimpleStringT` object.

### Syntax

```
int GetAllocLength() const throw();
```

### Return Value

The number of characters allocated for this object.

### Remarks

Call this method to determine the number of characters allocated for this `CSimpleStringT` object. See [FreeExtra](#freeextra) for an example of calling this function.

## <a name="getat"></a> CSimpleStringT::GetAt

Returns one character from a `CSimpleStringT` object.

### Syntax

```
XCHAR GetAt(int iChar) const;
```

#### Parameters

*iChar*<br/>
Zero-based index of the character in the `CSimpleStringT` object. The *iChar* parameter must be greater than or equal to 0 and less than the value returned by [GetLength](#getlength). Otherwise, `GetAt` will generate an exception.

### Return Value

An `XCHAR` that contains the character at the specified position in the string.

### Remarks

Call this method to return the one character specified by *iChar*. The overloaded subscript (**[]**) operator is a convenient alias for `GetAt`. The null terminator is addressable without generating an exception by using `GetAt`. However, it is not counted by `GetLength`, and the value returned is 0.

### Example

The following example demonstrates how to use `CSimpleStringT::GetAt`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(s.GetAt(2) == _T('c'));
```

## <a name="getbuffer"></a> CSimpleStringT::GetBuffer

Returns a pointer to the internal character buffer for the `CSimpleStringT` object.

### Syntax

```
PXSTR GetBuffer(int nMinBufferLength);
PXSTR GetBuffer();
```

#### Parameters

*nMinBufferLength*<br/>
The minimum number of characters that the character buffer can hold. This value does not include space for a null terminator.

If *nMinBufferLength* is larger than the length of the current buffer, `GetBuffer` destroys the current buffer, replaces it with a buffer of the requested size, and resets the object reference count to zero. If you have previously called [LockBuffer](#lockbuffer) on this buffer, you lose the buffer lock.

### Return Value

An `PXSTR` pointer to the object's (null-terminated) character buffer.

### Remarks

Call this method to return the buffer contents of the `CSimpleStringT` object. The returned `PXSTR` is not a constant and therefore allows direct modification of `CSimpleStringT` contents.

If you use the pointer returned by `GetBuffer` to change the string contents, you must call [ReleaseBuffer](#releasebuffer) before you use any other `CSimpleStringT` member methods.

The address returned by `GetBuffer` may not be valid after the call to `ReleaseBuffer` because additional `CSimpleStringT` operations can cause the `CSimpleStringT` buffer to be reallocated. The buffer is not reallocated if you do not change the length of the `CSimpleStringT`.

The buffer memory is automatically freed when the `CSimpleStringT` object is destroyed.

If you keep track of the string length yourself, you should not append the terminating null character. However, you must specify the final string length when you release the buffer with `ReleaseBuffer`. If you do append a terminating null character, you should pass -1 (the default) for the length. `ReleaseBuffer` then determines the buffer length.

If there is insufficient memory to satisfy the `GetBuffer` request, this method throws a CMemoryException*.

### Example

```cpp
CSimpleString s(_T("abcd"), pMgr);
LPTSTR pBuffer = s.GetBuffer(10);
int sizeOfBuffer = s.GetAllocLength();

// Directly access CSimpleString buffer
_tcscpy_s(pBuffer, sizeOfBuffer, _T("Hello"));
ASSERT(_tcscmp(s, _T("Hello")) == 0);
s.ReleaseBuffer();
```

## <a name="getbuffersetlength"></a> CSimpleStringT::GetBufferSetLength

Returns a pointer to the internal character buffer for the `CSimpleStringT` object, truncating or growing its length if necessary to exactly match the length specified in *nLength*.

### Syntax

```
PXSTR GetBufferSetLength(int nLength);
```

#### Parameters

*nLength*<br/>
The exact size of the `CSimpleStringT` character buffer in characters.

### Return Value

A `PXSTR` pointer to the object's (null-terminated) character buffer.

### Remarks

Call this method to retrieve a specified length of the internal buffer of the `CSimpleStringT` object. The returned `PXSTR` pointer is not **`const`** and thus allows direct modification of `CSimpleStringT` contents.

If you use the pointer returned by [GetBufferSetLength](#getbuffersetlength) to change the string contents, call `ReleaseBuffer` to update the internal state of `CsimpleStringT` before you use any other `CSimpleStringT` methods.

The address returned by `GetBufferSetLength` may not be valid after the call to `ReleaseBuffer` because additional `CSimpleStringT` operations can cause the `CSimpleStringT` buffer to be reallocated. The buffer is not reassigned if you do not change the length of the `CSimpleStringT`.

The buffer memory is automatically freed when the `CSimpleStringT` object is destroyed.

If you keep track of the string length yourself, do not append the terminating null character. You must specify the final string length when you release the buffer by using `ReleaseBuffer`. If you do append a terminating null character when you call `ReleaseBuffer`, pass -1 (the default) for the length to `ReleaseBuffer`, and `ReleaseBuffer` will perform a `strlen` on the buffer to determine its length.

For more information about reference counting, see the following articles:

- [Managing Object Lifetimes through Reference Counting](/windows/win32/com/managing-object-lifetimes-through-reference-counting) in the Windows SDK.

- [Implementing Reference Counting](/windows/win32/com/implementing-reference-counting) in the Windows SDK.

- [Rules for Managing Reference Counts](/windows/win32/com/rules-for-managing-reference-counts) in the Windows SDK.

### Example

The following example demonstrates the use of `CSimpleStringT::GetBufferSetLength`.

```cpp
CSimpleString str(pMgr);
LPTSTR pstr = str.GetBufferSetLength(3);
pstr[0] = _T('C');
pstr[1] = _T('u');
pstr[2] = _T('p');

// No need for trailing zero or call to ReleaseBuffer()
// because GetBufferSetLength() set it for us.

str += _T(" soccer is best!");
ASSERT(_tcscmp(str, _T("Cup soccer is best!")) == 0);
```

## <a name="getlength"></a> CSimpleStringT::GetLength

Returns the number of characters in the `CSimpleStringT` object.

### Syntax

```
int GetLength() const throw();
```

### Return Value

A count of the characters in the string.

### Remarks

Call this method to return the number of characters in the object. The count does not include a null terminator.

For multibyte character sets (MBCS), `GetLength` counts each 8-bit character; that is, a lead and trail byte in one multibyte character are counted as two bytes. See [FreeExtra](#freeextra) for an example of calling this function.

## <a name="getmanager"></a> CSimpleStringT::GetManager

Retrieves the memory manager of the `CSimpleStringT` object.

### Syntax

```
IAtlStringMgr* GetManager() const throw();
```

### Return Value

A pointer to the memory manager for the `CSimpleStringT` object.

### Remarks

Call this method to retrieve the memory manager used by the `CSimpleStringT` object. For more information on memory managers and string objects, see [Memory Management and CStringT](../memory-management-with-cstringt.md).

## <a name="getstring"></a> CSimpleStringT::GetString

Retrieves the character string.

### Syntax

```
PCXSTR GetString() const throw();
```

### Return Value

A pointer to a null-terminated character string.

### Remarks

Call this method to retrieve the character string associated with the `CSimpleStringT` object.

> [!NOTE]
> The returned `PCXSTR` pointer is **`const`** and does not allow direct modification of `CSimpleStringT` contents.

### Example

The following example demonstrates the use of `CSimpleStringT::GetString`.

```cpp
CSimpleString str(pMgr);
str += _T("Cup soccer is best!");
_tprintf_s(_T("%s"), str.GetString());
```

## <a name="isempty"></a> CSimpleStringT::IsEmpty

Tests a `CSimpleStringT` object for the empty condition.

### Syntax

```
bool IsEmpty() const throw();
```

### Return Value

Returns TRUE if the `CSimpleStringT` object has 0 length; otherwise FALSE.

### Remarks

Call this method to determine if the object contains an empty string.

### Example

The following example demonstrates the use of `CSimpleStringT::IsEmpty`.

```cpp
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```

## <a name="lockbuffer"></a> CSimpleStringT::LockBuffer

Disables reference counting and protects the string in the buffer.

### Syntax

```
PXSTR LockBuffer();
```

### Return Value

A pointer to a `CSimpleStringT` object or a null-terminated string.

### Remarks

Call this method to lock the buffer of the `CSimpleStringT` object. By calling `LockBuffer`, you create a copy of the string, with a -1 for the reference count. When the reference count value is -1, the string in the buffer is considered to be in a "locked" state. While in a locked state, the string is protected in two ways:

- No other string can get a reference to the data in the locked string, even if that string is assigned to the locked string.

- The locked string will never reference another string, even if that other string is copied to the locked string.

By locking the string in the buffer, you ensure that the string's exclusive hold on the buffer will remain intact.

After you have finished with `LockBuffer`, call [UnlockBuffer](#unlockbuffer) to reset the reference count to 1.

> [!NOTE]
> If you call [GetBuffer](#getbuffer) on a locked buffer and you set the `GetBuffer` parameter `nMinBufferLength` to greater than the length of the current buffer, you will lose the buffer lock. Such a call to `GetBuffer` destroys the current buffer, replaces it with a buffer of the requested size, and resets the reference count to zero.

For more information about reference counting, see the following articles:

- [Managing Object Lifetimes through Reference Counting](/windows/win32/com/managing-object-lifetimes-through-reference-counting) in the Windows SDK

- [Implementing Reference Counting](/windows/win32/com/implementing-reference-counting) in the Windows SDK

- [Rules for Managing Reference Counts](/windows/win32/com/rules-for-managing-reference-counts) in the Windows SDK

### Example

The following example demonstrates the use of `CSimpleStringT::LockBuffer`.

```cpp
CSimpleString str(_T("Hello"), pMgr);
TCHAR ch;

str.LockBuffer();
ch = str.GetAt(2);
_tprintf_s(_T("%c"), ch);
str.UnlockBuffer();
```

## <a name="operator_at"></a> CSimpleStringT::operator\[\]

Call this function to access a single character of the character array.

### Syntax

```
XCHAR operator[](int iChar) const;
```

#### Parameters

*iChar*<br/>
Zero-based index of a character in the string.

### Remarks

The overloaded subscript (**[]**) operator returns a single character specified by the zero-based index in *iChar*. This operator is a convenient substitute for the [GetAt](#getat) member function.

> [!NOTE]
> You can use the subscript (**[]**) operator to get the value of a character in a `CSimpleStringT`, but you cannot use it to change the value of a character in a `CSimpleStringT`.

### Example

The following example demonstrates the use of `CSimpleStringT::operator []`.

```cpp
CSimpleString s(_T("abc"), pMgr);
ASSERT(s[1] == _T('b'));
```

## <a name="operator_at"></a> CSimpleStringT::operator \[\]

Call this function to access a single character of the character array.

### Syntax

```
XCHAR operator[](int iChar) const;
```

### Parameters

*iChar*<br/>
Zero-based index of a character in the string.

### Remarks

The overloaded subscript (**[]**) operator returns a single character specified by the zero-based index in *iChar*. This operator is a convenient substitute for the [GetAt](#getat) member function.

> [!NOTE]
> You can use the subscript (**[]**) operator to get the value of a character in a `CSimpleStringT`, but you cannot use it to change the value of a character in a `CSimpleStringT`.

## <a name="operator_add_eq"></a> CSimpleStringT::operator +=

Joins a new string or character to the end of an existing string.

### Syntax

```
CSimpleStringT& operator +=(PCXSTR pszSrc);
CSimpleStringT& operator +=(const CSimpleStringT& strSrc);
template<int t_nSize>
CSimpleStringT& operator+=(const CStaticString< XCHAR, t_nSize >& strSrc);
CSimpleStringT& operator +=(char ch);
CSimpleStringT& operator +=(unsigned char ch);
CSimpleStringT& operator +=(wchar_t ch);
```

#### Parameters

*pszSrc*<br/>
A pointer to a null-terminated string.

*strSrc*<br/>
A pointer to an existing `CSimpleStringT` object.

*ch*<br/>
The character to be appended.

### Remarks

The operator accepts another `CSimpleStringT` object or a character. Note that memory exceptions may occur whenever you use this concatenation operator because new storage may be allocated for characters added to this `CSimpleStringT` object.

### Example

The following example demonstrates the use of `CSimpleStringT::operator +=`.

```cpp
CSimpleString str(_T("abc"), pMgr);
ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);
```

## <a name="operator_eq"></a> CSimpleStringT::operator =

Assigns a new value to a `CSimpleStringT` object.

### Syntax

```
CSimpleStringT& operator =(PCXSTR pszSrc);
CSimpleStringT& operator =(const CSimpleStringT& strSrc);
```

#### Parameters

*pszSrc*<br/>
A pointer to a null-terminated string.

*strSrc*<br/>
A pointer to an existing `CSimpleStringT` object.

### Remarks

If the destination string (the left side) is already large enough to store the new data, no new memory allocation is performed. Note that memory exceptions may occur whenever you use the assignment operator because new storage is often allocated to hold the resulting `CSimpleStringT` object.

### Example

The following example demonstrates the use of `CSimpleStringT::operator =`.

```cpp
CSimpleString s1(pMgr), s2(pMgr);
// Empty CSimpleStringT objects

s1 = _T("cat");
// s1 = "cat"
ASSERT(_tcscmp(s1, _T("cat")) == 0);

s2 = s1;               // s1 and s2 each = "cat"
ASSERT(_tcscmp(s2, _T("cat")) == 0);

s1 = _T("the ") + s1;
// Or expressions
ASSERT(_tcscmp(s1, _T("the cat")) == 0);

s1 = _T("x");
// Or just individual characters
ASSERT(_tcscmp(s1, _T("x")) == 0);
```

## <a name="operator_pcxstr"></a> CSimpleStringT::operator PCXSTR

Directly accesses characters stored in a `CSimpleStringT` object as a C-style string.

### Syntax

```
operator PCXSTR() const throw();
```

### Return Value

A character pointer to the string's data.

### Remarks

No characters are copied; only a pointer is returned. Be careful with this operator. If you change a `CString` object after you have obtained the character pointer, you may cause a reallocation of memory that invalidates the pointer.

### Example

The following example demonstrates the use of `CSimpleStringT::operator PCXSTR`.

```cpp
// If the prototype of a function is known to the compiler,
// the PCXSTR cast operator may be invoked implicitly.

CSimpleString strSports(L"Soccer is Best!", pMgr);
WCHAR sz[1024];

wcscpy_s(sz, strSports);

// If the prototype isn't known or is a va_arg prototype,
// you must invoke the cast operator explicitly. For example,
// the va_arg part of a call to swprintf_s() needs the cast:

swprintf_s(sz, 1024, L"I think that %s!\n", (PCWSTR)strSports);

// While the format parameter is known to be an PCXSTR and
// therefore doesn't need the cast:

swprintf_s(sz, 1024, strSports);

// Note that some situations are ambiguous. This line will
// put the address of the strSports object to stdout:

wcout << strSports;

// while this line will put the content of the string out:

wcout << (PCWSTR)strSports;
```

## <a name="pcxstr"></a> CSimpleStringT::PCXSTR

A pointer to a constant string.

### Syntax

```
typedef ChTraitsBase< BaseType >::PCXSTR PCXSTR;
```

## <a name="preallocate"></a> CSimpleStringT::Preallocate

Allocates a specific amount of bytes for the `CSimpleStringT` object.

### Syntax

```cpp
void Preallocate( int nLength);
```

#### Parameters

*nLength*<br/>
The exact size of the `CSimpleStringT` character buffer in characters.

### Remarks

Call this method to allocate a specific buffer size for the `CSimpleStringT` object.

`CSimpleStringT` generates a STATUS_NO_MEMORY exception if it is unable to allocate space for the character buffer. By default, memory allocation is performed by WIN32 API functions `HeapAlloc` or `HeapReAlloc`.

### Example

The following example demonstrates the use of `CSimpleStringT::Preallocate`.

```cpp
CSimpleString str(pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
str.Preallocate(100);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
```

## <a name="pxstr"></a> CSimpleStringT::PXSTR

A pointer to a string.

### Syntax

```
typedef ChTraitsBase< BaseType >::PXSTR PXSTR;
```

## <a name="releasebuffer"></a> CSimpleStringT::ReleaseBuffer

Releases control of the buffer allocated by [GetBuffer](#getbuffer).

### Syntax

```cpp
void ReleaseBuffer(int nNewLength = -1);
```

#### Parameters

*nNewLength*<br/>
The new length of the string in characters, not counting a null terminator. If the string is null terminated, the -1 default value sets the `CSimpleStringT` size to the current length of the string.

### Remarks

Call this method to reallocate or free up the buffer of the string object. If you know that the string in the buffer is null terminated, you can omit the *nNewLength* argument. If your string is not null terminated, use *nNewLength* to specify its length. The address returned by [GetBuffer](#getbuffer) is invalid after the call to `ReleaseBuffer` or any other `CSimpleStringT` operation.

### Example

The following example demonstrates the use of `CSimpleStringT::ReleaseBuffer`.

```cpp
const int bufferSize = 1024;
CSimpleString s(_T("abc"), pMgr);
LPTSTR p = s.GetBuffer(bufferSize);
_tcscpy_s(p, bufferSize, _T("abc"));

// use the buffer directly
ASSERT(s.GetLength() == 3);

// String length = 3
s.ReleaseBuffer();

// Surplus memory released, p is now invalid.
ASSERT(s.GetLength() == 3);

// Length still 3
```

## <a name="releasebuffersetlength"></a> CSimpleStringT::ReleaseBufferSetLength

Releases control of the buffer allocated by [GetBuffer](#getbuffer).

### Syntax

```cpp
void ReleaseBufferSetLength(int nNewLength);
```

#### Parameters

*nNewLength*<br/>
The length of the string being released

### Remarks

This function is functionally similar to [ReleaseBuffer](#releasebuffer) except that a valid length for the string object must be passed.

## <a name="setat"></a> CSimpleStringT::SetAt

Sets a single character from a `CSimpleStringT` object.

### Syntax

```cpp
void SetAt(int iChar, XCHAR ch);
```

#### Parameters

*iChar*<br/>
Zero-based index of the character in the `CSimpleStringT` object. The *iChar* parameter must be greater than or equal to 0 and less than the value returned by [GetLength](#getlength).

*ch*<br/>
The new character.

### Remarks

Call this method to overwrite the character located at *iChar*. This method will not enlarge the string if *iChar* exceeds the bounds of the existing string.

### Example

The following example demonstrates the use of `CSimpleStringT::SetAt`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
s.SetAt(1, _T('a'));
ASSERT(_tcscmp(s, _T("aacdef")) == 0);
```

## <a name="setmanager"></a> CSimpleStringT::SetManager

Specifies the memory manager of the `CSimpleStringT` object.

### Syntax

```cpp
void SetManager(IAtlStringMgr* pStringMgr);
```

#### Parameters

*pStringMgr*<br/>
A pointer to the new memory manager.

### Remarks

Call this method to specify a new memory manager used by the `CSimpleStringT` object. For more information on memory managers and string objects, see [Memory Management and CStringT](../memory-management-with-cstringt.md).

### Example

The following example demonstrates the use of `CSimpleStringT::SetManager`.

```cpp
CSimpleString s(pMgr);
s.SetManager(pCustomMgr);
```

## <a name="setstring"></a> CSimpleStringT::SetString

Sets the string of a `CSimpleStringT` object.

### Syntax

```cpp
void SetString(PCXSTR pszSrc, int nLength);
void SetString(PCXSTR pszSrc);
```

#### Parameters

*pszSrc*<br/>
A pointer to a null-terminated string.

*nLength*<br/>
A count of the number of characters in *pszSrc*.

### Remarks

Copy a string into the `CSimpleStringT` object. `SetString` overwrites the older string data in the buffer.

Both versions of `SetString` check whether *pszSrc* is a null pointer, and if it is, throw an E_INVALIDARG error.

The one-parameter version of `SetString` expects *pszSrc* to point to a null-terminated string.

The two-parameter version of `SetString` also expects *pszSrc* to be a null-terminated string. It uses *nLength* as the string length unless it encounters a null terminator first.

The two-parameter version of `SetString` also checks whether *pszSrc* points to a location in the current buffer in `CSimpleStringT`. In this special case, `SetString` uses a memory copy function that does not overwrite the string data as it copies the string data back to its buffer.

### Example

The following example demonstrates the use of `CSimpleStringT::SetString`.

```cpp
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(_tcscmp(s, _T("abcdef")) == 0);
s.SetString(_T("Soccer"), 6);
ASSERT(_tcscmp(s, _T("Soccer")) == 0);
```

## <a name="stringlength"></a> CSimpleStringT::StringLength

Returns the number of characters in the specified string.

### Syntax

```
ATL_NOINLINE static int StringLength(PCXSTR psz) throw();
```

#### Parameters

*psz*<br/>
A pointer to a null-terminated string.

### Return Value

The number of characters in *psz*; not counting a null terminator.

### Remarks

Call this method to retrieve the number of characters in the string pointed to by *psz*.

### Example

The following example demonstrates the use of `CSimpleStringT::StringLength`.

```cpp
ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
```

## <a name="truncate"></a> CSimpleStringT::Truncate

Truncates the string to the new length.

### Syntax

```cpp
void Truncate(int nNewLength);
```

#### Parameters

*nNewLength*<br/>
The new length of the string.

### Remarks

Call this method to truncate the contents of the string to the new length.

> [!NOTE]
> This does not affect the allocated length of the buffer. To decrease or increase the current buffer, see [FreeExtra](#freeextra) and [Preallocate](#preallocate).

### Example

The following example demonstrates the use of `CSimpleStringT::Truncate`.

```cpp
CSimpleString str(_T("abcdefghi"), pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
str.Truncate(4);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
```

## <a name="unlockbuffer"></a> CSimpleStringT::UnlockBuffer

Unlocks the buffer of the `CSimpleStringT` object.

### Syntax

```cpp
void UnlockBuffer() throw();
```

### Remarks

Call this method to reset the reference count of the string to 1.

The `CSimpleStringT` destructor automatically calls `UnlockBuffer` to ensure that the buffer is not locked when the destructor is called. For an example of this method, see [LockBuffer](#lockbuffer).

## <a name="dtor"></a> CSimpleStringT::~CSimpleStringT

Destroys a `CSimpleStringT` object.

### Syntax

```
~CSimpleStringT() throw();
```

### Remarks

Call this method to destroy the `CSimpleStringT` object.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
