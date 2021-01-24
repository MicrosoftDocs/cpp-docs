---
description: "Learn more about: MFC: Using Database Classes Without Documents and Views"
title: "MFC: Using Database Classes Without Documents and Views"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC applications [C++], without views", "documents [C++], applications without", "ODBC applications [C++]", "document/view architecture [C++], in databases", "files [C++], MFC", "database classes [C++], MFC", "CRecordView class, using in database applications", "database applications [C++], without views", "database applications [C++], application wizard options", "application wizards [C++], creating database applications", "ODBC [C++], file support in database applications", "ODBC applications [C++], without documents", "database applications [C++], without documents", "user interface [C++], drawing information"]
ms.assetid: 15bf52d4-91cf-4b1d-8b37-87c3ae70123a
---
# MFC: Using Database Classes Without Documents and Views

Sometimes you might not want to use the framework's document/view architecture in your database applications. This topic explains:

- [When you do not need to use documents](#_core_when_you_don.92.t_need_documents) such as document serialization.

- [Application wizard options](#_core_appwizard_options_for_documents_and_views) to support applications without serialization and without document-related **File** menu commands such as **New**, **Open**, **Save**, and **Save As**.

- [How to work with an application that uses a minimal document](#_core_applications_with_minimal_documents).

- [How to structure an application with no document or view](#_core_applications_with_no_document).

## <a name="_core_when_you_don.92.t_need_documents"></a> When You Do Not Need Documents

Some applications have a distinct concept of a document. These applications typically load all or most of a file from storage into memory with a **File Open** command. They write the updated file back to storage all at once with a **File Save** or **Save As** command. What the user sees is a data file.

Some categories of applications, however, do not require a document. Database applications operate in terms of transactions. The application selects records from a database and presents them to the user, often one at a time. What the user sees is usually a single current record, which might be the only one in memory.

If your application does not require a document for storing data, you can dispense with some or all of the framework's document/view architecture. How much you dispense with depends on the approach you prefer. You might:

- Use a minimal document as a place to store a connection to your data source but dispense with normal document features such as serialization. This is useful when you want several views of the data and want to synchronize all the views, updating them all at once and so on.

- Use a frame window, into which you draw directly, rather than using a view. In this case, you omit the document and store any data or data connections in the frame-window object.

## <a name="_core_appwizard_options_for_documents_and_views"></a> Application Wizard Options for Documents and Views

The MFC Application Wizard has several options in **Select database support**, which are listed in the following table. If you use the MFC Application Wizard to create an application, all these options produce applications with documents and views. Some options provide documents and views that omit unneeded document functionality. For more information, see [Database Support, MFC Application Wizard](../mfc/reference/database-support-mfc-application-wizard.md).

|Option|View|Document|
|------------|----------|--------------|
|**None**|Derived from `CView`.|Provides no database support. This is the default option.<br /><br /> If you select the **Document/view architecture support** option on the [Application Type, MFC Application Wizard](../mfc/reference/application-type-mfc-application-wizard.md) page, you get full document support including serialization and **New**, **Open**, **Save**, and **Save As** commands on the **File** menu. See [Applications with No Document](#_core_applications_with_no_document).|
|**Header files only**|Derived from `CView`.|Provides the basic level of database support for your application.<br /><br /> Includes Afxdb.h. Adds link libraries, but does not create any database-specific classes. You can create recordsets later and use them to examine and update records.|
|**Database view without file support**|Derived from `CRecordView`|Provides document support but no serialization support. Document can store recordset and coordinate multiple views; does not support serialization or the **New**, **Open**, **Save**, and **Save As** commands. See [Applications with Minimal Documents](#_core_applications_with_minimal_documents). If you include a database view, you must specify the source of the data.<br /><br /> Includes database header files, link libraries, a record view, and a recordset. (Available only for applications with the **Document/view architecture support** option selected on the [Application Type, MFC Application Wizard](../mfc/reference/application-type-mfc-application-wizard.md) page.)|
|**Database view with file support**|Derived from `CRecordView`|Provides full document support, including serialization and document-related **File** menu commands. Database applications typically operate on a per-record basis rather than on a per-file basis and so do not need serialization. However, you might have a special use for serialization. See [Applications with Minimal Documents](#_core_applications_with_minimal_documents). If you include a database view, you must specify the source of the data.<br /><br /> Includes database header files, link libraries, a record view, and a recordset. (Available only for applications with the **Document/view architecture support** option selected on the [Application Type, MFC Application Wizard](../mfc/reference/application-type-mfc-application-wizard.md) page.)|

For a discussion of alternatives to serialization and alternative uses for serialization, see [Serialization: Serialization vs. Database Input/Output](../mfc/serialization-serialization-vs-database-input-output.md).

## <a name="_core_applications_with_minimal_documents"></a> Applications with Minimal Documents

The MFC Application Wizard has two options that support form-based data access applications. Each option creates a `CRecordView`-derived view class and a document. They differ in what they leave out of the document.

### <a name="_core_a_document_without_file_support"></a> Document Without File Support

Select the application wizard database option **Database view without file support** if you do not need document serialization. The document serves the following useful purposes:

- It is a convenient place to store a `CRecordset` object.

   This usage parallels ordinary document concepts: the document stores the data  (or, in this case, a set of records) and the view is a view of the document.

- If your application presents multiple views (such as multiple record views), a document supports coordinating the views.

   If multiple views show the same data, you can use the `CDocument::UpdateAllViews` member function to coordinate updates to all views when any view changes the data.

You usually use this option for simple form-based applications. The application wizard supports a convenient structure for such applications automatically.

### <a name="_core_a_document_with_file_support"></a> Document with File Support

Select the application wizard database option **Database view with file support** when you have an alternative use for the document-related **File** menu commands and document serialization. For the data-access portion of your program, you can use the document in the same way as described in [Document Without File Support](#_core_a_document_without_file_support). You can use the document's serialization capability, for example, to read and write a serialized user profile document that stores the user's preferences or other useful information. For more ideas, see [Serialization: Serialization vs. Database Input/Output](../mfc/serialization-serialization-vs-database-input-output.md).

The application wizard supports this option, but you must write the code that serializes the document. Store the serialized information in document data members.

## <a name="_core_applications_with_no_document"></a> Applications with No Document

You might sometimes want to write an application that does not use documents or views. Without documents, you store your data (such as a `CRecordset` object) in your frame-window class or your application class. Any additional requirements depend on whether the application presents a user interface.

### <a name="_core_database_support_with_a_user_interface"></a> Database Support with a User Interface

If you have a user interface (other than, for example, a console command-line interface), your application draws directly into the frame window's client area rather than into a view. Such an application does not use `CRecordView`, `CFormView`, or `CDialog` for its main user interface, but it normally use `CDialog` for ordinary dialogs.

### <a name="_core_writing_applications_without_documents"></a> Writing Applications Without Documents

Because the application wizard does not support creating applications without documents, you must write your own `CWinApp`-derived class and, if needed, also create a `CFrameWnd` or `CMDIFrameWnd` class. Override `CWinApp::InitInstance` and declare an application object as:

```cpp
CYourNameApp theApp;
```

The framework still supplies the message-map mechanism and many other features.

### <a name="_core_database_support_separate_from_the_user_interface"></a> Database Support Separate from the User Interface

Some applications need no user interface or only a minimal one. For example, suppose you are writing:

- An intermediate data-access object that other applications (clients) call for special processing of data between the application and the data source.

- An application that processes data without user intervention, such as an application that moves data from one database format to another or one that does calculations and performs batch updates.

Because no document owns the `CRecordset` object, you probably want to store it as an embedded data member in your `CWinApp`-derived application class. Alternatives include:

- Not keeping a permanent `CRecordset` object at all. You can pass NULL to your recordset class constructors. In that case, the framework creates a temporary `CDatabase`  object using the information in the recordset's `GetDefaultConnect` member function. This is the most likely alternative approach.

- Making the `CRecordset` object a global variable. This variable should be a pointer to a recordset object that you create dynamically in your `CWinApp::InitInstance` override. This avoids attempting to construct the object before the framework is initialized.

- Using recordset objects as you would within the context of a document or a view. Create recordsets in the member functions of your application or frame-window objects.

## See also

[MFC Database Classes](../data/mfc-database-classes-odbc-and-dao.md)
