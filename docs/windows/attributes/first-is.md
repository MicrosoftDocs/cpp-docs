---
description: "Learn more about: first_is"
title: "first_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.first_is"]
helpviewer_keywords: ["first_is attribute"]
ms.assetid: 89acbf56-3b38-4d44-83e8-1ce2f6f74ffd
---
# first_is

Specifies the index of the first array element to be transmitted.

## Syntax

```cpp
[ first_is("expression") ]
```

### Parameters

*expression*<br/>
One or more C-language expressions. Empty argument slots are allowed.

## Remarks

The **first_is** C++ attribute has the same functionality as the [first_is](/windows/win32/Midl/first-is) MIDL attribute.

## Example

The following code shows various ways to specify a section in an array:

```cpp
// cpp_attr_ref_first_is.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"

[module(name="MyLib")];

[object, uuid(11111111-1111-1111-1111-111111111111)]
__interface b
{
   [id(0), propget, bindable, displaybind, defaultbind,
requestedit] HRESULT get_I([out, retval]long *i);
   HRESULT Proc1([in] short First, [in] short Last,
[first_is(First), last_is(Last), size_is(Last-First)] char Arr1[]);
   HRESULT Proc2([in] short First, [in] short Last,
[last_is(First), size_is(Last)] char Arr2[]);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Field in **`struct`** or **`union`**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[last_is](last-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)<br/>
[size_is](size-is.md)
