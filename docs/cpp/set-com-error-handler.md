---
description: "Learn more about: _set_com_error_handler"
title: "_set_com_error_handler"
ms.date: "11/04/2016"
helpviewer_keywords: ["_set_com_error_handler function"]
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
---
# _set_com_error_handler

Replaces the default function that is used for COM error-handling. **_set_com_error_handler** is Microsoft-specific.

## Syntax

```cpp
void __stdcall _set_com_error_handler(
   void (__stdcall *pHandler)(
      HRESULT hr,
      IErrorInfo* perrinfo
   )
);
```

#### Parameters

*pHandler*<br/>
Pointer to the replacement function.

*hr*<br/>
HRESULT information.

*perrinfo*<br/>
`IErrorInfo` object.

## Remarks

By default, [_com_raise_error](../cpp/com-raise-error.md) handles all COM errors. You can change this behavior by using **_set_com_error_handler** to call your own error-handling function.

The replacement function must have a signature that is equivalent to that of `_com_raise_error`.

## Example

```cpp
// _set_com_error_handler.cpp
// compile with /EHsc
#include <stdio.h>
#include <comdef.h>
#include <comutil.h>

// Importing ado dll to attempt to establish an ado connection.
// Not related to _set_com_error_handler
#import "C:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "adoEOF")

void __stdcall _My_com_raise_error(HRESULT hr, IErrorInfo* perrinfo)
{
   throw "Unable to establish the connection!";
}

int main()
{
   _set_com_error_handler(_My_com_raise_error);
   _bstr_t bstrEmpty(L"");
   _ConnectionPtr Connection = NULL;
   try
   {
      Connection.CreateInstance(__uuidof(Connection));
      Connection->Open(bstrEmpty, bstrEmpty, bstrEmpty, 0);
   }
   catch(char* errorMessage)
   {
      printf("Exception raised: %s\n", errorMessage);
   }

   return 0;
}
```

```Output
Exception raised: Unable to establish the connection!
```

## Requirements

**Header:** \<comdef.h>

**Lib:** If the **/Zc:wchar_t** compiler option is specified (the default), use comsuppw.lib or comsuppwd.lib. If the **/Zc:wchar_t-** compiler option is specified, use comsupp.lib. For more information, including how to set this option in the IDE, see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

## See also

[Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)
