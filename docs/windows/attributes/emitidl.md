---
description: "Learn more about: emitidl"
title: "emitidl (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.emitidl"]
helpviewer_keywords: ["emitidl attribute"]
ms.assetid: 85b80c56-578e-4392-ac03-8443c74ebb7d
---
# emitidl

Specifies whether all subsequent IDL attributes are processed and placed in the generated .idl file.

## Syntax

```cpp
[ emitidl(state, defaultimports=boolean) ];
```

### Parameters

*state*<br/>
One of these possible values: **`true`**, **`false`**, `forced`, `restricted`, `push`, or `pop`.

- If **`true`**, any IDL category attributes encountered in a source code file are placed in the generated .idl file. This is the default setting for **emitidl**.

- If **`false`**, any IDL category attributes encountered in a source code file are not placed in the generated .idl file.

- If `restricted`, allows IDL attributes to be in the file without a [module](module-cpp.md) attribute. The compiler does not generate an .idl file.

- If `forced`, overrides a subsequent `restricted` attribute, which requires a file to have a `module` attribute if there are IDL attributes in the file.

- `push` lets you save the current **emitidl** settings to an internal **emitidl** stack, and `pop` lets you set **emitidl** to whatever value is at the top of the internal **emitidl** stack.

`defaultimports=`*boolean* \(optional)

- If *boolean* is **`true`**, docobj.idl is imported into the generated .idl file. Also, if an .idl file with the same name as an .h file that you `#include` into your source code is found in the same directory as the .h file, then the generated .idl file contains an import statement for that .idl file.

- If *boolean* is **`false`**, docobj.idl is not imported into the generated .idl file. You must explicitly import .idl files with [import](import.md).

## Remarks

After the **emitidl** C++ attribute is encountered in a source code file, IDL category attributes are placed in the generated .idl file. If there is no **emitidl** attribute, IDL attributes in the source code file are output to the generated .idl file.

It is possible to have multiple **emitidl** attributes in a source code file. If `[emitidl(false)];` is encountered in a file without a subsequent `[emitidl(true)];`, then no attributes are processed into the generated .idl file.

Each time the compiler encounters a new file, **emitidl** is implicitly set to **`true`**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler Attributes](compiler-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)
