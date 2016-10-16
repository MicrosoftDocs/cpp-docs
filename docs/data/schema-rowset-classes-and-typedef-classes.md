---
title: "Schema Rowset Classes and Typedef Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.templates.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "schema rowsets, classes"
ms.assetid: 4bd881b3-26ca-4bdb-9226-d67560864f29
caps.latest.revision: 6
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Schema Rowset Classes and Typedef Classes
A schema is a collection of database objects that are owned, or have been created by, a particular user. A catalog can contain one or more schemas, but must always contain a schema called INFORMATION_SCHEMA, which contains the views and domains of the information schema. Schema information in OLE DB is retrieved using predefined schema rowsets, and includes types, tables, columns, indexes, views, assertions and constraints, statistics, character sets, collations, and domains.  
  
 Schema rowsets are predefined rowsets representing metadata. Schema rowsets are generally used in dynamic programming, where the database structure is not known at compile time. You can use these schema rowsets to obtain information about a database at run time.  
  
 Use the typedef classes to instantiate the schema rowsets. The corresponding typedef and schema rowset classes are listed below. You must call [CRestrictions::Open](../data/crestrictions--open.md) after you have created an instance of the schema rowset. This method returns a result set based on the restrictions you specify. See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) for information on restriction columns associated with each schema rowset.  
  
 The following table displays each OLE DB Schema Rowset and its corresponding OLE DB Templates typedef class and info class.  
  
