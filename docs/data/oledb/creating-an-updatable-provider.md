---
title: "Creating an Updatable Provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB providers, updatable", "notifications, support in providers", "OLE DB providers, creating"]
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Creating an Updatable Provider

Visual C++ supports updatable providers or providers that can update (write to) the data store. This topic discusses how to create updatable providers using OLE DB templates.  
  
 This topic assumes that you are starting with a workable provider. There are two steps to creating an updatable provider. You must first decide how the provider will make changes to the data store; specifically, whether changes are to be done immediately or deferred until an update command is issued. The section "[Making Providers Updatable](#vchowmakingprovidersupdatable)" describes the changes and settings you need to do in the provider code.  
  
 Next, you must make sure your provider contains all the functionality to support anything the consumer might request of it. If the consumer wants to update the data store, the provider has to contain code that persists data to the data store. For example, you might use the C Run-Time Library or MFC to perform such operations on your data source. The section "[Writing to the Data Source](#vchowwritingtothedatasource)" describes how to write to the data source, deal with NULL and default values, and set column flags.  
  
> [!NOTE]
>  [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) is an example of an updatable provider. UpdatePV is the same as MyProv but with updatable support.  
  
##  <a name="vchowmakingprovidersupdatable"></a> Making Providers Updatable  

 The key to making a provider updatable is understanding what operations you want your provider to perform on the data store and how you want the provider to carry out those operations. Specifically, the major issue is whether updates to the data store are to be done immediately or deferred (batched) until an update command is issued.  
  
 You must first decide whether to inherit from `IRowsetChangeImpl` or `IRowsetUpdateImpl` in your rowset class. Depending on which of these you choose to implement, the functionality of three methods will be affected: `SetData`, `InsertRows`, and `DeleteRows`.  
  
- If you inherit from [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), calling these three methods immediately changes the data store.  
  
- If you inherit from [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), the methods defer changes to the data store until you call `Update`, `GetOriginalData`, or `Undo`. If the update involves several changes, they are performed in batch mode (note that batching changes can add considerable memory overhead).  
  
 Note that `IRowsetUpdateImpl` derives from `IRowsetChangeImpl`. Thus, `IRowsetUpdateImpl` gives you change capability plus batch capability.  
  
#### To support updatability in your provider  
  
1. In your rowset class, inherit from `IRowsetChangeImpl` or `IRowsetUpdateImpl`. These classes provide appropriate interfaces for changing the data store:  
  
     **Adding IRowsetChange**  
  
     Add `IRowsetChangeImpl` to your inheritance chain using this form:  
  
    ```cpp  
    IRowsetChangeImpl< rowset-name, storage-name >  
    ```  
  
     Also add `COM_INTERFACE_ENTRY(IRowsetChange)` to the `BEGIN_COM_MAP` section in your rowset class.  
  
     **Adding IRowsetUpdate**  
  
     Add `IRowsetUpdate` to your inheritance chain using this form:  
  
    ```cpp  
    IRowsetUpdateImpl< rowset-name, storage>  
    ```  
  
    > [!NOTE]
    >  You should remove the `IRowsetChangeImpl` line from your inheritance chain. This one exception to the directive previously mentioned must include the code for `IRowsetChangeImpl`.  
  
2.  Add the following to your COM map (`BEGIN_COM_MAP ... END_COM_MAP`):  
  
    |If you implement|Add to COM map|  
    |----------------------|--------------------|  
    |`IRowsetChangeImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)`|  
    |`IRowsetUpdateImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)COM_INTERFACE_ENTRY(IRowsetUpdate)`|  
  
3.  In your command, add the following to your property set map (`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`):  
  
    |If you implement|Add to property set map|  
    |----------------------|-----------------------------|  
    |`IRowsetChangeImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`|  
    |`IRowsetUpdateImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)`|  
  
4.  In your property set map, you should also include all of the following settings as they appear below:  
  
    ```cpp  
    PROPERTY_INFO_ENTRY_VALUE(UPDATABILITY, DBPROPVAL_UP_CHANGE |   
      DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE)  
    PROPERTY_INFO_ENTRY_VALUE(CHANGEINSERTEDROWS, VARIANT_TRUE)  
    PROPERTY_INFO_ENTRY_VALUE(IMMOBILEROWS, VARIANT_TRUE)  
  
    PROPERTY_INFO_ENTRY_EX(OWNINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OWNUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OTHERINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OTHERUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(REMOVEDELETED, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_FALSE, 0)  
    ```  
  
     You can find the values used in these macro calls by looking in Atldb.h for the property IDs and values (if Atldb.h differs from the online documentation, Atldb.h supersedes the documentation).  
  
    > [!NOTE]
    >  Many of the `VARIANT_FALSE` and `VARIANT_TRUE` settings are required by the OLE DB templates; the OLE DB specification says they can be read/write, but the OLE DB templates can only support one value.  
  
     **If you implement IRowsetChangeImpl**  
  
     If you implement `IRowsetChangeImpl`, you must set the following properties on your provider. These properties are primarily used to request interfaces through `ICommandProperties::SetProperties`.  
  
    - `DBPROP_IRowsetChange`: Setting this automatically sets `DBPROP_IRowsetChange`.  
  
    - `DBPROP_UPDATABILITY`: A bitmask specifying the supported methods on `IRowsetChange`: `SetData`, `DeleteRows`, or `InsertRow`.  
  
    - `DBPROP_CHANGEINSERTEDROWS`: Consumer can call `IRowsetChange::DeleteRows` or `SetData` for newly inserted rows.  
  
    - `DBPROP_IMMOBILEROWS`: Rowset will not reorder inserted or updated rows.  
  
     **If you implement IRowsetUpdateImpl**  
  
     If you implement `IRowsetUpdateImpl`, you must set the following properties on your provider, in addition to setting all the properties for `IRowsetChangeImpl` previously listed:  
  
    - `DBPROP_IRowsetUpdate`.  
  
    - `DBPROP_OWNINSERT`: Must be READ_ONLY AND VARIANT_TRUE.  
  
    - `DBPROP_OWNUPDATEDELETE`: Must be READ_ONLY AND VARIANT_TRUE.  
  
    - `DBPROP_OTHERINSERT`: Must be READ_ONLY AND VARIANT_TRUE.  
  
    - `DBPROP_OTHERUPDATEDELETE`: Must be READ_ONLY AND VARIANT_TRUE.  
  
    - `DBPROP_REMOVEDELETED`: Must be READ_ONLY AND VARIANT_TRUE.  
  
    - `DBPROP_MAXPENDINGROWS`.  
  
        > [!NOTE]
        >  If you support notifications, you might also have some other properties as well; see the section on `IRowsetNotifyCP` for this list.  
  
##  <a name="vchowwritingtothedatasource"></a> Writing to the Data Source  
 To read from the data source, call the `Execute` function. To write to the data source, call the `FlushData` function. (In a general sense, flush means to save modifications you make to a table or index to disk.)  

