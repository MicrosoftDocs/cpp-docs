---
description: "Learn more about: TN032: MFC Exception Mechanism"
title: "TN032: MFC Exception Mechanism"
ms.date: "11/04/2016"
helpviewer_keywords: ["TN032", "MFC, exceptions", "CException class [MFC], using"]
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
---
# TN032: MFC Exception Mechanism

Previous versions of Visual C++ did not support the standard C++ exception mechanism, and MFC provided macros **TRY/CATCH/THROW** that were used instead. This version of Visual C++ fully supports C++ exceptions. This note covered some of the advanced implementation details of the previous macros including how to automatically cleanup stack based objects. Because C++ exceptions support stack unwinding by default, this technical note is no longer necessary.

Refer to [Exceptions: Using MFC Macros and C++ Exceptions](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) for more information on the differences between the MFC macros and the new C++ keywords.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
