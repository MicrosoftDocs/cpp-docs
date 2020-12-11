---
description: "Learn more about: Record Field Exchange: Using RFX"
title: "Record Field Exchange: Using RFX"
ms.date: "11/04/2016"
helpviewer_keywords: ["RFX (ODBC), implementing"]
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
---
# Record Field Exchange: Using RFX

This topic explains what you do to use RFX in relation to what the framework does.

> [!NOTE]
> This topic applies to classes derived from [CRecordset](../../mfc/reference/crecordset-class.md) in which bulk row fetching has not been implemented. If you are using bulk row fetching, bulk record field exchange (Bulk RFX) is implemented. Bulk RFX is similar to RFX. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

The following topics contain related information:

- [Record Field Exchange: Working with the Wizard Code](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) introduces the main components of RFX and explains the code that the MFC Application Wizard and **Add Class** (as described in [Adding an MFC ODBC Consumer](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) write to support RFX and how you might want to modify the wizard code.

- [Record Field Exchange: Using the RFX Functions](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) explains writing calls to the RFX functions in your `DoFieldExchange` override.

The following table shows your role in relation to what the framework does for you.

### Using RFX: You and the Framework

|You|The framework|
|---------|-------------------|
|Declare your recordset classes with a wizard. Specify names and data types of field data members.|The wizard derives a `CRecordset` class and writes a [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) override for you, including an RFX function call for each field data member.|
|(Optional) Manually add any needed parameter data members to the class. Manually add an RFX function call to `DoFieldExchange` for each parameter data member, add a call to [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) for the group of parameters, and specify the total number of parameters in [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams). See [Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).||
|(Optional) Manually bind additional columns to field data members. Manually increment [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). See [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||
|Construct an object of your recordset class. Before using the object, set the values of its parameter data members, if any.|For efficiency, the framework prebinds the parameters, using ODBC. When you pass parameter values, the framework passes them to the data source. Only the parameter values are sent for requeries, unless the sort and/or filter strings have changed.|
|Open a recordset object using [CRecordset::Open](../../mfc/reference/crecordset-class.md#open).|Executes the recordset's query, binds columns to field data members of the recordset, and calls `DoFieldExchange` to exchange data between the first selected record and the recordset's field data members.|
|Scroll in the recordset using [CRecordset::Move](../../mfc/reference/crecordset-class.md#move) or a menu or toolbar command.|Calls `DoFieldExchange` to transfer data to the field data members from the new current record.|
|Add, update, and delete records.|Calls `DoFieldExchange` to transfer data to the data source.|

## See also

[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)<br/>
[CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)<br/>
[Macros, Global Functions, and Global Variables](../../mfc/reference/mfc-macros-and-globals.md)
