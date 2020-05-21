---
title: "Cleaning Up Documents and Views"
ms.date: "11/04/2016"
helpviewer_keywords: ["views [MFC], cleaning up", "documents [MFC], cleaning up", "documents [MFC], closing"]
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
---
# Cleaning Up Documents and Views

When a document is closing, the framework first calls its [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) member function. If you allocated any memory on the heap during the course of the document's operation, `DeleteContents` is the best place to deallocate it.

> [!NOTE]
> You should not deallocate document data in the document's destructor. In the case of an SDI application, the document object might be reused.

You can override a view's destructor to deallocate any memory you allocated on the heap.

## See also

[Initializing and Cleaning Up Documents and Views](../mfc/initializing-and-cleaning-up-documents-and-views.md)
