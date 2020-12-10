---
description: "Learn more about: Document/View Creation"
title: "Document-View Creation"
ms.date: "11/04/2016"
helpviewer_keywords: ["documents [MFC], creating", "views [MFC], and frame windows", "views [MFC], creating", "tables [MFC]", "MFC, views", "document/view architecture [MFC], creating document/view", "object creators", "MFC, documents", "tables [MFC], objects each MFC object creates"]
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
---
# Document/View Creation

The framework supplies implementations of the **New** and **Open** commands (among others) on the **File** menu. Creation of a new document and its associated view and frame window is a cooperative effort among the application object, a document template, the newly created document, and the newly created frame window. The following table summarizes which objects create what.

### Object Creators

|Creator|Creates|
|-------------|-------------|
|Application object|Document template|
|Document template|Document|
|Document template|Frame window|
|Frame window|View|

## See also

[Document Templates and the Document/View Creation Process](document-templates-and-the-document-view-creation-process.md)<br/>
[Document Template Creation](document-template-creation.md)<br/>
[Relationships Among MFC Objects](relationships-among-mfc-objects.md)<br/>
[Creating New Documents, Windows, and Views](creating-new-documents-windows-and-views.md)
