---
title: "MFC Macros and Globals"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: add4e33f-0e62-4d27-be14-896cb8675d22
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# MFC Macros and Globals
The Microsoft Foundation Class Library can be divided into two major sections: (1) the MFC classes and (2) macros and globals. If a function or variable is not a member of a class, it is a global function or variable.  
  
 The MFC library and the Active Template Library (ATL) share string conversion macros. For more information, see [String Conversion Macros](../VS_visualcpp/String-Conversion-Macros.md) in the ATL documentation.  
  
 The MFC macros and globals offer functionality in the following categories.  
  
## General MFC  
  
-   [Data types](../VS_visualcpp/Data-Types--MFC-.md)  
  
-   [Type casting of MFC class objects](../VS_visualcpp/Type-Casting-of-MFC-Class-Objects.md)  
  
-   [Run-time object model services](../VS_visualcpp/Run-Time-Object-Model-Services.md)  
  
-   [Diagnostic services](../VS_visualcpp/Diagnostic-Services.md)  
  
-   [Exception processing](../VS_visualcpp/Exception-Processing.md)  
  
-   [CString formatting and message-box display](../VS_visualcpp/CString-Formatting-and-Message-Box-Display.md)  
  
-   [Message maps](../VS_visualcpp/Message-Map-Macros--MFC-.md)  
  
-   [Application information and management](../VS_visualcpp/Application-Information-and-Management.md)  
  
-   [Standard command and window IDs](../VS_visualcpp/Standard-Command-and-Window-IDs.md)  
  
-   [Collection class helpers](../VS_visualcpp/Collection-Class-Helpers.md)  
  
-   [Gray and dithered bitmap functions](../VS_visualcpp/Gray-and-Dithered-Bitmap-Functions.md)  
  
-   [Standard dialog data exchange (DDX) routines](../VS_visualcpp/Standard-Dialog-Data-Exchange-Routines.md)  
  
-   [Standard dialog data validation (DDV) routines](../VS_visualcpp/Standard-Dialog-Data-Validation-Routines.md)  
  
-   [AFX Messages](../VS_visualcpp/AFX-Messages.md)  
  
-   [ToolBar Control Styles](../VS_visualcpp/ToolBar-Control-Styles.md)  
  
-   [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](../VS_visualcpp/CMFCImagePaintArea--IMAGE_EDIT_MODE-Enumeration.md)  
  
## Database  
  
-   [Record Field Exchange (RFX) functions](../VS_visualcpp/Record-Field-Exchange-Functions.md) and [Bulk Record Field Exchange (bulk RFX) functions](../VS_visualcpp/Record-Field-Exchange-Functions.md) for the MFC ODBC classes  
  
-   [Record field exchange (DFX) functions](../VS_visualcpp/Record-Field-Exchange-Functions.md) for the MFC DAO classes  
  
-   [Dialog data exchange (DDX) functions for CRecordView and CDaoRecordView](../VS_visualcpp/Dialog-Data-Exchange-Functions-for-CRecordView-and-CDaoRecordView.md) (MFC ODBC and DAO classes)  
  
-   [Dialog data exchange (DDX) functions for OLE controls](../VS_visualcpp/Dialog-Data-Exchange-Functions-for-OLE-Controls.md)  
  
-   [Macros and globals to aid in calling Open Database Connectivity (ODBC) API functions directly](../VS_visualcpp/Database-Macros-and-Globals.md)  
  
-   [DAO database engine initialization and termination](../VS_visualcpp/DAO-Database-Engine-Initialization-and-Termination.md)  
  
## Internet  
  
-   [Internet URL parsing globals](../VS_visualcpp/Internet-URL-Parsing-Globals.md)  
  
## DHTML / DHTML Event Maps  
  
-   [DHTML dialog data exchange (DDX) helper macros](../VS_visualcpp/DDX_DHtml-Helper-Macros.md)  
  
-   [DHTML event maps](../VS_visualcpp/DHTML-Event-Maps.md)  
  
## OLE  
  
-   [OLE initialization](../VS_visualcpp/OLE-Initialization.md)  
  
-   [Application control](../VS_visualcpp/Application-Control.md)  
  
-   [Dispatch maps](../VS_visualcpp/Dispatch-Maps.md)  
  
 In addition, MFC provides a function called [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md) that enables any OLE container developed with MFC 4.0 to fully support embedded OLE controls.  
  
## OLE Controls  
  
-   [Variant parameter type constants](../VS_visualcpp/Variant-Parameter-Type-Constants.md)  
  
-   [Type library access](../VS_visualcpp/Type-Library-Access.md)  
  
-   [Property pages](../VS_visualcpp/Property-Pages--MFC-.md)  
  
-   [Event maps](../VS_visualcpp/Event-Maps.md)  
  
-   [Event sink maps](../VS_visualcpp/Event-Sink-Maps.md)  
  
-   [Connection maps](../VS_visualcpp/Connection-Maps.md)  
  
-   [Registering OLE controls](../VS_visualcpp/Registering-OLE-Controls.md)  
  
-   [Class factories and licensing](../VS_visualcpp/Class-Factories-and-Licensing.md)  
  
-   [Persistence of OLE controls](../VS_visualcpp/Persistence-of-OLE-Controls.md)  
  
 The first part of this section briefly discusses each of the previous categories and lists the globals and macros in the category, together with brief descriptions of functionality. Following this are descriptions of the global functions, global variables, and macros in the MFC library.  
  
> [!NOTE]
>  Many global functions start with the prefix "Afx", but some, for example, the dialog data exchange (DDX) functions and many of the database functions, do not follow this convention. All global variables start with "afx" as a prefix. Macros do not start with any particular prefix, but they are written in uppercase letters.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)