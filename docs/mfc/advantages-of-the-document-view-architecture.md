---
description: "Learn more about: Advantages of the Document/View Architecture"
title: "Advantages of the Document-View Architecture"
ms.date: "11/04/2016"
helpviewer_keywords: ["views [MFC], advantages", "document/view architecture [MFC], advantages of"]
ms.assetid: 0bc27071-e120-4889-939c-ce1e61fb9cb3
---
# Advantages of the Document/View Architecture

The key advantage to using the MFC document/view architecture is that the architecture supports multiple views of the same document particularly well. (If you don't need multiple views and the small overhead of document/view is excessive in your application, you can avoid the architecture. [Alternatives to the Document/View Architecture](alternatives-to-the-document-view-architecture.md).)

Suppose your application lets users view numerical data either in spreadsheet form or in chart form. A user might want to see simultaneously both the raw data, in spreadsheet form, and a chart that results from the data. You display these separate views in separate frame windows or in splitter panes within a single window. Now suppose the user can edit the data in the spreadsheet and see the changes instantly reflected in the chart.

In MFC, the spreadsheet view and the chart view would be based on different classes derived from CView. Both views would be associated with a single document object. The document stores the data (or perhaps obtains it from a database). Both views access the document and display the data they retrieve from it.

When a user updates one of the views, that view object calls `CDocument::UpdateAllViews`. That function notifies all of the document's views, and each view updates itself using the latest data from the document. The single call to `UpdateAllViews` synchronizes the different views.

This scenario would be difficult to code without the separation of data from view, particularly if the views stored the data themselves. With document/view, it's easy. The framework does most of the coordination work for you.

## What do you want to know more about

- [Alternatives to document/view](alternatives-to-the-document-view-architecture.md)

- [CDocument](reference/cdocument-class.md)

- [CView](reference/cview-class.md)

- [CDocument::UpdateAllViews](reference/cdocument-class.md#updateallviews)

- [CView::GetDocument](reference/cview-class.md#getdocument)

## See also

[Document/View Architecture](document-view-architecture.md)
