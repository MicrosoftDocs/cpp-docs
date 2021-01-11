---
description: "Learn more about: ExitInstance Member Function"
title: "ExitInstance Member Function"
ms.date: "11/04/2016"
f1_keywords: []
helpviewer_keywords: ["programs [MFC], terminating", "CWinApp class [MFC], ExitInstance", "ExitInstance method [MFC]"]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
---
# ExitInstance Member Function

The [ExitInstance](reference/cwinapp-class.md#exitinstance) member function of class [CWinApp](reference/cwinapp-class.md) is called each time a copy of your application terminates, usually as a result of the user quitting the application.

Override `ExitInstance` if you need special cleanup processing, such as freeing graphics device interface (GDI) resources or deallocating memory used during program execution. Cleanup of standard items such as documents and views, however, is provided by the framework, with other overridable functions for doing special cleanup specific to those objects.

## See also

[CWinApp: The Application Class](cwinapp-the-application-class.md)
