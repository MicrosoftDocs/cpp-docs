---
description: "Learn more about: Overriding Provider Service Defaults"
title: "Overriding Provider Service Defaults"
ms.date: "10/29/2018"
helpviewer_keywords: ["service providers [OLE DB]", "OLE DB services [OLE DB], overriding defaults"]
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
---
# Overriding Provider Service Defaults

The provider's registry value for OLEDB_SERVICES is returned as the default value for the [DBPROP_INIT_OLEDBSERVICES](/previous-versions/windows/desktop/ms716898(v=vs.85)) initialization property on the data source object.

As long as the registry entry exists, the provider's objects is aggregated. The user can override the provider's default setting for enabled services by setting the DBPROP_INIT_OLEDBSERVICES property before initialization. To enable or disable a particular service, the user gets the current value of the DBPROP_INIT_OLEDBSERVICES property, sets or clears the bit for the particular property to be enabled or disabled, and resets the property. DBPROP_INIT_OLEDBSERVICES can be set directly in OLE DB or in the connection string passed to ADO or `IDataInitialize::GetDatasource`. The corresponding values to enable/disable individual services are listed in the following table.

|Default services enabled|DBPROP_INIT_OLEDBSERVICES property value|Value in connection string|
|------------------------------|------------------------------------------------|--------------------------------|
|All services (default)|DBPROPVAL_OS_ENABLEALL|"OLE DB Services = -1;"|
|All except Pooling and AutoEnlistment|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_RESOURCEPOOLING &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT`|"OLE DB Services = -4;"|
|All except Client Cursor|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"OLE DB Services = -5;"|
|All except Pooling, AutoEnlistment, and Client Cursor|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"OLE DB Services = -7;"|
|No services|`~DBPROPVAL_OS_ENABLEALL`|"OLE DB Services = 0;"|

If the registry entry doesn't exist for the provider, the Component Managers won't collect the provider's objects. No services will be turned on, even if explicitly requested by the user.

## See also

[Resource Pooling](/previous-versions/windows/desktop/ms713655(v=vs.85))<br/>
[How Consumers Use Resource Pooling](/previous-versions/windows/desktop/ms715907(v=vs.85))<br/>
[How Providers Work Effectively with Resource Pooling](/previous-versions/windows/desktop/ms714906(v=vs.85))<br/>
[Enabling and Disabling OLE DB Services](../../data/oledb/enabling-and-disabling-ole-db-services.md)<br/>
