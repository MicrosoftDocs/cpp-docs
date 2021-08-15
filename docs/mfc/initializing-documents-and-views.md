---
description: "Learn more about: Initializing Documents and Views"
title: "Initializing Documents and Views"
ms.date: "11/04/2016"
helpviewer_keywords: ["initializing documents [MFC]", "documents [MFC], initializing", "views [MFC], initializing", "initializing objects [MFC], document objects", "initializing views [MFC]"]
ms.assetid: 33cb8643-8a16-478c-bc26-eccc734e3661
---
# Initializing Documents and Views

Documents are created in two different ways, so your document class must support both ways. First, the user can create a new, empty document with the File New command. In that case, initialize the document in your override of the [OnNewDocument](reference/cdocument-class.md#onnewdocument) member function of class [CDocument](reference/cdocument-class.md). Second, the user can use the Open command on the File menu to create a new document whose contents are read from a file. In that case, initialize the document in your override of the [OnOpenDocument](reference/cdocument-class.md#onopendocument) member function of class `CDocument`. If both initializations are the same, you can call a common member function from both overrides, or `OnOpenDocument` can call `OnNewDocument` to initialize a clean document and then finish the open operation.

Views are created after their documents are created. The best time to initialize a view is after the framework has finished creating the document, frame window, and view. You can initialize your view by overriding the [OnInitialUpdate](reference/cview-class.md#oninitialupdate) member function of [CView](reference/cview-class.md). If you need to reinitialize or adjust anything each time the document changes, you can override [OnUpdate](reference/cview-class.md#onupdate).

## See also

[Initializing and Cleaning Up Documents and Views](initializing-and-cleaning-up-documents-and-views.md)
