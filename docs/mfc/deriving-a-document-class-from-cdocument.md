---
description: "Learn more about: Deriving a Document Class from CDocument"
title: "Deriving a Document Class from CDocument"
ms.date: "11/04/2016"
helpviewer_keywords: ["CDocument class [MFC], deriving from", "classes [MFC], deriving from CDocument", "document objects [MFC], derived", "derived classes [MFC], functions often overridden", "document classes [MFC], functions often overridden"]
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
---
# Deriving a Document Class from CDocument

Documents contain and manage your application's data. To use the MFC Application Wizard-supplied document class, you must do the following:

- Derive a class from `CDocument` for each type of document.

- Add member variables to store each document's data.

- Override `CDocument`'s `Serialize` member function in your document class. `Serialize` writes and reads the document's data to and from disk.

## Other Document Functions Often Overridden

You may also want to override other `CDocument` member functions. In particular, you will often need to override [OnNewDocument](reference/cdocument-class.md#onnewdocument) and [OnOpenDocument](reference/cdocument-class.md#onopendocument) to initialize the document's data members and [DeleteContents](reference/cdocument-class.md#deletecontents) to destroy dynamically allocated data. For information about overridable members, see class [CDocument](reference/cdocument-class.md) in the *MFC Reference*.

## See also

[Using Documents](using-documents.md)
