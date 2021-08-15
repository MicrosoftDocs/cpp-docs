---
description: "Learn more about: helpstringdll"
title: "helpstringdll (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.helpstringdll"]
helpviewer_keywords: ["helpstringdll attribute [C++]"]
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
---
# helpstringdll

Specifies the name of the DLL to use to perform document string lookup (localization).

## Syntax

```cpp
[ helpstringdll("string") ]
```

### Parameters

*string*<br/>
The DLL to use to perform document string lookup.

## Remarks

The **helpstringdll** C++ attribute has the same functionality as the [helpstringdll](/windows/win32/Midl/helpstringdll) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_helpstringdll.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib", helpstringdll="xx.dll")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI
{
   HRESULT xxx();
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
[Method Attributes](method-attributes.md)
