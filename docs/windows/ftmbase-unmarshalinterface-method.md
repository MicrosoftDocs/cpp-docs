---
title: "FtmBase::UnmarshalInterface Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase::UnmarshalInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""UnmarshalInterface method""]"]
ms.assetid: 6850a621-e9a6-4001-bc1e-bd5d1b121adc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FtmBase::UnmarshalInterface Method

Initializes a newly created proxy and returns an interface pointer to that proxy.

## Syntax

```cpp
STDMETHODIMP UnmarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __deref_out void **ppv
) override;
```

### Parameters

*pStm*  
Pointer to the stream from which the interface pointer is to be unmarshaled.

*riid*  
Reference to the identifier of the interface to be unmarshaled.

*ppv*  
When this operation completes, the address of a pointer variable that receives the interface pointer requested in *riid*. If this operation is successful, **ppv* contains the requested interface pointer of the interface to be unmarshaled.

## Return Value

S_OK if successful; otherwise, E_NOINTERFACE or E_FAIL.

## Requirements

**Header:** ftm.h

**Namespace:** Microsoft::WRL

## See Also

[FtmBase Class](../windows/ftmbase-class.md)