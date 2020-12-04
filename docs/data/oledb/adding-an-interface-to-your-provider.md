---
description: "Learn more about: Adding an Interface to Your Provider"
title: "Adding an Interface to Your Provider"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB provider templates, object interfaces"]
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
---
# Adding an Interface to Your Provider

> [!NOTE]
> The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

Determine which object you want to add the interface to (usually data source, rowset, command, or session objects created by the **OLE DB Provider Wizard**). It's possible that the object you need to add the interface to is one that your provider doesn't currently support. In that case, run the **ATL OLE DB Provider Wizard** to create the object. Right-click the project in **Class View**, click **Add** > **New Item** from the menu, select **Installed** > **Visual C++** > **ATL**, and then click **ATL OLEDB Provider**. You might want to put the interface code in a separate directory and then copy the files to your provider project.

If you created a new class to support the interface, make the object inherit from that class. For example, you might add the class `IRowsetIndexImpl` to a rowset object:

```cpp
template <class Creator>
class CCustomRowset :
    public CRowsetImpl< CCustomRowset<Creator>, CCustomWindowsFile, Creator>,
    public IRowsetIndexImpl< ... >
```

Add the interface to COM_MAP in the object using the COM_INTERFACE_ENTRY macro. If there's no map, create one. For example:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
END_COM_MAP()
```

For the rowset object, chain the map of its parent object so that the object can delegate to the parent class. In this example, add the COM_INTERFACE_ENTRY_CHAIN macro to the map:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)
END_COM_MAP()
```

## See also

[Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)
