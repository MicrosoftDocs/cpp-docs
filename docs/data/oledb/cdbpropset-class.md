---
title: "CDBPropSet Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDBPropSet", "ATL.CDBPropSet", "ATL::CDBPropSet", "CDBPropSet::AddProperty", "CDBPropSet.AddProperty", "AddProperty", "ATL::CDBPropSet::AddProperty", "ATL.CDBPropSet.AddProperty", "CDBPropSet.CDBPropSet", "CDBPropSet::CDBPropSet", "ATL::CDBPropSet::CDBPropSet", "ATL.CDBPropSet.CDBPropSet", "CDBPropSet.operator=", "ATL::CDBPropSet::operator=", "ATL.CDBPropSet.operator=", "CDBPropSet::operator=", "ATL.CDBPropSet.SetGUID", "CDBPropSet.SetGUID", "ATL::CDBPropSet::SetGUID", "SetGUID", "CDBPropSet::SetGUID"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDBPropSet class", "AddProperty method", "CDBPropSet class, constructor", "operator =, property sets", "= operator, with OLE DB templates", 
      "operator=, property sets", "SetGUID method", "AddProperty method"]
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDBPropSet Class
Inherits from the `DBPROPSET` structure and adds a constructor that initializes key fields as well as the `AddProperty` access method.  
  
## Syntax

```cpp
class CDBPropSet : public tagDBPROPSET  
```  

## Requirements  
 **Header:** atldbcli.h  

## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddProperty](#addproperty)|Adds a property to the property set.|  
|[CDBPropSet](#cdbpropset)|Constructor.|  
|[SetGUID](#setguid)|Sets the `guidPropertySet` field of the `DBPROPSET` structure.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#op_equal)|Assigns the contents of one property set to another.|  
  
## Remarks  
 OLE DB providers and consumers use `DBPROPSET` structures to pass arrays of `DBPROP` structures. Each `DBPROP` structure represents a single property that can be set.  

## <a name="addproperty"></a> CDBPropSet::AddProperty
Adds a property to the property set.  
  
### Syntax  
  
```cpp
bool AddProperty(DWORD dwPropertyID,   
   constVARIANT& var,   
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   LPCSTR szValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   LPCWSTR szValue,DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   bool bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   BYTE bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   short nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   long nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   float fltValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   double dblValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   CY cyValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();  
```  
  
#### Parameters  
 *dwPropertyID*  
 [in] The ID of the property to be added. Used to initialize the `dwPropertyID` of the `DBPROP` structure added to the property set.  
  
 *var*  
 [in] A variant used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *szValue*  
 [in] A string used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *bValue*  
 [in] A `BYTE` or boolean value used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *nValue*  
 [in] An integer value used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *fltValue*  
 [in] A floating-point value used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *dblValue*  
 [in] A double-precision floating-point value used to initialize the property value for the `DBPROP` structure added to the property set.  
  
 *cyValue*  
 [in] A CY currency value used to initialize the property value for the `DBPROP` structure added to the property set.  
  
### Return Value  
 **true** if the property was successfully added. Otherwise, **false**. 

## <a name="cdbpropset"></a> CDBPropSet::CDBPropSet
The constructor. Initializes the `rgProperties`, `cProperties`, and `guidPropertySet` fields of the [DBPROPSET](/previous-versions/windows/desktop/ms714367\(v=vs.85\)) structure.  
  
### Syntax  
  
```cpp
CDBPropSet(const GUID& guid);  

CDBPropSet(const CDBPropSet& propset);  

CDBPropSet();  
```  
  
#### Parameters  
 *guid*  
 [in] A GUID used to initialize the `guidPropertySet` field.  
  
 *propset*  
 [in] Another `CDBPropSet` object for copy construction.  

## <a name="setguid"></a> CDBPropSet::SetGUID
Sets the `guidPropertySet` field in the `DBPROPSET` structure.  
  
### Syntax  
  
```cpp
void SetGUID(const GUID& guid) throw();  
```  
  
#### Parameters  
 *guid*  
 [in] A GUID used to set the `guidPropertySet` field of the [DBPROPSET](/previous-versions/windows/desktop/ms714367\(v=vs.85\)) structure.  
  
### Remarks  
 This field can be set by the [constructor](../../data/oledb/cdbpropset-cdbpropset.md) as well.  

## <a name="op_equal"></a> CDBPropSet::operator =
Assigns the contents of one property set to another property set.  
  
### Syntax  
  
```cpp
CDBPropSet& operator =(CDBPropSet& propset) throw();  
```  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CDBPropIDSet Class](../../data/oledb/cdbpropidset-class.md)   
 [DBPROPSET Structure](/previous-versions/windows/desktop/ms714367\(v=vs.85\))   
 [DBPROP Structure](/previous-versions/windows/desktop/ms717970\(v=vs.85\))