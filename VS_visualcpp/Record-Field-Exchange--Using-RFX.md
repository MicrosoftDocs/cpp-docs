---
title: "Record Field Exchange: Using RFX"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Record Field Exchange: Using RFX
This topic explains what you do to use RFX in relation to what the framework does.  
  
> [!NOTE]
>  This topic applies to classes derived from [CRecordset](../VS_visualcpp/CRecordset-Class.md) in which bulk row fetching has not been implemented. If you are using bulk row fetching, bulk record field exchange (Bulk RFX) is implemented. Bulk RFX is similar to RFX. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../VS_visualcpp/Recordset--Fetching-Records-in-Bulk--ODBC-.md).  
  
 The following topics contain related information:  
  
-   [Record Field Exchange: Working with the Wizard Code](../VS_visualcpp/Record-Field-Exchange--Working-with-the-Wizard-Code.md) introduces the main components of RFX and explains the code that the MFC Application Wizard and **Add Class** (as described in [Adding an MFC ODBC Consumer](../VS_visualcpp/Adding-an-MFC-ODBC-Consumer.md)) write to support RFX and how you might want to modify the wizard code.  
  
-   [Record Field Exchange: Using the RFX Functions](../VS_visualcpp/Record-Field-Exchange--Using-the-RFX-Functions.md) explains writing calls to the RFX functions in your `DoFieldExchange` override.  
  
 The following table shows your role in relation to what the framework does for you.  
  
### Using RFX: You and the Framework  
  
|You|The framework|  
|---------|-------------------|  
|Declare your recordset classes with a wizard. Specify names and data types of field data members.|The wizard derives a `CRecordset` class and writes a [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) override for you, including an RFX function call for each field data member.|  
|(Optional) Manually add any needed parameter data members to the class. Manually add an RFX function call to `DoFieldExchange` for each parameter data member, add a call to [CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md) for the group of parameters, and specify the total number of parameters in [m_nParams](../Topic/CRecordset::m_nParams.md). See [Recordset: Parameterizing a Recordset (ODBC)](../VS_visualcpp/Recordset--Parameterizing-a-Recordset--ODBC-.md).||  
|(Optional) Manually bind additional columns to field data members. Manually increment [m_nFields](../Topic/CRecordset::m_nFields.md). See [Recordset: Dynamically Binding Data Columns (ODBC)](../VS_visualcpp/Recordset--Dynamically-Binding-Data-Columns--ODBC-.md).||  
|Construct an object of your recordset class. Before using the object, set the values of its parameter data members, if any.|For efficiency, the framework prebinds the parameters, using ODBC. When you pass parameter values, the framework passes them to the data source. Only the parameter values are sent for requeries, unless the sort and/or filter strings have changed.|  
|Open a recordset object using [CRecordset::Open](../Topic/CRecordset::Open.md).|Executes the recordset's query, binds columns to field data members of the recordset, and calls `DoFieldExchange` to exchange data between the first selected record and the recordset's field data members.|  
|Scroll in the recordset using [CRecordset::Move](../Topic/CRecordset::Move.md) or a menu or toolbar command.|Calls `DoFieldExchange` to transfer data to the field data members from the new current record.|  
|Add, update, and delete records.|Calls `DoFieldExchange` to transfer data to the data source.|  
  
## See Also  
 [Record Field Exchange (RFX)](../VS_visualcpp/Record-Field-Exchange--RFX-.md)   
 [Record Field Exchange: How RFX Works](../VS_visualcpp/Record-Field-Exchange--How-RFX-Works.md)   
 [Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)](../VS_visualcpp/Recordset--Obtaining-SUMs-and-Other-Aggregate-Results--ODBC-.md)   
 [CRecordset Class](../VS_visualcpp/CRecordset-Class.md)   
 [CFieldExchange Class](../VS_visualcpp/CFieldExchange-Class.md)   
 [Macros, Global Functions, and Global Variables](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md)