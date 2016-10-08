---
title: "Schema Rowset Classes and Typedef Classes"
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
ms.assetid: 4bd881b3-26ca-4bdb-9226-d67560864f29
caps.latest.revision: 6
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
# Schema Rowset Classes and Typedef Classes
A schema is a collection of database objects that are owned, or have been created by, a particular user. A catalog can contain one or more schemas, but must always contain a schema called INFORMATION_SCHEMA, which contains the views and domains of the information schema. Schema information in OLE DB is retrieved using predefined schema rowsets, and includes types, tables, columns, indexes, views, assertions and constraints, statistics, character sets, collations, and domains.  
  
 Schema rowsets are predefined rowsets representing metadata. Schema rowsets are generally used in dynamic programming, where the database structure is not known at compile time. You can use these schema rowsets to obtain information about a database at run time.  
  
 Use the typedef classes to instantiate the schema rowsets. The corresponding typedef and schema rowset classes are listed below. You must call [CRestrictions::Open](../VS_visualcpp/CRestrictions--Open.md) after you have created an instance of the schema rowset. This method returns a result set based on the restrictions you specify. See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) for information on restriction columns associated with each schema rowset.  
  
 The following table displays each OLE DB Schema Rowset and its corresponding OLE DB Templates typedef class and info class.  
  
