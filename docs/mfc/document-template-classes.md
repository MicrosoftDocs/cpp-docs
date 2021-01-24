---
description: "Learn more about: Document-Template Classes"
title: "Document-Template Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["document templates [MFC], classes"]
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
---
# Document-Template Classes

Document-template objects coordinate the creation of document, view, and frame window objects when a new document or view is created.

[CDocTemplate](reference/cdoctemplate-class.md)<br/>
The base class for document templates. You will never use this class directly; instead, you use one of the other document-template classes derived from this class.

[CMultiDocTemplate](reference/cmultidoctemplate-class.md)<br/>
A template for documents in the multiple document interface (MDI). MDI applications can have multiple documents open at a time.

[CSingleDocTemplate](reference/csingledoctemplate-class.md)<br/>
A template for documents in the single document interface (SDI). SDI applications have only one document open at a time.

## Related Class

[CCreateContext](reference/ccreatecontext-structure.md)<br/>
A structure passed by a document template to window-creation functions to coordinate the creation of document, view, and frame-window objects.

## See also

[Class Overview](class-library-overview.md)
