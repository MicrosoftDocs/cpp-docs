---
title: "Issuing a Parameterized Query | Microsoft Docs"
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
  - "parameter queries, running using CCommand class"
ms.assetid: aedb0fce-52a4-4c97-a5c9-b2114be6c3b0
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
# Issuing a Parameterized Query
The following example issues a simple parameterized query that retrieves records with an age field (that is greater than 30) from a table in a Microsoft Access database. To support the parameter, the user record must have an additional map. The following code, in an ATL project, uses the `CCommand` class instead of the `CTable` class used in the previous example, [Traversing a Simple Rowset](../../data/oledb/traversing-a-simple-rowset.md).  
  
```  
#include <atldbcli.h>  
  
CDataSource connection;  
CSession session;  
CCommand<CAccessor<CArtists> > artists;  
  
// Open the connection, session, and table, specifying authentication   
// using Windows NT integrated security. Hard-coding a password is a major   
// security weakness.  
connection.Open(CLSID_MSDASQL, "NWind", NULL, NULL,   
DBPROP_AUTH_INTEGRATED);  
session.Open(connection);  
  
// Set the parameter for the query  
artists.m_nAge = 30;  
artists.Open(session, "select * from artists where age > ?");  
  
// Get data from the rowset  
while (artists.MoveNext() == S_OK)  
{  
   cout << artists.m_szFirstName;  
   cout << artists.m_szLastName;  
}  
```  
  
 The user record, `CArtists`, looks like this:  
  
```  
class CArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_COLUMN_MAP(CArtists)  
   COLUMN_ENTRY(1, m_szFirstName)  
   COLUMN_ENTRY(2, m_szLastName)  
   COLUMN_ENTRY(3, m_nAge)  
END_COLUMN_MAP()  
  
// Parameter binding map  
BEGIN_PARAM_MAP(CArtists)  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(1, m_nAge)  
END_PARAM_MAP()  
};  
```  
  
## See Also  
 [Working with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)