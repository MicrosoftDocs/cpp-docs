---
title: "no_injected_text | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.no_injected_text"]
dev_langs: ["C++"]
helpviewer_keywords: ["no_injected_text attribute"]
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# no_injected_text

Prevents the compiler from injecting code as a result of attribute use.

## Syntax

```cpp  
[ no_injected_text(  
   boolean  
) ];  
```

### Parameters

*boolean* (optional)  
**true** if you want no code injected, **false** to allow code to be injected. **true** is the default.

## Remarks

The most common use of the **no_injected_text** C++ attribute is by the [/Fx](../build/reference/fx-merge-injected-code.md) compiler option, which inserts the **no_injected_text** attribute into the .mrg file.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[Compiler Attributes](../windows/compiler-attributes.md)   