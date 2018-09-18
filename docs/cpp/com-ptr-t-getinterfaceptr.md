---
title: "_com_ptr_t::GetInterfacePtr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_ptr_t::GetInterfacePtr"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetInterfacePtr method [C++]"]
ms.assetid: 55e3e2c7-c939-48b5-a905-4b9cbefeea7e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_ptr_t::GetInterfacePtr

**Microsoft Specific**

Returns the encapsulated interface pointer.

## Syntax

```
Interface* GetInterfacePtr( ) const throw( ); 
Interface*& GetInterfacePtr() throw();
```

## Remarks

Returns the encapsulated interface pointer, which may be NULL.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)