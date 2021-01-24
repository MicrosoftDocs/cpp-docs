---
description: "Learn more about: OLE-Related Classes"
title: "OLE-Related Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX classes [MFC]", "OLE classes [MFC]", "OLE [MFC], classes"]
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
---
# OLE-Related Classes

These classes provide a number of different services, ranging from exceptions to file input and output.

[COleObjectFactory](reference/coleobjectfactory-class.md)<br/>
Used to create items when requested from other containers. This class serves as the base class for more specific types of factories, including `COleTemplateServer`.

[COleMessageFilter](reference/colemessagefilter-class.md)<br/>
Used to manage concurrency with OLE Lightweight Remote Procedure Calls (LRPC).

[COleStreamFile](reference/colestreamfile-class.md)<br/>
Uses the COM `IStream` interface to provide `CFile` access to compound files. This class (derived from `CFile`) enables MFC serialization to use OLE structured storage.

[CRectTracker](reference/crecttracker-class.md)<br/>
Used to allow moving, resizing, and reorientation of in-place items.

## See also

[Class Overview](class-library-overview.md)
