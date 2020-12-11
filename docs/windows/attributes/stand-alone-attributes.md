---
description: "Learn more about: Stand-Alone Attributes"
title: "Stand-Alone Attributes (C++ COM)"
ms.date: "10/02/2018"
helpviewer_keywords: ["standalone attributes", "attributes [C++/CLI], standalone"]
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
---
# Stand-Alone Attributes

A stand-alone attribute does not operate on a C++ keyword but is more like a line of code. Stand-alone attribute statements require a semicolon at the end of the line.

## Stand-alone attribute list

|Attribute|Description|
|---------------|-----------------|
|[cpp_quote](cpp-quote.md)|Emits the specified string, without the quote characters, into the generated header file.|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[db_command](db-command.md)|Creates an OLE DB command.|
|[emitidl](emitidl.md)|Determines whether all subsequent IDL attributes will be processed and placed in the generated .idl file.|
|[idl_module](idl-module.md)|Specifies an entry point in a DLL.|
|[idl_quote](idl-quote.md)|Allows you to use IDL constructs that are not supported in the current version of Visual C++ and have them pass through to the generated .idl file.|
|[import](import.md)|Specifies another .idl, .odl, or .h file containing definitions you want to reference from your main .idl file.|
|[importidl](importidl.md)|Inserts the specified .idl file into the generated .idl file|
|[importlib](importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|
|[include](include-cpp.md)|Specifies one or more header files to be included in the generated .idl file.|
|[includelib](includelib-cpp.md)|Causes an .idl or .h file to be included in the generated .idl file.|
|[library_block](library-block.md)|Places a construct inside the .idl file's library block.|
|[module](module-cpp.md)|Defines the library block in the .idl file.|
|[no_injected_text](no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|
|[pragma](pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|

## See also

[Attributes by Usage](attributes-by-usage.md)
