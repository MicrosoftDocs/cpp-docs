---
description: "Learn more about: Deriving a Document Class from CDocument"
title: "Deriving a Document Class from CDocument"
ms.date: "11/04/2016"
helpviewer_keywords: ["CDocument class [MFC], deriving from", "classes [MFC], deriving from CDocument", "document objects [MFC], derived", "derived classes [MFC], functions often overridden", "document classes [MFC], functions often overridden"]
ms.topic: concept-article
---
# Deriving a Document Class from CDocument

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

Documents contain and manage your application's data. To use the MFC Application Wizard-supplied document class, you must do the following:

- Derive a class from `CDocument` for each type of document.

- Add member variables to store each document's data.

- Override `CDocument`'s `Serialize` member function in your document class. `Serialize` writes and reads the document's data to and from disk.

## Other Document Functions Often Overridden

You may also want to override other `CDocument` member functions. In particular, you will often need to override [OnNewDocument](reference/cdocument-class.md#onnewdocument) and [OnOpenDocument](reference/cdocument-class.md#onopendocument) to initialize the document's data members and [DeleteContents](reference/cdocument-class.md#deletecontents) to destroy dynamically allocated data. For information about overridable members, see class [CDocument](reference/cdocument-class.md) in the *MFC Reference*.

## See also

[Using Documents](using-documents.md)
