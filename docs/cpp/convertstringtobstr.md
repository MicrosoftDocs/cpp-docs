---
description: "Learn more about: ConvertStringToBSTR"
title: "ConvertStringToBSTR"
ms.date: "11/04/2016"
f1_keywords: ["ConvertStringToBSTR"]
helpviewer_keywords: ["ConvertStringToBSTR function"]
ms.assetid: 071f9b3b-9643-4e06-a1e5-de96ed15bab2
---
# ConvertStringToBSTR

**Microsoft Specific**

Converts a `char *` value to a `BSTR`.

## Syntax

```
BSTR __stdcall ConvertStringToBSTR(const char* pSrc)
```

#### Parameters

*pSrc*<br/>
A `char *` variable.

## Example

```cpp
// ConvertStringToBSTR.cpp
#include <comutil.h>
#include <stdio.h>

#pragma comment(lib, "comsuppw.lib")
#pragma comment(lib, "kernel32.lib")

int main() {
   char* lpszText = "Test";
   printf_s("char * text: %s\n", lpszText);

   BSTR bstrText = _com_util::ConvertStringToBSTR(lpszText);
   wprintf_s(L"BSTR text: %s\n", bstrText);

   SysFreeString(bstrText);
}
```

```Output
char * text: Test
BSTR text: Test
```

**END Microsoft Specific**

## Requirements

**Header:** \<comutil.h>

**Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)

## See also

[Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)
