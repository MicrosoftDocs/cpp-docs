---
description: "Learn more about: idl_module"
title: "idl_module (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.idl_module"]
helpviewer_keywords: ["idl_module attribute"]
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
---
# idl_module

Specifies an entry point in a .dll file.

## Syntax

```cpp
[ idl_module (name=module_name, dllname=dll, uuid="uuid", helpstring="help text", helpstringcontext=helpcontextID, helpcontext=helpcontext, hidden, restricted) ]
function declaration
```

### Parameters

*name*<br/>
A user-defined name for the code block that will appear in the .idl file.

*dllname*<br/>
(Optional) The .dll file that contains the export.

*uuid*<br/>
(Optional) A unique ID.

*helpstring*<br/>
(Optional) A character string used to describe the type library.

*helpstringcontext*<br/>
(Optional) The ID of a help topic in an .hlp or .chm file.

*helpcontext*<br/>
(Optional) The Help ID for this type library.

*hidden*<br/>
(Optional) A parameter that prevents the library from being displayed. See the [hidden](/windows/win32/Midl/hidden) MIDL attribute for more information.

*restricted*<br/>
(Optional) Members of the library cannot be arbitrarily called. See the [restricted](/windows/win32/Midl/restricted) MIDL attribute for more information.

*function declaration*<br/>
The function that you will define.

## Remarks

The **idl_module** C++ attribute lets you specify the entry point in a .dll file, which allows you to import from a .dll file.

The **idl_module** attribute has functionality similar to the [module](/windows/win32/Midl/module) MIDL attribute.

You can export anything from a COM object that you can export from a .dll file by putting a DLL entry point in the library block of an .idl file.

Your must use **idl_module** in two steps. First, you must define a name/DLL pair. Then, when you use **idl_module** to specify an entry point, specify the name and any additional attributes.

## Example

The following code shows how to use the **idl_module** attribute:

```cpp
// cpp_attr_ref_idl_module.cpp
// compile with: /LD
[idl_quote("midl_pragma warning(disable:2461)")];
[module(name="MyLibrary"), idl_module(name="MyLib", dllname="xxx.dll")];
[idl_module(name="MyLib"), entry(4), usesgetlasterror]
void FuncName(int i);
```

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
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[entry](entry.md)
