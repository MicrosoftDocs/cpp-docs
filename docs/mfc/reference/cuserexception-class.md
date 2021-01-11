---
description: "Learn more about: CUserException Class"
title: "CUserException Class"
ms.date: "11/04/2016"
f1_keywords: ["CUserException"]
helpviewer_keywords: ["operations [MFC], stopping", "exceptions [MFC], throwing", "CUserException class [MFC]", "errors [MFC], trapping", "operations [MFC]", "throwing exceptions [MFC], stopping user operations"]
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
---
# CUserException Class

Thrown to stop an end-user operation.

## Syntax

```
class CUserException : public CSimpleException
```

## Remarks

Use `CUserException` when you want to use the throw/catch exception mechanism for application-specific exceptions. "User" in the class name can be interpreted as "my user did something exceptional that I need to handle."

A `CUserException` is usually thrown after calling the global function `AfxMessageBox` to notify the user that an operation has failed. When you write an exception handler, handle the exception specially since the user usually has already been notified of the failure. The framework throws this exception in some cases. To throw a `CUserException` yourself, alert the user and then call the global function `AfxThrowUserException`.

In the example below, a function containing operations that may fail alerts the user and throws a `CUserException`. The calling function catches the exception and handles it specially:

[!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]

For more information on using `CUserException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CUserException`

## Requirements

**Header:** afxwin.h

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CException Class](../../mfc/reference/cexception-class.md)
