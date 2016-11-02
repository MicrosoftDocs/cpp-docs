---
title: "Record Field Exchange Functions | Microsoft Docs"
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
This topic lists the Record Field Exchange ([RFX](#_mfc_rfx_functions_.28.odbc.29), [Bulk RFX](#_mfc_bulk_rfx_functions_.28.odbc.29), and [DFX](#_mfc_dfx_functions_.28.dao.29)) functions used to automate the transfer of data between a recordset object and its data source and to perform other operations on the data.  
  
 If you are using the ODBC-based classes and you have implemented bulk row fetching, you must manually override the `DoBulkFieldExchange` member function of `CRecordset` by calling the Bulk RFX functions for each data member corresponding to a data source column.  
  
 If you have not implemented bulk row fetching in the ODBC-based classes, or if you are using the DAO-based classes, then ClassWizard will override the `DoFieldExchange` member function of `CRecordset` or `CDaoRecordset` by calling the RFX functions (for ODBC classes) or the DFX functions (for DAO classes) for each field data member in your recordset.  
  
 The record field exchange functions transfer data each time the framework calls `DoFieldExchange` or `DoBulkFieldExchange`. Each function transfers a specific data type.  
  
 For more information about how these functions are used, see the articles [Record Field Exchange: How RFX Works (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 For columns of data that you bind dynamically, you can also call the RFX or DFX functions yourself, as explained in the articles [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Additionally, you can write your own custom RFX or DFX routines, as explained in Technical Note [43](../../mfc/tn043-rfx-routines.md) (for ODBC) and Technical Note [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (for DAO).  
  
 For an example of RFX and Bulk RFX functions as they appear in the `DoFieldExchange` and `DoBulkFieldExchange` functions, see [RFX_Text](../Topic/RFX_Text.md) and [RFX_Text_Bulk](../Topic/RFX_Text_Bulk.md). DFX functions are very similar to the RFX functions.  
  
### RFX Functions (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary](../Topic/RFX_Binary.md)|Transfers arrays of bytes of type [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[RFX_Bool](../Topic/RFX_Bool.md)|Transfers Boolean data.|  
|[RFX_Byte](../Topic/RFX_Byte.md)|Transfers a single byte of data.|  
|[RFX_Date](../Topic/RFX_Date.md)|Transfers time and date data using [CTime](../../atl-mfc-shared/reference/ctime-class.md) or **TIMESTAMP_STRUCT**.|  
|[RFX_Double](../Topic/RFX_Double.md)|Transfers double-precision float data.|  
|[RFX_Int](../Topic/RFX_Int.md)|Transfers integer data.|  
|[RFX_Long](../Topic/RFX_Long.md)|Transfers long integer data.|  
|[RFX_LongBinary](../Topic/RFX_LongBinary.md)|Transfers binary large object (BLOB) data with an object of the [CLongBinary](../../mfc/reference/clongbinary-class.md) class.|  
|[RFX_Single](../Topic/RFX_Single.md)|Transfers float data.|  
|[RFX_Text](../Topic/RFX_Text.md)|Transfers string data.|  
  
### Bulk RFX Functions (ODBC)  
  
|||  
|-|-|  
|[RFX_Binary_Bulk](../Topic/RFX_Binary_Bulk.md)|Transfers arrays of byte data.|  
|[RFX_Bool_Bulk](../Topic/RFX_Bool_Bulk.md)|Transfers arrays of Boolean data.|  
|[RFX_Byte_Bulk](../Topic/RFX_Byte_Bulk.md)|Transfers arrays of single bytes.|  
|[RFX_Date_Bulk](../Topic/RFX_Date_Bulk.md)|Transfers arrays of data of type **TIMESTAMP_STRUCT**.|  
|[RFX_Double_Bulk](../Topic/RFX_Double_Bulk.md)|Transfers arrays of double-precision, floating-point data.|  
|[RFX_Int_Bulk](../Topic/RFX_Int_Bulk.md)|Transfers arrays of integer data.|  
|[RFX_Long_Bulk](../Topic/RFX_Long_Bulk.md)|Transfers arrays of long integer data.|  
|[RFX_Single_Bulk](../Topic/RFX_Single_Bulk.md)|Transfers arrays of floating-point data.|  
|[RFX_Text_Bulk](../Topic/RFX_Text_Bulk.md)|Transfers arrays of data of type **LPSTR**.|  
  
### DFX Functions (DAO)  
  
|||  
|-|-|  
|[DFX_Binary](../Topic/DFX_Binary.md)|Transfers arrays of bytes of type [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[DFX_Bool](../Topic/DFX_Bool.md)|Transfers Boolean data.|  
|[DFX_Byte](../Topic/DFX_Byte.md)|Transfers a single byte of data.|  
|[DFX_Currency](../Topic/DFX_Currency.md)|Transfers currency data, of type [COleCurrency](../../mfc/reference/colecurrency-class.md).|  
|[DFX_DateTime](../Topic/DFX_DateTime.md)|Transfers time and date data, of type [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|  
|[DFX_Double](../Topic/DFX_Double.md)|Transfers double-precision float data.|  
|[DFX_Long](../Topic/DFX_Long.md)|Transfers long integer data.|  
|[DFX_LongBinary](../Topic/DFX_LongBinary.md)|Transfers binary large object (BLOB) data with an object of the `CLongBinary` class. For DAO, it is recommended that you use [DFX_Binary](../Topic/DFX_Binary.md) instead.|  
|[DFX_Short](../Topic/DFX_Short.md)|Transfers short integer data.|  
|[DFX_Single](../Topic/DFX_Single.md)|Transfers float data.|  
|[DFX_Text](../Topic/DFX_Text.md)|Transfers string data.|  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)   
 [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#crecordset__dofieldexchange)   
 [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#crecordset__dobulkfieldexchange)   
 [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#cdaorecordset__dofieldexchange)

