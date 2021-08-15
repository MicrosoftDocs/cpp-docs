---
description: "Learn more about: idl_quote"
title: "idl_quote (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.idl_quote"]
helpviewer_keywords: ["idl_quote attribute"]
ms.assetid: a370e1b7-948b-4e67-9a25-58facf24e4c9
---
# idl_quote

Allows you to use IDL constructs that are not supported in the current version of Visual C++ and have them pass through to the generated .idl file.

## Syntax

```cpp
[ idl_quote(text) ]
```

### Parameters

*text*<br/>
The attribute name that you intend the Microsoft C++ compiler to pass through to the generated .idl file without returning a compiler error.

## Remarks

If the **idl_quote** C++ attribute is used as a stand-alone attribute (with a semicolon after the closing bracket), then *text* is placed in the merged .idl file as is. If **idl_quote** is used on a symbol, *text* is placed within the attribute block for that symbol.

## Example

The following code shows how you could specify an unsupported attribute (using **in**, which is supported) and how to define and use an undefined .idl construct:

```cpp
// cpp_attr_ref_idl_quote.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLibrary")];

[export]
struct MYFLOT {
   int i;
};

[export]
struct MYDUB {
   int i;
};

[idl_quote("typedef union _S1_TYPE switch (long l1) U1_TYPE { case 1024: \
struct MYFLOT f1; case 2048: struct MYDUB d2; } S1_TYPE;") ];

typedef struct _S1_TYPE {
   long l1;

union {
   MYFLOT f1; MYDUB d2; } U1_TYPE;
} S1_TYPE;

[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), object]
__interface IStatic{
   HRESULT Func1([idl_quote("in")] int i);
   HRESULT func( S1_TYPE* myStruct );
};
```

This code causes `MYFLOT` and `MYDUB` and the *text* entry to be placed in the generated .idl file. The *name* parameter forces *text* to be placed before anything that references *name* in the generated .idl file. The *dependencies* parameter forces the dependency list definitions to be placed before *text* in the generated .idl file.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)
