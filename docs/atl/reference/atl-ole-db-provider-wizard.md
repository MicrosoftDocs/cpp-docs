---
title: "ATL OLE DB Provider Wizard"
ms.date: "10/03/2018"
f1_keywords: ["vc.codewiz.class.atl.provider.overview"]
helpviewer_keywords: ["ATL OLE DB Provider Wizard", "ATL projects, adding ATL OLE DB providers"]
ms.assetid: cf91ba78-01d1-4d12-b673-e95d96bfbebe
---
# ATL OLE DB Provider Wizard

This wizard creates the classes that compose an OLE DB provider.

> [!WARNING]
> In Visual Studio 2017 version 15.9 this code wizard is deprecated and will be removed in a future version of Visual Studio. This wizard is rarely used. General support for ATL and MFC is not impacted by the removal of this wizard. If you would like to share your feedback about this deprecation, please complete [this survey](https://www.surveymonkey.com/r/QDWKKCN). Your feedback matters to us.

## Remarks

Beginning with Visual Studio 2008, the registration script produced by this wizard will register its COM components under **HKEY_CURRENT_USER** instead of **HKEY_LOCAL_MACHINE**. To modify this behavior, set the **Register component for all users** option of the ATL Wizard.

The following table describes the options for the ATL OLE DB Provider Wizard:

- **Short name**

   Type the short name of the provider to be created. The other edit boxes in the wizard will automatically populate based on what you type here. You can edit the other name boxes if you want.

- **Coclass**

   The name of the coclass. The ProgID name will change to match this name.

- **Attributed**

   This option specifies whether the wizard will create provider classes using attributes or template declarations. When you select this option, the wizard uses attributes instead of template declarations (this is the default option if you created an attributed project). When you clear this option, the wizard uses template declarations instead of attributes (this is the default option if you created a non-attributed project).

   If you select this option when you created a non-attributed project, the wizard warns you that the project will be converted to an attributed project and asks you whether to continue or not.

- **ProgID**

   The ProgID, or programmatic identifier, is a text string that your application can use instead of a GUID. The ProgID name has the form *Projectname.Coclassname*.

- **Version**

   The version number of your provider. The default is 1.

- **DataSource class**

   The name of the data source class, of the form C*Shortname*Source.

- **DataSource .h file**

   The header file for the data source class. You can edit this file's name or select an existing header file.

- **Session class**

   The name of the session class, of the form C*Shortname*Session.

- **Session .h file**

   The header file for the session class. You can edit this file's name or select an existing header file.

- **Command class**

   The name of the command class, of the form C*Shortname*Command.

- **Command .h file**

   The header file for the command class. This name cannot be edited and depends on the name of the rowset header file.

- **Rowset class**

   The name of the rowset class, of the form C*Shortname*Rowset.

- **Rowset .h file**

   The header file for the rowset class. You can edit this file's name or select an existing header file.

- **Rowset .cpp file**

   The provider's implementation file. You can edit this file's name or select an existing implementation file.

## See also

- [ATL OLE DB Provider](../../atl/reference/adding-an-atl-ole-db-provider.md)
