---
description: "Learn more about: Obtaining Metadata with Schema Rowsets"
title: "Obtaining Metadata with Schema Rowsets"
ms.date: "10/24/2018"
helpviewer_keywords: ["schema rowsets, getting OLE DB provider metadata", "OLE DB consumer templates, getting provider metadata", "metadata, getting (OLE DB Templates)"]
ms.assetid: 6b448461-82fb-4acf-816b-3cbb0ca1d186
---
# Obtaining Metadata with Schema Rowsets

Sometimes you need to obtain information about the provider, rowset, table, columns, or other database information without opening the rowset. Data about the database structure is called metadata and can be retrieved by a number of different methods. One method is to use schema rowsets.

OLE DB Templates provide a set of classes to retrieve schema information; these classes create predefined schema rowsets and are listed in [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

> [!NOTE]
> If you are using OLAP and some of your rowsets are not supported by the schema rowset classes (for example, you have a variable number of columns), you should consider using `CManualAccessor` or `CDynamicAccessor`. You can scroll through the columns and use case statements to handle the possible data types for each column.

## Catalog/Schema Model

ANSI SQL defines a catalog/schema model for data stores; OLE DB uses this model. In this model, catalogs (databases) have schemas and schemas have tables.

- **Catalog** A catalog is another name for a database. It's a collection of related schemas. To list the catalogs (databases) belonging to a given data source, use [CCatalog](./schema-rowset-classes-and-typedef-classes.md#catalog). Because many databases have only one catalog, metadata is sometimes called schema information.

- **Schema** A schema is a collection of database objects that are owned or have been created by a particular user. To list the schemas owned by a given user, use [CSchemata](./schema-rowset-classes-and-typedef-classes.md#schemata).

   In Microsoft SQL Server and ODBC 2.x terms, a schema is an owner (for example, dbo is a typical schema name). Also, SQL Server stores metadata in a set of tables: one table contains a list of all the tables and another table contains a list of all the columns. There's no equivalent to a schema in a Microsoft Access database.

- **Table** Tables are collections of columns arranged in specific orders. To list the tables defined in a given catalog (database) and information about those tables, use [CTables](./schema-rowset-classes-and-typedef-classes.md#table)).

## Restrictions

When you query for schema information, you can use restrictions to specify the type of information in which you're interested. You can think of restrictions as a filter or qualifier in a query. For example, in the query:

```sql
SELECT * FROM authors WHERE l_name = 'pivo'
```

`l_name` is a restriction. This is a simple example with only one restriction; the schema rowset classes support several restrictions.

The [schema rowset typedef classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) encapsulate all the OLE DB schema rowsets so that you can access a schema rowset just like any other rowset by instantiating and opening it. For example, the typedef class [CColumns](./schema-rowset-classes-and-typedef-classes.md#columns) is defined as:

```cpp
CRestrictions<CAccessor<CColumnsInfo>
```

The [CRestrictions](../../data/oledb/crestrictions-class.md) class supplies the restriction support. After you create an instance of the schema rowset, call [CRestrictions::Open](./crestrictions-class.md#open). This method returns a result set based on the restrictions that you specify.

To specify restrictions, refer to [Appendix B: Schema Rowsets](/previous-versions/windows/desktop/ms712921(v=vs.85)) and look up the rowset that you're using. For example, `CColumns` corresponds to the [COLUMNS Rowset](/previous-versions/windows/desktop/ms723052(v=vs.85)); that topic lists the restriction columns in the COLUMNS rowset: TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME, COLUMN_NAME. You must follow that order in specifying your restrictions.

So, for example, if you want to restrict by table name, TABLE_NAME is the third restriction column, and then call `Open`, specifying the wanted table name as the third restriction parameter, as shown in the following example.

### To use schema rowsets

1. Include the header file `Atldbsch.h` (you need `Atldbcli.h` for consumer support as well).

1. Instantiate a schema rowset object in the consumer's or the document's header file. If you want table information, declare a `CTables` object; if you want column information, declare a `CColumns` object. This example shows how to retrieve the columns in the authors table:

    ```cpp
    CDataSource ds;
    ds.Open();
    CSession ss;
    ss.Open(ds);
    CColumns columnSchemaRowset;
    // TABLE_NAME is the third restriction column, so
    // specify "authors" as the third restriction parameter:
    HRESULT hr = columnSchemaRowset.Open(ss, NULL, NULL, L"authors");
    hr = columnSchemaRowset.MoveFirst();
    while (hr == S_OK)
    {
       hr = columnSchemaRowset.MoveNext();
    }
    ```

1. To fetch the information, access the appropriate data member of the schema rowset object, for example, `ColumnSchemaRowset.m_szColumnName`. This data member corresponds to COLUMN_NAME. To see which OLE DB column each data member corresponds to, see [CColumns](./schema-rowset-classes-and-typedef-classes.md#columns).

For the reference of the schema rowset, typedef classes provided in the OLE DB Templates (see [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)).

For more information about OLE DB schema rowsets, including restriction columns, see [Appendix B: Schema Rowsets](/previous-versions/windows/desktop/ms712921(v=vs.85)) in the **OLE DB Programmer's Reference**.

For more complex examples of how to use schema rowset classes, see the [CatDB](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) and [DBViewer](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) samples.

For information about provider support for schema rowsets, see [Supporting Schema Rowsets](../../data/oledb/supporting-schema-rowsets.md).

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
