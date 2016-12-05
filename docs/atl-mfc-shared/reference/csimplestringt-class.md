---
title: "CSimpleStringT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSimpleStringT"
  - "ATL::CSimpleStringT"
  - "ATL::CSimpleStringT<BaseType>"
  - "ATL.CSimpleStringT<BaseType>"
  - "CSimpleStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared classes, CSimpleStringT"
  - "strings [C++], ATL class"
  - "CSimpleStringT class"
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CSimpleStringT Class
This class represents a `CSimpleStringT` object.  
  
### Syntax  
  
```
template <typename BaseType>
class CSimpleStringT

```  
#### Parameters  
 `BaseType`  
 The character type of the string class. Can be one of the following:  
  
- `char` (for ANSI character strings).  
  
- `wchar_t` (for Unicode character strings).  
  
- **TCHAR** (for both ANSI and Unicode character strings).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::PCXSTR](#csimplestringt__pcxstr)|A pointer to a constant string.|  
|[CSimpleStringT::PXSTR](#csimplestringt__pxstr)|A pointer to a string.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::CSimpleStringT](#csimplestringt__ctor)|Constructs `CSimpleStringT` objects in various ways.|  
|[CSimpleStringT::~CSimpleStringT](#csimplestringt__dtor)|Destructor.|  

  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
<<<<<<< 
|[CSimpleStringT::Append](#csimplestringt__append)|Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::AppendChar](#csimplestringt__appendchar)|Appends a character to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::CopyChars](#csimplestringt__copychars)|Copies a character or characters to another string.|  
|[CSimpleStringT::CopyCharsOverlapped](#csimplestringt__copycharsoverlapped)|Copies a character or characters to another string in which the buffers overlap.|  
|[CSimpleStringT::Empty](#csimplestringt__empty)|Forces a string to have a length of zero.|  
|[CSimpleStringT::FreeExtra](#csimplestringt__freeextra)|Frees any extra memory previously allocated by the string object.|  
|[CSimpleStringT::GetAllocLength](#csimplestringt__getalloclength)|Retrieves the allocated length of a `CSimpleStringT` object.|  
|[CSimpleStringT::GetAt](#csimplestringt__getat)|Returns the character at a given position.|  
|[CSimpleStringT::GetBuffer](#csimplestringt__getbuffer)|Returns a pointer to the characters in a `CSimpleStringT`.|  
|[CSimpleStringT::GetBufferSetLength](#csimplestringt__getbuffersetlength)|Returns a pointer to the characters in a `CSimpleStringT`, truncating to the specified length.|  
|[CSimpleStringT::GetLength](#csimplestringt__getlength)|Returns the number of characters in a `CSimpleStringT` object.|  
|[CSimpleStringT::GetManager](#csimplestringt__getmanager)|Retrieves the memory manager of the `CSimpleStringT` object.|  
|[CSimpleStringT::GetString](#csimplestringt__getstring)|Retrieves the character string|  
|[CSimpleStringT::IsEmpty](#csimplestringt__isempty)|Tests whether a `CSimpleStringT` object contains no characters.|  
|[CSimpleStringT::LockBuffer](#csimplestringt__lockbuffer)|Disables reference counting and protects the string in the buffer.|  
|[CSimpleStringT::Preallocate](#csimplestringt__preallocate)|Allocates a specific amount of memory for the character buffer.|  
|[CSimpleStringT::ReleaseBuffer](#csimplestringt__releasebuffer)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::ReleaseBufferSetLength](#csimplestringt__releasebuffersetlength)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::SetAt](#csimplestringt__setat)|Sets a character at a given position.|  
|[CSimpleStringT::SetManager](#csimplestringt__setmanager)|Sets the memory manager of a `CSimpleStringT` object.|  
|[CSimpleStringT::SetString](#csimplestringt__setstring)|Sets the string of a `CSimpleStringT` object.|  
|[CSimpleStringT::StringLength](#csimplestringt__stringlength)|Returns the number of characters in the specified string.|  
|[CSimpleStringT::Truncate](#csimplestringt__truncate)|Truncates the string to a specified length.|  
|[CSimpleStringT::UnlockBuffer](#csimplestringt__unlockbuffer)|Enables reference counting and releases the string in the buffer.|  
=======
|[CSimpleStringT::Append](#csimplestringt__append)|Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::AppendChar](#csimplestringt__appendchar)|Appends a character to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::CopyChars](#csimplestringt__copychars)|Copies a character or characters to another string.|  
|[CSimpleStringT::CopyCharsOverlapped](#csimplestringt__copycharsoverlapped)|Copies a character or characters to another string in which the buffers overlap.|  
|[CSimpleStringT::Empty](#csimplestringt__empty)|Forces a string to have a length of zero.|  
|[CSimpleStringT::FreeExtra](#csimplestringt__freeextra)|Frees any extra memory previously allocated by the string object.|  
|[CSimpleStringT::GetAllocLength](#csimplestringt__getalloclength)|Retrieves the allocated length of a `CSimpleStringT` object.|  
|[CSimpleStringT::GetAt](#csimplestringt__getat)|Returns the character at a given position.|  
|[CSimpleStringT::GetBuffer](#csimplestringt__getbuffer)|Returns a pointer to the characters in a `CSimpleStringT`.|  
|[CSimpleStringT::GetBufferSetLength](#csimplestringt__getbuffersetlength)|Returns a pointer to the characters in a `CSimpleStringT`, truncating to the specified length.|  
|[CSimpleStringT::GetLength](#csimplestringt__getlength)|Returns the number of characters in a `CSimpleStringT` object.|  
|[CSimpleStringT::GetManager](#csimplestringt__getmanager)|Retrieves the memory manager of the `CSimpleStringT` object.|  
|[CSimpleStringT::GetString](#csimplestringt__getstring)|Retrieves the character string|  
|[CSimpleStringT::IsEmpty](#csimplestringt__isempty)|Tests whether a `CSimpleStringT` object contains no characters.|  
|[CSimpleStringT::LockBuffer](#csimplestringt__lockbuffer)|Disables reference counting and protects the string in the buffer.|  
|[CSimpleStringT::Preallocate](#csimplestringt__preallocate)|Allocates a specific amount of memory for the character buffer.|  
|[CSimpleStringT::ReleaseBuffer](#csimplestringt__releasebuffer)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::ReleaseBufferSetLength](#csimplestringt__releasebuffersetlength)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::SetAt](#csimplestringt__setat)|Sets a character at a given position.|  
|[CSimpleStringT::SetManager](#csimplestringt__setmanager)|Sets the memory manager of a `CSimpleStringT` object.|  
|[CSimpleStringT::SetString](#csimplestringt__setstring)|Sets the string of a `CSimpleStringT` object.|  
|[CSimpleStringT::StringLength](#csimplestringt__stringlength)|Returns the number of characters in the specified string.|  
|[CSimpleStringT::Truncate](#csimplestringt__truncate)|Truncates the string to a specified length.|  
|[CSimpleStringT::UnlockBuffer](#csimplestringt__unlockbuffer)|Enables reference counting and releases the string in the buffer.|  
>>>>>>> master
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  

|[CSimpleStringT::operator PCXSTR](#csimplestringt__operator_pcxstr)|Directly accesses characters stored in a `CSimpleStringT` object as a C-style string.|  
|[CSimpleStringT::operator\[\]](#csimplestringt__operator_at)|Returns the character at a given position — operator substitution for `GetAt`.|  
|[CSimpleStringT::operator +=](#csimplestringt__operator_add_eq)|Concatenates a new string to the end of an existing string.|  
|[CSimpleStringT::operator =](#csimplestringt__operator_eq)|Assigns a new value to a `CSimpleStringT` object.|  
  
### Remarks  
 `CSimpleStringT` is the base class for the various string classes supported by Visual C++. It provides minimal support for memory management of the string object and basic buffer manipulation. For more advanced string objects, see [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### Requirements  
 **Header:** atlsimpstr.h  


## <a name="csimplestringt__append"></a> CSimpleStringT::Append
Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.  
  
### Syntax  
  
```  
void Append(const CSimpleStringT& strSrc);  
void Append(PCXSTR pszSrc, int nLength);  
void Append(PCXSTR pszSrc);  
```  
#### Parameters  
 `strSrc`  
 The `CSimpleStringT` object to be appended.  
  
 `pszSrc`  
 A pointer to a string containing the characters to be appended.  
  
 `nLength`  
 The number of characters to append.  
  
### Remarks  
 Call this method to append an existing `CSimpleStringT` object to another `CSimpleStringT` object.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::Append`.  
  
```cpp
CSimpleString str1(pMgr), str2(pMgr);

str1.SetString(_T("Soccer is"));
str2.SetString(_T(" an elegant game"));

str1.Append(str2);
ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__appendchar"></a> CSimpleStringT::AppendChar
Appends a character to an existing `CSimpleStringT` object.  
  
### Syntax  
  
```  
void AppendChar(XCHAR ch);  
```  
#### Parameters  
 *ch*  
 The character to be appended  
  
### Remarks  
 Call this function to append the specified character to the end of an existing `CSimpleStringT` object.  
  
### Requirements  
 **Header:** atlsimpstr.h  

##  <a name="csimplestringt__copychars"></a> CSimpleStringT::CopyChars  
 Copies a character or characters to a `CSimpleStringT` object.  
  
### Syntax  
  
```  
static void CopyChars(XCHAR* pchDest, const XCHAR* pchSrc, int nChars  
) throw();  
```  
#### Parameters  
 `pchDest`  
 A pointer to a character string.  
  
 `pchSrc`  
 A pointer to a string containing the characters to be copied.  
  
 `nChars`  
 The number of `pchSrc` characters to be copied.  
  
### Remarks  
 Call this method to copy characters from `pchSrc` to the `pchDest` string.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::CopyChars`.  
  
 ```cpp
 CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
TCHAR* pszSrc = _T("Hello world!");

_tprintf_s(_T("%s\n"), str);

str.CopyChars(str.GetBuffer(), pszSrc, 12);
_tprintf_s(_T("%s\n"), str);
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__copycharsoverlapped"></a>  CSimpleStringT::CopyCharsOverlapped
Copies a character or characters to a `CSimpleStringT` object.  
  
### Syntax  
  
```  
static void CopyCharsOverlapped(XCHAR* pchDest, const XCHAR* pchSrc, int nChars   
) throw();  
```  
#### Parameters  
 `pchDest`  
 A pointer to a character string.  
  
 `pchSrc`  
 A pointer to a string containing the characters to be copied.  
  
 `nChars`  
 The number of `pchSrc` characters to be copied.  
  
### Remarks  
 Call this method to copy characters from `pchSrc` to the `pchDest` string. Unlike `CopyChars`, `CopyCharsOverlapped` provides a safe method for copying from character buffers that might be overlapped.  
  
## Example  
 See the example for [CSimpleStringT::CopyChars](#csimplestringt__copychars), or the source code for `CSimpleStringT::SetString` (located in atlsimpstr.h).  
  
### Requirements  
 **Header:** atlsimpstr.h  

##  <a name="csimplestringt__ctor"></a>  CSimpleStringT::CSimpleStringT  
 Constructs a `CSimpleStringT` object.  
  
### Syntax  
  
```  
CSimpleStringT(const XCHAR* pchSrc, int nLength, IAtlStringMgr* pStringMgr);  
CSimpleStringT(PCXSTR pszSrc, IAtlStringMgr* pStringMgr);  
CSimpleStringT(const CSimpleStringT& strSrc);  
explicit CSimpleStringT(IAtlStringMgr* pStringMgr  
) throw();  
```  
#### Parameters  
 `strSrc`  
 An existing `CSimpleStringT` object to be copied into this `CSimpleStringT` object.  
  
 `pchSrc`  
 A pointer to an array of characters of length `nLength`, not null terminated.  
  
 `pszSrc`  
 A null-terminated string to be copied into this `CSimpleStringT` object.  
  
 `nLength`  
 A count of the number of characters in `pch`.  
  
 `pStringMgr`  
 A pointer to the memory manager of the `CSimpleStringT` object. For more information about `IAtlStringMgr` and memory management for `CSimpleStringT`, see [Memory Management and CStringT](../memory-management-with-cstringt.md).  
  
### Remarks  
 Construct a new `CSimpleStringT` object. Because the constructors copy the input data into new allocated storage, memory exceptions may result.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::CSimpleStringT` by using the ATL `typedef``CSimpleString`. `CSimpleString` is a commonly used specialization of the class template `CSimpleStringT`.  
  
```cpp
CSimpleString s1(pMgr);                   // Empty string
CSimpleString s2(_T("cat"), pMgr);        // From a C string literal

CSimpleString s3(s2);                     // Copy constructor
CSimpleString s4(s2 + _T(" ") + s3);      // From a string expression

CSimpleString s5(_T("xxxxxx"), 6, pMgr);  // s5 = "xxxxxx"   
```

  
### Requirements  
 **Header:** atlsimpstr.h  


##  <a name="csimplestringt__empty"></a>  CSimpleStringT::Empty
Makes this `CSimpleStringT` object an empty string and frees memory as appropriate.  
  
### Syntax  
  
```  
void Empty() throw();  
  
```  
### Remarks  
 For more information, see [Strings: CString Exception Cleanup](../cstring-exception-cleanup.md).  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::Empty`.  
  
 ```cpp  
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());   
```  
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__freeextra"></a>  CSimpleStringT::FreeExtra
Frees any extra memory previously allocated by the string but no longer needed.  
  
### Syntax  
  
```  
void FreeExtra();  
```  
### Remarks  
 This should reduce the memory overhead consumed by the string object. The method reallocates the buffer to the exact length returned by [GetLength](#csimplestringt__getlength).  
  
## Example  
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
  
 `Alloc length is 1031, String length is 1024`  
  
 `Alloc length is 1031, String length is 15`  
  
 `Alloc length is 15, String length is 15`  
  
### Requirements  
 **Header:** atlsimpstr.h  

##  <a name="csimplestringt__getalloclength"></a>  CSimpleStringT::GetAllocLength  
Retrieves the allocated length of a `CSimpleStringT` object.  
  
### Syntax  
  
```  
int GetAllocLength() const throw();  
  
```  
### Return Value  
 The number of characters allocated for this object.  
  
### Remarks  
 Call this method to determine the number of characters allocated for this `CSimpleStringT` object. See [FreeExtra](#csimplestringt__freeextra) for an example of calling this function.  
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__getat"></a>  CSimpleStringT::GetAt  
Returns one character from a `CSimpleStringT` object.  
  
### Syntax  
  
```  
XCHAR GetAt(int iChar  
) const;  
```  
#### Parameters  
 `iChar`  
 Zero-based index of the character in the `CSimpleStringT` object. The `iChar` parameter must be greater than or equal to 0 and less than the value returned by [GetLength](#csimplestringt__getlength). Otherwise, `GetAt` will generate an exception.  
  
### Return Value  
 An `XCHAR` that contains the character at the specified position in the string.  
  
### Remarks  
 Call this method to return the one character specified by `iChar`. The overloaded subscript (`[]`) operator is a convenient alias for `GetAt`. The null terminator is addressable without generating an exception by using `GetAt`. However, it is not counted by `GetLength`, and the value returned is 0.  
  
## Example  
 The following example demonstrates how to use `CSimpleStringT::GetAt`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(s.GetAt(2) == _T('c'));   
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__getbuffer"></a>  CSimpleStringT::GetBuffer  
Returns a pointer to the internal character buffer for the `CSimpleStringT` object.  
  
### Syntax  
  
```  
PXSTR GetBuffer(int nMinBufferLength);  
PXSTR GetBuffer();  
```  
#### Parameters  
 `nMinBufferLength`  
 The minimum number of characters that the character buffer can hold. This value does not include space for a null terminator.  
  
 If `nMinBufferLength` is larger than the length of the current buffer, `GetBuffer` destroys the current buffer, replaces it with a buffer of the requested size, and resets the object reference count to zero. If you have previously called [LockBuffer](#csimplestringt__lockbuffer) on this buffer, you lose the buffer lock.  
  
### Return Value  
 An `PXSTR` pointer to the object's (null-terminated) character buffer.  
  
### Remarks  
 Call this method to return the buffer contents of the `CSimpleStringT` object. The returned `PXSTR` is not a constant and therefore allows direct modification of `CSimpleStringT` contents.  
  
 If you use the pointer returned by `GetBuffer` to change the string contents, you must call [ReleaseBuffer](#csimplestringt__releasebuffer) before you use any other `CSimpleStringT` member methods.  
  
 The address returned by `GetBuffer` may not be valid after the call to `ReleaseBuffer` because additional `CSimpleStringT` operations can cause the `CSimpleStringT` buffer to be reallocated. The buffer is not reallocated if you do not change the length of the `CSimpleStringT`.  
  
 The buffer memory is automatically freed when the `CSimpleStringT` object is destroyed.  
  
 If you keep track of the string length yourself, you should not append the terminating null character. However, you must specify the final string length when you release the buffer with `ReleaseBuffer`. If you do append a terminating null character, you should pass –1 (the default) for the length. `ReleaseBuffer` then determines the buffer length.  
  
 If there is insufficient memory to satisfy the `GetBuffer` request, this method throws a CMemoryException*.  
  
## Example  
```cpp  
CSimpleString s(_T("abcd"), pMgr);

LPTSTR pBuffer = s.GetBuffer(10);
int    sizeOfBuffer = s.GetAllocLength();

// Directly access CSimpleString buffer
_tcscpy_s(pBuffer, sizeOfBuffer, _T("Hello")); 
ASSERT(_tcscmp(s, _T("Hello")) == 0);

s.ReleaseBuffer();   
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__getbuffersetlength"></a>  CSimpleStringT::GetBufferSetLength  
Returns a pointer to the internal character buffer for the `CSimpleStringT` object, truncating or growing its length if necessary to exactly match the length specified in `nLength`.  
  
### Syntax  
  
```  
PXSTR GetBufferSetLength(int nLength);  
```  
#### Parameters  
 `nLength`  
 The exact size of the `CSimpleStringT` character buffer in characters.  
  
### Return Value  
 A `PXSTR` pointer to the object's (null-terminated) character buffer.  
  
### Remarks  
 Call this method to retrieve a specified length of the internal buffer of the `CSimpleStringT` object. The returned `PXSTR` pointer is not `const` and thus allows direct modification of `CSimpleStringT` contents.  
  
 If you use the pointer returned by [GetBufferSetLength](#csimplestringt__getbuffersetlength) to change the string contents, call `ReleaseBuffer` to update the internal state of `CsimpleStringT` before you use any other `CSimpleStringT` methods.  
  
 The address returned by `GetBufferSetLength` may not be valid after the call to `ReleaseBuffer` because additional `CSimpleStringT` operations can cause the `CSimpleStringT` buffer to be reallocated. The buffer is not reassigned if you do not change the length of the `CSimpleStringT`.  
  
 The buffer memory is automatically freed when the `CSimpleStringT` object is destroyed.  
  
 If you keep track of the string length yourself, do not not append the terminating null character. You must specify the final string length when you release the buffer by using `ReleaseBuffer`. If you do append a terminating null character when you call `ReleaseBuffer`, pass –1 (the default) for the length to `ReleaseBuffer`, and `ReleaseBuffer` will perform a `strlen` on the buffer to determine its length.  
  
 For more information about reference counting, see the following articles:  
  
-   [Managing Object Lifetimes through Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms687260) in the Windows SDK. 
  
-   [Implementing Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms693431) in the Windows SDK.
  
-   [Rules for Managing Reference Counts](http://msdn.microsoft.com/library/windows/desktop/ms692481) in the Windows SDK.  
  
## Example  
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
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__getlength"></a>  CSimpleStringT::GetLength  
Returns the number of characters in the `CSimpleStringT` object.  
  
### Syntax  
  
```  
int GetLength() const throw();  
  
```  
### Return Value  
 A count of the characters in the string.  
  
### Remarks  
 Call this method to return the number of characters in the object. The count does not include a null terminator.  
  
 For multibyte character sets (MBCS), `GetLength` counts each 8-bit character; that is, a lead and trail byte in one multibyte character are counted as two bytes. See [FreeExtra](#csimplestringt__freeextra) for an example of calling this function.  
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__getmanager"></a>  CSimpleStringT::GetManager  
Retrieves the memory manager of the `CSimpleStringT` object.  
  
### Syntax  
  
```  
IAtlStringMgr* GetManager() const throw();  
  
```  
### Return Value  
 A pointer to the memory manager for the `CSimpleStringT` object.  
  
### Remarks  
 Call this method to retrieve the memory manager used by the `CSimpleStringT` object. For more information on memory managers and string objects, see [Memory Management and CStringT](../memory-management-with-cstringt.md).  
  
### Requirements  
 **Header:** atlsimpstr.h  


##  <a name="csimplestringt__getstring"></a>  CSimpleStringT::GetString
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
>  The returned `PCXSTR` pointer is `const` and does not allow direct modification of `CSimpleStringT` contents.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::GetString`.  
  
```cpp  
CSimpleString str(pMgr);

str += _T("Cup soccer is best!");
_tprintf_s(_T("%s"), str.GetString());
```
  
### Requirements  
 **Header:** atlsimpstr.h  


##  <a name="csimplestringt__isempty"></a>  CSimpleStringT::IsEmpty  
Tests a `CSimpleStringT` object for the empty condition.  
  
### Syntax  
  
```  
bool IsEmpty() const throw();  
  
```  
### Return Value  
 Returns **true** if the `CSimpleStringT` object has 0 length; otherwise **false**.  
  
### Remarks  
 Call this method to determine if the object contains an empty string.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::IsEmpty`.  
  
```cpp  
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());   
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__lockbuffer"></a>  CSimpleStringT::LockBuffer  
Disables reference counting and protects the string in the buffer.  
  
### Syntax  
  
```  
PXSTR LockBuffer();  
```  
### Return Value  
 A pointer to a `CSimpleStringT` object or a null-terminated string.  
  
### Remarks  
 Call this method to lock the buffer of the `CSimpleStringT` object. By calling `LockBuffer`, you create a copy of the string, with a –1 for the reference count. When the reference count value is -1, the string in the buffer is considered to be in a "locked" state. While in a locked state, the string is protected in two ways:  
  
-   No other string can get a reference to the data in the locked string, even if that string is assigned to the locked string.  
  
-   The locked string will never reference another string, even if that other string is copied to the locked string.  
  
 By locking the string in the buffer, you ensure that the string's exclusive hold on the buffer will remain intact.  
  
 After you have finished with `LockBuffer`, call [UnlockBuffer](#csimplestringt__unlockbuffer) to reset the reference count to 1.  
  
> [!NOTE]
>  If you call [GetBuffer](#csimplestringt__getbuffer) on a locked buffer and you set the `GetBuffer` parameter `nMinBufferLength` to greater than the length of the current buffer, you will lose the buffer lock. Such a call to `GetBuffer` destroys the current buffer, replaces it with a buffer of the requested size, and resets the reference count to zero.  
  
 For more information about reference counting, see the following articles:  
  
-   [Managing Object Lifetimes through Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms687260) in the Windows SDK  
  
-   [Implementing Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms693431) in the Windows SDK  
  
-   [Rules for Managing Reference Counts](http://msdn.microsoft.com/library/windows/desktop/ms692481) in the Windows SDK  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::LockBuffer`.  
  
```cpp  
CSimpleString str(_T("Hello"), pMgr);
TCHAR ch;

str.LockBuffer();
ch = str.GetAt(2);
_tprintf_s(_T("%c"), ch);
str.UnlockBuffer();
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="simplestringt__operator_at"></a>  CSimpleStringT::operator\[\]  
Call this function to access a single character of the character array.  
  
### Syntax  
  
```  
XCHAR operator[](int iChar  
) const;  
```  
#### Parameters  
 `iChar`  
 Zero-based index of a character in the string.  
  
### Remarks  
 The overloaded subscript (`[]`) operator returns a single character specified by the zero-based index in `iChar`. This operator is a convenient substitute for the [GetAt](#csimplestringt__getat) member function.  
  
> [!NOTE]
>  You can use the subscript (`[]`) operator to get the value of a character in a `CSimpleStringT`, but you cannot use it to change the value of a character in a `CSimpleStringT`.  
  
## Example  
 The following example demonstrates the use of **CSimpleStringT::operator []**.  
  
```cpp  
CSimpleString s(_T("abc"), pMgr);
ASSERT(s[1] == _T('b')); 
```
  
### Requirements  
 **Header:** atlsimpstr.h  

## <a name="csimplestringt__operator_at"></a>  CSimpleStringT::operator \[\]
Call this function to access a single character of the character array.  
  
### Syntax  
  
```  
  
XCHAR operator[]( int iChar ) const;  
```  
  
### Parameters  
 `iChar`  
 Zero-based index of a character in the string.  
  
### Remarks  
 The overloaded subscript (`[]`) operator returns a single character specified by the zero-based index in `iChar`. This operator is a convenient substitute for the [GetAt](#csimplestringt__getat) member function.  
  
> [!NOTE]
>  You can use the subscript (`[]`) operator to get the value of a character in a `CSimpleStringT`, but you cannot use it to change the value of a character in a `CSimpleStringT`.  
  
  
##  <a name="csimplestringt__operator_add_eq"></a>  CSimpleStringT::operator +=  
Joins a new string or character to the end of an existing string.  
  
### Syntax  
  
```  
CSimpleStringT& operator +=(PCXSTR pszSrc);  
CSimpleStringT& operator +=(const CSimpleStringT& strSrc);  
template< int t_nSize >  
CSimpleStringT& operator+=(const CStaticString< XCHAR, t_nSize >& strSrc);  
CSimpleStringT& operator +=(char ch);  
CSimpleStringT& operator +=(unsigned char ch);  
CSimpleStringT& operator +=(wchar_t ch);  
```  
#### Parameters  
 `pszSrc`  
 A pointer to a null-terminated string.  
  
 `strSrc`  
 A pointer to an existing `CSimpleStringT` object.  
  
 *ch*  
 The character to be appended.  
  
### Remarks  
 The operator accepts another `CSimpleStringT` object or a character. Note that memory exceptions may occur whenever you use this concatenation operator because new storage may be allocated for characters added to this `CSimpleStringT` object.  
  
## Example  
 The following example demonstrates the use of **CSimpleStringT::operator +=**.  
  
```cpp  
CSimpleString str(_T("abc"), pMgr);
ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);  
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__operator_eq"></a>  CSimpleStringT::operator =  
Assigns a new value to a `CSimpleStringT` object.  
  
### Syntax  
  
```  
CSimpleStringT& operator =(PCXSTR pszSrc);  
CSimpleStringT& operator =(const CSimpleStringT& strSrc);  
```  
#### Parameters  
 `pszSrc`  
 A pointer to a null-terminated string.  
  
 `strSrc`  
 A pointer to an existing `CSimpleStringT` object.  
  
### Remarks  
 If the destination string (the left side) is already large enough to store the new data, no new memory allocation is performed. Note that memory exceptions may occur whenever you use the assignment operator because new storage is often allocated to hold the resulting `CSimpleStringT` object.  
  
## Example  
 The following example demonstrates the use of **CSimpleStringT::operator =**.  
  
```cpp  
CSimpleString s1(pMgr), s2(pMgr);  // Empty CSimpleStringT objects

s1 = _T("cat");            // s1 = "cat"
ASSERT(_tcscmp(s1, _T("cat")) == 0);

s2 = s1;               // s1 and s2 each = "cat"
ASSERT(_tcscmp(s2, _T("cat")) == 0);

s1 = _T("the ") + s1;      // Or expressions
ASSERT(_tcscmp(s1, _T("the cat")) == 0);

s1 = _T("x");              // Or just individual characters
ASSERT(_tcscmp(s1, _T("x")) == 0); 
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__operator_pcxstr"></a>  CSimpleStringT::operator PCXSTR  

 Directly accesses characters stored in a `CSimpleStringT` object as a C-style string.  
  
### Syntax  
  
```  
operator PCXSTR() const throw();    
```  
### Return Value  
 A character pointer to the string's data.  
  
### Remarks  
 No characters are copied; only a pointer is returned. Be careful with this operator. If you change a `CString` object after you have obtained the character pointer, you may cause a reallocation of memory that invalidates the pointer.  
  
## Example  
 The following example demonstrates the use of **CSimpleStringT::operator PCXSTR**.  
  
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
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__pcxstr"></a>  CSimpleStringT::PCXSTR
A pointer to a constant string.  
  
### Syntax  
  
```  
typedef ChTraitsBase< BaseType >::PCXSTR PCXSTR;    
```  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__preallocate"></a>  CSimpleStringT::Preallocate  
Allocates a specific amount of bytes for the `CSimpleStringT` object.  
  
### Syntax  
  
```  
void Preallocate( int nLength);  
```  
#### Parameters  
 `nLength`  
 The exact size of the `CSimpleStringT` character buffer in characters.  
  
### Remarks  
 Call this method to allocate a specific buffer size for the `CSimpleStringT` object.  
  
 `CSimpleStringT` generates a `STATUS_NO_MEMORY` exception if it is unable to allocate space for the character buffer. By default, memory allocation is performed by WIN32 API functions `HeapAlloc` or `HeapReAlloc`.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::Preallocate`.  
  
```cpp  
CSimpleString str(pMgr);

_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
str.Preallocate(100);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__pxstr"></a>  CSimpleStringT::PXSTR  
A pointer to a string.  
  
### Syntax  
  
```  
typedef ChTraitsBase< BaseType >::PXSTR PXSTR;  
  
```  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__releasebuffer"></a>  CSimpleStringT::ReleaseBuffer  
Releases control of the buffer allocated by [GetBuffer](#csimplestringt__getbuffer).  
  
### Syntax  
  
```  
void ReleaseBuffer(int nNewLength = -1);  
```  
#### Parameters  
 `nNewLength`  
 The new length of the string in characters, not counting a null terminator. If the string is null terminated, the -1 default value sets the `CSimpleStringT` size to the current length of the string.  
  
### Remarks  
 Call this method to reallocate or free up the buffer of the string object. If you know that the string in the buffer is null terminated, you can omit the `nNewLength` argument. If your string is not null terminated, use `nNewLength` to specify its length. The address returned by [GetBuffer](#csimplestringt__getbuffer) is invalid after the call to `ReleaseBuffer` or any other `CSimpleStringT` operation.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::ReleaseBuffer`.  
  
```cpp  
const int bufferSize = 1024;
CSimpleString s(_T("abc"), pMgr);

LPTSTR p = s.GetBuffer(bufferSize);
_tcscpy_s(p, bufferSize , _T("abc"));   // use the buffer directly
ASSERT(s.GetLength() == 3); // String length = 3
s.ReleaseBuffer();  // Surplus memory released, p is now invalid.
ASSERT(s.GetLength() == 3); // Length still 3
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__releasebuffersetlength"></a>  CSimpleStringT::ReleaseBufferSetLength

Releases control of the buffer allocated by [GetBuffer](#csimplestringt__getbuffer).  
  
### Syntax  
  
```  
void ReleaseBufferSetLength(int nNewLength);  
```  
#### Parameters  
 `nNewLength`  
 The length of the string being released  
  
### Remarks  
 This function is functionally similar to [ReleaseBuffer](#csimplestringt__releasebuffer) except that a valid length for the string object must be passed.  
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__setat"></a>  CSimpleStringT::SetAt  
Sets a single character from a `CSimpleStringT` object.  
  
### Syntax  
  
```  
void SetAt(int iChar, XCHAR ch);  
```  
#### Parameters  
 `iChar`  
 Zero-based index of the character in the `CSimpleStringT` object. The `iChar` parameter must be greater than or equal to 0 and less than the value returned by [GetLength](#csimplestringt__getlength).  
  
 *ch*  
 The new character.  
  
### Remarks  
 Call this method to overwrite the character located at `iChar`. This method will not enlarge the string if `iChar` exceeds the bounds of the existing string.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::SetAt`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);

s.SetAt(1, _T('a'));
ASSERT(_tcscmp(s, _T("aacdef")) == 0);   
``` 
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__setmanager"></a>  CSimpleStringT::SetManager  
Specifies the memory manager of the `CSimpleStringT` object.  
  
### Syntax  
  
```  
void SetManager(IAtlStringMgr* pStringMgr);  
```  
#### Parameters  
 `pStringMgr`  
 A pointer to the new memory manager.  
  
### Remarks  
 Call this method to specify a new memory manager used by the `CSimpleStringT` object. For more information on memory managers and string objects, see [Memory Management and CStringT](../memory-management-with-cstringt.md).  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::SetManager`.  
  
```cpp  
CSimpleString s(pMgr);
s.SetManager(pCustomMgr); 
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__setstring"></a>  CSimpleStringT::SetString  
Sets the string of a `CSimpleStringT` object.  
  
### Syntax  
  
```  
void SetString(PCXSTR pszSrc, int nLength);  
void SetString(PCXSTR pszSrc);  
```  
#### Parameters  
 `pszSrc`  
 A pointer to a null-terminated string.  
  
 `nLength`  
 A count of the number of characters in `pszSrc`.  
  
### Remarks  
 Copy a string into the `CSimpleStringT` object. `SetString` overwrites the older string data in the buffer.  
  
 Both versions of `SetString` check whether `pszSrc` is a null pointer, and if it is, throw an **E_INVALIDARG** error.  
  
 The one-parameter version of `SetString` expects `pszSrc` to point to a null-terminated string.  
  
 The two-parameter version of `SetString` also expects `pszSrc` to be a null-terminated string. It uses `nLength` as the string length unless it encounters a null terminator first.  
  
 The two-parameter version of `SetString` also checks whether `pszSrc` points to a location in the current buffer in `CSimpleStringT`. In this special case, `SetString` uses a memory copy function that does not overwrite the string data as it copies the string data back to its buffer.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::SetString`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(_tcscmp(s, _T("abcdef")) == 0);

s.SetString(_T("Soccer"), 6);
ASSERT(_tcscmp(s, _T("Soccer")) == 0);  
```
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__stringlength"></a>  CSimpleStringT::StringLength  
Returns the number of characters in the specified string.  
  
### Syntax  
  
```  
ATL_NOINLINE static int StringLength(PCXSTR psz) throw();  
```  
#### Parameters  
 `psz`  
 A pointer to a null-terminated string.  
  
### Return Value  
 The number of characters in `psz`; not counting a null terminator.  
  
### Remarks  
 Call this method to retrieve the number of characters in the string pointed to by `psz`.  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::StringLength`.  
  
```cpp  
ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
``` 
  
### Requirements  
 **Header:** atlsimpstr.h  
  

##  <a name="csimplestringt__truncate"></a>  CSimpleStringT::Truncate
Truncates the string to the new length.  
  
### Syntax  
  
```  
void Truncate(int nNewLength);  
```  
#### Parameters  
 `nNewLength`  
 The new length of the string.  
  
### Remarks  
 Call this method to truncate the contents of the string to the new length.  
  
> [!NOTE]
>  This does not affect the allocated length of the buffer. To decrease or increase the current buffer, see [FreeExtra](#csimplestringt__freeextra) and [Preallocate](#csimplestringt__preallocate).  
  
## Example  
 The following example demonstrates the use of `CSimpleStringT::Truncate`.  
  
```cpp  
CSimpleString str(_T("abcdefghi"), pMgr);

_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);

str.Truncate(4);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
``` 
  
### Requirements  
 **Header:** atlsimpstr.h  
  
##  <a name="csimplestringt__unlockbuffer"></a>  CSimpleStringT::UnlockBuffer
 Unlocks the buffer of the `CSimpleStringT` object.  
  
### Syntax  
  
```  
void UnlockBuffer() throw();    
```  
### Remarks  
 Call this method to reset the reference count of the string to 1.  
  
 The `CSimpleStringT` destructor automatically calls `UnlockBuffer` to ensure that the buffer is not locked when the destructor is called. For an example of this method, see [LockBuffer](#csimplestringt__lockbuffer).  
  
### Requirements  
 **Header:** atlsimpstr.h  
  


##  <a name="csimplestringt__dtor"></a>  CSimpleStringT::~CSimpleStringT
Destroys a `CSimpleStringT` object.  
  
### Syntax  
  
```  
~CSimpleStringT() throw();    
```  
### Remarks  
 Call this method to destroy the `CSimpleStringT` object.  
  
### Requirements  
 **Header:** atlsimpstr.h  

  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)