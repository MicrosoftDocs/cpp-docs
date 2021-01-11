---
description: "Learn more about: helpstringcontext"
title: "helpstringcontext (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.helpstringcontext"]
helpviewer_keywords: ["helpstringcontext attribute [C++]"]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
---
# helpstringcontext

Specifies the ID of a help topic in an .hlp or .chm file.

## Syntax

```cpp
[ helpstringcontext(contextID) ]
```

### Parameters

*contextID*<br/>
A 32-bit Help context identifier in the **Help** file.

## Remarks

The **helpstringcontext** C++ attribute has the same functionality as the [helpstringcontext](/windows/win32/Midl/helpstringcontext) ODL attribute.

## Example

```cpp
// cpp_attr_ref_helpstringcontext.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[   object, helpstring("help string"), helpstringcontext(1), uuid="11111111-1111-1111-1111-111111111111"
]
__interface IMyI
{
   HRESULT xx();
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **interface**, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[module](module-cpp.md)
