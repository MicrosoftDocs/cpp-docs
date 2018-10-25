---
title: "Data Source: Determining the Schema of the Data Source (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["ODBC data sources [C++], schema", "schemas [C++], data sources", "data sources [C++], determining schema"]
ms.assetid: 17284acb-eb10-4f27-9944-ad1d973c0b05
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Data Source: Determining the Schema of the Data Source (ODBC)

This topic applies to the MFC ODBC classes.

To set up data members in your `CRecordset` objects, you need to know the schema of the data source to which you are connecting. Determining the schema of a data source involves obtaining a list of the tables in the data source, a list of the columns in each table, the data type of each column, and the existence of any indexes.

## See Also

[Data Source (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Data Source: Managing Connections (ODBC)](../../data/odbc/data-source-managing-connections-odbc.md)