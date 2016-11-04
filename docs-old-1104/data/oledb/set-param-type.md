---
title: "SET_PARAM_TYPE | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SET_PARAM_TYPE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SET_PARAM_TYPE macro"
ms.assetid: 85979070-2d55-4c67-94b1-9b9058babc59
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# SET_PARAM_TYPE
Specifies `COLUMN_ENTRY` macros that follow the `SET_PARAM_TYPE` macro input, output, or input/output.  
  
## Syntax  
  
```  
  
SET_PARAM_TYPE(  
type  
 )  
  
```  
  
#### Parameters  
 `type`  
 [in] The type to set for the parameter.  
  
## Remarks  
 Providers support only parameter input/output types that are supported by the underlying data source. The type is a combination of one or more **DBPARAMIO** values (see [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*):  
  
-   **DBPARAMIO_NOTPARAM** The accessor has no parameters. Typically, you set **eParamIO** to this value in row accessors to remind the user that parameters are ignored.  
  
-   **DBPARAMIO_INPUT** An input parameter.  
  
-   **DBPARAMIO_OUTPUT** An output parameter.  
  
-   **DBPARAMIO_INPUT &#124; DBPARAMIO_OUTPUT** The parameter is both an input and an output parameter.  
  
## Example  
 [!CODE [NVC_OLEDB_Consumer#18](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#18)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)