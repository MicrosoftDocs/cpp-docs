---
description: "Learn more about: CNotSupportedException Class"
title: "CNotSupportedException Class"
ms.date: "11/04/2016"
f1_keywords: ["CNotSupportedException", "AFX/CNotSupportedException", "AFX/CNotSupportedException::CNotSupportedException"]
helpviewer_keywords: ["CNotSupportedException [MFC], CNotSupportedException"]
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
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

## <a name="cnotsupportedexception"></a> CNotSupportedException::CNotSupportedException

Constructs a `CNotSupportedException` object.

```
CNotSupportedException();
```

### Remarks

Do not use this constructor directly, but rather call the global function [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). for more information about exception processing, see the article [Exception Handling in MFC](../exception-handling-in-mfc.md).

## See also

[CException Class](cexception-class.md)<br/>
[Hierarchy Chart](../hierarchy-chart.md)
