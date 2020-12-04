---
description: "Learn more about: Multiple Document Types, Views, and Frame Windows"
title: "Multiple Document Types, Views, and Frame Windows"
ms.date: "11/19/2018"
helpviewer_keywords: ["static splitter windows [MFC]", "multiple views [MFC]", "multiple document types [MFC]", "multiple views [MFC], frame windows", "document classes [MFC], multiple", "documents [MFC], multiple types of", "splitter windows [MFC], dynamic", "dynamic splitter windows [MFC]", "windows [MFC], dynamic splitter", "windows [MFC], static splitter", "multiple frame windows [MFC]", "splitter windows [MFC], static"]
ms.assetid: c6b9e4e0-7c9c-45f1-a804-aeac39c9a128
---
# Multiple Document Types, Views, and Frame Windows

The standard relationship among a document, its view, and its frame window is described in [Document/View Creation](document-view-creation.md). Many applications support a single document type (but possibly multiple open documents of that type) with a single view on the document and only one frame window per document. But some applications may need to alter one or more of those defaults.

## What do you want to know more about

- [Multiple document types](#_core_multiple_document_types)

- [Multiple views](#_core_multiple_views)

- [Multiple frame windows](#_core_multiple_frame_windows)

- [Splitter windows](#_core_splitter_windows)

## <a name="_core_multiple_document_types"></a> Multiple Document Types

The MFC Application Wizard creates a single document class for you. In some cases, though, you may need to support more than one document type. For example, your application may need worksheet and chart documents. Each document type is represented by its own document class and probably by its own view class as well. When the user chooses the File New command, the framework displays a dialog box that lists the supported document types. Then it creates a document of the type that the user chooses. Each document type is managed by its own document-template object.

To create extra document classes, see [Adding a Class](../ide/adding-a-class-visual-cpp.md). Choose [CDocument](reference/cdocument-class.md) as the Class Type to derive from and supply the requested document information. Then implement the new class's data.

To let the framework know about your extra document class, you must add a second call to [AddDocTemplate](reference/cwinapp-class.md#adddoctemplate) in your application class's [InitInstance](reference/cwinapp-class.md#initinstance) override. For more information, see [Document Templates](document-templates-and-the-document-view-creation-process.md).

## <a name="_core_multiple_views"></a> Multiple Views

Many documents require only a single view, but it is possible to support more than one view of a single document. To help you implement multiple views, a document object keeps a list of its views, provides member functions for adding and removing views, and supplies the [UpdateAllViews](reference/cdocument-class.md#updateallviews) member function for letting multiple views know when the document's data has changed.

MFC supports three common user interfaces requiring multiple views on the same document. These models are:

- View objects of the same class, each in a separate MDI document frame window.

   You might want to support creating a second frame window on a document. The user could choose a New Window command to open a second frame with a view of the same document and then use the two frames to view different portions of the document simultaneously. The framework supports the New Window command on the Window menu for MDI applications by duplicating the initial frame window and view attached to the document.

- View objects of the same class in the same document frame window.

   Splitter windows split the view space of a single document window into multiple separate views of the document. The framework creates multiple view objects from the same view class. For more information, see [Splitter Windows](#_core_splitter_windows).

- View objects of different classes in a single frame window.

   In this model, a variation of the splitter window, multiple views share a single frame window. The views are constructed from different classes, each view providing a different way to view the same document. For example, one view might show a word-processing document in normal mode while the other view shows it in outline mode. A splitter control allows the user to adjust the relative sizes of the views.

The following figure, divided into parts a, b, and c, shows the three user-interface models in the order presented above.

![Multiple&#45;view user interfaces](../mfc/media/vc37a71.gif "Multiple&#45;view user interfaces") <br/>
Multiple-View User Interfaces

The framework provides these models by implementing the New Window command and by providing class [CSplitterWnd](reference/csplitterwnd-class.md), as discussed in [Splitter Windows](#_core_splitter_windows). You can implement other models using these as your starting point. For sample programs that illustrate different configurations of views, frame windows, and splitters, see [MFC Samples](../overview/visual-cpp-samples.md#mfc-samples).

For more information about `UpdateAllViews`, see class [CView](reference/cview-class.md) in the *MFC Reference* and the [Scribble sample](../overview/visual-cpp-samples.md).

## <a name="_core_multiple_frame_windows"></a> Multiple Frame Windows

You can use the New Window command on the Window menu for MDI applications to create a second frame window on the same document. For more information, see the first model in the figure Multiple-View User Interfaces.

## <a name="_core_splitter_windows"></a> Splitter Windows

In a splitter window, the window is, or can be, split into two or more scrollable panes. A splitter control (or "split box") in the window frame next to the scroll bars allows the user to adjust the relative sizes of the panes. Each pane is a view on the same document. In "dynamic" splitters, the views are of the same class, as shown in part b of the figure Multiple-View User Interfaces. In "static" splitters, the views can be of different classes. Splitter windows of both kinds are supported by class [CSplitterWnd](reference/csplitterwnd-class.md).

Dynamic splitter windows, with views of the same class, allow the user to split a window into multiple panes at will and then scroll different panes to see different parts of the document. The user can also unsplit the window to remove the additional views. The splitter windows added to the [Scribble sample](../overview/visual-cpp-samples.md) are an example. That topic describes the technique for creating dynamic splitter windows. A dynamic splitter window is shown in part b of the figure Multiple-View User Interfaces.

Static splitter windows, with views of different classes, start with the window split into multiple panes, each with a different purpose. For example, in the Visual C++ bitmap editor, the image window shows two panes side by side. The left-hand pane displays a life-sized image of the bitmap. The right-hand pane displays a zoomed or magnified image of the same bitmap. The panes are separated by a "splitter bar" that the user can drag to change the relative sizes of the panes. A static splitter window is shown in part c of the figure Multiple-View User Interfaces.

For more information, see class [CSplitterWnd](reference/csplitterwnd-class.md) in the *MFC Reference* and [MFC Samples](../overview/visual-cpp-samples.md#mfc-samples).

## See also

[Document/View Architecture](document-view-architecture.md)
