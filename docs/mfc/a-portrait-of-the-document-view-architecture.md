---
description: "Learn more about: A Portrait of the Document/View Architecture"
title: "A Portrait of the Document-View Architecture"
ms.date: "11/04/2016"
helpviewer_keywords: ["documents [MFC], views", "multiple views [MFC], updating from document", "document/view architecture [MFC]", "views [MFC], and user input", "documents [MFC], accessing data from view", "views [MFC], updating", "input [MFC], view class", "documents [MFC], multiple views", "document/view architecture [MFC], accessing data from view", "document/view architecture [MFC], about document/view architecture", "views [MFC], accessing document data from"]
ms.assetid: 4e7f65dc-b166-45d8-bcd5-9bb0d399b946
---
# A Portrait of the Document/View Architecture

Documents and views are paired in a typical MFC application. Data is stored in the document, but the view has privileged access to the data. The separation of document from view separates the storage and maintenance of data from its display.

## Gaining Access to Document Data from the View

The view accesses its document's data either with the [GetDocument](reference/cview-class.md#getdocument) function, which returns a pointer to the document, or by making the view class a C++ **`friend`** of the document class. The view then uses its access to the data to obtain the data when it is ready to draw or otherwise manipulate it.

For example, from the view's [OnDraw](reference/cview-class.md#ondraw) member function, the view uses `GetDocument` to obtain a document pointer. Then it uses that pointer to access a `CString` data member in the document. The view passes the string to the `TextOut` function. To see the code for this example, see [Drawing in a View](drawing-in-a-view.md).

## User Input to the View

The view might also interpret a mouse click within itself as either selection or editing of data. Similarly it might interpret keystrokes as data entry or editing. Suppose the user types a string in a view that manages text. The view obtains a pointer to the document and uses the pointer to pass the new data to the document, which stores it in some data structure.

## Updating Multiple Views of the Same Document

In an application with multiple views of the same document — such as a splitter window in a text editor — the view first passes the new data to the document. Then it calls the document's [UpdateAllViews](reference/cdocument-class.md#updateallviews) member function, which tells all views of the document to update themselves, reflecting the new data. This synchronizes the views.

### What do you want to know more about

- [Advantages of the document/view architecture](advantages-of-the-document-view-architecture.md)

- [Alternatives to the document/view architecture](alternatives-to-the-document-view-architecture.md)

## See also

[Document/View Architecture](document-view-architecture.md)
