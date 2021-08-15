---
description: "Learn more about: CCustomSource (CustomDS.h)"
title: "CCustomSource (CustomDS.H)"
ms.date: "10/22/2018"
f1_keywords: ["myproviderds.h", "cmyprovidersource", "customds.h", "ccustomsource"]
helpviewer_keywords: ["OLE DB providers, wizard-generated files", "CMyProviderSource class in MyProviderDS.H", "CCustomSource class in CustomDS.H"]
ms.assetid: c143d48e-59c8-4f67-9141-3aab51859b92
---
# CCustomSource (CustomDS.h)

The provider classes use multiple inheritance. The following code shows the inheritance chain for the data source object:

```cpp
/////////////////////////////////////////////////////////////////////////
// CCustomSource
class ATL_NO_VTABLE CCustomSource :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CCustomSource, &CLSID_Custom>,
   public IDBCreateSessionImpl<CCustomSource, CCustomSession>,
   public IDBInitializeImpl<CCustomSource>,
   public IDBPropertiesImpl<CCustomSource>,
   public IPersistImpl<CCustomSource>,
   public IInternalConnectionImpl<CCustomSource>
```

All the COM components derive from `CComObjectRootEx` and `CComCoClass`. `CComObjectRootEx` provides all the implementation for the `IUnknown` interface. It can handle any threading model. `CComCoClass` handles any error support required. If you want to send richer error information to the client, you can use some of the error APIs in `CComCoClass`.

The data source object also inherits from several 'Impl' classes. Each class provides the implementation for an interface. The data source object implements the `IPersist`, `IDBProperties`, `IDBInitialize`, and `IDBCreateSession` interfaces. Each interface is required by OLE DB to implement the data source object. You can choose to support or not support particular functionality by inheriting or not inheriting from one of these 'Impl' classes. If you want to support the `IDBDataSourceAdmin` interface, you inherit from the `IDBDataSourceAdminImpl` class to get the functionality required.

## COM Map

Whenever the client calls `QueryInterface` for an interface on the data source, it goes through the following COM map:

```cpp
BEGIN_COM_MAP(CCustomSource)
   COM_INTERFACE_ENTRY(IDBCreateSession)
   COM_INTERFACE_ENTRY(IDBInitialize)
   COM_INTERFACE_ENTRY(IDBProperties)
   COM_INTERFACE_ENTRY(IPersist)
   COM_INTERFACE_ENTRY(IInternalConnection)
END_COM_MAP()
```

The COM_INTERFACE_ENTRY macros are from ATL and tell the implementation of `QueryInterface` in `CComObjectRootEx` to return the appropriate interfaces.

## Property Map

The property map specifies all the properties assigned by the provider:

```cpp
BEGIN_PROPSET_MAP(CCustomSource)
   BEGIN_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)
      PROPERTY_INFO_ENTRY(ACTIVESESSIONS)
      PROPERTY_INFO_ENTRY(ASYNCTXNABORT)
      PROPERTY_INFO_ENTRY(ASYNCTXNCOMMIT)
      PROPERTY_INFO_ENTRY(BYREFACCESSORS)
      PROPERTY_INFO_ENTRY_VALUE(CATALOGLOCATION, DBPROPVAL_CL_START)
      PROPERTY_INFO_ENTRY(CATALOGTERM)
      PROPERTY_INFO_ENTRY(CATALOGUSAGE)
      PROPERTY_INFO_ENTRY(COLUMNDEFINITION)
      PROPERTY_INFO_ENTRY(CONCATNULLBEHAVIOR)
      PROPERTY_INFO_ENTRY(DATASOURCENAME)
      PROPERTY_INFO_ENTRY(DATASOURCEREADONLY)
      PROPERTY_INFO_ENTRY(DBMSNAME)
      PROPERTY_INFO_ENTRY(DBMSVER)
      PROPERTY_INFO_ENTRY_VALUE(DSOTHREADMODEL, DBPROPVAL_RT_FREETHREAD)
      PROPERTY_INFO_ENTRY(GROUPBY)
      PROPERTY_INFO_ENTRY(HETEROGENEOUSTABLES)
      PROPERTY_INFO_ENTRY(IDENTIFIERCASE)
      PROPERTY_INFO_ENTRY(MAXINDEXSIZE)
      PROPERTY_INFO_ENTRY(MAXROWSIZE)
      PROPERTY_INFO_ENTRY(MAXROWSIZEINCLUDESBLOB)
      PROPERTY_INFO_ENTRY(MAXTABLESINSELECT)
      PROPERTY_INFO_ENTRY(MULTIPLEPARAMSETS)
      PROPERTY_INFO_ENTRY(MULTIPLERESULTS)
      PROPERTY_INFO_ENTRY(MULTIPLESTORAGEOBJECTS)
      PROPERTY_INFO_ENTRY(MULTITABLEUPDATE)
      PROPERTY_INFO_ENTRY(NULLCOLLATION)
      PROPERTY_INFO_ENTRY(OLEOBJECTS)
      PROPERTY_INFO_ENTRY(ORDERBYCOLUMNSINSELECT)
      PROPERTY_INFO_ENTRY(OUTPUTPARAMETERAVAILABILITY)
      PROPERTY_INFO_ENTRY(PERSISTENTIDTYPE)
      PROPERTY_INFO_ENTRY(PREPAREABORTBEHAVIOR)
      PROPERTY_INFO_ENTRY(PREPARECOMMITBEHAVIOR)
      PROPERTY_INFO_ENTRY(PROCEDURETERM)
      PROPERTY_INFO_ENTRY(PROVIDERNAME)
      PROPERTY_INFO_ENTRY(PROVIDEROLEDBVER)
      PROPERTY_INFO_ENTRY(PROVIDERVER)
      PROPERTY_INFO_ENTRY(QUOTEDIDENTIFIERCASE)
      PROPERTY_INFO_ENTRY(ROWSETCONVERSIONSONCOMMAND)
      PROPERTY_INFO_ENTRY(SCHEMATERM)
      PROPERTY_INFO_ENTRY(SCHEMAUSAGE)
      PROPERTY_INFO_ENTRY(STRUCTUREDSTORAGE)
      PROPERTY_INFO_ENTRY(SUBQUERIES)
      PROPERTY_INFO_ENTRY(TABLETERM)
      PROPERTY_INFO_ENTRY(USERNAME)
   END_PROPERTY_SET(DBPROPSET_DATASOURCEINFO)
   BEGIN_PROPERTY_SET(DBPROPSET_DBINIT)
      PROPERTY_INFO_ENTRY(AUTH_PASSWORD)
      PROPERTY_INFO_ENTRY(AUTH_PERSIST_SENSITIVE_AUTHINFO)
      PROPERTY_INFO_ENTRY(AUTH_USERID)
      PROPERTY_INFO_ENTRY(INIT_DATASOURCE)
      PROPERTY_INFO_ENTRY(INIT_HWND)
      PROPERTY_INFO_ENTRY(INIT_LCID)
      PROPERTY_INFO_ENTRY(INIT_LOCATION)
      PROPERTY_INFO_ENTRY(INIT_MODE)
      PROPERTY_INFO_ENTRY(INIT_PROMPT)
      PROPERTY_INFO_ENTRY(INIT_PROVIDERSTRING)
      PROPERTY_INFO_ENTRY(INIT_TIMEOUT)
   END_PROPERTY_SET(DBPROPSET_DBINIT)
   BEGIN_PROPERTY_SET(DBPROPSET_DATASOURCE)
      PROPERTY_INFO_ENTRY(CURRENTCATALOG)
   END_PROPERTY_SET(DBPROPSET_DATASOURCE)
   CHAIN_PROPERTY_SET(CCustomSession)
END_PROPSET_MAP()
```

