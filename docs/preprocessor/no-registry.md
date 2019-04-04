---
title: "no_registry"
ms.date: "10/18/2018"
f1_keywords: ["no_registry"]
helpviewer_keywords: ["no_registry attribute"]
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
---
# no_registry

**no_registry** tells the compiler not to search the registry for type libraries imported with `#import`.

## Syntax

```
#import filename no_registry
```

### Parameters

*filename*<br/>
A type library.

## Remarks

If a referenced type library is not found in the include directories, the compilation will fail even if the type library is in the registry.  **no_registry** propagates to other type libraries implicitly imported with `auto_search`.

The compiler will never search the registry for type libraries that are specified by file name and passed directly to `#import`.

When `auto_search` is specified, the additional `#import`s will be generated with the **no_registry** setting of the initial `#import` (if the initial `#import` directive was **no_registry**, an `auto_search`-generated `#import` is also **no_registry**.)

**no_registry** is useful if you want to import cross referenced type libraries without the risk of the compiler finding an older version of the file in the registry. **no_registry** is also useful if the type library is not registered.

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)