|OLE DB Schema Rowset|Typedef class|Info class|  
|--------------------------|-------------------|----------------|  
|[ASSERTIONS](https://msdn.microsoft.com/en-us/library/ms719776.aspx)|[CAssertions](../VS_visualcpp/CAssertions--CAssertionInfo.md)|[CAssertionInfo](../VS_visualcpp/CAssertions--CAssertionInfo.md)|  
|[CATALOGS](https://msdn.microsoft.com/en-us/library/ms721241.aspx)|[CCatalogs](../VS_visualcpp/CCatalogs--CCatalogInfo.md)|[CCatalogInfo](../VS_visualcpp/CCatalogs--CCatalogInfo.md)|  
|[CHARACTER_SETS](https://msdn.microsoft.com/en-us/library/ms722638.aspx)|[CCharacterSets](../VS_visualcpp/CCharacterSets--CCharacterSetInfo.md)|[CCharacterSetInfo](../VS_visualcpp/CCharacterSets--CCharacterSetInfo.md)|  
|[COLLATIONS](https://msdn.microsoft.com/en-us/library/ms715783.aspx)|[CCollations](../VS_visualcpp/CCollations--CCollationInfo.md)|[CCollationInfo](../VS_visualcpp/CCollations--CCollationInfo.md)|  
|[COLUMN_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms715800.aspx)|[CColumnPrivileges](../VS_visualcpp/CColumnPrivileges--CColumnPrivilegeInfo.md)|[CColumnPrivilegeInfo](../VS_visualcpp/CColumnPrivileges--CColumnPrivilegeInfo.md)|  
|[COLUMNS](https://msdn.microsoft.com/en-us/library/ms723052.aspx)|[CColumns](../VS_visualcpp/CColumns--CColumnsInfo.md)|[CColumnsInfo](../VS_visualcpp/CColumns--CColumnsInfo.md)|  
|[CONSTRAINT_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx)|[CConstraintColumnUsage](../VS_visualcpp/CConstraintColumnUsage--CConstraintColumnUsageInfo.md)|[CConstraintColumnUsageInfo](../VS_visualcpp/CConstraintColumnUsage--CConstraintColumnUsageInfo.md)|  
|[CONSTRAINT_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms713710.aspx)|[CConstraintTableUsage](../VS_visualcpp/CConstraintTableUsage--CConstraintTableUsageInfo.md)|[CConstraintTableUsageInfo](../VS_visualcpp/CConstraintTableUsage--CConstraintTableUsageInfo.md)|  
|[CHECK_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms712845.aspx)|[CCheckConstraints](../VS_visualcpp/CCheckConstraints--CCheckConstraintInfo.md)|[CCheckConstraintInfo](../VS_visualcpp/CCheckConstraints--CCheckConstraintInfo.md)|  
|[COLUMN_DOMAIN_USAGE](https://msdn.microsoft.com/en-us/library/ms711240.aspx)|[CColumnDomainUsage](../VS_visualcpp/CColumnDomainUsage--CColumnDomainUsageInfo.md)|[CColumnDomainUsageInfo](../VS_visualcpp/CColumnDomainUsage--CColumnDomainUsageInfo.md)|  
|[FOREIGN_KEYS](https://msdn.microsoft.com/en-us/library/ms711276.aspx)|[CForeignKeys](../VS_visualcpp/CForeignKeys--CForeignKeysInfo.md)|[CForeignKeysInfo](../VS_visualcpp/CForeignKeys--CForeignKeysInfo.md)|  
|[INDEXES](https://msdn.microsoft.com/en-us/library/ms709712.aspx)|[CIndexes](../VS_visualcpp/CIndexes--CIndexInfo.md)|[CIndexInfo](../VS_visualcpp/CIndexes--CIndexInfo.md)|  
|[KEY_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms712990.aspx)|[CKeyColumnUsage](../VS_visualcpp/CKeyColumns--CKeyColumnInfo.md)|[CKeyColumnUsageInfo](../VS_visualcpp/CKeyColumns--CKeyColumnInfo.md)|  
|[PRIMARY_KEYS](https://msdn.microsoft.com/en-us/library/ms714362.aspx)|[CPrimaryKeys](../VS_visualcpp/CPrimaryKeys--CPrimaryKeyInfo.md)|[CPrimaryKeyInfo](../VS_visualcpp/CPrimaryKeys--CPrimaryKeyInfo.md)|  
|[PROCEDURES](https://msdn.microsoft.com/en-us/library/ms724021.aspx)|[CProcedures](../VS_visualcpp/CProcedures--CProcedureInfo.md)|[CProcedureInfo](../VS_visualcpp/CProcedures--CProcedureInfo.md)|  
|[PROCEDURE_COLUMNS](https://msdn.microsoft.com/en-us/library/ms723092.aspx)|[CProcedureColumns](../VS_visualcpp/CProcedureColumns--CProcedureColumnInfo.md)|[CProcedureColumnInfo](../VS_visualcpp/CProcedureColumns--CProcedureColumnInfo.md)|  
|[PROCEDURE_PARAMETERS](https://msdn.microsoft.com/en-us/library/ms713623.aspx)|[CProcedureParameters](../VS_visualcpp/CProcedureParameters-CProcedureParamInfo.md)|[CProcedureParameterInfo](../VS_visualcpp/CProcedureParameters-CProcedureParamInfo.md)|  
|[PROVIDER_TYPES](https://msdn.microsoft.com/en-us/library/ms709785.aspx)|[CProviderTypes](../VS_visualcpp/CProviderTypes--CProviderInfo.md)|[CProviderInfo](../VS_visualcpp/CProviderTypes--CProviderInfo.md)|  
|[REFERENTIAL_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms719737.aspx)|[CReferentialConstraints](../VS_visualcpp/CReferentialConstraints--CReferentialConstraintInfo.md)|[CReferentialConstraintInfo](../VS_visualcpp/CReferentialConstraints--CReferentialConstraintInfo.md)|  
|[SCHEMATA](https://msdn.microsoft.com/en-us/library/ms716887.aspx)|[CSchemata](../VS_visualcpp/CSchemata--CSchemataInfo.md)|[CSchemataInfo](../VS_visualcpp/CSchemata--CSchemataInfo.md)|  
|[SQL_LANGUAGES](https://msdn.microsoft.com/en-us/library/ms714374.aspx)|[CSQLLanguages](../VS_visualcpp/CSQLLanguages--CSQLLanguageInfo.md)|[CSQLLanguageInfo](../VS_visualcpp/CSQLLanguages--CSQLLanguageInfo.md)|  
|[STATISTICS](https://msdn.microsoft.com/en-us/library/ms715957.aspx)|[CStatistics](../VS_visualcpp/CStatistics--CStatisticInfo.md)|[CStatisticInfo](../VS_visualcpp/CStatistics--CStatisticInfo.md)|  
|[TABLE_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms715921.aspx)|[CTableConstraints](../VS_visualcpp/CTableConstraints--CTableConstraintInfo.md)|[CTableConstraintInfo](../VS_visualcpp/CTableConstraints--CTableConstraintInfo.md)|  
|[TABLES](https://msdn.microsoft.com/en-us/library/ms716980.aspx)|[CTables](../VS_visualcpp/CTables--CTableInfo.md)|[CTableInfo](../VS_visualcpp/CTables--CTableInfo.md)|  
|[TABLE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms725428.aspx)|[CTablePrivileges](../VS_visualcpp/CTablePrivileges--CTablePrivilegeInfo.md)|[CTablePrivilegeInfo](../VS_visualcpp/CTablePrivileges--CTablePrivilegeInfo.md)|  
|[TRANSLATIONS](https://msdn.microsoft.com/en-us/library/ms725365.aspx)|[CTranslations](../VS_visualcpp/CTranslations--CTranslationInfo.md)|[CTranslationInfo](../VS_visualcpp/CTranslations--CTranslationInfo.md)|  
|[USAGE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms722743.aspx)|[CUsagePrivileges](../VS_visualcpp/CUsagePrivileges--CUsagePrivilegeInfo.md)|[CUsagePrivilegeInfo](../VS_visualcpp/CUsagePrivileges--CUsagePrivilegeInfo.md)|  
|[VIEW_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms714896.aspx)|[CViewColumnUsage](../VS_visualcpp/CViewColumnUsage--CViewColumnInfo.md)|[CViewColumnInfo](../VS_visualcpp/CViewColumnUsage--CViewColumnInfo.md)|  
|[VIEWS](https://msdn.microsoft.com/en-us/library/ms723122.aspx)|[CViews](../VS_visualcpp/CViews--CViewInfo.md)|[CViewInfo](../VS_visualcpp/CViews--CViewInfo.md)|  
|[VIEW_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms719727.aspx)|[CViewTableUsage](../VS_visualcpp/CViewTableUsage--CViewTableInfo.md)|[CViewTableInfo](../VS_visualcpp/CViewTableUsage--CViewTableInfo.md)|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../VS_visualcpp/CRestrictions-Class.md)