Properties in OLE DB are grouped. The data source object has two groups of properties: one for the DBPROPSET_DATASOURCEINFO set and one for the DBPROPSET_DBINIT set. The DBPROPSET_DATASOURCEINFO set corresponds to properties about the provider and its data source. The DBPROPSET_DBINIT set corresponds to properties used at initialization. The OLE DB Provider Templates handle these sets with the PROPERTY_SET macros. The macros create a block that contains an array of properties. Whenever the client calls the `IDBProperties` interface, the provider uses the property map.

You don't need to implement every property in the specification. However, you must support the required properties; see the level 0 conformance specification for more information. If you don't want to support a property, you can remove it from the map. If you want to support a property, add it into the map by using a PROPERTY_INFO_ENTRY macro. The macro corresponds to the `UPROPINFO` structure as shown in the following code:

```cpp
struct UPROPINFO
{
   DBPROPID    dwPropId;
   ULONG       ulIDS;
   VARTYPE     VarType;
   DBPROPFLAGS dwFlags;
   union
   {
      DWORD dwVal;
      LPOLESTR szVal;
   };
   DBPROPOPTIONS dwOption;
};
```

Each element in the structure represents information to handle the property. It contains a `DBPROPID` to determine the GUID and ID for the property. It also contains entries to determine the type and value of the property.

If you want to change the default value of a property (note that a consumer can change the value of a writable property at any time), you can use either the PROPERTY_INFO_ENTRY_VALUE or PROPERTY_INFO_ENTRY_EX macro. These macros allow you to specify a value for a corresponding property. The PROPERTY_INFO_ENTRY_VALUE macro is a shorthand notation that allows you to change the value. The PROPERTY_INFO_ENTRY_VALUE macro calls the PROPERTY_INFO_ENTRY_EX macro. This macro allows you to add or change all of the attributes in the `UPROPINFO` structure.

If you want to define your own property set, you can add one by making an additional BEGIN_PROPSET_MAP/END_PROPSET_MAP combination. Define a GUID for the property set and then define your own properties. If you have provider-specific properties, add them to a new property set instead of using an existing one. This avoids problems in later versions of OLE DB.

## User-Defined Property Sets

Visual C++ supports user-defined property sets. You don't have to override `GetProperties` or `GetPropertyInfo`. Instead, the templates detect any user-defined property set and add it to the appropriate object.

If you have a user-defined property set that needs to be available at initialization time (that is, before the consumer calls `IDBInitialize::Initialize`), you can specify this by using the UPROPSET_USERINIT flag along with the BEGIN_PROPERTY_SET_EX macro. The property set must be in the data source object for this to work (as the OLE DB specification requires). For example:

```cpp
BEGIN_PROPERTY_SET_EX(DBPROPSET_MYPROPSET, UPROPSET_USERINIT)
   PROPERTY_INFO_ENTRY(DBPROP_MYPROP)
END_PROPERTY_SET_EX(DBPROPSET_MYPROPSET)
```

## See also

[Provider Wizard-Generated Files](../../data/oledb/provider-wizard-generated-files.md)<br/>
