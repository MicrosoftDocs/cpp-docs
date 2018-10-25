---
title: "CMultipleResults Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CMultipleResults", "ATL::CMultipleResults", "CMultipleResults"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMultipleResults class"]
ms.assetid: 6ce5bbb9-b551-483c-988a-e6aee9135a19
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CMultipleResults Class

If you want a command to handle multiple result sets, use `CMultipleResults` for the `CCommand` template argument *TMultiple*.

## Syntax

```cpp
class CMultipleResults
```

## Remarks

To handle multiple result sets, [CCommand](../../data/oledb/ccommand-class.md) must inherit from this class.

## Requirements

**Header:** atldbcli

## See Also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)