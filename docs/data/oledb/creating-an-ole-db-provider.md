---
description: "Learn more about: Creating an OLE DB Provider"
title: "Creating an OLE DB Provider"
ms.date: "10/13/2018"
helpviewer_keywords: ["OLE DB providers, creating", "OLE DB provider templates, creating providers"]
ms.assetid: f73017c3-c89f-41a6-a306-ea992cf6092c
---
# Creating an OLE DB Provider

The recommended way to create an OLE DB provider is to use the wizards to create an ATL COM project and a provider and then modify the files using the OLE DB templates. As you customize your provider, you can comment out unwanted properties and add optional interfaces.

The basic steps are as follows:

1. Use the **ATL Project Wizard** to create the basic project files and the **ATL OLEDB Provider Wizard** to create the provider (select **ATL OLEDB Provider** from the **Installed** > **Visual C++** > **ATL** folder in **Add New Item**).

   > [!NOTE]
   > The project must include MFC support before adding a **ATL OLEDB Provider**.

1. Modify the code in the `Execute` method in [CCustomRowset(CustomRS.h)](cmyproviderrowset-myproviderrs-h.md). For an example, see [Reading Strings Into an OLE DB Provider](../../data/oledb/reading-strings-into-the-ole-db-provider.md).

1. Edit the property maps in [CustomDS.h](cmyprovidersource-myproviderds-h.md), [CustomSess.h](cmyprovidersession-myprovidersess-h.md), and [CustomRS.h](cmyproviderrowset-myproviderrs-h.md). The wizard creates property maps that contain all properties that a provider might implement. Go through the property maps and remove or comment out properties that your provider does not need to support.

1. Update the PROVIDER_COLUMN_MAP, which can be found in [CCustomRowset(CustomRS.h)](cmyproviderrowset-myproviderrs-h.md). For an example, see [Storing Strings In the OLE DB Provider](../../data/oledb/storing-strings-in-the-ole-db-provider.md).

1. When you are ready to test your provider, you can test it by trying to find the provider in a provider enumeration. For examples of test code that finds a provider in an enumeration, see the [CATDB](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/catdb) and [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer) samples or the example in [Implementing A Simple Consumer](../../data/oledb/implementing-a-simple-consumer.md).

1. Add any additional interfaces you want. For an example, see [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md).

   > [!NOTE]
   > By default, the wizards generate code that is OLE DB level 0 compliant. To ensure that your application remains level 0 compliant, do not remove any of the wizard-generated interfaces from the code.

## See also

[CatDB Sample: Data Source Schema Browser](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/catdb)<br/>
[DBViewer Sample: Database Browser](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer)
