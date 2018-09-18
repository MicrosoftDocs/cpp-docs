---
title: "CNotSupportedException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CNotSupportedException", "AFX/CNotSupportedException", "AFX/CNotSupportedException::CNotSupportedException"]
dev_langs: ["C++"]
helpviewer_keywords: ["CNotSupportedException [MFC], CNotSupportedException"]
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CNotSupportedException Class

Represents an exception that is the result of a request for an unsupported feature.

## Syntax

```
class CNotSupportedException : public CSimpleException
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CNotSupportedException::CNotSupportedException](#cnotsupportedexception)|Constructs a `CNotSupportedException` object.|

## Remarks

No further qualification is necessary or possible.

For more information on using `CNotSupportedException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CNotSupportedException`

## Requirements

**Header:** afx.h

##  <a name="cnotsupportedexception"></a>  CNotSupportedException::CNotSupportedException

Constructs a `CNotSupportedException` object.

```
CNotSupportedException();
```

### Remarks

Do not use this constructor directly, but rather call the global function [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). for more information about exception processing, see the article [Exception Handling in MFC](../exception-handling-in-mfc.md).

## See Also

[CException Class](cexception-class.md)<br/>
[Hierarchy Chart](../hierarchy-chart.md)


