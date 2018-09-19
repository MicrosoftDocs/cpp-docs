---
title: "idl_module | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.idl_module"]
dev_langs: ["C++"]
helpviewer_keywords: ["idl_module attribute"]
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# idl_module

Specifies an entry point in a .dll file.

## Syntax

```cpp
[ idl_module (
   name=module_name,
   dllname=dll,
   uuid="uuid",
   helpstring="help text",
   helpstringcontext=helpcontextID,
   helpcontext=helpcontext,
   hidden,
   restricted
) ]
function declaration
```

### Parameters

*name*  
A user-defined name for the code block that will appear in the .idl file.

*dllname*  
(Optional) The .dll file that contains the export.

*uuid*  
(Optional) A unique ID.

*helpstring*  
(Optional) A character string used to describe the type library.

*helpstringcontext*  
(Optional) The ID of a help topic in an .hlp or .chm file.

*helpcontext*  
(Optional) The Help ID for this type library.

*hidden*  
(Optional) A parameter that prevents the library from being displayed. See the [hidden](/windows/desktop/Midl/hidden) MIDL attribute for more information.

*restricted*  
(Optional) Members of the library cannot be arbitrarily called. See the [restricted](/windows/desktop/Midl/restricted) MIDL attribute for more information.

*function declaration*  
The function that you will define.

## Remarks

The **idl_module** C++ attribute lets you specify the entry point in a .dll file, which allows you to import from a .dll file.

The **idl_module** attribute has functionality similar to the [module](/windows/desktop/Midl/module) MIDL attribute.

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

### Attribute Context

|||
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Stand-Alone Attributes](../windows/stand-alone-attributes.md)<br/>
[entry](../windows/entry.md)  