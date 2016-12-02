---
title: "Record Field Exchange Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), record field exchange (DFX)"
  - "ODBC, bulk RFX data exchange functions"
  - "RFX (record field exchange), ODBC classes"
  - "DFX (DAO record field exchange), data exchange functions"
  - "DFX functions"
  - "bulk RFX functions"
  - "DFX (DAO record field exchange)"
  - "RFX (record field exchange), DAO classes"
  - "ODBC, RFX"
  - "RFX (record field exchange), data exchange functions"
  - "RFX (record field exchange)"
ms.assetid: 6e4c5c1c-acb7-4c18-bf51-bf7959a696cd
caps.latest.revision: 13
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
# Record Field Exchange Functions
This topic lists the Record Field Exchange (RFX, Bulk RFX, and DFX) functions used to automate the transfer of data between a recordset object and its data source and to perform other operations on the data.  
  
 If you are using the ODBC-based classes and you have implemented bulk row fetching, you must manually override the `DoBulkFieldExchange` member function of `CRecordset` by calling the Bulk RFX functions for each data member corresponding to a data source column.  
  
 If you have not implemented bulk row fetching in the ODBC-based classes, or if you are using the DAO-based classes, then ClassWizard will override the `DoFieldExchange` member function of `CRecordset` or `CDaoRecordset` by calling the RFX functions (for ODBC classes) or the DFX functions (for DAO classes) for each field data member in your recordset.  
  
 The record field exchange functions transfer data each time the framework calls `DoFieldExchange` or `DoBulkFieldExchange`. Each function transfers a specific data type.  
  
 For more information about how these functions are used, see the articles [Record Field Exchange: How RFX Works (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 For columns of data that you bind dynamically, you can also call the RFX or DFX functions yourself, as explained in the articles [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Additionally, you can write your own custom RFX or DFX routines, as explained in Technical Note [43](../../mfc/tn043-rfx-routines.md) (for ODBC) and Technical Note [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (for DAO).  
  
 For an example of RFX and Bulk RFX functions as they appear in the `DoFieldExchange` and `DoBulkFieldExchange` functions, see [RFX_Text](http://msdn.microsoft.com/library/de3c7581-d26c-40cb-81f3-c492ef4809f6) and [RFX_Text_Bulk](http://msdn.microsoft.com/library/c5bed6e5-313d-4d3f-8a87-c032e41f63a7). DFX functions are very similar to the RFX functions.  
  
### RFX Functions (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary](http://msdn.microsoft.com/library/908ff945-3ad0-43a1-9932-cdcdc8b14915)|Transfers arrays of bytes of type [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[RFX_Bool](http://msdn.microsoft.com/library/9600e5b6-713f-4fbf-ac88-df89957df34e)|Transfers Boolean data.|  
|[RFX_Byte](http://msdn.microsoft.com/library/2572d906-94b1-404b-bf2b-fb095da8359c)|Transfers a single byte of data.|  
|[RFX_Date](http://msdn.microsoft.com/library/0588113d-133c-4f99-8603-9f7722be20ee)|Transfers time and date data using [CTime](../../atl-mfc-shared/reference/ctime-class.md) or **TIMESTAMP_STRUCT**.|  
|[RFX_Double](http://msdn.microsoft.com/library/4cb815ec-e32d-4049-a887-2879bcd29168)|Transfers double-precision float data.|  
|[RFX_Int](http://msdn.microsoft.com/library/c4e6b1bf-d6d3-4fbf-b4ca-c4f426ac6979)|Transfers integer data.|  
|[RFX_Long](http://msdn.microsoft.com/library/99540206-3794-4393-986e-5d6b7a7ac7b1)|Transfers long integer data.|  
|[RFX_LongBinary](http://msdn.microsoft.com/library/2249ff6d-1598-4660-9197-1fa1e4fc1451)|Transfers binary large object (BLOB) data with an object of the [CLongBinary](../../mfc/reference/clongbinary-class.md) class.|  
|[RFX_Single](http://msdn.microsoft.com/library/28a39755-9c04-4a11-b526-de698ec3f79e)|Transfers float data.|  
|[RFX_Text](http://msdn.microsoft.com/library/de3c7581-d26c-40cb-81f3-c492ef4809f6)|Transfers string data.|  
  
### Bulk RFX Functions (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary_Bulk](http://msdn.microsoft.com/library/891c7d7e-a4e6-4691-a286-cb933357e6da)|Transfers arrays of byte data.|  
|[RFX_Bool_Bulk](http://msdn.microsoft.com/library/95b9e045-9e6b-4653-bc24-34bf86ce4dd9)|Transfers arrays of Boolean data.|  
|[RFX_Byte_Bulk](http://msdn.microsoft.com/library/1dbcc351-e029-403b-8eeb-aeb9653a81bb)|Transfers arrays of single bytes.|  
|[RFX_Date_Bulk](http://msdn.microsoft.com/library/811ef934-549b-4d5c-a0a0-5abb261eb99b)|Transfers arrays of data of type **TIMESTAMP_STRUCT**.|  
|[RFX_Double_Bulk](http://msdn.microsoft.com/library/e91c3a00-36cb-4a80-a0ba-a4e2d707809a)|Transfers arrays of double-precision, floating-point data.|  
|[RFX_Int_Bulk](http://msdn.microsoft.com/library/e3ee2eb9-0945-47aa-aed9-250fc39f6dc6)|Transfers arrays of integer data.|  
|[RFX_Long_Bulk](http://msdn.microsoft.com/library/49c3e9f7-b791-49c9-9db8-d2211e6207bf)|Transfers arrays of long integer data.|  
|[RFX_Single_Bulk](http://msdn.microsoft.com/library/a84bf6c6-fd49-4ce2-bcf7-09c7f559e8b6)|Transfers arrays of floating-point data.|  
|[RFX_Text_Bulk](http://msdn.microsoft.com/library/c5bed6e5-313d-4d3f-8a87-c032e41f63a7)|Transfers arrays of data of type **LPSTR**.|  
  
### DFX Functions (DAO)  
  
|||  
|-|-|  
|[DFX_Binary](http://msdn.microsoft.com/library/678021a3-2e46-44d7-8528-71bb692dcc07)|Transfers arrays of bytes of type [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[DFX_Bool](http://msdn.microsoft.com/library/d7c9707e-6381-4360-a363-49f817c30a5e)|Transfers Boolean data.|  
|[DFX_Byte](http://msdn.microsoft.com/library/01d7864e-ff59-44e8-b935-86c8a14f07a6)|Transfers a single byte of data.|  
|[DFX_Currency](http://msdn.microsoft.com/library/1420eeea-a744-49f0-a477-95d9ca3338a0)|Transfers currency data, of type [COleCurrency](../../mfc/reference/colecurrency-class.md).|  
|[DFX_DateTime](http://msdn.microsoft.com/library/5f28ac10-9d30-4bdb-a540-215f017d1005)|Transfers time and date data, of type [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|  
|[DFX_Double](http://msdn.microsoft.com/library/52a89182-efed-405b-b4e9-0ebd00503706)|Transfers double-precision float data.|  
|[DFX_Long](http://msdn.microsoft.com/library/2c00d59a-9900-4f3d-b4e3-a702b826b8b4)|Transfers long integer data.|  
|[DFX_LongBinary](http://msdn.microsoft.com/library/2f200402-6e19-413a-bdd4-8f03342c712c)|Transfers binary large object (BLOB) data with an object of the `CLongBinary` class. For DAO, it is recommended that you use [DFX_Binary](http://msdn.microsoft.com/library/678021a3-2e46-44d7-8528-71bb692dcc07) instead.|  
|[DFX_Short](http://msdn.microsoft.com/library/890bc8db-9670-449a-8133-7a6d47260fb2)|Transfers short integer data.|  
|[DFX_Single](http://msdn.microsoft.com/library/393113ae-ef11-42eb-a34d-f9b140532496)|Transfers float data.|  
|[DFX_Text](http://msdn.microsoft.com/library/c4a2c4d5-76c5-4c7d-915b-d9e06c8b1de5)|Transfers string data.|  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)   
 [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#crecordset__dofieldexchange)   
 [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#crecordset__dobulkfieldexchange)   
 [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#cdaorecordset__dofieldexchange)

