---
description: "Learn more about: TN053: Custom DFX Routines for DAO Database Classes"
title: "TN053: Custom DFX Routines for DAO Database Classes"
ms.date: "09/17/2019"
helpviewer_keywords: ["MFC, DAO and", "database classes [MFC], DAO", "DAO [MFC], MFC", "DFX (DAO record field exchange) [MFC], custom routines", "TN053", "DAO [MFC], classes", "DFX (DAO record field exchange) [MFC]", "custom DFX routines [MFC]"]
ms.assetid: fdcf3c51-4fa8-4517-9222-58aaa4f25cac
---
# TN053: Custom DFX Routines for DAO Database Classes

> [!NOTE]
> DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete. The Visual C++ environment and wizards do not support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use [OLE DB Templates](../data/oledb/ole-db-templates.md) or [ODBC and MFC](../data/odbc/odbc-and-mfc.md) for new projects. You should only use DAO in maintaining existing applications.

This technical note describes the DAO record field exchange (DFX) mechanism. To help understand what is happening in the DFX routines, the `DFX_Text` function will be explained in detail as an example. As an additional source of information to this technical note, you can examine the code for the other the individual DFX functions. You probably will not need a custom DFX routine as often as you might need a custom RFX routine (used with ODBC database classes).

This technical note contains:

- DFX Overview

