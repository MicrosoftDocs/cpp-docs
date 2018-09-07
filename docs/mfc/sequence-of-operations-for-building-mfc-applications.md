---
title: "Sequence of Operations for Building MFC Applications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["applications [MFC], developing"]
ms.assetid: 6973c714-fe20-48c6-926b-de88356b3a3d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Sequence of Operations for Building MFC Applications
The following table explains the general sequence you might typically follow as you develop your MFC application.  
  
### Sequence for Building an Application with the Framework  
  
|Task|You do|The framework does|  
|----------|------------|------------------------|  
|Create a skeleton application.|Run the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md). Specify the options you want in the options pages. Options include making the application a COM component, container, or both; adding Automation; and making the application database-aware.|The MFC Application Wizard creates the files for a skeleton application, including source files for your application, document, view, and frame windows; a resource file; a project file; and others, all tailored to your specifications.|  
|See what the framework and the MFC Application Wizard offer without adding a line of your own code.|Build the skeleton application and run it in Visual C++.|The running skeleton application derives many standard **File**, **Edit**, **View**, and **Help** menu commands from the framework. For MDI applications, you also get a fully functional Windows menu, and the framework manages creation, arrangement, and destruction of MDI child windows.|  
|Construct your application's user interface.|Use the Visual C++ [resource editors](../windows/resource-editors.md) to visually edit the application's user interface:<br /><br /> -   Create menus.<br />-   Define accelerators.<br />-   Create dialog boxes.<br />-   Create and edit bitmaps, icons, and cursors.<br />-   Edit the toolbar created for you by the MFC Application Wizard.<br />-   Create and edit other resources.<br /><br /> You can also test the dialog boxes in the dialog editor.|The default resource file created by the MFC Application Wizard supplies many of the resources you need. Visual C++ lets you edit existing resources and add new resources easily and visually.|  
|Map menus to handler functions.|Use the **Events** button in the [Properties window](/visualstudio/ide/reference/properties-window) to connect menus and accelerators to handler functions in your code.|The Properties window inserts message-map entries and empty function templates into the source files you specify and manages many manual coding tasks.|  
|Write your handler code.|Use Class View to jump directly to the code in the source code editor. Fill in the code for your handler functions. For more information on using Class View and about wizards that add code to a project, see [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md).|Class View opens the editor, scrolls to the empty function template and positions the cursor for you.|  
|Map toolbar buttons to commands.|Map each button on your toolbar to a menu or accelerator command by assigning the button the appropriate command ID.|The framework controls the drawing, enabling, disabling, checking, and other visual aspects of the toolbar buttons.|  
|Test your handler functions.|Rebuild the program and use the built-in debugging tools to test that your handlers work correctly.|You can step or trace through the code to see how your handlers are called. If you have filled out the handler code, the handlers carry out commands. The framework will automatically disable menu items and toolbar buttons that are not handled.|  
|Add [dialog boxes](../mfc/dialog-boxes.md).|Design dialog-template resources with the dialog editor. Then create a dialog class and the code that handles the dialog box.|The framework manages the dialog box and facilitates retrieving information entered by the user.|  
|Initialize, validate, and retrieve dialog-box data.|You can also define how the dialog box's controls are to be initialized and validated. Use Visual Studio to add member variables to the dialog class and map them to dialog controls. Specify validation rules to be applied to each control as the user enters data. Provide your own custom validations if you wish.|The framework manages dialog-box initialization and validation. If the user enters invalid information, the framework displays a message box and lets the user reenter the data.|  
|Create additional classes.|Use Class View to create additional document, view, and frame-window classes beyond those created automatically by the MFC Application Wizard. You can create additional database recordset classes, dialog classes, and so on. (With Class View, you can create classes not derived from MFC classes.)|Class View adds these classes to your source files and helps you define their connections to any commands they handle.|  
|Add ready-to-use components to your application.|Use the `New Item dialog box` to add a variety of items.|These items are easy to integrate into your application and save you a great deal of work.|  
|Implement your document class.|Implement your application-specific document class or classes. Add member variables to hold data structures. Add member functions to provide an interface to the data.|The framework already knows how to interact with document data files. It can open and close document files, read and write the document's data, and handle other user interfaces. You can focus on how the document's data is manipulated.|  
|Implement Open, Save, and Save As commands.|Write code for the document's `Serialize` member function.|The framework displays dialog boxes for the **Open**, **Save**, and **Save As** commands on the **File** menu. It writes and reads back a document using the data format specified in your `Serialize` member function.|  
|Implement your view class.|Implement one or more view classes corresponding to your documents. Implement the view's member functions that you mapped to the user interface with Class View. A variety of [CView](../mfc/reference/cview-class.md)-derived classes are available, including [CListView](../mfc/reference/clistview-class.md) and [CTreeView](../mfc/reference/ctreeview-class.md).|The framework manages most of the relationship between a document and its view. The view's member functions access the view's document to render its image on the screen or printed page and to update the document's data structures in response to user editing commands.|  
|Enhance default printing.|If you need to support multipage printing, override view member functions.|The framework supports the **Print**, **Page Setup**, and **Print Preview** commands on the **File** menu. You must tell it how to break your document into multiple pages.|  
|Add scrolling.|If you need to support scrolling, derive your view class or classes from [CScrollView](../mfc/reference/cscrollview-class.md).|The view automatically adds scroll bars when the view window becomes too small.|  
|Create form views.|If you want to base your views on dialog-template resources, derive your view class or classes from [CFormView](../mfc/reference/cformview-class.md).|The view uses the dialog-template resource to display controls. The user can tab from control to control in the view.|  
|Create database forms.|If you want a form-based data-access application, derive your view class from [CRecordView](../mfc/reference/crecordview-class.md) (for ODBC programming).|The view works like a form view, but its controls are connected to the fields of a [CRecordset](../mfc/reference/crecordset-class.md) object representing a database table. MFC moves data between the controls and the recordset for you.|  
|Create a simple text editor.|If you want your view to be a simple text editor, derive your view class or classes from [CEditView](../mfc/reference/ceditview-class.md) or [CRichEditView](../mfc/reference/cricheditview-class.md).|The view provides editing functions, Clipboard support, and file input/output. `CRichEditView` provides styled text.|  
|Add splitter windows.|If you want to support window splitting, add a [CSplitterWnd](../mfc/reference/csplitterwnd-class.md) object to your SDI frame window or MDI child window and hook it up in the window's [OnCreateClient](../mfc/reference/cframewnd-class.md#oncreateclient) member function.|The framework supplies splitter-box controls next to the scroll bars and manages splitting your view into multiple panes. If the user splits a window, the framework creates and attaches additional view objects to the document.|  
|Build, test, and debug your application.|Use the facilities of Visual C++ to build, test, and debug your application.|Visual C++ lets you adjust compile, link, and other options. It also lets you browse your source code and class structure.|  
  
## See Also  
 [Sequence of Operations for Creating OLE Applications](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequence of Operations for Creating ActiveX Controls](../mfc/sequence-of-operations-for-creating-activex-controls.md)   
 [Sequence of Operations for Creating Database Applications](../mfc/sequence-of-operations-for-creating-database-applications.md)   
 [Building on the Framework](../mfc/building-on-the-framework.md)

