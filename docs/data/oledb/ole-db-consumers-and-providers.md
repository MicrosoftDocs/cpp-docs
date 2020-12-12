---
description: "Learn more about: OLE DB Consumers and Providers"
title: "OLE DB Consumers and Providers"
ms.date: "10/22/2018"
helpviewer_keywords: ["OLE DB providers, OLE DB data architecture", "OLE DB providers", "OLE DB consumers, OLE DB data architecture", "OLE DB consumers", "OLE DB, data model"]
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
---
# OLE DB Consumers and Providers

The OLE DB architecture uses the model of consumers and providers. A consumer makes requests for data. A provider responds to these requests by placing data in a tabular format and returning it to the consumer. Any call that the consumer can make must be implemented in the provider.

Technically defined, a consumer is any system or application code (not necessarily an OLE DB component) that accesses data through OLE DB interfaces. The interfaces are implemented in a provider. So a provider is any software component that implements OLE DB interfaces to encapsulate access to data and expose it to other objects (that is, consumers).

For roles, a consumer calls methods on OLE DB interfaces; an OLE DB provider implements the needed OLE DB interfaces.

OLE DB avoids the terms client and server because these roles don't always make sense, especially in an n-tier situation. Because a consumer could be a component on a tier that serves another component, to call it a client component would be confusing. Also, a provider sometimes acts more like a database driver than a server.

## See also

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)
