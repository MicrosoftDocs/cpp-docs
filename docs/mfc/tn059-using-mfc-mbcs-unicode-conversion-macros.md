---
description: "Learn more about: TN059: Using MFC MBCS/Unicode Conversion Macros"
title: "TN059: Using MFC MBCS-Unicode Conversion Macros"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFCANS32.DLL", "Unicode [MFC], conversion macros", "Unicode [MFC], OLE interfaces", "conversion macros [MFC]", "converting Unicode", "MBCS [MFC], conversion macros", "macros [MFC], MBCS conversion macros", "TN059"]
ms.assetid: a2aab748-94d0-4e2f-8447-3bd07112a705
---
# TN059: Using MFC MBCS/Unicode Conversion Macros

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes how to use the macros for MBCS/Unicode conversion, which are defined in AFXPRIV.H. These macros are most useful if your application deals directly with the OLE API or for some reason, often needs to convert between Unicode and MBCS.

## Overview

In MFC 3.x, a special DLL was used (MFCANS32.DLL) to automatically convert between Unicode and MBCS when OLE interfaces were called. This DLL was an almost transparent layer that allowed OLE applications to be written as if the OLE APIs and interfaces were MBCS, even though they are always Unicode (except on the Macintosh). While this layer was convenient and allowed applications to be quickly ported from Win16 to Win32 (MFC, Microsoft Word, Microsoft Excel, and VBA, are just some of the Microsoft applications that used this technology), it had a sometimes significant performance hit. For this reason, MFC 4.x does not use this DLL and instead talks directly to the Unicode OLE interfaces. To do this, MFC needs to convert to Unicode to MBCS when making a call to an OLE interface, and often needs to convert to MBCS from Unicode when implementing an OLE interface. In order to handle this efficiently and easily, a number of macros were created to make this conversion easier.

One of the biggest hurdles of creating such a set of macros is memory allocation. Because the strings cannot be converted in place, new memory to hold the converted results must be allocated. This could have been done with code similar to the following:

```
// we want to convert an MBCS string in lpszA
int nLen = MultiByteToWideChar(CP_ACP,
    0,
    lpszA, -1,
    NULL,
    NULL);

LPWSTR lpszW = new WCHAR[nLen];
MultiByteToWideChar(CP_ACP,
    0,
    lpszA, -1,
    lpszW,
    nLen);

// use it to call OLE here
pI->SomeFunctionThatNeedsUnicode(lpszW);

// free the string
delete[] lpszW;
```

This approach as a number of problems. The main problem is that it is a lot of code to write, test, and debug. Something that was a simple function call, is now much more complex. In addition, there is a significant runtime overhead in doing so. Memory has to be allocated on the heap and freed each time a conversion is done. Finally, the code above would need to have appropriate `#ifdefs` added for Unicode and Macintosh builds (which don't require this conversion to take place).

The solution we came up with is to create some macros which 1) mask the difference between the various platforms, and 2) use an efficient memory allocation scheme, and 3) are easy to insert into the existing source code. Here is an example of one of the definitions:

```
#define A2W(lpa) (\
((LPCSTR)lpa == NULL) NULL : (\
    _convert = (strnlen(lpa)+1),\
    AfxA2WHelper((LPWSTR) alloca(_convert*2),
    lpa,
    _convert)\)\)
```

Using this macro instead of the code above and things are much simpler:

```
// use it to call OLE here
USES_CONVERSION;
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));
```

There are extra calls where conversion is necessary, but using the macros is simple and effective.

The implementation of each macro uses the _alloca() function to allocate memory from the stack instead of the heap. Allocating memory from the stack is much faster than allocating memory on the heap, and the memory is automatically freed when the function is exited. In addition, the macros avoid calling `MultiByteToWideChar` (or `WideCharToMultiByte`) more than one time. This is done by allocating a little bit more memory than is necessary. We know that an MBC will convert into at most one **WCHAR** and that for each **WCHAR** we will have a maximum of two MBC bytes. By allocating a little more than necessary, but always enough to handle the conversion the second call second call to the conversion function is avoided. The call to the helper function `AfxA2Whelper` reduces the number of argument pushes that must be done in order to perform the conversion (this results in smaller code, than if it called `MultiByteToWideChar` directly).

