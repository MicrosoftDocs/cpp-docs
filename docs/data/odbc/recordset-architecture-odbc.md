---
description: "Learn more about: Recordset: Architecture (ODBC)"
title: "Recordset: Architecture (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["recordsets, data members", "field data members, recordset architecture", "field data members", "m_nParams data member, recordsets", "recordsets, architecture", "parameter data members in recordsets", "m_nFields data member", "ODBC recordsets, architecture", "m_nParams data member", "m_nFields data member, recordsets"]
ms.assetid: 47555ddb-11be-4b9e-9b9a-f2931764d298
---
# Recordset: Architecture (ODBC)

This topic applies to the MFC ODBC classes.

This topic describes the data members that comprise the architecture of a recordset object:

- [Field data members](#_core_field_data_members)

- [Parameter data members](#_core_parameter_data_members)

- [Using m_nFields and m_nParams data members](#_core_using_m_nfields_and_m_nparams)

> [!NOTE]
> This topic applies to objects derived from `CRecordset` in which bulk row fetching has not been implemented. If bulk row fetching is implemented, the architecture is similar. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="_core_a_sample_class"></a> Sample Class

> [!NOTE]
> The MFC ODBC Consumer wizard is not available in Visual Studio 2019 and later. You can still create a consumer manually.

When you use the [MFC ODBC Consumer Wizard](../../mfc/reference/adding-an-mfc-odbc-consumer.md) from **Add Class** wizard to declare a recordset class derived from `CRecordset`, the resulting class has the general structure shown in the following simple class:

```cpp
class CCourse : public CRecordset
{
public:
   CCourse(CDatabase* pDatabase = NULL);
   ...
   CString m_strCourseID;
   CString m_strCourseTitle;
   CString m_strIDParam;
};
```

At the beginning of the class, the wizard writes a set of [field data members](#_core_field_data_members). When you create the class, you must specify one or more field data members. If the class is parameterized, as the sample class is (with the data member `m_strIDParam`), you must manually add [parameter data members](#_core_parameter_data_members). The wizard does not support adding parameters to a class.

## <a name="_core_field_data_members"></a> Field Data Members

The most important members of your recordset class are the field data members. For each column you select from the data source, the class contains a data member of the appropriate data type for that column. For example, the [sample class](#_core_a_sample_class) shown at the beginning of this topic has two field data members, both of type `CString`, called `m_strCourseID` and `m_strCourseTitle`.

When the recordset selects a set of records, the framework automatically binds the columns of the current record (after the `Open` call, the first record is current) to the field data members of the object. That is, the framework uses the appropriate field data member as a buffer in which to store the contents of a record column.

As the user scrolls to a new record, the framework uses the field data members to represent the current record. The framework refreshes the field data members, replacing the previous record's values. The field data members are also used for updating the current record and for adding new records. As part of the process of updating a record, you specify the update values by assigning values directly to the appropriate field data member or members.

## <a name="_core_parameter_data_members"></a> Parameter Data Members

If the class is parameterized, it has one or more parameter data members. A parameterized class lets you base a recordset query on information obtained or calculated at run time.

Typically, the parameter helps narrow the selection, as in the following example. Based on the [sample class](#_core_a_sample_class) at the beginning of this topic, the recordset object might execute the following SQL statement:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = ?
```

The "?" is a placeholder for a parameter value that you supply at run time. When you construct the recordset and set its `m_strIDParam` data member to MATH101, the effective SQL statement for the recordset becomes:

```sql
SELECT CourseID, CourseTitle FROM Course WHERE CourseID = MATH101
```

By defining parameter data members, you tell the framework about parameters in the SQL string. The framework binds the parameter, which lets ODBC know where to get values to substitute for the placeholder. In the example, the resulting recordset contains only the record from the Course table with a CourseID column whose value is MATH101. All specified columns of this record are selected. You can specify as many parameters (and placeholders) as you need.

> [!NOTE]
> MFC does nothing itself with the parameters — in particular, it does not perform a text substitution. Instead, MFC tells ODBC where to get the parameter; ODBC retrieves the data and performs the necessary parameterization.

> [!NOTE]
> The order of parameters is important. For information about this and more information about parameters, see [Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

## <a name="_core_using_m_nfields_and_m_nparams"></a> Using m_nFields and m_nParams

When a wizard writes a constructor for your class, it also initializes the [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) data member, which specifies the number of [field data members](#_core_field_data_members) in the class. If you add any [parameters](#_core_parameter_data_members) to your class, you must also add an initialization for the [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) data member, which specifies the number of parameter data members. The framework uses these values to work with the data members.

For more information and examples, see [Record Field Exchange: Using RFX](../../data/odbc/record-field-exchange-using-rfx.md).

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Declaring a Class for a Table (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)<br/>
[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)
