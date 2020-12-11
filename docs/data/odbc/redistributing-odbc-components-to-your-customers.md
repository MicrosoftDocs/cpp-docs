---
description: "Learn more about: Redistributing ODBC Components to Your Customers"
title: "Redistributing ODBC Components to Your Customers"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC components, redistributing", "ODBC, distributing components", "components [C++], distributing", "ODBC Administrator", "components [C++]", "components [C++], redistributing"]
ms.assetid: 17b065b4-a307-4b89-99ac-d05831cfab87
---
# Redistributing ODBC Components to Your Customers

If you incorporate the functionality of the ODBC Administrator programs into your application, you must also distribute to your users the files that run these programs. These ODBC files reside in the \OS\System directory of the Visual C++ CD-ROM. The Redistrb.wri file and the license agreement in the same directory contain a list of ODBC files that you can redistribute.

Consult the documentation for any ODBC drivers you plan to ship. You need to determine which DLLs and other files to ship. You should also read [Redistributing ODBC Components to your Customers](../../data/odbc/redistributing-odbc-components-to-your-customers.md), which explains how to redistribute ODBC components.

In addition, you need to include one other file in most cases. The Odbccr32.dll is the ODBC Cursor Library. This library gives Level 1 drivers the capability of forward and backward scrolling. It also provides the capability of supporting snapshots. For more information about the ODBC Cursor Library, see [ODBC: The ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md).

The following topics provide more information about using ODBC with the database classes:

- [ODBC: The ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md)

- [ODBC: Configuring an ODBC Data Source](../../data/odbc/odbc-configuring-an-odbc-data-source.md)

- [ODBC: Calling ODBC API Functions Directly](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)

## See also

[ODBC Basics](../../data/odbc/odbc-basics.md)<br/>
[ODBC Administrator](../../data/odbc/odbc-administrator.md)
