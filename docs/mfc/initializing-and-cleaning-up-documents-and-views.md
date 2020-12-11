---
description: "Learn more about: Initializing and Cleaning Up Documents and Views"
title: "Initializing and Cleaning Up Documents and Views"
ms.date: "11/04/2016"
helpviewer_keywords: ["initializing documents [MFC]", "views [MFC], cleaning up", "documents [MFC], initializing", "documents [MFC], cleaning up", "views [MFC], initializing", "initializing objects [MFC], document objects", "document objects [MFC], life cycle of", "initializing views [MFC]"]
ms.assetid: 95d6f09b-a047-4079-856a-ae7d0548e9d2
---
# Initializing and Cleaning Up Documents and Views

Use the following guidelines for initializing and cleaning up after your documents and views:

- The MFC framework initializes documents and views; you initialize any data you add to them.

- The framework cleans up as documents and views close; you must deallocate any memory that you allocated on the heap from within the member functions of those documents and views.

> [!NOTE]
> Recall that initialization for the whole application is best done in your override of the [InitInstance](reference/cwinapp-class.md#initinstance) member function of class `CWinApp`, and cleanup for the whole application is best done in your override of the `CWinApp` member function [ExitInstance](reference/cwinapp-class.md#exitinstance).

The life cycle of a document (and its frame window and view or views) in an MDI application is as follows:

1. During dynamic creation, the document constructor is called.

1. For each new document, the document's [OnNewDocument](reference/cdocument-class.md#onnewdocument) or [OnOpenDocument](reference/cdocument-class.md#onopendocument) is called.

1. The user interacts with the document throughout its lifetime. Typically this happens as the user works on document data through the view, selecting and editing the data. The view passes changes on to the document for storage and updating other views. During this time both the document and the view might handle commands.

1. The framework calls [DeleteContents](reference/cdocument-class.md#deletecontents) to delete data specific to a document.

1. The document's destructor is called.

In an SDI application, step 1 is performed once, when the document is first created. Then steps 2 through 4 are performed repeatedly each time a new document is opened. The new document reuses the existing document object. Finally, step 5 is performed when the application ends.

## What do you want to know more about

- [Initializing Documents and Views](initializing-documents-and-views.md)

- [Cleaning Up Documents and Views](cleaning-up-documents-and-views.md)

## See also

[Document/View Architecture](document-view-architecture.md)
