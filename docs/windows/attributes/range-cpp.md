---
description: "Learn more about: range (C++)"
title: "range  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.range"]
helpviewer_keywords: ["range attribute"]
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
---
# range (C++)

Specifies a range of allowable values for arguments or fields whose values are set at run time.

## Syntax

```cpp
[ range(low, high) ]
```

### Parameters

*low*<br/>
The low range value.

*high*<br/>
The high range value.

## Remarks

The **range** C++ attribute has the same functionality as the [range](/windows/win32/Midl/range) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_range.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method, interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Data Member Attributes](data-member-attributes.md)
