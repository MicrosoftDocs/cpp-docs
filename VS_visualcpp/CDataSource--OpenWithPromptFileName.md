---
title: "CDataSource::OpenWithPromptFileName"
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
ms.assetid: 89460504-1aaf-4412-aa7b-fa5a4b39ada3
caps.latest.revision: 10
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
# CDataSource::OpenWithPromptFileName
This method prompts the user with a dialog box, then opens a data source using the file specified by the user.  
  
## Syntax  
  
```  
  
      HRESULT OpenWithPromptFileName(   
   HWND hWnd = GetActiveWindow(   
   ),   
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_NONE,   
   LPCOLESTR szInitialDirectory = NULL    
) throw( );  
```  
  
#### Parameters  
 `hWnd`  
 [in] Handle to the window that is to be the parent of the dialog box.  
  
 `dwPromptOptions`  
 [in] Determines the style of locator dialog box to display. See Msdasc.h for possible values.  
  
 *szInitialDirectory*  
 [in] The initial directory to display in the locator dialog box.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../VS_visualcpp/CDataSource-Class.md)