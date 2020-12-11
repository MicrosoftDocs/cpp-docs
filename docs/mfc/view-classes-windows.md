---
description: "Learn more about: View Classes (Windows)"
title: "View Classes (Windows)"
ms.date: "09/17/2019"
f1_keywords: ["vc.classes.view"]
helpviewer_keywords: ["form and record views [MFC]", "splitter window classes [MFC]", "view classes [MFC], Windows"]
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
---
# View Classes (Windows)

`CView` and its derived classes are child windows that represent the client area of a frame window. Views show data and accept input for a document.

A view class is associated with a document class and a frame window class using a document-template object.

[CView](../mfc/reference/cview-class.md)<br/>
The base class for application-specific views of a document's data. Views display data and accept user input to edit or select the data. Derive your view class or classes from `CView`.

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
The base class for views with scrolling capabilities. Derive your view class from `CScrollView` for automatic scrolling.

## Form and Record Views

Form views are also scrolling views. They are based on a dialog box template.

Record views are derived from form views. In addition to the dialog box template, they also have a connection to a database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template. DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.

[CHtmlEditView](../mfc/reference/chtmleditview-class.md)<br/>
A form view that provides the functionality of the WebBrowser HTML editing platform.

## Control Views

Control views display a control as their view.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
The base class for all views associated with Windows controls. The views based on controls are described below.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
A view that contains a Windows standard edit control (see [CEdit](../mfc/reference/cedit-class.md)). Edit controls support text editing, searching, replacing, and scrolling capabilities.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
A view that contains a Windows rich edit control (see [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). In addition to the capabilities of an edit control, rich edit controls support fonts, colors, paragraph formatting, and embedded OLE objects.

[CListView](../mfc/reference/clistview-class.md)<br/>
A view that contains a Windows list control (see [CListCtrl](../mfc/reference/clistctrl-class.md)). A list control displays a collection of items, each consisting of an icon and a label, in a manner similar to the right pane of File Explorer.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
A view that contains a Windows tree control (see [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). A tree control displays a hierarchical list of icons and labels arranged in a manner similar to the left pane of File Explorer.

## Related Classes

`CSplitterWnd` allows you to have multiple views within a single frame window. `CPrintDialog` and `CPrintInfo` support the print and print preview ability of views. `CRichEditDoc` and `CRichEditCntrItem` are used with `CRichEditView` to implement OLE container capabilities.

[CSplitterWnd](../mfc/reference/csplitterwnd-class.md)<br/>
A window that the user can split into multiple panes. These panes can be resizable by the user or fixed size.

[CPrintDialog](../mfc/reference/cprintdialog-class.md)<br/>
Provides a standard dialog box for printing a file.

[CPrintInfo](../mfc/reference/cprintinfo-structure.md)<br/>
A structure containing information about a print or print preview job. Used by `CView`'s printing architecture.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Maintains the list of OLE client items that are in a `CRichEditView`.

[CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)<br/>
Provides client-side access to an OLE item stored in a `CRichEditView`.

## See also

[Class Overview](../mfc/class-library-overview.md)
