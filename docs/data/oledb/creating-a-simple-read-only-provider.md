---
title: "Creating a Simple Read-Only Provider | Microsoft Docs"
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
  - "OLE DB providers, creating"
  - "OLE DB provider templates, creating providers"
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
caps.latest.revision: 8
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
# Creating a Simple Read-Only Provider
When you have created an OLE DB provider using the ATL Project Wizard and ATL OLE DB Provider Wizard, you can add other functionality that you want to support. Start designing your provider by examining what kind of data you will be sending to the consumer and under what conditions. It is especially important to determine whether you need to support commands, transactions, and other optional objects. A good design up front will speed implementation and testing.  
  
 The example is presented in two parts:  
  
-   The first part shows how to [create a simple read-only provider](../../data/oledb/implementing-the-simple-read-only-provider.md) that reads a pair of strings.  
  
-   The second part shows how to [enhance the simple read-only provider](../../data/oledb/enhancing-the-simple-read-only-provider.md) by adding the `IRowsetLocate` interface.  
  
## See Also  
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)