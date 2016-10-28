---
title: "MFC Macros and Globals"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, global functions and variables"
  - "MFC, macros"
  - "global functions, MFC"
  - "macros, MFC"
  - "global functions"
  - "global variables, MFC"
  - "Afx naming convention"
  - "macros"
ms.assetid: add4e33f-0e62-4d27-be14-896cb8675d22
caps.latest.revision: 15
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# MFC Macros and Globals
The Microsoft Foundation Class Library can be divided into two major sections: (1) the MFC classes and (2) macros and globals. If a function or variable is not a member of a class, it is a global function or variable.  
  
 The MFC library and the Active Template Library (ATL) share string conversion macros. For more information, see [String Conversion Macros](../atl/string-conversion-macros.md) in the ATL documentation.  
  
 The MFC macros and globals offer functionality in the following categories.  
  
## General MFC  
  
-   [Data types](../mfcref/data-types--mfc-.md)  
  
-   [Type casting of MFC class objects](../mfcref/type-casting-of-mfc-class-objects.md)  
  
-   [Run-time object model services](../mfcref/run-time-object-model-services.md)  
  
-   [Diagnostic services](../mfcref/diagnostic-services.md)  
  
-   [Exception processing](../mfcref/exception-processing.md)  
  
-   [CString formatting and message-box display](../mfcref/cstring-formatting-and-message-box-display.md)  
  
-   [Message maps](../mfcref/message-map-macros--mfc-.md)  
  
-   [Application information and management](../mfcref/application-information-and-management.md)  
  
-   [Standard command and window IDs](../mfcref/standard-command-and-window-ids.md)  
  
-   [Collection class helpers](../mfcref/collection-class-helpers.md)  
  
-   [Gray and dithered bitmap functions](../mfcref/gray-and-dithered-bitmap-functions.md)  
  
-   [Standard dialog data exchange (DDX) routines](../mfcref/standard-dialog-data-exchange-routines.md)  
  
-   [Standard dialog data validation (DDV) routines](../mfcref/standard-dialog-data-validation-routines.md)  
  
-   [AFX Messages](../mfcref/afx-messages.md)  
  
-   [ToolBar Control Styles](../mfcref/toolbar-control-styles.md)  
  
-   [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](../mfcref/cmfcimagepaintarea--image_edit_mode-enumeration.md)  
  
## Database  
  
-   [Record Field Exchange (RFX) functions](../mfcref/record-field-exchange-functions.md) and [Bulk Record Field Exchange (bulk RFX) functions](../mfcref/record-field-exchange-functions.md) for the MFC ODBC classes  
  
-   [Record field exchange (DFX) functions](../mfcref/record-field-exchange-functions.md) for the MFC DAO classes  
  
-   [Dialog data exchange (DDX) functions for CRecordView and CDaoRecordView](../mfcref/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (MFC ODBC and DAO classes)  
  
-   [Dialog data exchange (DDX) functions for OLE controls](../mfcref/dialog-data-exchange-functions-for-ole-controls.md)  
  
-   [Macros and globals to aid in calling Open Database Connectivity (ODBC) API functions directly](../mfcref/database-macros-and-globals.md)  
  
-   [DAO database engine initialization and termination](../mfcref/dao-database-engine-initialization-and-termination.md)  
  
## Internet  
  
-   [Internet URL parsing globals](../mfcref/internet-url-parsing-globals.md)  
  
## DHTML / DHTML Event Maps  
  
-   [DHTML dialog data exchange (DDX) helper macros](../mfcref/ddx_dhtml-helper-macros.md)  
  
-   [DHTML event maps](../mfcref/dhtml-event-maps.md)  
  
## OLE  
  
-   [OLE initialization](../mfcref/ole-initialization.md)  
  
-   [Application control](../mfcref/application-control.md)  
  
-   [Dispatch maps](../mfcref/dispatch-maps.md)  
  
 In addition, MFC provides a function called [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md) that enables any OLE container developed with MFC 4.0 to fully support embedded OLE controls.  
  
## OLE Controls  
  
-   [Variant parameter type constants](../mfcref/variant-parameter-type-constants.md)  
  
-   [Type library access](../mfcref/type-library-access.md)  
  
-   [Property pages](../mfcref/property-pages--mfc-.md)  
  
-   [Event maps](../mfcref/event-maps.md)  
  
-   [Event sink maps](../mfcref/event-sink-maps.md)  
  
-   [Connection maps](../mfcref/connection-maps.md)  
  
-   [Registering OLE controls](../mfcref/registering-ole-controls.md)  
  
-   [Class factories and licensing](../mfcref/class-factories-and-licensing.md)  
  
-   [Persistence of OLE controls](../mfcref/persistence-of-ole-controls.md)  
  
 The first part of this section briefly discusses each of the previous categories and lists the globals and macros in the category, together with brief descriptions of functionality. Following this are descriptions of the global functions, global variables, and macros in the MFC library.  
  
> [!NOTE]
>  Many global functions start with the prefix "Afx", but some, for example, the dialog data exchange (DDX) functions and many of the database functions, do not follow this convention. All global variables start with "afx" as a prefix. Macros do not start with any particular prefix, but they are written in uppercase letters.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)