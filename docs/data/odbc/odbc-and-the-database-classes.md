---
description: "Learn more about: ODBC and the Database Classes"
title: "ODBC and the Database Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["database classes [C++], ODBC", "ODBC API functions [C++]", "ODBC classes [C++], MFC database classes", "MFC [C++], ODBC and"]
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
---
# ODBC and the Database Classes

The MFC ODBC database classes encapsulate the ODBC API function calls you would normally make yourself in the member functions of the [CDatabase](../../mfc/reference/cdatabase-class.md) and [CRecordset](../../mfc/reference/crecordset-class.md) classes. For example, the complex ODBC call sequences, binding of returned records to storage locations, handling of error conditions, and other operations are managed for you by the database classes. As a result, you use a considerably simpler class interface to manipulate records through a recordset object.

> [!NOTE]
> ODBC data sources are accessible through the MFC ODBC classes, as described in this topic, or through the MFC Data Access Object (DAO) classes.

Although the database classes encapsulate ODBC functionality, they do not provide a one-to-one mapping of ODBC API functions. The database classes provide a higher level of abstraction, modeled after data-access objects found in Microsoft Access and Microsoft Visual Basic. For more information, see [ODBC and MFC](../../data/odbc/odbc-and-mfc.md).

## See also

[ODBC Basics](../../data/odbc/odbc-basics.md)
