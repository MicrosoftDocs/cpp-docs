---
title: "Macros and Global Functions for OLE DB Consumer Templates | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["vc.templates.ole", "ATL.AtlTraceErrorRecords", "ATL::AtlTraceErrorRecords", "AtlTraceErrorRecords", "BEGIN_ACCESSOR", "BEGIN_ACCESSOR_MAP", "END_ACCESSOR", "END_ACCESSOR_MAP", "BEGIN_COLUMN_MAP", "BLOB_ENTRY", "BLOB_ENTRY_LENGTH", "BLOB_ENTRY_LENGTH_STATUS", "BLOB_ENTRY_STATUS", "BLOB_NAME", "BLOB_NAME_LENGTH", "BLOB_NAME_LENGTH_STATUS", "BLOB_NAME_STATUS", "BOOKMARK_ENTRY", "COLUMN_ENTRY", "COLUMN_ENTRY_EX", "COLUMN_ENTRY_LENGTH", "COLUMN_ENTRY_LENGTH_STATUS", "COLUMN_ENTRY_PS", "COLUMN_ENTRY_PS_LENGTH", "COLUMN_ENTRY_PS_LENGTH_STATUS", "COLUMN_ENTRY_PS_STATUS", "COLUMN_ENTRY_STATUS", "COLUMN_ENTRY_TYPE", "COLUMN_ENTRY_TYPE_SIZE", "COLUMN_NAME", "COLUMN_NAME_EX", "COLUMN_NAME_LENGTH", "COLUMN_NAME_LENGTH_STATUS", "COLUMN_NAME_PS", "COLUMN_NAME_PS_LENGTH", "COLUMN_NAME_PS_LENGTH_STATUS", "COLUMN_NAME_PS_STATUS", "COLUMN_NAME_STATUS", "COLUMN_NAME_TYPE", "COLUMN_NAME_TYPE_PS", "COLUMN_NAME_TYPE_SIZE", "COLUMN_NAME_TYPE_STATUS", "END_COLUMN_MAP", "DEFINE_COMMAND", "DEFINE_COMMAND_EX",      "BEGIN_PARAM_MAP", "END_PARAM_MAP", "SET_PARAM_TYPE"]
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB consumer templates, macros", "macros, OLE DB consumer template", "AtlTraceErrorRecords function", "BEGIN_ACCESSOR macro, syntax", "BEGIN_ACCESSOR macro", "BEGIN_ACCESSOR_MAP macro", "END_ACCESSOR macro", "END_ACCESSOR_MAP macro", "BEGIN_COLUMN_MAP macro", "BLOB_ENTRY macro", "BLOB_ENTRY_LENGTH macro", "BLOB_ENTRY_LENGTH_STATUS macro", "BLOB_ENTRY_STATUS macro", "BLOB_NAME macro", "BLOB_NAME_LENGTH macro", "BLOB_NAME_LENGTH_STATUS macro", "BLOB_NAME_STATUS macro", "BOOKMARK_ENTRY macro", "COLUMN_ENTRY macro", "COLUMN_ENTRY_EX macro", "COLUMN_ENTRY_LENGTH macro", "COLUMN_ENTRY_LENGTH_STATUS macro", "COLUMN_ENTRY_PS macro", "COLUMN_ENTRY_PS_LENGTH macro", "COLUMN_ENTRY_PS_LENGTH_STATUS macro", "COLUMN_ENTRY_PS_STATUS macro", "COLUMN_ENTRY_STATUS macro", "COLUMN_ENTRY_TYPE macro", "COLUMN_ENTRY_TYPE_SIZE macro", "COLUMN_NAME macro", "COLUMN_NAME_EX macro", "COLUMN_NAME_LENGTH macro", "COLUMN_NAME_LENGTH_STATUS macro", "COLUMN_NAME_PS macro", "COLUMN_NAME_PS_LENGTH macro", "COLUMN_NAME_PS_LENGTH_STATUS macro", "COLUMN_NAME_PS_STATUS macro", "COLUMN_NAME_STATUS macro", "COLUMN_NAME_TYPE macro", "COLUMN_NAME_TYPE_PS macro", "COLUMN_NAME_TYPE_SIZE macro", "COLUMN_NAME_TYPE_STATUS macro", "END_COLUMN_MAP macro", "DEFINE_COMMAND macro", "DEFINE_COMMAND_EX macro", "BEGIN_PARAM_MAP macro", "END_PARAM_MAP macro", "SET_PARAM_TYPE macro"]
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Macros and Global Functions for OLE DB Consumer Templates
The OLE DB Consumer Templates include the following macros and global functions:  
  
