---
title: "Adding an Interface to Your Provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB provider templates, object interfaces"
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Adding an Interface to Your Provider
Determine which object you want to add the interface to (usually data source, rowset, command, or session objects created by the OLE DB Provider Wizard). It is possible that the object you need to add the interface to is one that your provider does not currently support. In that case, run the ATL OLE DB Provider Wizard to create the object. Right-click the project in Class View, click **Add Class** from the **Add** menu, and then click **ATL OLE DB Provider**. You might want to put the interface code in a separate directory and then copy the files to your provider project.  
  
 If you created a new class to support the interface, make the object inherit from that class. For example, you might add the class **IRowsetIndexImpl** to a rowset object:  
  
```  
template <class Creator>  
class CAgentRowset :   
public CRowsetImpl< CAgentRowset<Creator>, CAgentMan, Creator>,  
   public IRowsetIndexImpl< ... >   
```  
  
 Add the interface to **COM_MAP** in the object using the COM_INTERFACE_ENTRY macro. If there is no map, create one. For example:  
  
```  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
END_COM_MAP()  
```  
  
 For the rowset object, chain the map of its parent object so that the object can delegate to the parent class. In this example, add the COM_INTERFACE_ENTRY_CHAIN macro to the map:  
  
```  
BEGIN_COM_MAP(CAgentRowset)  
     COM_INTERFACE_ENTRY(IRowsetIndex)  
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)  
END_COM_MAP()  
```  
  
## See Also  
 [Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)