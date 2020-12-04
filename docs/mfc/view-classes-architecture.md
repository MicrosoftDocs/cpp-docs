---
description: "Learn more about: View Classes (Architecture)"
title: "View Classes (Architecture)"
ms.date: "09/17/2019"
helpviewer_keywords: ["form and record views [MFC]", "view classes [MFC]", "control views [MFC]", "view classes [MFC], architecture"]
ms.assetid: 8894579a-1436-441e-b985-83711061e495
---
# View Classes (Architecture)

`CView` and its derived classes are child windows that represent the client area of a frame window. Views show data and accept input for a document.

A view class is associated with a document class and a frame window class using a document-template object.

[CView](../mfc/reference/cview-class.md)<br/>
The base class for application-specific views of a document's data. Views display data and accept user input to edit or select the data. Derive your view class(es) from `CView`.

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
The base class for views with scrolling capabilities. Derive your view class from `CScrollView` for automatic scrolling.

## Form and Record Views

Form views are also scrolling views. They are based on a dialog box template.

Record views are derived from form views. In addition to the dialog box template, they also have a connection to a database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template. DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

[CHtmlView](../mfc/reference/chtmlview-class.md)<br/>
Supports a control for Web browsing within an application. The control supports dynamic HTML in MFC.

[COLEDBRecordView](../mfc/reference/coledbrecordview-class.md)<br/>
Provides MFC OLE DB support for form views.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.

## Control Views

Control views display a control as their view.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
The base class for all views associated with Windows controls. The views based on controls are described below.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
A view that contains a Windows standard edit control (see [CEdit](../mfc/reference/cedit-class.md)). Edit controls support text editing, searching, replacing, and scrolling capabilities.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
A view that contains a Windows rich edit control (see [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). In addition to the capabilities of an edit control, rich edit controls support fonts, colors, paragraph formatting, and embedded OLE objects.

[CListView](../mfc/reference/clistview-class.md)<br/>
A view that contains a Windows list control (see [CListCtrl](../mfc/reference/clistctrl-class.md)). A list control displays icons and strings in a manner similar to the right pane of File Explorer.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
A view that contains a Windows tree control (see [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). A tree control displays icons and strings arranged in a hierarchy in a manner similar to the left pane of File Explorer.

## See also

[Class Overview](../mfc/class-library-overview.md)
