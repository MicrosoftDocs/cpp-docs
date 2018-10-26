---
title: "CNoMultipleResults Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CNoMultipleResults", "ATL.CNoMultipleResults", "ATL::CNoMultipleResults"]
dev_langs: ["C++"]
helpviewer_keywords: ["CNoMultipleResults class"]
ms.assetid: 343e77c4-b319-476e-b592-901ab9b2f34e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CNoMultipleResults Class

Used as a template argument (*TMultiple*) to [CCommand](../../data/oledb/ccommand-class.md) to create an optimized command that handles a single result set.

## Syntax

```cpp
class CNoMultipleResults
```

## Remarks

If you want a command to handle multiple result sets, use [CMultipleResults](../../data/oledb/cmultipleresults-class.md) instead.

## Requirements

**Header:** atldbcli.h

## See Also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)