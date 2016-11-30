---
title: "MFC Macros and Globals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 18
author: "mikeblome"
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
  
 The MFC library and the Active Template Library (ATL) share string conversion macros. For more information, see [String Conversion Macros](../../atl/reference/string-conversion-macros.md) in the ATL documentation.  
  
 The MFC macros and globals offer functionality in the following categories.  
  
## General MFC  
  
-   [Data types](../../mfc/reference/data-types-mfc.md)  
  
-   [Type casting of MFC class objects](../../mfc/reference/type-casting-of-mfc-class-objects.md)  
  
-   [Run-time object model services](../../mfc/reference/run-time-object-model-services.md)  
  
-   [Diagnostic services](../../mfc/reference/diagnostic-services.md)  
  
-   [Exception processing](../../mfc/reference/exception-processing.md)  
  
-   [CString formatting and message-box display](../../mfc/reference/cstring-formatting-and-message-box-display.md)  
  
-   [Message maps](../../mfc/reference/message-map-macros-mfc.md)  
  
-   [Application information and management](../../mfc/reference/application-information-and-management.md)  
  
-   [Standard command and window IDs](../../mfc/reference/standard-command-and-window-ids.md)  
  
-   [Collection class helpers](../../mfc/reference/collection-class-helpers.md)  
  
-   [Gray and dithered bitmap functions](../../mfc/reference/gray-and-dithered-bitmap-functions.md)  
  
-   [Standard dialog data exchange (DDX) routines](../../mfc/reference/standard-dialog-data-exchange-routines.md)  
  
-   [Standard dialog data validation (DDV) routines](../../mfc/reference/standard-dialog-data-validation-routines.md)  
  
-   [AFX Messages](../../mfc/reference/afx-messages.md)  
  
-   [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md)  
  
-   [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](cmfcimagepaintarea-image-edit-mode-enumeration.md)  

  
## Database  
  
-   [Record Field Exchange (RFX) functions](../../mfc/reference/record-field-exchange-functions.md) and [Bulk Record Field Exchange (bulk RFX) functions](../../mfc/reference/record-field-exchange-functions.md) for the MFC ODBC classes  
  
-   [Record field exchange (DFX) functions](../../mfc/reference/record-field-exchange-functions.md) for the MFC DAO classes  
  
-   [Dialog data exchange (DDX) functions for CRecordView and CDaoRecordView](../../mfc/reference/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (MFC ODBC and DAO classes)  
  
-   [Dialog data exchange (DDX) functions for OLE controls](../../mfc/reference/dialog-data-exchange-functions-for-ole-controls.md)  
  
-   [Macros and globals to aid in calling Open Database Connectivity (ODBC) API functions directly](../../mfc/reference/database-macros-and-globals.md)  
  
-   [DAO database engine initialization and termination](../../mfc/reference/dao-database-engine-initialization-and-termination.md)  
  
## Internet  
  
-   [Internet URL parsing globals](../../mfc/reference/internet-url-parsing-globals.md)  
  
## DHTML / DHTML Event Maps  
  
-   [DHTML dialog data exchange (DDX) helper macros](../../mfc/reference/ddx-dhtml-helper-macros.md)  
  
-   [DHTML event maps](../../mfc/reference/dhtml-event-maps.md)  
  
## OLE  
  
-   [OLE initialization](../../mfc/reference/ole-initialization.md)  
  
-   [Application control](../../mfc/reference/application-control.md)  
  
-   [Dispatch maps](../../mfc/reference/dispatch-maps.md)  
  
 In addition, MFC provides a function called [AfxEnableControlContainer](http://msdn.microsoft.com/library/7aa0b9d2-5329-4bc3-9d41-856e30fe2c2b) that enables any OLE container developed with MFC 4.0 to fully support embedded OLE controls.  
  
## OLE Controls  
  
-   [Variant parameter type constants](../../mfc/reference/variant-parameter-type-constants.md)  
  
-   [Type library access](../../mfc/reference/type-library-access.md)  
  
-   [Property pages](../../mfc/reference/property-pages-mfc.md)  
  
-   [Event maps](../../mfc/reference/event-maps.md)  
  
-   [Event sink maps](../../mfc/reference/event-sink-maps.md)  
  
-   [Connection maps](../../mfc/reference/connection-maps.md)  
  
-   [Registering OLE controls](../../mfc/reference/registering-ole-controls.md)  
  
-   [Class factories and licensing](../../mfc/reference/class-factories-and-licensing.md)  
  
-   [Persistence of OLE controls](../../mfc/reference/persistence-of-ole-controls.md)  
  
 The first part of this section briefly discusses each of the previous categories and lists the globals and macros in the category, together with brief descriptions of functionality. Following this are descriptions of the global functions, global variables, and macros in the MFC library.  
  
> [!NOTE]
>  Many global functions start with the prefix "Afx", but some, for example, the dialog data exchange (DDX) functions and many of the database functions, do not follow this convention. All global variables start with "afx" as a prefix. Macros do not start with any particular prefix, but they are written in uppercase letters.  
  
## See Also  
 [Class Overview](../../mfc/class-library-overview.md)



