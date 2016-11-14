---
title: "Creating a Consumer Without Using a Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB consumers, creating"
ms.assetid: e8241cfe-5faf-48f8-9de3-241203de020b
caps.latest.revision: 7
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
# Creating a Consumer Without Using a Wizard
The following example assumes that you are adding OLE DB consumer support to an existing ATL project. If you want to add OLE DB consumer support to an MFC application, you should run the MFC Application Wizard, which creates all the support necessary and invokes MFC routines necessary to execute the application.  
  
 To add OLE DB consumer support without using the ATL OLE DB Consumer Wizard:  
  
-   In your Stdafx.h file, append the following `#include` statements:  
  
    ```  
    #include <atlbase.h>  
    #include <atldbcli.h>  
    #include <atldbsch.h> // if you are using schema templates  
    ```  
  
 Programmatically, a consumer typically performs the following sequence of operations:  
  
-   Create a user record class that binds columns to local variables. In this example, `CMyTableNameAccessor` is the user record class (see [User Records](../../data/oledb/user-records.md)). This class contains the column map and parameter map. Declare a data member in the user record class for each field you specify in your column map; for each of these data members, also declare a status data member and a length data member. For more information, see [Field Status Data Members in Wizard-Generated Accessors](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).  
  
    > [!NOTE]
    >  If you write your own consumer, the data variables must come before the status and length variables.  
  
-   Instantiate a data source and a session. Decide what type of accessor and rowset to use and then instantiate a rowset using [CCommand](../../data/oledb/ccommand-class.md) or [CTable](../../data/oledb/ctable-class.md):  
  
    ```  
    CDataSource ds;  
    CSession ss;  
    class CMyTableName : public CCommand<CAccessor<CMyTableNameAccessor> >  
    ```  
  
-   Call **CoInitialize** to initialize COM. This is usually called in the main code. For example:  
  
    ```  
    HRESULT hr = CoInitialize(NULL);  
    ```  
  
-   Call [CDataSource::Open](../../data/oledb/cdatasource-open.md) or one of its variations.  
  
-   Open a connection to the data source, open the session, and open and initialize the rowset (and if a command, also execute it):  
  
    ```  
    hr = ds.Open();  
    hr = ss.Open(ds);  
    hr = rs.Open();            // (Open also executes the command)  
    ```  
  
-   Optionally, set rowset properties using `CDBPropSet::AddProperty` and pass them as a parameter to `rs.Open`. For an example of how this is done, see GetRowsetProperties in [Consumer Wizard-Generated Methods](../../data/oledb/consumer-wizard-generated-methods.md).  
  
-   You can now use the rowset to retrieve/manipulate the data.  
  
-   When your application is done, close the connection, session, and rowset:  
  
    ```  
    rs.Close();  
    ss.Close();  
    ds.Close();  
    ```  
  
     If you are using a command, you might want to call `ReleaseCommand` after **Close**. The code example in [CCommand::Close](../../data/oledb/ccommand-close.md) shows how to call **Close** and `ReleaseCommand`.  
  
-   Call **CoUnInitialize** to uninitialize COM. This is usually called in the main code.  
  
    ```  
    CoUninitialize();  
    ```  
  
## See Also  
 [Creating an OLE DB Consumer](../../data/oledb/creating-an-ole-db-consumer.md)