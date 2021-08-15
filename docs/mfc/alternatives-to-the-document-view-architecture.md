---
description: "Learn more about: Alternatives to the Document/View Architecture"
title: "Alternatives to the Document-View Architecture"
ms.date: "11/04/2016"
helpviewer_keywords: ["documents [MFC], applications without", "CDocument class [MFC], space requirements", "views [MFC], applications without"]
ms.assetid: 2c22f352-a137-45ce-9971-c142173496fb
---
# Alternatives to the Document/View Architecture

MFC applications normally use the document/view architecture to manage information, file formats, and the visual representation of data to users. For the majority of desktop applications, the document/view architecture is an appropriate and efficient application architecture. This architecture separates data from viewing and, in most cases, simplifies your application and reduces redundant code.

However, the document/view architecture is not appropriate for some situations. Consider these examples:

- If you are porting an application written in C for Windows, you might want to complete your port before adding document/view support to your application.

- If you are writing a lightweight utility, you might find that you can do without the document/view architecture.

- If your original code already mixes data management with data viewing, moving the code to the document/view model is not worth the effort because you must separate the two. You might prefer to leave the code as is.

To create an application that does not use the document/view architecture, clear the **Document/View architecture support** check box in step 1 of the MFC Application Wizard. See [MFC Application Wizard](reference/mfc-application-wizard.md) for details.

> [!NOTE]
> Dialog-based applications produced by the MFC Application Wizard do not use the document/view architecture, so the **Document/View architecture support** check box is disabled if you select the dialog application type.

The Visual C++ wizards, as well as the source and dialog editors, work with the generated application just as they would with any other Wizard-generated application. The application can support toolbars, scrollbars, and a status bar, and has an **About** box. Your application will not register any document templates, and it will not contain a document class.

Note that your generated application has a view class, `CChildView`, derived from `CWnd`. MFC creates and positions one instance of the view class within the frame windows created by your application. MFC still enforces using a view window, because it simplifies positioning and managing the application's content. You can add painting code to the `OnPaint` member of this class. Your code should add scrollbars to the view rather than to the frame.

Because the document/view architecture provided by MFC is responsible for implementing many of an application's basic features, its absence in your project means that you are responsible for implementing many important features of your application:

- As provided by the MFC Application Wizard, the menu for your application contains only **New** and **Exit** commands on the **File** menu. (The **New** command is supported only for MDI applications, not SDI applications without Document/View support.) The generated menu resource will not support an MRU (most recently used) list.

- You must add handler functions and implementations for any commands that your application will support, including **Open** and **Save** on the **File** menu. MFC normally provides code to support these features, but that support is tightly bound to the document/view architecture.

- The toolbar for your application, if you requested one, will be minimal.

It is strongly recommended that you use the MFC Application Wizard to create applications without the document/view architecture, because the wizard guarantees a correct MFC architecture. However, if you must avoid using the wizard, here are several approaches for bypassing the document/view architecture in your code:

- Treat the document as an unused appendage and implement your data management code in the view class, as suggested above. Overhead for the document is relatively low. A single [CDocument](reference/cdocument-class.md) object incurs a small amount of overhead by itself, plus the small overhead of `CDocument`'s base classes, [CCmdTarget](reference/ccmdtarget-class.md) and [CObject](reference/cobject-class.md). Both of the latter classes are small.

   Declared in `CDocument`:

  - Two `CString` objects.

  - Three **BOOL**s.

  - One `CDocTemplate` pointer.

  - One `CPtrList` object, which contains a list of the document's views.

  Additionally, the document requires the amount of time to create the document object, its view objects, a frame window, and a document template object.

- Treat both the document and view as unused appendages. Put your data management and drawing code in the frame window rather than the view. This approach is closer to the C-language programming model.

- Override the parts of the MFC framework that create the document and view to eliminate creating them at all. The document creation process begins with a call to `CWinApp::AddDocTemplate`. Eliminate that call from your application class's `InitInstance` member function and, instead, create a frame window in `InitInstance` yourself. Put your data management code in your frame window class. The document/view creation process is illustrated in [Document/View Creation](document-view-creation.md). This is more work and requires a deeper understanding of the framework, but it frees you entirely of the document/view overhead.

The article [MFC: Using Database Classes Without Documents and Views](../data/mfc-using-database-classes-without-documents-and-views.md) gives more concrete examples of document/view alternatives in the context of database applications.

## See also

[Document/View Architecture](document-view-architecture.md)
