---
description: "Learn more about: ODBC Administrator"
title: "ODBC Administrator"
ms.date: "11/04/2016"
helpviewer_keywords: ["installing ODBC", "ODBC data sources [C++], ODBC Administrator", "ODBC drivers [C++], installing", "ODBC [C++], ODBC Administrator", "Administrator in ODBC", "administration ODBC Administrator", "ODBC Administrator [C++]", "drivers [C++], ODBC"]
ms.assetid: b8652790-3437-4e7d-bc83-6ea6981f008b
---
# ODBC Administrator

ODBC Administrator registers and configures the [data sources](../../data/odbc/data-source-odbc.md) available to you either locally or across a network. The wizards use information supplied by ODBC Administrator to create code in your applications that connects your users to data sources.

To set up an ODBC data source for use with either the MFC ODBC classes or the MFC Data Access Object (DAO) classes, you must first register and configure the data source. Use ODBC Administrator to add and remove data sources. Depending on the ODBC driver, you can also create new data sources.

ODBC Administrator is installed during setup. If you chose **Custom** Installation and did not select any ODBC drivers in the **Database Options** dialog box, you need to run Setup again to install the necessary files.

During setup, you select the ODBC drivers you want to install. You can later install additional drivers that ship with Visual C++ using the Visual C++ Setup program.

If you want to install ODBC drivers that do not ship with Visual C++, you must run the Setup program that accompanies the driver.

#### To install ODBC drivers that ship with Visual C++

1. Run Setup from your Visual C++ distribution CD.

   The opening dialog box in the Setup program is appears.

1. Click **Next** on each dialog box until you reach the **Installation Options** dialog box. Select **Custom**, and then click **Next**.

1. Clear all the check boxes in the **Microsoft Visual C++ Setup** dialog box except the **Database Options** check box, and then click **Details** to display the **Database Options** dialog box.

1. Clear the **Microsoft Data Access Objects** check box, select the **Microsoft ODBC Drivers** check box, and then click **Details**.

   The **Microsoft ODBC Drivers** dialog box appears.

1. Select the drivers you want to install, and then click **OK** twice.

1. Click **Next** on the remaining dialog boxes to begin the installation. Setup notifies you when the installation is complete.

When the drivers are installed, you can configure the data source using the ODBC Administrator. You will find the ODBC icon in Control Panel.

## See also

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Data Source (ODBC)](../../data/odbc/data-source-odbc.md)
