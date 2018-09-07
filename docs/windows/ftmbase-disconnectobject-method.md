---
title: "FtmBase::DisconnectObject Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase::DisconnectObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["DisconnectObject method"]
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FtmBase::DisconnectObject Method

Forcibly releases all external connections to an object. The object's server calls the object's implementation of this method prior to shutting down.

## Syntax

```cpp
STDMETHODIMP DisconnectObject(
   __in DWORD dwReserved
) override;
```

### Parameters

*dwReserved*  
Reserved for future use; must be zero.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Requirements

**Header:** ftm.h

**Namespace:** Microsoft::WRL

## See Also

[FtmBase Class](../windows/ftmbase-class.md)