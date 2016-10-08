---
title: "User Records"
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
ms.assetid: 2de9e5eb-53ce-42b1-80fa-57d46600a80c
caps.latest.revision: 7
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
# User Records
To use a static accessor (that is, an accessor derived from **CAccessor)**, your consumer must have a user record. The user record is a C++ class that contains data elements to handle input or output. The ATL OLE DB Consumer Wizard generates a user record for your consumer. You can add methods to the user record for optional tasks like handling commands.  
  
 The following code shows a sample record that handles commands. In the user record, `BEGIN_COLUMN_MAP` represents a data rowset passed to the consumer from a provider. `BEGIN_PARAM_MAP` represents a set of command parameters. This example uses a [CCommand](../VS_visualcpp/CCommand-Class.md) class to handle the command parameters. The data members in the map entries represent offsets into one contiguous block of memory for each instance of the class. The `COLUMN_ENTRY` macros correspond to the `PROVIDER_COLUMN_ENTRY` macros on the provider side.  
  
 For more information about the **COLUMN_MAP** and **PARAM_MAP** macros, see [Macros for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md).  
  
```  
class CArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_COLUMN_MAP(CArtists)  
   COLUMN_ENTRY(1, m_szFirstName)  
   COLUMN_ENTRY(2, m_szLastName)  
   COLUMN_ENTRY(3, m_nAge)  
END_COLUMN_MAP()  
  
// Parameter binding map  
BEGIN_PARAM_MAP(CArtists)  
   COLUMN_ENTRY(1, m_nAge)  
END_PARAM_MAP()  
};  
```  
  
## Wizard-Generated User Records  
 If you use the ATL OLE DB Consumer Wizard to generate a consumer, you have the choice of using OLE DB Templates or OLE DB Attributes. The generated code is different in each case. For more information about this code, see [Consumer Wizard-Generated Classes](../VS_visualcpp/Consumer-Wizard-Generated-Classes.md).  
  
## User Record Support for Multiple Accessors  
 For a detailed discussion of the scenarios in which you need to use multiple accessors, see [Using Multiple Accessors on a Rowset](../VS_visualcpp/Using-Multiple-Accessors-on-a-Rowset.md).  
  
 The following example shows the user record modified to support multiple accessors on the rowset. Instead of `BEGIN_COLUMN_MAP` and `END_COLUMN_MAP`, it uses [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md) and [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md) for each accessor. The `BEGIN_ACCESSOR` macro specifies the accessor number (offset from zero) and whether the accessor is an autoaccessor. Autoaccessors call `GetData` to retrieve data automatically on a call to [MoveNext](../VS_visualcpp/CRowset--MoveNext.md). Nonautomatic accessors require you to explicitly retrieve the data. Use a nonautomatic accessor if you are binding to a large data field (like a bitmap image) that you might not want to retrieve for every record.  
  
```  
class CMultiArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_ACCESSOR_MAP(CMultiArtists, 2)  
   BEGIN_ACCESSOR(0, true)    // true specifies an auto accessor  
    COLUMN_ENTRY(1, m_szFirstName)  
    COLUMN_ENTRY(2, m_szLastName)  
   END_ACCESSOR()  
   BEGIN_ACCESSOR(1, false)   // false specifies a manual accessor  
    COLUMN_ENTRY(3, m_nAge)  
   END_ACCESSOR()  
END_ACCESSOR_MAP()  
};  
```  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)