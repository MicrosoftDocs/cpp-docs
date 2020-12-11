---
description: "Learn more about: CInvalidArgException Class"
title: "CInvalidArgException Class"
ms.date: "11/04/2016"
f1_keywords: ["CInvalidArgException", "AFX/CInvalidArgException", "AFX/CInvalidArgException::CInvalidArgException"]
helpviewer_keywords: ["CInvalidArgException [MFC], CInvalidArgException"]
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
---
# CInvalidArgException Class

This class represents an invalid argument exception condition.

## Syntax

```
class CInvalidArgException : public CSimpleException
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CInvalidArgException::CInvalidArgException](#cinvalidargexception)|The constructor.|

## Remarks

A `CInvalidArgException` object represents an invalid argument exception condition.

For more information on Exception Handling, see the [CException Class](../../mfc/reference/cexception-class.md) topic and [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CInvalidArgException`

## Requirements

**Header:** afx.h

## <a name="cinvalidargexception"></a> CInvalidArgException::CInvalidArgException

The constructor.

```
CInvalidArgException();
```

### Remarks

Do not use this constructor directly; call the global function **AfxThrowInvalidArgException**.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CSimpleException Class](../../mfc/reference/csimpleexception-class.md)