|OLE DB Schema Rowset|Typedef class|Info class|  
|--------------------------|-------------------|----------------|  
|[ASSERTIONS](https://msdn.microsoft.com/en-us/library/ms719776.aspx)|[CAssertions](../data/cassertions--cassertioninfo.md)|[CAssertionInfo](../data/cassertions--cassertioninfo.md)|  
|[CATALOGS](https://msdn.microsoft.com/en-us/library/ms721241.aspx)|[CCatalogs](../data/ccatalogs--ccataloginfo.md)|[CCatalogInfo](../data/ccatalogs--ccataloginfo.md)|  
|[CHARACTER_SETS](https://msdn.microsoft.com/en-us/library/ms722638.aspx)|[CCharacterSets](../data/ccharactersets--ccharactersetinfo.md)|[CCharacterSetInfo](../data/ccharactersets--ccharactersetinfo.md)|  
|[COLLATIONS](https://msdn.microsoft.com/en-us/library/ms715783.aspx)|[CCollations](../data/ccollations--ccollationinfo.md)|[CCollationInfo](../data/ccollations--ccollationinfo.md)|  
|[COLUMN_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms715800.aspx)|[CColumnPrivileges](../data/ccolumnprivileges--ccolumnprivilegeinfo.md)|[CColumnPrivilegeInfo](../data/ccolumnprivileges--ccolumnprivilegeinfo.md)|  
|[COLUMNS](https://msdn.microsoft.com/en-us/library/ms723052.aspx)|[CColumns](../data/ccolumns--ccolumnsinfo.md)|[CColumnsInfo](../data/ccolumns--ccolumnsinfo.md)|  
|[CONSTRAINT_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx)|[CConstraintColumnUsage](../data/cconstraintcolumnusage--cconstraintcolumnusageinfo.md)|[CConstraintColumnUsageInfo](../data/cconstraintcolumnusage--cconstraintcolumnusageinfo.md)|  
|[CONSTRAINT_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms713710.aspx)|[CConstraintTableUsage](../data/cconstrainttableusage--cconstrainttableusageinfo.md)|[CConstraintTableUsageInfo](../data/cconstrainttableusage--cconstrainttableusageinfo.md)|  
|[CHECK_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms712845.aspx)|[CCheckConstraints](../data/ccheckconstraints--ccheckconstraintinfo.md)|[CCheckConstraintInfo](../data/ccheckconstraints--ccheckconstraintinfo.md)|  
|[COLUMN_DOMAIN_USAGE](https://msdn.microsoft.com/en-us/library/ms711240.aspx)|[CColumnDomainUsage](../data/ccolumndomainusage--ccolumndomainusageinfo.md)|[CColumnDomainUsageInfo](../data/ccolumndomainusage--ccolumndomainusageinfo.md)|  
|[FOREIGN_KEYS](https://msdn.microsoft.com/en-us/library/ms711276.aspx)|[CForeignKeys](../data/cforeignkeys--cforeignkeysinfo.md)|[CForeignKeysInfo](../data/cforeignkeys--cforeignkeysinfo.md)|  
|[INDEXES](https://msdn.microsoft.com/en-us/library/ms709712.aspx)|[CIndexes](../data/cindexes--cindexinfo.md)|[CIndexInfo](../data/cindexes--cindexinfo.md)|  
|[KEY_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms712990.aspx)|[CKeyColumnUsage](../data/ckeycolumns--ckeycolumninfo.md)|[CKeyColumnUsageInfo](../data/ckeycolumns--ckeycolumninfo.md)|  
|[PRIMARY_KEYS](https://msdn.microsoft.com/en-us/library/ms714362.aspx)|[CPrimaryKeys](../data/cprimarykeys--cprimarykeyinfo.md)|[CPrimaryKeyInfo](../data/cprimarykeys--cprimarykeyinfo.md)|  
|[PROCEDURES](https://msdn.microsoft.com/en-us/library/ms724021.aspx)|[CProcedures](../data/cprocedures--cprocedureinfo.md)|[CProcedureInfo](../data/cprocedures--cprocedureinfo.md)|  
|[PROCEDURE_COLUMNS](https://msdn.microsoft.com/en-us/library/ms723092.aspx)|[CProcedureColumns](../data/cprocedurecolumns--cprocedurecolumninfo.md)|[CProcedureColumnInfo](../data/cprocedurecolumns--cprocedurecolumninfo.md)|  
|[PROCEDURE_PARAMETERS](https://msdn.microsoft.com/en-us/library/ms713623.aspx)|[CProcedureParameters](../data/cprocedureparameters-cprocedureparaminfo.md)|[CProcedureParameterInfo](../data/cprocedureparameters-cprocedureparaminfo.md)|  
|[PROVIDER_TYPES](https://msdn.microsoft.com/en-us/library/ms709785.aspx)|[CProviderTypes](../data/cprovidertypes--cproviderinfo.md)|[CProviderInfo](../data/cprovidertypes--cproviderinfo.md)|  
|[REFERENTIAL_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms719737.aspx)|[CReferentialConstraints](../data/creferentialconstraints--creferentialconstraintinfo.md)|[CReferentialConstraintInfo](../data/creferentialconstraints--creferentialconstraintinfo.md)|  
|[SCHEMATA](https://msdn.microsoft.com/en-us/library/ms716887.aspx)|[CSchemata](../data/cschemata--cschematainfo.md)|[CSchemataInfo](../data/cschemata--cschematainfo.md)|  
|[SQL_LANGUAGES](https://msdn.microsoft.com/en-us/library/ms714374.aspx)|[CSQLLanguages](../data/csqllanguages--csqllanguageinfo.md)|[CSQLLanguageInfo](../data/csqllanguages--csqllanguageinfo.md)|  
|[STATISTICS](https://msdn.microsoft.com/en-us/library/ms715957.aspx)|[CStatistics](../data/cstatistics--cstatisticinfo.md)|[CStatisticInfo](../data/cstatistics--cstatisticinfo.md)|  
|[TABLE_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms715921.aspx)|[CTableConstraints](../data/ctableconstraints--ctableconstraintinfo.md)|[CTableConstraintInfo](../data/ctableconstraints--ctableconstraintinfo.md)|  
|[TABLES](https://msdn.microsoft.com/en-us/library/ms716980.aspx)|[CTables](../data/ctables--ctableinfo.md)|[CTableInfo](../data/ctables--ctableinfo.md)|  
|[TABLE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms725428.aspx)|[CTablePrivileges](../data/ctableprivileges--ctableprivilegeinfo.md)|[CTablePrivilegeInfo](../data/ctableprivileges--ctableprivilegeinfo.md)|  
|[TRANSLATIONS](https://msdn.microsoft.com/en-us/library/ms725365.aspx)|[CTranslations](../data/ctranslations--ctranslationinfo.md)|[CTranslationInfo](../data/ctranslations--ctranslationinfo.md)|  
|[USAGE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms722743.aspx)|[CUsagePrivileges](../data/cusageprivileges--cusageprivilegeinfo.md)|[CUsagePrivilegeInfo](../data/cusageprivileges--cusageprivilegeinfo.md)|  
|[VIEW_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms714896.aspx)|[CViewColumnUsage](../data/cviewcolumnusage--cviewcolumninfo.md)|[CViewColumnInfo](../data/cviewcolumnusage--cviewcolumninfo.md)|  
|[VIEWS](https://msdn.microsoft.com/en-us/library/ms723122.aspx)|[CViews](../data/cviews--cviewinfo.md)|[CViewInfo](../data/cviews--cviewinfo.md)|  
|[VIEW_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms719727.aspx)|[CViewTableUsage](../data/cviewtableusage--cviewtableinfo.md)|[CViewTableInfo](../data/cviewtableusage--cviewtableinfo.md)|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../data/crestrictions-class.md)