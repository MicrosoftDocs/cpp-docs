---
description: "Learn more about: OLE DB Architectural Design Issues"
title: "OLE DB Architectural Design Issues"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB, application design considerations"]
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
---
# OLE DB Architectural Design Issues

> [!NOTE]
> The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](creating-a-consumer-without-using-a-wizard.md).

Consider the following issues before starting your OLE DB application:

## What programming implementation will you use to write your OLE DB application?

Microsoft offers several libraries to accomplish this task: an OLE DB Template library, OLE DB attributes, and the raw OLE DB interfaces in the OLE DB SDK. Also, there are wizards that help you write your program. These implementations are described in [OLE DB Templates, Attributes, and Other Implementations](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).

## Do you need to write your own provider?

Most developers don't need to write their own provider. Microsoft provides several providers. Whenever you create a data connection (for example, when you add a consumer to your project using the **ATL OLE DB Consumer Wizard**), the **Data Link Properties** dialog box lists all the available providers registered on your system. If one of the providers is appropriate for your own data store and data access application, the easiest thing to do is to use one of these. However, if your data store doesn't fit one of these categories, you have to create your own provider. For information about creating providers, see [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md).

## What level of support do you need for your consumer?

Some consumers can be basic; while others can be complex. The functionality of OLE DB objects is specified by properties. When you use the **ATL OLE DB Consumer Wizard** to create a consumer or the **Database Provider Wizard** to create a provider, it sets the appropriate object properties for you to give you a standard set of functionalities. However, if the wizard-generated consumer or provider classes don't support everything you need them to do, you need to refer to the interfaces for those classes in the [OLE DB Templates Library](../../data/oledb/ole-db-templates.md). These interfaces wrap the raw OLE DB interfaces, providing extra implementation to make using them easier for you.

For example, if you want to update data in a rowset, but forgot to specify this when you created the consumer with the wizard, you can specify the functionality after the fact by setting the `DBPROP_IRowsetChange` and `DBPROP_UPDATABILITY` properties on the command object. Then, when the rowset is created, it has the `IRowsetChange` interface.

## Do you have older code using another data access technology (ADO, ODBC, or DAO)?

Given the possible combinations of technologies (such as using ADO components with OLE DB components and migrating ODBC code to OLE DB), covering all situations is beyond the scope of the Visual C++ documentation. However, many articles covering various scenarios are available on the following Microsoft web sites:

- [Microsoft Help and Support](https://support.microsoft.com/)

- [Microsoft Data Access Technical Articles Overview](/previous-versions/ms810811(v=msdn.10))

## See also

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)
