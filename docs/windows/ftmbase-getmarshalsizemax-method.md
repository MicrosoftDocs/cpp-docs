---
title: "FtmBase::GetMarshalSizeMax Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""GetMarshalSizeMax method""]"]
ms.assetid: b416b1bf-c73e-45d5-abb8-04921c1a0c94
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FtmBase::GetMarshalSizeMax Method

Get the upper bound on the number of bytes needed to marshal the specified interface pointer on the specified object.

## Syntax

```cpp
STDMETHODIMP GetMarshalSizeMax(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out DWORD *pSize
) override;
```

### Parameters

*riid*  
Reference to the identifier of the interface to be marshaled.

*pv*  
Interface pointer to be marshaled; can be NULL.

*dwDestContext*  
Destination context where the specified interface is to be unmarshaled.

Specify one or more MSHCTX enumeration values.

Currently, unmarshaling can occur either in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).

*pvDestContext*  
Reserved for future use; must be NULL.

*mshlflags*  
Flag indicating whether the data to be marshaled is to be transmitted back to the client process — the typical case — or written to a global table, where it can be retrieved by multiple clients. Specify one or more MSHLFLAGS enumeration values.

*pSize*  
When this operation completes, pointer to the upper bound on the amount of data to be written to the marshaling stream.

## Return Value

S_OK if successful; otherwise, E_FAIL or E_NOINTERFACE.

## Requirements

**Header:** ftm.h

**Namespace:** Microsoft::WRL

## See Also

[FtmBase Class](../windows/ftmbase-class.md)