In order to for the macros to have space to store the a temporary length, it is necessary to declare a local variable called _convert that does this in each function that uses the conversion macros. This is done by invoking the USES_CONVERSION macro as seen above in the example.

There are both generic conversion macros and OLE specific macros. These two different macro sets are discussed below. All of the macros reside in AFXPRIV.H.

## Generic Conversion Macros

The generic conversion macros form the underlying mechanism. The macro example and implementation shown in the previous section, A2W, is one such "generic" macro. It is not related to OLE specifically. The set of generic macros is listed below:

```
A2CW      (LPCSTR) -> (LPCWSTR)
A2W      (LPCSTR) -> (LPWSTR)
W2CA      (LPCWSTR) -> (LPCSTR)
W2A      (LPCWSTR) -> (LPSTR)
```

Besides doing text conversions, there are also macros and helper functions for converting `TEXTMETRIC`, `DEVMODE`, `BSTR`, and OLE allocated strings. These macros are beyond the scope of this discussion - refer to AFXPRIV.H for more information on those macros.

## OLE Conversion Macros

The OLE conversion macros are designed specifically for handling functions that expect **OLESTR** characters. If you examine the OLE headers, you will see many references to **LPCOLESTR** and **OLECHAR**. These types are used to refer to the type of characters used in OLE interfaces in a way that is not specific to the platform. **OLECHAR** maps to **`char`** in Win16 and Macintosh platforms and **WCHAR** in Win32.

In order to keep the number of **#ifdef** directives in the MFC code to a minimum we have a similar macro for each conversion that where OLE strings are involved. The following macros are the most commonly used:

```
T2COLE   (LPCTSTR) -> (LPCOLESTR)
T2OLE   (LPCTSTR) -> (LPOLESTR)
OLE2CT   (LPCOLESTR) -> (LPCTSTR)
OLE2T   (LPCOLESTR) -> (LPCSTR)
```

Again, there are similar macros for doing TEXTMETRIC, DEVMODE, BSTR, and OLE allocated strings. Refer to AFXPRIV.H for more information.

## Other Considerations

Do not use the macros in a tight loop. For example, you do not want to write the following kind of code:

```cpp
void BadIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, T2COLE(lpsz));

}
```

The code above could result in allocating megabytes of memory on the stack depending on what the contents of the string `lpsz` is! It also takes time to convert the string for each iteration of the loop. Instead, move such constant conversions out of the loop:

```cpp
void MuchBetterIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    LPCOLESTR lpszT = T2COLE(lpsz);

    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, lpszT);

}
```

If the string is not constant, then encapsulate the method call into a function. This will allow the conversion buffer to be freed each time. For example:

```cpp
void CallSomeMethod(int ii, LPCTSTR lpsz)
{
    USES_CONVERSION;
    pI->SomeMethod(ii, T2COLE(lpsz));

}

void MuchBetterIterateCode2(LPCTSTR* lpszArray)
{
    for (int ii = 0; ii <10000; ii++)
    CallSomeMethod(ii, lpszArray[ii]);

}
```

Never return the result of one of the macros, unless the return value implies making a copy of the data before the return. For example, this code is bad:

```
LPTSTR BadConvert(ISomeInterface* pI)
{
    USES_CONVERSION;
    LPOLESTR lpsz = NULL;
    pI->GetFileName(&lpsz);

LPTSTR lpszT = OLE2T(lpsz);

    CoMemFree(lpsz);

return lpszT; // bad! returning alloca memory
}
```

The code above could be fixed by changing the return value to something that copies the value:

```
CString BetterConvert(ISomeInterface* pI)
{
    USES_CONVERSION;
    LPOLESTR lpsz = NULL;
    pI->GetFileName(&lpsz);

LPTSTR lpszT = OLE2T(lpsz);

    CoMemFree(lpsz);

return lpszT; // CString makes copy
}
```

The macros are easy to use and easy to insert into your code, but as you can tell from the caveats above, you need to be careful when using them.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
