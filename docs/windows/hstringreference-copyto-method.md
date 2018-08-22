---
title: "HStringReference::CopyTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: 179d9b14-1ced-4b16-b297-19ca1e92a462
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference::CopyTo Method

Copies the current **HStringReference** object to an HSTRING object.

## Syntax

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### Parameters

*str*  
The HSTRING that receives the copy.

## Remarks

This method calls the [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) function.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HStringReference Class](../windows/hstringreference-class.md)