## Global Functions  
  
|||  
|-|-|  
|[AtlTraceErrorRecords](#atltraceerrorrecords)|Dumps OLE DB Error Record information to the dump device if an error is returned.|  
  
## Accessor Map Macros  
  
|||  
|-|-|  
|[BEGIN_ACCESSOR](#begin_accessor)|Marks the beginning of an accessor entry.|  
|[BEGIN_ACCESSOR_MAP](#begin_accessor_map)|Marks the beginning of the accessor map entries.|  
|[END_ACCESSOR](#end_accessor)|Marks the end of an accessor entry.|  
|[END_ACCESSOR_MAP](#end_accessor_map)|Marks the end of the accessor map entries.|  
  
## Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_COLUMN_MAP](#begin_column_map)|Marks the beginning of the column map entries in the user record class.|  
|[BLOB_ENTRY](#blob_entry)|Used to bind a binary large object (BLOB).|  
|[BLOB_ENTRY_LENGTH](#blob_entry_length)|Reports the length of the BLOB data column.|  
|[BLOB_ENTRY_LENGTH_STATUS](#blob_entry_length_status)|Reports the length and status of the BLOB data column.|  
|[BLOB_ENTRY_STATUS](#blob_entry_status)|Reports the status of the BLOB data column.|  
|[BLOB_NAME](#blob_name)|Used to bind a binary large object by column name.|  
|[BLOB_NAME_LENGTH](#blob_name_length)|Reports the length of the BLOB data column.|  
|[BLOB_NAME_LENGTH_STATUS](#blob_name_length_status)|Reports the length and status of the BLOB data column.|  
|[BLOB_NAME_STATUS](#blob_name_status)|Reports the status of the BLOB data column.|  
|[BOOKMARK_ENTRY](#bookmark_entry)|Represents a bookmark entry on the rowset. A bookmark entry is a special kind of column entry.|  
|[COLUMN_ENTRY](#column_entry)|Represents a binding to a specific column in the database.|  
|[COLUMN_ENTRY_EX](#column_entry_ex)|Represents a binding to the specific column in the database. Supports *type*, *length*, *precision*, *scale*, and *status* parameters.|  
|[COLUMN_ENTRY_LENGTH](#column_entry_length)|Represents a binding to the specific column in the database. Supports the *length* variable.|  
|[COLUMN_ENTRY_LENGTH_STATUS](#column_entry_length_status)|Represents a binding to the specific column in the database. Supports *status* and *length* parameters.|  
|[COLUMN_ENTRY_PS](#column_entry_ps)|Represents a binding to the specific column in the database. Supports *precision* and *scale* parameters.|  
|[COLUMN_ENTRY_PS_LENGTH](#column_entry_ps_length)|Represents a binding to the specific column in the database. Supports the *length* variable, *precision* and *scale* parameters.|  
|[COLUMN_ENTRY_PS_LENGTH_STATUS](#column_entry_ps_length_status)|Represents a binding to the specific column in the database. Supports *status* and *length* variables, *precision* and *scale* parameters.|  
|[COLUMN_ENTRY_PS_STATUS](#column_entry_ps_status)|Represents a binding to the specific column in the database. Supports the *status* variable, *precision* and *scale* parameters.|  
|[COLUMN_ENTRY_STATUS](#column_entry_status)|Represents a binding to the specific column in the database. Supports the *status* variable.|  
|[COLUMN_ENTRY_TYPE](#column_entry_type)|Represents a binding to a specific column in the database. Supports *type* parameter.|  
|[COLUMN_ENTRY_TYPE_SIZE](#column_entry_type_size)|Represents a binding to the specific column in the database. Supports *type* and *size* parameters.|  
|[COLUMN_NAME](#column_name)|Represents a binding to a specific column in the database by name.|  
|[COLUMN_NAME_EX](#column_name_ex)|Represents a binding to a specific column in the database by name. Supports specification of data type, size, precision, scale, column length, and column status.|  
|[COLUMN_NAME_LENGTH](#column_name_length)|Represents a binding to a specific column in the database by name. Supports specification of column length.|  
|[COLUMN_NAME_LENGTH_STATUS](#column_name_length_status)|Represents a binding to a specific column in the database by name. Supports specification of column length and status.|  
|[COLUMN_NAME_PS](#column_name_ps)|Represents a binding to a specific column in the database by name. Supports specification of precision and scale.|  
|[COLUMN_NAME_PS_LENGTH](#column_name_ps_length)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column length.|  
|[COLUMN_NAME_PS_LENGTH_STATUS](#column_name_ps_length_status)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, column length, and column status.|  
|[COLUMN_NAME_PS_STATUS](#column_name_ps_status)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column status.|  
|[COLUMN_NAME_STATUS](#column_name_status)|Represents a binding to a specific column in the database by name. Supports specification of column status.|  
|[COLUMN_NAME_TYPE](#column_name_type)|Represents a binding to a specific column in the database by name. Supports specification of data type.|  
|[COLUMN_NAME_TYPE_PS](#column_name_type_ps)|Represents a binding to a specific column in the database by name. Supports specification of data type, precision, and scale.|  
|[COLUMN_NAME_TYPE_SIZE](#column_name_type_size)|Represents a binding to a specific column in the database by name. Supports specification of data type and size.|  
|[COLUMN_NAME_TYPE_STATUS](#column_name_type_status)|Represents a binding to a specific column in the database by name. Supports specification of data type and column status.|  
|[END_COLUMN_MAP](#end_column_map)|Marks the end of the column map entries.|  
  
## Command Macros  
  
|||  
|-|-|  
|[DEFINE_COMMAND](#define_command)|Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Accepts only string types matching the specified application type (ANSI or Unicode). It is recommended that you use [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) instead of DEFINE_COMMAND.|  
|[DEFINE_COMMAND_EX](#define_command_ex)|Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Supports ANSI and Unicode applications.|  
  
## Parameter Map Macros  
  
|||  
|-|-|  
|[BEGIN_PARAM_MAP](#begin_param_map)|Marks the beginning of the parameter map entries in the user record class.|  
|[END_PARAM_MAP](#end_param_map)|Marks the end of the parameter map entries.|  
|[SET_PARAM_TYPE](#set_param_type)|Specifies COLUMN_ENTRY macros that follow the SET_PARAM_TYPE macro as input, output, or input/output.|  

### <a name="atltraceerrorrecords"></a> AtlTraceErrorRecords
Dumps OLE DB Error Record information to the dump device if an error is returned.  
  
#### Syntax  
  
```cpp
inline void AtlTraceErrorRecords(HRESULT hrErr = S_OK);  
```  
  
#### Parameters  
 *hErr*  
 [in] An HRESULT returned by an OLE DB Consumer Template member function.  
  
#### Remarks  
 If *hErr* is not S_OK, `AtlTraceErrorRecords` dumps OLE DB Error Record information to the dump device (the **Debug** tab of the Output window or a file). The Error Record information, which is obtained from the provider, includes row number, source, description, help file, context, and GUID for each error record entry. `AtlTraceErrorRecords` dumps this information only in debug builds. In release builds, it is an empty stub that is optimized out.  
  
#### See Also    
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)

### <a name="begin_accessor"></a> BEGIN_ACCESSOR
Marks the beginning of an accessor entry.  
  
#### Syntax  
  
```cpp  
BEGIN_ACCESSOR(num, bAuto)  
```  
  
#### Parameters  
 *num*  
 [in] The zero-offset number for the accessor in this accessor map.  
  
 *bAuto*  
 [in] Specifies if this accessor is an auto accessor or a manual accessor. If **true**, the accessor is auto; if **false**, the accessor is manual. An auto accessor means data is fetched for you on move operations.  
  
#### Remarks  
 In the case of multiple accessors on a rowset, you need to specify BEGIN_ACCESSOR_MAP and use the BEGIN_ACCESSOR macro for each individual accessor. The BEGIN_ACCESSOR macro is completed with the END_ACCESSOR macro. The BEGIN_ACCESSOR_MAP macro is completed with the END_ACCESSOR_MAP macro.  
  
#### Example  
 See [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  

### <a name="begin_accessor_map"></a> BEGIN_ACCESSOR_MAP
Marks the beginning of the accessor map entries.  
  
#### Syntax  
  
```cpp  
BEGIN_ACCESSOR_MAP(x, num)  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class.  
  
 *num*  
 [in] The number of accessors in this accessor map.  
  
#### Remarks  
 In the case of multiple accessors on a rowset, you need to specify BEGIN_ACCESSOR_MAP at the beginning and use the BEGIN_ACCESSOR macro for each individual accessor. The BEGIN_ACCESSOR macro is completed with the END_ACCESSOR macro. The accessor map is completed with the END_ACCESSOR_MAP macro.  
  
 If you have only one accessor in the user record, use the macro [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md).  
  
#### Example  

 ```cpp  
class CArtistsAccessor
{
public:
// Data Elements
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];
   short m_nAge;

// Output binding map
BEGIN_ACCESSOR_MAP(CArtistsAccessor, 2)
   BEGIN_ACCESSOR(0, true)
      COLUMN_ENTRY(1, m_szFirstName)
      COLUMN_ENTRY(2, m_szLastName)
   END_ACCESSOR()
   BEGIN_ACCESSOR(1, false) // Not an auto accessor
      COLUMN_ENTRY(3, m_nAge)
   END_ACCESSOR()
END_ACCESSOR_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsAccessor, L" \
   SELECT \
      FirstName, \
      LastName, \
      Age \
      FROM Artists")
};
 ```

### <a name="end_accessor"></a> END_ACCESSOR
Marks the end of an accessor entry.  
  
#### Syntax  
  
```cpp
END_ACCESSOR()  
```  
  
#### Remarks  
 For multiple accessors on a rowset, you need to specify BEGIN_ACCESSOR_MAP and use the BEGIN_ACCESSOR macro for each individual accessor. The BEGIN_ACCESSOR macro is completed with the END_ACCESSOR macro. The BEGIN_ACCESSOR_MAP macro is completed with the END_ACCESSOR_MAP macro.  
  
#### Example  
 See [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  

### <a name="end_accessor_map"></a> END_ACCESSOR_MAP
Marks the end of the accessor map entries.  
  
#### Syntax  
  
```cpp
END_ACCESSOR_MAP()  
```  
  
#### Remarks  
 For multiple accessors on a rowset, you need to specify BEGIN_ACCESSOR_MAP and use the BEGIN_ACCESSOR macro for each individual accessor. The BEGIN_ACCESSOR macro is completed with the END_ACCESSOR macro. The BEGIN_ACCESSOR_MAP macro is completed with the END_ACCESSOR_MAP macro.  
  
#### Example  
 See [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  

### <a name="begin_column_map"></a> BEGIN_COLUMN_MAP
Marks the beginning of a column map entry.  
  
#### Syntax  
  
```cpp  
BEGIN_COLUMN_MAP(x)  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class derived from `CAccessor`.  
  
#### Remarks  
 This macro is used in the case of a single accessor on a rowset. If you have multiple accessors on a rowset, use [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
 The BEGIN_COLUMN_MAP macro is completed with the END_COLUMN_MAP macro. This macro is used when there is only one accessor required in the user record.  
  
 Columns correspond to fields in the rowset you want to bind.  
  
#### Example  
 Here is a sample column and parameter map:  
  
 <!--[!CODE [NVC_OLEDB_Consumer#16](../codesnippet/vs_snippets_cpp/nvc_oledb_consumer#16)]  -->

### <a name="blob_entry"></a> BLOB_ENTRY
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))).  
  
#### Syntax  
  
```cpp
BLOB_ENTRY(nOrdinal, IID, flags, data)  
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  

### <a name="blob_entry_length"></a> BLOB_ENTRY_LENGTH
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro also gets the length in bytes of the BLOB column.  
  
#### Syntax  
  
```cpp
BLOB_ENTRY_LENGTH(nOrdinal, IID, flags, data, length)  
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [out] The (actual) length in bytes of the BLOB column.  
  
#### Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  

### <a name="blob_entry_length_status"></a> BLOB_ENTRY_LENGTH_STATUS
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro also gets the length and status of the BLOB column.  
  
#### Syntax  
  
```cpp
BLOB_ENTRY_LENGTH_STATUS(  
    nOrdinal,  
    IID,  
    flags,  
    data,
    length,
    status )  
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [out] The (actual) length in bytes of the BLOB column.  
  
 *status*  
 [out] The status of the BLOB data column.  
  
#### Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  

### <a name="blob_entry_status"></a> BLOB_ENTRY_STATUS
Used with BEGIN_COLUMN_MAP or BEGIN_ACCESSOR_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro also gets the status of the BLOB column.  
  
#### Syntax  
  
```cpp
BLOB_ENTRY_STATUS(nOrdinal, IID, flags, data, status)   
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [out] The status of the BLOB field.  
  
#### Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  

### <a name="blob_name"></a> BLOB_NAME
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro takes a column name instead of a column number.  
  
#### Syntax  
  
```cpp
BLOB_NAME(pszName, IID, flags, data )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  

### <a name="blob_name_length"></a> BLOB_NAME_LENGTH
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_NAME](../../data/oledb/blob-name.md), except that this macro also gets the length in bytes of the BLOB data column.  
  
#### Syntax  
  
```cpp
BLOB_NAME_LENGTH(pszName, IID, flags, data, length )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [out] The (actual) length in bytes of the BLOB column.  

### <a name="blob_name_length_status"></a> BLOB_NAME_LENGTH_STATUS
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_NAME](../../data/oledb/blob-name.md), except that this macro also gets the length and status of the BLOB data column.  
  
#### Syntax  
  
```cpp
BLOB_NAME_LENGTH_STATUS(pszName, IID, flags, data, length, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [out] The (actual) length in bytes of the BLOB column.  
  
 *status*  
 [out] The status of the BLOB field.  

### <a name="blob_name_status"></a> BLOB_NAME_STATUS
Used with BEGIN_COLUMN_MAP and END_COLUMN_MAP to bind a binary large object ([BLOB](/previous-versions/windows/desktop/ms711511\(v=vs.85\))). Similar to [BLOB_NAME](../../data/oledb/blob-name.md), except that this macro also gets the status of the BLOB data column.  
  
#### Syntax  
  
```cpp
BLOB_NAME_STATUS(pszName, IID, flags, data, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *IID*  
 [in] Interface GUID, such as `IDD_ISequentialStream`, used to retrieve the BLOB.  
  
 *flags*  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, `STGM_READ`).  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [out] The status of the BLOB field.  
  
### <a name="bookmark_entry"></a> BOOKMARK_ENTRY
Binds the bookmark column.  
  
#### Syntax  
  
```cpp
BOOKMARK_ENTRY(variable)  
```  
  
#### Parameters  
 *variable*  
 [in] The variable to be bound to the bookmark column.  
  
#### Example  

```cpp  
class CArtistsBookmark
{
public:
// Data Elements
   CBookmark<4> m_bookmark;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

// Output binding map
BEGIN_COLUMN_MAP(CArtistsBookmark)
   BOOKMARK_ENTRY(m_bookmark)
   COLUMN_ENTRY(1, m_nAge)
   COLUMN_ENTRY(2, m_szFirstName)
   COLUMN_ENTRY(3, m_szLastName)
END_COLUMN_MAP()

   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_BOOKMARKS, true);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsBookmark, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists")
};
```
  
#### See Also  
 [CBookmark Class](../../data/oledb/cbookmark-class.md)   
 [DBPROP_BOOKMARKS](/previous-versions/windows/desktop/ms709728\(v=vs.85\))

### <a name="column_entry"></a> COLUMN_ENTRY
Represents a binding on the rowset to the specific column in the rowset.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY(nOrdinal, data)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 The COLUMN_ENTRY macro is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  
  
#### Example  
 See the examples in the macro topics, [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  

### <a name="column_entry_ex"></a> COLUMN_ENTRY_EX
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_EX(nOrdinal, wType, nLength, nPrecision, nScale, data, length, status)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *wType*  
 [in] The data type.  
  
 *nLength*  
 [in] The data size in bytes.  
  
 *nPrecision*  
 [in] The maximum precision to use when getting data and *wType* is `DBTYPE_NUMERIC`. Otherwise, this parameter is ignored.  
  
 *nScale*  
 [in] The scale to use when getting data and *wType* is `DBTYPE_NUMERIC` or `DBTYPE_DECIMAL`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 The COLUMN_ENTRY_EX macro is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  
  
#### Example  
 See [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  

### <a name="column_entry_length"></a> COLUMN_ENTRY_LENGTH
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_LENGTH(nOrdinal, data, length)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number, starting with one. Bookmark corresponds to column zero.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
#### Remarks  
 This macro supports the *length* variable. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  
  
### <a name="column_entry_length_status"></a> COLUMN_ENTRY_LENGTH_STATUS
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_LENGTH_STATUS(nOrdinal, data, length, status)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 Use this macro when you want to support length and status variables. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_entry_ps"></a> COLUMN_ENTRY_PS
Represents a binding on the rowset to the specific column in the rowset.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_PS(nOrdinal, nPrecision, nScale, data)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 Allows you to specify the precision and scale of the column you want to bind. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_entry_ps_length"></a> COLUMN_ENTRY_PS_LENGTH
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_PS_LENGTH(nOrdinal, nPrecision, nScale, data, length)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number, starting with one. Bookmark corresponds to column zero.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
#### Remarks  
 Allows you to specify the precision and scale of the column you want to bind. This macro supports the *length* variable. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_entry_ps_length_status"></a> COLUMN_ENTRY_PS_LENGTH_STATUS
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_PS_LENGTH_STATUS(nOrdinal, nPrecision, nScale, data, length, status)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 Allows you to specify the precision and scale of the column you want to bind. Use this macro when you want to support length and status variables. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_entry_ps_status"></a> COLUMN_ENTRY_PS_STATUS
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_PS_STATUS(nOrdinal, nPrecision, nScale, data, status)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 Allows you to specify the precision and scale of the column you want to bind. This macro supports the *status* variable. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  
  
### <a name="column_entry_status"></a> COLUMN_ENTRY_STATUS
Represents a binding on the rowset to the specific column in the database.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_STATUS(nOrdinal, data, status)  
```  
  
#### Parameters  
 See [DBBINDING](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*.  
  
 *nOrdinal*  
 [in] The column number.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 This macro supports the *status* variable. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_entry_type"></a> COLUMN_ENTRY_TYPE
Represents a binding to the specific column in the database. Supports *type* parameter.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_TYPE (nOrdinal, wType, data)  
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *wType*  
 [in] Data type of column entry.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 This macro is a specialized variant of the [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro that provides a means of specifying data type.  

### <a name="column_entry_type_size"></a> COLUMN_ENTRY_TYPE_SIZE
Represents a binding to the specific column in the database. Supports *type* and *size* parameters.  
  
#### Syntax  
  
```cpp
COLUMN_ENTRY_TYPE_SIZE(nOrdinal, wType, nLength, data)  
```  
  
#### Parameters  
 *nOrdinal*  
 [in] The column number.  
  
 *wType*  
 [in] Data type of column entry.  
  
 *nLength*  
 [in] Size of column entry in bytes.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 This macro is a specialized variant of the [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro that provides a means of specifying data size and type.  

### <a name="column_name"></a> COLUMN_NAME
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_ENTRY](../../data/oledb/column-entry.md), except that this macro takes the column name instead of the column number.  
  
#### Syntax  
  
```cpp
COLUMN_NAME(pszName, data)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 The COLUMN_NAME_* macros are used in the same places as [COLUMN_ENTRY](../../data/oledb/column-entry.md):  
  
-   Between the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) and [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) and [END_ACCESSOR](../../data/oledb/end-accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) and [END_PARAM_MAP](../../data/oledb/end-param-map.md) macros.  

### <a name="column_name_ex"></a> COLUMN_NAME_EX
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type, size, precision, scale, column length, and column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_EX(pszName, wType, nLength, nPrecision, nScale, data, length, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *wType*  
 [in] The data type.  
  
 *nLength*  
 [in] The data size in bytes.  
  
 *nPrecision*  
 [in] The maximum precision to use when getting data and *wType* is `DBTYPE_NUMERIC`. Otherwise, this parameter is ignored.  
  
 *nScale*  
 [in] The scale to use when getting data and *wType* is `DBTYPE_NUMERIC` or `DBTYPE_DECIMAL`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_length"></a> COLUMN_NAME_LENGTH
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes column length.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_LENGTH(pszName, data, length)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_length_status"></a> COLUMN_NAME_LENGTH_STATUS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes column length and column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_LENGTH_STATUS(pszName, data, length, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_ps"></a> COLUMN_NAME_PS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes precision and scale.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_PS(pszName, nPrecision, nScale, data )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_ps_length"></a> COLUMN_NAME_PS_LENGTH
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes precision, scale, and column length.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_PS_LENGTH(pszName, nPrecision, nScale, data, length )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_ps_length_status"></a> COLUMN_NAME_PS_LENGTH_STATUS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes precision, scale, column length, and column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_PS_LENGTH_STATUS(pszName, nPrecision, nScale, data, length, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_ps_status"></a> COLUMN_NAME_PS_STATUS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes precision, scale, and column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_PS_STATUS(pszName, nPrecision, nScale, data, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *nPrecision*  
 [in] The maximum precision of the column you want to bind.  
  
 *nScale*  
 [in] The scale of the column you want to bind.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_status"></a> COLUMN_NAME_STATUS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_STATUS(pszName, data, status )  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_type"></a> COLUMN_NAME_TYPE
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_TYPE(pszName, wType, data)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *wType*  
 [in] The data type.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_type_ps"></a> COLUMN_NAME_TYPE_PS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type, precision, and scale.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_TYPE_PS(pszName, wType, nPrecision, nScale, data)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *wType*  
 [in] The data type.  
  
 *nPrecision*  
 [in] The maximum precision to use when getting data and *wType* is `DBTYPE_NUMERIC`. Otherwise, this parameter is ignored.  
  
 *nScale*  
 [in] The scale to use when getting data and *wType* is `DBTYPE_NUMERIC` or `DBTYPE_DECIMAL`.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_type_size"></a> COLUMN_NAME_TYPE_SIZE
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type and size.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_TYPE_SIZE(pszName, wType, nLength, data)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *wType*  
 [in] The data type.  
  
 *nLength*  
 [in] The data size in bytes.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="column_name_type_status"></a> COLUMN_NAME_TYPE_STATUS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type and column status.  
  
#### Syntax  
  
```cpp
COLUMN_NAME_TYPE_STATUS(pszName, wType, status, data)  
```  
  
#### Parameters  
 *pszName*  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *wType*  
 [in] The data type.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
 *data*  
 [in] The corresponding data member in the user record.  
  
#### Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the COLUMN_NAME_* macros are used.  

### <a name="end_column_map"></a> END_COLUMN_MAP
Marks the end of the column map entries.  
  
#### Syntax  
  
```cpp
END_COLUMN_MAP()  
```  
  
#### Remarks  
 It is used with a single accessor on a rowset. The BEGIN_COLUMN_MAP macro is completed with the END_COLUMN_MAP macro.  
  
#### Example  
 See [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md).  

### <a name="define_command"></a> DEFINE_COMMAND
Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Accepts only string types matching the specified application type (ANSI or Unicode).  
  
> [!NOTE]
>  It is recommended that you use [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) instead of DEFINE_COMMAND.  
  
#### Syntax  
  
```cpp
DEFINE_COMMAND(x, szCommand)  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record (command) class.  
  
 *szCommand*  
 [in] The command string that will be used to create the rowset when using [CCommand](../../data/oledb/ccommand-class.md).  
  
#### Remarks  
 The command string that you specify will be used as the default if you do not specify command text in the [CCommand::Open](../../data/oledb/ccommand-open.md) method.  
  
 This macro accepts ANSI strings if you build your application as ANSI, or Unicode strings if you build your application as Unicode. It is recommended that you use [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) instead of DEFINE_COMMAND, because the former accepts Unicode strings, regardless of the ANSI or Unicode application type.  
  
#### Example  
 See [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  

### <a name="define_command_ex"></a> DEFINE_COMMAND_EX
Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Supports Unicode and ANSI applications.  
  
#### Syntax  
  
```cpp
DEFINE_COMMAND_EX(x, wszCommand)  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record (command) class.  
  
 *wszCommand*  
 [in] The command string that will be used to create the rowset when using [CCommand](../../data/oledb/ccommand-class.md).  
  
#### Remarks  
 The command string that you specify will be used as the default if you do not specify command text in the [CCommand::Open](../../data/oledb/ccommand-open.md) method.  
  
 This macro accepts Unicode strings, regardless of the application type. This macro is preferred over [DEFINE_COMMAND](../../data/oledb/define-command.md) because it supports Unicode as well as ANSI applications.  
  
#### Example  
 See [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  

### <a name="begin_param_map"></a> BEGIN_PARAM_MAP
Marks the beginning of the parameter map entries.  
  
#### Syntax  
  
```cpp
BEGIN_PARAM_MAP(x)  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class.  
  
#### Remarks  
 Parameters are used by [commands](/previous-versions/windows/desktop/ms724608\(v=vs.85\)).  
  
#### Example  
 See the example for the [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) macro.  

### <a name="end_param_map"></a> END_PARAM_MAP
Marks the end of the parameter map entries.  
  
#### Syntax  
  
```cpp
END_PARAM_MAP()  
```  
  
#### Example  
 See the example for the [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) macro.  
  
### <a name="set_param_type"></a> SET_PARAM_TYPE
Specifies COLUMN_ENTRY macros that follow the SET_PARAM_TYPE macro input, output, or input/output.  
  
#### Syntax  
  
```cpp
SET_PARAM_TYPE(type)  
```  
  
#### Parameters  
 *type*  
 [in] The type to set for the parameter.  
  
#### Remarks  
 Providers support only parameter input/output types that are supported by the underlying data source. The type is a combination of one or more `DBPARAMIO` values (see [DBBINDING Structures](/previous-versions/windows/desktop/ms716845\(v=vs.85\)) in the *OLE DB Programmer's Reference*):  
  
-   `DBPARAMIO_NOTPARAM` The accessor has no parameters. Typically, you set `eParamIO` to this value in row accessors to remind the user that parameters are ignored.  
  
-   `DBPARAMIO_INPUT` An input parameter.  
  
-   `DBPARAMIO_OUTPUT` An output parameter.  
  
-   `DBPARAMIO_INPUT | DBPARAMIO_OUTPUT` The parameter is both an input and an output parameter.  
  
#### Example  
```cpp  
class CArtistsProperty
{
public:
   short m_nReturn;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

BEGIN_PARAM_MAP(CArtistsProperty)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_nReturn)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_nAge)
END_PARAM_MAP()

BEGIN_COLUMN_MAP(CArtistsProperty)
   COLUMN_ENTRY(1, m_szFirstName)
   COLUMN_ENTRY(2, m_szLastName)
END_COLUMN_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsProperty, L" \
      { ? = SELECT Age FROM Artists WHERE Age < ? }")
};
``` 

## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)    
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)    