---
description: "Learn more about: Record Field Exchange: Working with the Wizard Code"
title: "Record Field Exchange: Working with the Wizard Code"
ms.date: "05/09/2019"
helpviewer_keywords: ["DoFieldExchange method, overriding", "Unicode, with database classes", "field data members, declaring", "RFX (ODBC), wizard code", "RFX (ODBC), implementing", "field data members", "ODBC, RFX", "m_nParams data member, initializing", "m_nFields data member", "m_nParams data member", "overriding, DoFieldExchange", "m_nFields data member, initializing"]
ms.assetid: f00d882a-ff1b-4a75-9717-98d8762bb237
---
# Record Field Exchange: Working with the Wizard Code

> [!NOTE]
> The MFC ODBC Consumer wizard is not available in Visual Studio 2019 and later. You can still create a consumer manually.

This topic explains the code that the MFC Application Wizard and **Add Class** (as described in [Adding an MFC ODBC Consumer](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) write to support RFX and how you might want to alter that code.

> [!NOTE]
> This topic applies to classes derived from `CRecordset` in which bulk row fetching has not been implemented. If you are using bulk row fetching, bulk record field exchange (Bulk RFX) is implemented. Bulk RFX is similar to RFX. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

When you create a recordset class with the MFC Application Wizard or **Add Class**, the wizard writes the following RFX-related elements for you, based on the data source, table, and column choices you make in the wizard:

- Declarations of the recordset field data members in the recordset class

- An override of `CRecordset::DoFieldExchange`

- Initialization of recordset field data members in the recordset class constructor

## <a name="_core_the_field_data_member_declarations"></a> Field Data Member Declarations

The wizards write a recordset class declaration in an .h file that resembles the following for class `CSections`:

```cpp
class CSections : public CRecordset
{
public:
   CSections(CDatabase* pDatabase = NULL);
   DECLARE_DYNAMIC(CSections)

// Field/Param Data
   CString   m_strCourseID;
   CString   m_strInstructorID;
   CString   m_strRoomNo;
   CString   m_strSchedule;
   CString   m_strSectionNo;

// Overrides
   // Wizard generated virtual function overrides
   protected:
   virtual CString GetDefaultConnect();  // Default connection string
   virtual CString GetDefaultSQL();      // Default SQL for Recordset
   virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support

// Implementation
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

};
```

If you add parameter data members or new field data members that you bind yourself, add them after the wizard-generated ones.

Also, notice that the wizard overrides the `DoFieldExchange` member function of class `CRecordset`.

## <a name="_core_the_dofieldexchange_override"></a> DoFieldExchange Override

[DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) is the heart of RFX. The framework calls `DoFieldExchange` any time it needs to move data either from data source to recordset or from recordset to data source. `DoFieldExchange` also supports obtaining information about field data members through the [IsFieldDirty](../../mfc/reference/crecordset-class.md#isfielddirty) and [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull) member functions.

The following `DoFieldExchange` override is for the `CSections` class. The wizard writes the function in the .cpp file for your recordset class.

```cpp
void CSections::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Text(pFX, "CourseID", m_strCourseID);
   RFX_Text(pFX, "InstructorID", m_strInstructorID);
   RFX_Text(pFX, "RoomNo", m_strRoomNo);
   RFX_Text(pFX, "Schedule", m_strSchedule);
   RFX_Text(pFX, "SectionNo", m_strSectionNo);
}
```

Notice the following key features of the function:

- This section of the function is called the field map.

- A call to `CFieldExchange::SetFieldType`, through the `pFX` pointer. This call specifies that all RFX function calls up to the end of `DoFieldExchange` or the next call to `SetFieldType` are output columns. For more information, see [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype).

- Several calls to the `RFX_Text` global function — one per field data member (all of which are `CString` variables in the example). These calls specify the relationship between a column name on the data source and a field data member. The RFX functions do the actual data transfer. The class library supplies RFX functions for all the common data types. For more information about RFX functions, see [Record Field Exchange: Using the RFX Functions](../../data/odbc/record-field-exchange-using-the-rfx-functions.md).

    > [!NOTE]
    >  The order of the columns in your result set must match the order of the RFX function calls in `DoFieldExchange`.

- The `pFX` pointer to a [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) object that the framework passes when it calls `DoFieldExchange`. The `CFieldExchange` object specifies the operation that `DoFieldExchange` is to perform, the direction of transfer, and other context information.

## <a name="_core_the_recordset_constructor"></a> Recordset Constructor

The recordset constructor that the wizards write contains two things related to RFX:

- An initialization for each field data member

- An initialization for the [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) data member, which contains the number of field data members

The constructor for the `CSections` recordset example looks like this:

```cpp
CSections::CSections(CDatabase* pdb)
   : CRecordset(pdb)
{
   m_strCourseID = "";
   m_strInstructorID = "";
   m_strRoomNo = "";
   m_strSchedule = "";
   m_strSectionNo = "";
   m_nFields = 5;
}
```

> [!NOTE]
> If you add any field data members manually, as you might if you bind new columns dynamically, you must increment `m_nFields`. Do so by appending another line of code, such as:

```cpp
m_nFields += 3;
```

This is the code for adding three new fields. If you add any parameter data members, you must initialize the [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) data member, which contains the number of parameter data members. Put the `m_nParams` initialization outside the brackets.

## See also

[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)
