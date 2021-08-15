---
description: "Learn more about: CResourceException Class"
title: "CResourceException Class"
ms.date: "11/04/2016"
f1_keywords: ["CResourceException", "AFXWIN/CResourceException", "AFXWIN/CResourceException::CResourceException"]
helpviewer_keywords: ["CResourceException [MFC], CResourceException"]
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
---
# CResourceException Class

Generated when Windows cannot find or allocate a requested resource.

## Syntax

```
class CResourceException : public CSimpleException
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CResourceException::CResourceException](#cresourceexception)|Constructs a `CResourceException` object.|

## Remarks

No further qualification is necessary or possible.

For more information on using `CResourceException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CResourceException`

## Requirements

**Header:** afxwin.h

## <a name="cresourceexception"></a> CResourceException::CResourceException

Constructs a `CResourceException` object.

```
CResourceException();
```

### Remarks

Do not use this constructor directly, but rather call the global function [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). for more information about exceptions, see the article [Exception Handling in MFC](../exception-handling-in-mfc.md).

## See also

[CException Class](cexception-class.md)<br/>
[Hierarchy Chart](../hierarchy-chart.md)
