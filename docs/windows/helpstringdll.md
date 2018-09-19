---
title: "helpstringdll | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpstringdll"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpstringdll attribute [C++]"]
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpstringdll

Specifies the name of the DLL to use to perform document string lookup (localization).

## Syntax

```cpp
[ helpstringdll(
   "string"
) ]
```

### Parameters

*string*  
The DLL to use to perform document string lookup.

## Remarks

The **helpstringdll** C++ attribute has the same functionality as the [helpstringdll](/windows/desktop/Midl/helpstringdll) MIDL attribute.

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

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **interface**, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Interface Attributes](../windows/interface-attributes.md)<br/>
[Class Attributes](../windows/class-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)  