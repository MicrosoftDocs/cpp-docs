---
description: "Learn more about: dual"
title: "dual (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.dual"]
helpviewer_keywords: ["dual attribute"]
ms.assetid: 5d4a9069-d819-42cd-ba56-bbcda17157d9
---
# dual

Places an interface in the .idl file as a dual interface.

## Syntax

```cpp
[dual]
```

## Remarks

When the **dual** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.

## Example

The following code is an attribute block that uses **dual** before an interface definition:

```cpp
// cpp_attr_ref_dual.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];

[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), dual]

__interface IStatic : IDispatch
{
   HRESULT Func1(int i);
   [   propget,    id(1),    bindable,    displaybind,    defaultbind,    requestedit
   ]
   HRESULT P1([out, retval] long *nSize);
   [   propput,    id(1),    bindable,    displaybind,    defaultbind,    requestedit
   ]
   HRESULT P1([in] long nSize);
};

[cpp_quote("#include file.h")];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`dispinterface`|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Attributes by Usage](attributes-by-usage.md)<br/>
[custom](custom-cpp.md)<br/>
[dispinterface](dispinterface.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)
