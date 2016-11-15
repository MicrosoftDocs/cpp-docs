---
title: "ODBC Connections | Microsoft Docs"
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
  - "ODBC connections, configuring"
  - "ODBC, connectivity"
ms.assetid: c9df2fa6-d9e2-4335-b885-724662968691
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
# ODBC Connections
ODBC connections are configured in the system Control Panel. ODBC connections can be made against any data source for which an ODBC driver has been installed. Visual C++ 6.0 or later ships drivers for text files, Access, FoxPro, Paradox, dBASE, Excel, SQL Server, and Oracle. When you create an ODBC connection, it automatically receives a data source name (DSN). The DSN is subsequently used to identify connections in data controls, such as ADO data control and RDO RemoteData control.  
  
 **OLE DB Connections** No additional work is necessary to configure an OLE DB connection. For example, if an ODBC data source is created, the OLE DB provider for ODBC automatically detects it.  
  
### To configure an ODBC data source  
  
1.  Click **Start**, click **Settings**, and then click **Control Panel**.  
  
2.  In Control Panel, select 32bit ODBC (Windows 95 or 98) or ODBC (Windows NT or 2000).  
  
3.  Click the **User DSN** or **System DSN** tab. **User DSN** lets you create user-specific data source names and **System DSN** lets you create data sources available to all users.  
  
4.  Click **Add** to display a list of locally installed ODBC drivers.  
  
5.  Select the driver corresponding to the type of indexed sequential access method (ISAM) or database you want to connect to, and then click **Finish**.  
  
6.  Follow the instructions specific to the driver. After closing, the DSN is available for use.  
  
 When generating a DSN for some ODBC driver types, you need to know the location of the actual file. For example when creating an Access DSN, you need to know the location of the .mdb file. Also, you should have a valid user name and password. For example, the system user name for most Access systems is *admin*.  
  
 When creating an [Oracle](../../data/ado-rdo/oracle-connections.md) DSN, you should know the SQL*Net connection string.  
  
## See Also  
 [Creating Database Connections](../../data/ado-rdo/creating-database-connections.md)