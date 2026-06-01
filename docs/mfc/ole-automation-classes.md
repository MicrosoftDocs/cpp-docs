---
description: "Learn more about: OLE Automation Classes"
title: "OLE Automation Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["Automation, classes", "Automation classes [MFC], OLE classes", "OLE Automation [MFC], classes", "Automation classes [MFC]", "OLE Automation [MFC]"]
---
# OLE Automation Classes

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

These classes support automation clients (applications that control other applications). Automation servers (applications that can be controlled by other applications) are supported through [dispatch maps](reference/dispatch-maps.md).

[COleDispatchDriver](reference/coledispatchdriver-class.md)<br/>
Used to call automation servers from your automation client. When adding a class, this class is used to create type-safe classes for automation servers that provide a type library.

[COleDispatchException](reference/coledispatchexception-class.md)<br/>
An exception resulting from an error during OLE automation. Automation exceptions are thrown by automation servers and caught by automation clients.

## See also

[Class Overview](class-library-overview.md)
