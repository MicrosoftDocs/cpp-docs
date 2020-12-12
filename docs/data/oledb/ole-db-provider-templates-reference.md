---
description: "Learn more about: OLE DB Provider Templates Reference"
title: "OLE DB Provider Templates Reference"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE DB provider templates"]
ms.assetid: 518358f0-bab1-4de9-bce9-4062cc87c11f
---
# OLE DB Provider Templates Reference

The classes and interfaces for the OLE DB Provider Templates can be grouped into the following categories. The reference material also includes information about the [macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md).

The classes use the following naming convention: a class named with the pattern `IWidgetImpl` would provide an implementation of the interface `IWidget`.

## Session Classes

[IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)<br/>
Creates a new session from the data source object and returns the requested interface on the newly created session. Mandatory interface on data source objects.

[ISessionPropertiesImpl](../../data/oledb/isessionpropertiesimpl-class.md)<br/>
Implements session properties by calling a static function defined by the property set map. The property set map should be specified in your session class. Mandatory interface on sessions.

## Rowset Classes

[CRowsetImpl](../../data/oledb/crowsetimpl-class.md)

Provides a standard OLE DB rowset implementation without requiring multiple inheritance of many implementation interfaces. The only method for which you must provide implementation is `Execute`.

[CSimpleRow](../../data/oledb/csimplerow-class.md)<br/>
Provides a default implementation for the row handle, which is used in the `IRowsetImpl` class. A row handle is logically a unique tag for a result row. `IRowsetImpl` creates a new `CSimpleRow` for every row requested in `IRowsetImpl::GetNextRows`.

[IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)<br/>
OLE DB requires providers to implement an `HACCESSOR`, which is a tag to an array of `DBBINDING` structures. Provides `HACCESSOR`s that are addresses of the `BindType` structures. Mandatory on rowsets and commands.

[IColumnsInfoImpl](../../data/oledb/icolumnsinfoimpl-class.md)<br/>
Delegates to a static function defined by the provider column map. Mandatory interface on rowsets and commands.

[IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)<br/>
Gives information on the availability of type conversions on a command or on a rowset. Mandatory on commands, rowsets, and index rowsets. Implements the `IConvertType` interface by delegating to the conversion object supplied by OLE DB.

[IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)<br/>
Implements the `IDBSchemaRowset` interface and the templatized creator function `CreateSchemaRowset`.

[IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)<br/>
Opens and returns a rowset that includes all rows from a single base table or index. Mandatory interface for a session object.

[IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)<br/>
Implements the OLE DB [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) interface, which enables updating of the values of columns in existing rows, deleting rows, and inserting new rows.

[IRowsetCreatorImpl](../../data/oledb/irowsetcreatorimpl-class.md)<br/>
This class inherits from [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) and overrides [IObjectWithSite::SetSite](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite). `IRowsetCreatorImpl` performs the same functions as `IObjectWithSite` but also enables the OLE DB properties `DBPROPCANSCROLLBACKWARDS` and `DBPROPCANFETCHBACKWARDS`.

[IRowsetIdentityImpl](../../data/oledb/irowsetidentityimpl-class.md)<br/>
Implements the `IRowsetIdentity` interface, which allows you to compare whether two rows of data are identical or not.

[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)<br/>
Provides an implementation of the `IRowset` interface, which is the base rowset interface.

[IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)<br/>
Implements the rowset properties by using the property set map defined in your command class. Mandatory interface on rowsets.

[IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)<br/>
Implements the OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) interface, which fetches arbitrary rows from a rowset. To support OLE DB bookmarks in a rowset, make the rowset inherit from this class.

[IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)<br/>
Implements broadcast functions to advise listeners on the connection point `IID_IRowsetNotify` of changes to the contents of the rowset. Consumers that handle notifications implement [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) and register it on that connection point.

[IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)<br/>
Implements the OLE DB [IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85)) interface, which enables consumers to delay the transmission of changes made with [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) to the data source and undo changes before transmission.

## Command Classes

[ICommandImpl](../../data/oledb/icommandimpl-class.md)<br/>
Provides an implementation of the `ICommand` interface. This interface is not visible, but is handled by `ICommandTextImpl`. A mandatory interface on the command object.

[ICommandPropertiesImpl](../../data/oledb/icommandpropertiesimpl-class.md)<br/>
This implementation of the `ICommandProperties` interface is provided by a static function defined by the `BEGIN_PROPSET_MAP` macro. Mandatory on commands.

[ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)<br/>
Sets, stores, and returns the command text. Mandatory on commands.

[IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)<br/>
Creates a new command from the session object and returns the requested interface on the newly created command. Optional interface on session objects.

Other command classes are `IColumnsInfoImpl` and `IAccessorImpl`, described in the Rowset Classes section above.

## Data Source Classes

[IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)<br/>
Creates and deletes the connection with the consumer. Mandatory interface on data source objects and optional interface on enumerators.

[IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)<br/>
`IDBProperties` is a mandatory interface for data source objects and an optional interface for enumerators. However, if an enumerator exposes `IDBInitialize`, it must expose `IDBProperties` (properties on the data source).

[IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md)<br/>
Obtains an interface pointer to the data source object. Mandatory interface on the session.

## Other Classes

[CUtlProps](../../data/oledb/cutlprops-class.md)<br/>
Implements properties for a variety of OLE DB property interfaces (for example, `IDBProperties`, `ISessionProperties`, and `IRowsetInfo`).

[IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)

Implements the OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface, adding records to and retrieving records from a data member.

## See also

[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[OLE DB Templates](../../data/oledb/ole-db-templates.md)
