---
title: "Rowset Object Interfaces | Microsoft Docs"
ms.custom: ""
ms.date: "10/24/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["interfaces, OLE DB", "OLE DB, interfaces", "rowset objects [OLE DB]", "OLE DB provider templates, object interfaces", "interfaces, list of"]
ms.assetid: 0d7a5d48-2fe4-434f-a84b-157c1fdc3494
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Rowset Object Interfaces

The following table shows the mandatory and optional interfaces defined by OLE DB for a rowset object.  
  
|Interface|Required?|Implemented by OLE DB templates?|  
|---------------|---------------|--------------------------------------|  
|[IAccessor](/previous-versions/windows/desktop/ms719672)|Mandatory|Yes|  
|[IColumnsInfo](/previous-versions/windows/desktop/ms724541)|Mandatory|Yes|  
|[IConvertType](/previous-versions/windows/desktop/ms715926)|Mandatory|Yes|  
|[IRowset](/previous-versions/windows/desktop/ms720986)|Mandatory|Yes|  
|[IRowsetInfo](/previous-versions/windows/desktop/ms724541)|Mandatory|Yes|  
|[IChapteredRowset](/previous-versions/windows/desktop/ms718180)|Optional|No|  
|[IColumnsInfo2](/previous-versions/windows/desktop/ms712953)|Optional|No|  
|[IColumnsRowset](/previous-versions/windows/desktop/ms722657)|Optional|No|  
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Optional|Yes (through ATL)|  
|[IDBAsynchStatus](/previous-versions/windows/desktop/ms709832)|Optional|No|  
|[IGetRow](/previous-versions/windows/desktop/ms718047)|Optional|No|  
|[IRowsetChange](/previous-versions/windows/desktop/ms715790)|Optional|Yes|  
|[IRowsetChapterMember](/previous-versions/windows/desktop/ms725430)|Optional|No|  
|[IRowsetCurrentIndex](/previous-versions/windows/desktop/ms709700)|Optional|No|  
|[IRowsetFind](/previous-versions/windows/desktop/ms724221)|Optional|No|  
|[IRowsetIdentity](/previous-versions/windows/desktop/ms715913)|Optional (but required for level 0 providers)|Yes|  
|[IRowsetIndex](/previous-versions/windows/desktop/ms719604)|Optional|No|  
|[IRowsetLocate](/previous-versions/windows/desktop/ms721190)|Optional|Yes|  
|[IRowsetRefresh](/previous-versions/windows/desktop/ms714892)|Optional|No|  
|[IRowsetScroll](/previous-versions/windows/desktop/ms712984)|Optional|No|  
|[IRowsetUpdate](/previous-versions/windows/desktop/ms714401)|Optional|Yes|  
|[IRowsetView](/previous-versions/windows/desktop/ms709755)|Optional|No|  
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Optional|Yes|  
|[IRowsetBookmark](/previous-versions/windows/desktop/ms714246)|Optional|No|  
  
The wizard-generated rowset object implements `IAccessor`, `IRowset`, and `IRowsetInfo` through inheritance. The `IAccessorImpl` binds both output columns. The `IRowset` interface handles fetches rows and data. The `IRowsetInfo` interface handles the rowset properties.  
  
## See Also  

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)