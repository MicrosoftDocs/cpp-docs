---
title: "Updating Data with the RDO RemoteData Control | Microsoft Docs"
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
  - "RemoteData control"
  - "RDO RemoteData control, updating data"
  - "RDO RemoteData control"
  - "RemoteData control, updating data"
ms.assetid: abb4175f-612e-4645-905e-c0fa918b0fd7
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
# Updating Data with the RDO RemoteData Control
RDO RemoteData control data can be either read-only or modifiable.  
  
### To create an application that modifies data using RDO RemoteData control  
  
1.  Set the RDO RemoteData control **CursorDriver** property.  
  
    -   Server Side cursors store returned data on the server.  
  
    -   ODBC Client Side cursors store data in the client's local storage.  
  
    -   Client Batch Side cursors use a cursor library designed to deal with concurrency issues.  
  
    -   No Cursor option is used when an action query is performed, and thus no cursor is necessary.  
  
2.  Set the RDO RemoteData control **LockType** property. The optimistic concurrency based on resultset option is recommended.  
  
    -   Read-only concurrency should not be used if you want data to be modifiable.  
  
    -   Pessimistic concurrency locks data during update so that other users are not in danger of committing incompatible data changes.  
  
    -   Optimistic concurrency does not lock data, but if during commit, it detects that another client has posted an incompatible state, the RDO RemoteData control throws an error.  
  
3.  Set the RDO RemoteData control **ResultsetType** property. Make sure the ODBC driver supports the chosen options:  
  
    -   When Create Static Cursor is chosen, the changes are not detected until the cursor is closed and reopened.  
  
    -   When Create Keyset Cursor is chosen, the cursor allows inserts, updates, and deletes, at will, within the keyset cursor itself.  
  
4.  Set the data-bound control as needed to allow updateability. Note that some controls do not allow updating.  
  
 For information about how to use these objects, see the documentation about the RDO RemoteData control.  
  
## See Also  
 [RDO Databinding](../../data/ado-rdo/rdo-databinding.md)   
 [Using RDO Databinding in Visual C++](../../data/ado-rdo/using-rdo-databinding-in-visual-cpp.md)