- [Examples](#_mfcnotes_tn053_examples) using DAO Record Field Exchange and Dynamic Binding

- [How DFX Works](#_mfcnotes_tn053_how_dfx_works)

- [What Your Custom DFX Routine Does](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)

- [Details of DFX_Text](#_mfcnotes_tn053_details_of_dfx_text)

**DFX Overview**

The DAO record field exchange mechanism (DFX) is used to simplify the procedure of retrieving and updating data when using the `CDaoRecordset` class. The process is simplified using data members of the `CDaoRecordset` class. By deriving from `CDaoRecordset`, you can add data members to the derived class representing each field in a table or query. This "static binding" mechanism is simple, but it may not be the data fetch/update method of choice for all applications. DFX retrieves every bound field each time the current record is changed. If you are developing a performance-sensitive application that does not require fetching every field when currency is changed, "dynamic binding" via `CDaoRecordset::GetFieldValue` and `CDaoRecordset::SetFieldValue` may be the data access method of choice.

> [!NOTE]
> DFX and dynamic binding are not mutually exclusive, so a hybrid use of static and dynamic binding can be used.

## <a name="_mfcnotes_tn053_examples"></a> Example 1 — Use of DAO Record Field Exchange only

(assumes `CDaoRecordset` — derived class `CMySet` already open)

```
// Add a new record to the customers table
myset.AddNew();

myset.m_strCustID = _T("MSFT");

myset.m_strCustName = _T("Microsoft");

myset.Update();
```

**Example 2 — Use of dynamic binding only**

(assumes using `CDaoRecordset` class, `rs`, and it is already open)

```
// Add a new record to the customers table
COleVariant  varFieldValue1 (_T("MSFT"),
    VT_BSTRT);

//Note: VT_BSTRT flags string type as ANSI,
    instead of UNICODE default
COleVariant  varFieldValue2  (_T("Microsoft"),
    VT_BSTRT);

rs.AddNew();

rs.SetFieldValue(_T("Customer_ID"),
    varFieldValue1);

rs.SetFieldValue(_T("Customer_Name"),
    varFieldValue2);

rs.Update();
```

**Example 3 — Use of DAO Record Field Exchange and dynamic binding**

(assumes browsing employee data with `CDaoRecordset`-derived class `emp`)

```
// Get the employee's data so that it can be displayed
emp.MoveNext();

// If user wants to see employee's photograph,
// fetch it
COleVariant varPhoto;
if (bSeePicture)
    emp.GetFieldValue(_T("photo"),
    varPhoto);

// Display the data
PopUpEmployeeData(emp.m_strFirstName,
    emp.m_strLastName,
    varPhoto);
```

## <a name="_mfcnotes_tn053_how_dfx_works"></a> How DFX Works

The DFX mechanism works in a similar fashion to the record field exchange (RFX) mechanism used by the MFC ODBC classes. The principles of DFX and RFX are the same but there are numerous internal differences. The design of the DFX functions was such that virtually all the code is shared by the individual DFX routines. At the highest level DFX only does a few things.

- DFX constructs the SQL **SELECT** clause and SQL **PARAMETERS** clause if necessary.

- DFX constructs the binding structure used by DAO's `GetRows` function (more on this later).

- DFX manages the data buffer used to detect dirty fields (if double-buffering is being used)

- DFX manages the **NULL** and **DIRTY** status arrays and sets values if necessary on updates.

At the heart of the DFX mechanism is the `CDaoRecordset` derived class's `DoFieldExchange` function. This function dispatches calls to the individual DFX functions of an appropriate operation type. Before calling `DoFieldExchange` the internal MFC functions set the operation type. The following list shows the various operation types and a brief description.

|Operation|Description|
|---------------|-----------------|
|`AddToParameterList`|Builds PARAMETERS clause|
|`AddToSelectList`|Builds SELECT clause|
|`BindField`|Sets up binding structure|
|`BindParam`|Sets parameter values|
|`Fixup`|Sets NULL status|
|`AllocCache`|Allocates cache for dirty check|
|`StoreField`|Saves current record to cache|
|`LoadField`|Restores cache to member values|
|`FreeCache`|Frees cache|
|`SetFieldNull`|Sets field status & value to NULL|
|`MarkForAddNew`|Marks fields dirty if not PSEUDO NULL|
|`MarkForEdit`|Marks fields dirty if don't match cache|
|`SetDirtyField`|Sets field values marked as dirty|

In the next section, each operation will be explained in more detail for `DFX_Text`.

The most important feature to understand about the DAO record field exchange process is that it uses the `GetRows` function of the `CDaoRecordset` object. The DAO `GetRows` function can work in several ways. This technical note will only briefly describe `GetRows` as it is outside of the scope of this technical note.
DAO `GetRows` can work in several ways.

- It can fetch multiple records and multiple fields of data at one time. This allows for faster data access with the complication of dealing with a large data structure and the appropriate offsets to each field and for each record of data in the structure. MFC does not take advantage of this multiple record fetching mechanism.

- Another way `GetRows` can work is to allow programmers to specify binding addresses for the retrieved data of each field for one record of data.

- DAO will also "call back" into the caller for variable length columns in order to allow the caller to allocate memory. This second feature has the benefit of minimizing the number of copies of data as well as allowing direct storage of data into members of a class (the `CDaoRecordset` derived class). This second mechanism is the method MFC uses to bind to data members in `CDaoRecordset` derived classes.

## <a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a> What Your Custom DFX Routine Does

It is apparent from this discussion that the most important operation implemented in any DFX function must be the ability to set up the required data structures to successfully call `GetRows`. There are a number of other operations that a DFX function must support as well, but none as important or complex as correctly preparing for the `GetRows` call.

The use of DFX is described in the online documentation. Essentially, there are two requirements. First, members must be added to the `CDaoRecordset` derived class for each bound field and parameter. Following this `CDaoRecordset::DoFieldExchange` should be overridden. Note that the data type of the member is important. It should match the data from the field in the database or at least be convertible to that type. For example a numeric field in database, such as a long integer, can always be converted to text and bound to a `CString` member, but a text field in a database may not necessarily be converted to a numeric representation, such as long integer and bound to a long integer member. DAO and the Microsoft Jet database engine are responsible for the conversion (rather than MFC).

## <a name="_mfcnotes_tn053_details_of_dfx_text"></a> Details of DFX_Text

As mentioned previously, the best way to explain how DFX works is to work through an example. For this purpose going through the internals of `DFX_Text` should work quite well to help provide at least a basic understanding of DFX.

- `AddToParameterList`

   This operation builds the SQL **PARAMETERS** clause ("`Parameters <param name>, <param type> ... ;`") required by Jet. Each parameter is named and typed (as specified in the RFX call). See the function `CDaoFieldExchange::AppendParamType` function to see the names of the individual types. In the case of `DFX_Text`, the type used is **text**.

- `AddToSelectList`

   Builds the SQL **SELECT** clause. This is pretty straight forward as the column name specified by the DFX call is simply appended ("`SELECT <column name>, ...`").

- `BindField`

   The most complex of the operations. As mentioned previously this is where the DAO binding structure used by `GetRows` is set up. As you can see from the code in `DFX_Text` the types of information in the structure include the DAO type used (**DAO_CHAR** or **DAO_WCHAR** in the case of `DFX_Text`). Additionally, the type of binding used is also set up. In an earlier section `GetRows` was described only briefly, but it was sufficient to explain that the type of binding used by MFC is always direct address binding (**DAOBINDING_DIRECT**). In addition for variable-length column binding (like `DFX_Text`) callback binding is used so that MFC can control the memory allocation and specify an address of the correct length. What this means is that MFC can always tell DAO "where" to put the data, thus allowing binding directly to member variables. The rest of the binding structure is filled in with things like the address of the memory allocation callback function and the type of column binding (binding by column name).

- `BindParam`

   This is a simple operation that calls `SetParamValue` with the parameter value specified in your parameter member.

- `Fixup`

   Fills in the **NULL** status for each field.

- `SetFieldNull`

   This operation only marks each field status as **NULL** and sets the member variable's value to **PSEUDO_NULL**.

- `SetDirtyField`

   Calls `SetFieldValue` for each field marked dirty.

All the remaining operations only deal with using the data cache. The data cache is an extra buffer of the data in the current record that is used to make certain things simpler. For instance, "dirty" fields can be automatically detected. As described in the online documentation it can be turned off completely or at the field level. The implementation of the buffer utilizes a map. This map is used to match up dynamically allocated copies of the data with the address of the "bound" field (or `CDaoRecordset` derived data member).

- `AllocCache`

   Dynamically allocates the cached field value and adds it to the map.

- `FreeCache`

   Deletes the cached field value and removes it from the map.

- `StoreField`

   Copies the current field value into the data cache.

- `LoadField`

   Copies the cached value into the field member.

- `MarkForAddNew`

   Checks if current field value is non-**NULL** and marks it dirty if necessary.

- `MarkForEdit`

   Compares current field value with data cache and marks dirty if necessary.

> [!TIP]
> Model your custom DFX routines on the existing DFX routines for standard data types.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
