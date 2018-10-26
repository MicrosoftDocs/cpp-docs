---
title: "Schema Rowset Classes and Typedef Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["vc.templates.ole", "CAssertions", "m_szCatalog", "m_bInitiallyDeferred", "CONSTRAINT_NAME", "m_szSchema", "INITIALLY_DEFERRED", "m_bIsDeferrable", "m_szName", "CAssertionInfo", "CONSTRAINT_CATALOG",       "CONSTRAINT_SCHEMA", "IS_DEFERRABLE", "CCatalogs", "m_szName", "CCatalogInfo", "m_szCollateName", "m_szCatalog", "DEFAULT_COLLATE_NAME", "m_szCollateSchema", "FORM_OF_USE", "DEFAULT_COLLATE_SCHEMA", "m_szCollateCatalog", "CCharacterSets", "CHARACTER_SET_NAME", "DEFAULT_COLLATE_CATALOG", "CHARACTER_SET_SCHEMA", "m_szFormOfUse", "NUMBER_OF_CHARACTERS", "m_szSchema", "CHARACTER_SET_CATALOG", "CCharacterSetInfo", "m_nNumCharacters", "m_szName", "CCheckConstraintInfo","CHECK_CONSTRAINTS", "m_szCatalog", "CCheckConstraints", "CONSTRAINT_NAME", "m_szSchema", "CHECK_CLAUSE", "m_szCheckClause", "m_szName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "COLLATION_CATALOG", "m_szCatalog", "CCollationInfo", "CCollations", "CHARACTER_SET_NAME", "CHARACTER_SET_SCHEMA", "m_szCharSetName", "m_szSchema", "CHARACTER_SET_CATALOG", "m_szCharSetSchema", "m_szCharSetCatalog", "m_szPadAttribute", "COLLATION_NAME", "COLLATION_SCHEMA", "m_szName", "COLLATIONS", "m_szTableSchema", "m_szCatalog", "m_nColumnPropID", "CColumnDomainUsageInfo", "COLUMN_GUID", "DOMAIN_NAME", "m_szColumnName", "DOMAIN_SCHEMA", "DOMAIN_CATALOG", "m_szTableCatalog", "m_szSchema", "COLUMN_PROPID", "m_guidColumn", "CColumnDomainUsage", "m_szTableName", "m_szName", "COLUMN_DOMAIN_USAGE", "m_szTableSchema", "CColumnPrivileges", "m_bIsGrantable", "m_nColumnPropID", "m_szPrivilegeType", "COLUMN_GUID", "IS_GRANTABLE", "m_szColumnName", "m_szTableCatalog", "m_szGrantor", "GRANTOR", "GRANTEE", "COLUMN_PROPID", "m_guidColumn", "COLUMN_PRIVILEGES", "m_szTableName", "CColumnPrivilegeInfo", "m_szGrantee", "m_szDomainSchema", "CColumns", "m_guidType", "COLLATION_CATALOG", "m_szTableSchema", "COLUMN_DEFAULT", "IS_NULLABLE", "m_nColumnPropID", "ORDINAL_POSITION", "m_szColumnDefault", "m_szCollationCatalog", "m_nDateTimePrecision", "m_szDomainCatalog", "m_nOrdinalPosition", "m_szDomainName", "COLUMN_GUID", "CHARACTER_SET_NAME", "m_nColumnFlags", "DOMAIN_NAME", "m_szCollationName", "m_szColumnName", "CHARACTER_SET_SCHEMA", "COLUMN_FLAGS", "m_szCharSetName", "NUMERIC_PRECISION", "DOMAIN_SCHEMA", "DOMAIN_CATALOG", "m_nDataType", "m_szTableCatalog", "CHARACTER_SET_CATALOG", "m_szCharSetSchema", "CHARACTER_OCTET_LENGTH", "NUMERIC_SCALE", "m_nNumericScale", "COLUMN_PROPID", "m_guidColumn", "m_szCharSetCatalog", "m_nMaxLength", "CHARACTER_MAXIMUM_LENGTH", "COLLATION_NAME", "COLLATION_SCHEMA", "m_bColumnHasDefault", "m_szTableName", "m_nNumericPrecision", "DATA_TYPE", "m_nOctetLength", "CColumnsInfo", "m_szCollationSchema", "m_bIsNullable", "COLUMN_HASDEFAULT", "DATETIME_PRECISION", "m_szTableSchema", "m_szConstraintCatalog", "CConstraintColumnUsage", "m_nColumnPropID", "COLUMN_GUID", "CONSTRAINT_NAME", "m_szColumnName", "m_szTableCatalog", "m_szConstraintSchema", "COLUMN_PROPID", "m_guidColumn", "CONSTRAINT_COLUMN_USAGE", "m_szTableName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "CConstraintColumnUsageInfo", "m_szConstraintName", "CConstraintTableUsageInfo", "CONSTRAINT_TABLE_USAGE", "m_szTableSchema", "m_szConstraintCatalog", "CONSTRAINT_NAME", "m_szTableCatalog", "m_szConstraintSchema", "m_szTableName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "CConstraintTableUsage", "m_szConstraintName", "m_nOrdinal", "m_szPKColumnName", "FK_TABLE_NAME", "m_guidFKColumn", "FK_COLUMN_NAME", "m_guidPKColumn", "DELETE_RULE", "m_szPKTableSchema", "FK_COLUMN_PROPID", "m_nFKColumnPropID", "m_szFKTableCatalog", "CForeignKeysInfo", "FK_TABLE_SCHEMA", "m_szPKTableCatalog", "m_szDeleteRule", "m_szUpdateRule", "m_szPKTableName", "m_szFKTableSchema", "ORDINAL", "m_nPKColumnPropID", "m_szFKColumnName", "FK_TABLE_CATALOG", "FK_COLUMN_GUID", "m_szFKTableName", "CForeignKeys", "INITIAL_SIZE", "NULL_COLLATION", "m_szFilterCondition", "m_bPrimaryKey", "m_szTableSchema", "m_bSortBookmarks", "m_szIndexSchema", "m_nColumnPropID", "ORDINAL_POSITION", "INDEX_CATALOG", "m_nOrdinalPosition", "COLUMN_GUID", "m_bAutoUpdate", "m_nNullCollation", "CLUSTERED", "NULLS", "m_szColumnName", "m_nFillFactor", "m_nPages", "INDEX_NAME", "m_szTableCatalog", "m_szIndexName", "m_szIndexCatalog", "m_nCardinality", "m_nInitialSize", "m_bUnique", "COLUMN_PROPID", "m_guidColumn", "m_nNulls", "m_szTableName", "FILL_FACTOR", "m_nType", "m_bClustered", "COLLATION", "FILTER_CONDITION", "m_nCollation", "CIndexes", "INDEX_SCHEMA", "CIndexInfo", "m_szTableSchema", "m_szConstraintCatalog", "m_nColumnPropID", "ORDINAL_POSITION", "m_nOrdinalPosition", "COLUMN_GUID", "CKeyColumnInfo", "CONSTRAINT_NAME", "m_szColumnName", "m_szTableCatalog", "m_szConstraintSchema", "COLUMN_PROPID", "m_guidColumn", "CKeyColumns", "m_szTableName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "m_szConstraintName", "m_nOrdinal", "m_szTableSchema", "m_nColumnPropID", "CPrimaryKeys", "COLUMN_GUID", "CPrimaryKeyInfo", "m_szColumnName", "m_szTableCatalog", "COLUMN_PROPID", "m_guidColumn", "ORDINAL", "m_szTableName", "m_guidType", "CProcedureColumnInfo", "IS_NULLABLE", "m_szCatalog", "m_nRowsetNumber", "m_nColumnPropID", "ORDINAL_POSITION", "m_nOrdinalPosition", "COLUMN_GUID", "m_szColumnName", "NUMERIC_PRECISION", "m_nDataType", "m_szSchema", "CHARACTER_OCTET_LENGTH", "NUMERIC_SCALE", "COLUMN_PROPID", "m_guidColumn", "m_nMaxLength", "CHARACTER_MAXIMUM_LENGTH", "m_nPrecision", "m_szName", "CProcedureColumns", "DATA_TYPE", "m_nOctetLength", "m_bIsNullable", "m_nScale", "m_szDefault", "CProcedureParameters", "m_bHasDefault", "CProcedureParamInfo", "IS_NULLABLE", "m_szCatalog", "ORDINAL_POSITION", "m_nOrdinalPosition", "NUMERIC_PRECISION", "m_nDataType", "m_szSchema", "CHARACTER_OCTET_LENGTH", "NUMERIC_SCALE", "m_szParameterName", "m_nMaxLength", "CHARACTER_MAXIMUM_LENGTH", "m_nPrecision", "m_szName", "DATA_TYPE", "m_nOctetLength", "m_nType", "m_bIsNullable", "m_nScale", "CProcedures", "m_szCatalog", "CProcedureInfo", "m_szSchema", "m_szDefinition", "m_szName", "m_nType", "m_bIsLong", "m_szLocalTypeName", "m_guidType", "m_bCaseSensitive", "m_szVersion", "m_szCreateParams", "IS_NULLABLE", "m_bAutoUniqueValue", "LITERAL_SUFFIX", "COLUMN_SIZE", "CProviderTypes", "LOCAL_TYPE_NAME", "MINIMUM_SCALE", "m_nMinScale", "m_nColumnSize", "m_szLiteralSuffix", "m_bFixedPrecScale", "m_szLiteralPrefix", "m_nMaxScale", "m_szTypeLib", "m_nDataType", "m_bUnsignedAttribute", "m_nSearchable", "m_bBestMatch", "m_szTypeName", "DATA_TYPE", "MAXIMUM_SCALE", "CProviderInfo", "FIXED_PREC_SCALE", "m_bIsNullable", "IS_LONG", "m_szUniqueName", "m_szCatalog", "DELETE_RULE", "m_szUniqueCatalog", "CONSTRAINT_NAME", "CReferentialConstraintInfo", "MATCH_OPTION", "m_szSchema", "m_szDeleteRule", "m_szUpdateRule", "m_szUniqueSchema", "CReferentialConstraints", "m_szName", "CONSTRAINT_CATALOG", "m_szMatchOption", "CONSTRAINT_SCHEMA", "DEFAULT_CHARACTER_SET_CATALOG", "DEFAULT_CHARACTER_SET_SCHEMA", "m_szCharName", "CSchemataInfo", "m_szCatalog", "m_szCharCatalog", "m_szOwner", "m_szCharSchema", "CSchemata", "m_szName", "DEFAULT_CHARACTER_SET_NAME", "CSQLLanguageInfo", "m_szProgrammingLanguage", "m_szImplementation", "m_szIntegrity", "m_szBindingStyle", "m_szConformance", "m_szSource", "m_szYear", "CSQLLanguages", "CStatistics", "m_szTableSchema", "CStatisticInfo", "m_szTableCatalog", "m_nCardinality", "m_szTableName", "m_szTableSchema", "CONSTRAINT_TYPE", "m_szCatalog", "CTableConstraints", "m_bInitiallyDeferred", "CONSTRAINT_NAME", "m_szTableCatalog", "m_szType", "m_szSchema", "INITIALLY_DEFERRED", "CTableConstraintInfo", "m_szTableName", "m_bIsDeferrable", "m_szName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "IS_DEFERRABLE", "m_szCatalog", "m_bIsGrantable", "IS_GRANTABLE", "m_szType", "m_szSchema", "m_szGrantor", "GRANTOR", "GRANTEE", "CTablePrivileges", "CTablePrivilegeInfo", "m_szName", "m_szGrantee", "m_szCatalog", "TABLE_SCHEMA", "CTables", "TABLE_NAME", "TABLE_CATALOG", "CTableInfo", "m_guidTable", "m_szType", "m_szSchema", "m_szName", "TABLE_GUID", "m_szCatalog", "m_szSourceCatalog", "m_szTargetSchema", "m_szTargetCatalog", "m_szTargetName", "CTranslationInfo", "m_szSourceName", "m_szSchema", "CTranslations", "m_szName", "m_szSourceSchema", "m_szObjectCatalog", "CUsagePrivilegeInfo", "m_bIsGrantable", "OBJECT_NAME", "m_szPrivilegeType", "OBJECT_SCHEMA", "IS_GRANTABLE", "CUsagePrivileges", "m_szGrantor", "GRANTOR", "GRANTEE", "m_szObjectSchema", "OBJECT_CATALOG", "m_szObjectType", "m_szObjectName", "m_szGrantee", "OBJECT_TYPE", "m_szTableSchema", "m_szCatalog", "m_nColumnPropID", "COLUMN_GUID", "m_szColumnName", "m_szTableCatalog", "CViewColumnInfo", "m_szSchema", "CViewColumnUsage", "COLUMN_PROPID", "m_guidColumn", "m_szTableName", "m_szName", "m_szTableSchema", "m_bCheckOption", "CViews", "CHECK_OPTION", "CViewInfo", "m_szTableCatalog", "IS_UPDATABLE", "m_szDefinition", "m_szTableName", "m_bIsUpdatable", "m_szTableSchema", "m_szCatalog", "CViewTableInfo", "m_szTableCatalog", "m_szSchema", "m_szTableName", "m_szName", "CViewTableUsage"]
dev_langs: ["C++"]
helpviewer_keywords: ["schema rowsets, classes", "CAssertionInfo parameter class", "DESCRIPTION class data member", "CAssertions typedef class", "IS_DEFERRABLE", "m_szSchema", "m_bInitiallyDeferred", "CONSTRAINT_CATALOG", "m_szCatalog", "CONSTRAINT_NAME", "CONSTRAINT_SCHEMA", "m_szName", "m_szDescription", "INITIALLY_DEFERRED", "m_bIsDeferrable", "DESCRIPTION class data member", "CCatalogInfo parameter class", "CCatalogs typedef class", "m_szName", "m_szDescription", "DEFAULT_COLLATE_SCHEMA", "m_nNumCharacters", "m_szSchema", "NUMBER_OF_CHARACTERS", "m_szCollateCatalog", "CCharacterSetInfo parameter class", "m_szCatalog", "CCharacterSets typedef class", "m_szCollateName", "m_szName", "m_szCollateSchema", "FORM_OF_USE OLE DB column", "CHARACTER_SET_NAME", "DEFAULT_COLLATE_CATALOG", "DEFAULT_COLLATE_NAME", "m_szFormOfUse", "CHARACTER_SET_SCHEMA", "CHARACTER_SET_CATALOG", "DESCRIPTION class data member", "m_szSchema", "CONSTRAINT_CATALOG", "m_szCatalog", "CONSTRAINT_NAME", "CONSTRAINT_SCHEMA", "CCheckConstraints typedef class", "CHECK_CLAUSE", "m_szName", "m_szDescription", "CCheckConstraintInfo parameter class", "m_szCheckClause", "CHECK_CONSTRAINTS", "m_szSchema", "COLLATION_SCHEMA", "m_szCharSetCatalog", "m_szCatalog", "COLLATIONS recordset", "COLLATION_CATALOG", "CCollationInfo parameter class", "m_szName", "COLLATION_NAME", "m_szPadAttribute", "CHARACTER_SET_NAME", "m_szCharSetName", "CHARACTER_SET_SCHEMA", "CHARACTER_SET_CATALOG", "m_szCharSetSchema", "CCollations typedef class", "COLUMN_PROPID", "m_szSchema", "DOMAIN_NAME", "DOMAIN_SCHEMA", "m_szTableSchema", "TABLE_CATALOG", "m_szCatalog", "TABLE_NAME", "m_nColumnPropID", "CColumnDomainUsageInfo parameter class", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szName", "m_szTableCatalog", "m_szTableName", "COLUMN_DOMAIN_USAGE", "COLUMN_GUID", "CColumnDomainUsage typedef class", "m_guidColumn", "DOMAIN_CATALOG", "COLUMN_PROPID", "GRANTOR", "m_szPrivilegeType", "m_szTableSchema", "TABLE_CATALOG", "TABLE_NAME", "COLUMN_PRIVILEGES", "IS_GRANTABLE", "m_nColumnPropID", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szTableCatalog", "m_szGrantee", "m_szGrantor", "m_szTableName", "CColumnPrivileges typedef class", "COLUMN_GUID", "GRANTEE", "m_guidColumn", "CColumnPrivilegeInfo parameter class", "m_bIsGrantable", "NUMERIC_PRECISION", "COLUMN_PROPID", "DATA_TYPE", "ORDINAL_POSITION", "m_nMaxLength", "DESCRIPTION class data member", "m_nDateTimePrecision", "m_bColumnHasDefault", "m_szCollationName", "m_guidType", "CColumnsInfo parameter class", "COLLATION_SCHEMA", "m_szDomainSchema", "COLUMN_HASDEFAULT", "CHARACTER_OCTET_LENGTH", "m_szDomainName", "DOMAIN_NAME", "DOMAIN_SCHEMA", "m_szTableSchema", "TABLE_CATALOG", "m_szCharSetCatalog", "m_szColumnDefault", "TABLE_NAME", "COLUMN_FLAGS", "m_szDomainCatalog", "m_nOrdinalPosition", "m_nColumnPropID", "NUMERIC_SCALE", "COLLATION_CATALOG", "DATETIME_PRECISION", "TABLE_SCHEMA", "m_nNumericPrecision", "m_szColumnName", "COLUMN_NAME", "m_nOctetLength", "IS_NULLABLE", "m_bIsNullable", "m_szTableCatalog", "COLLATION_NAME", "m_szDescription", "m_szTableName", "CColumns typedef class", "m_nDataType", "m_nNumericScale", "m_szCollationCatalog", "m_szCollationSchema", "CHARACTER_SET_NAME", "m_nColumnFlags", "COLUMN_GUID", "CHARACTER_MAXIMUM_LENGTH", "m_szCharSetName", "m_guidColumn", "CHARACTER_SET_SCHEMA", "CHARACTER_SET_CATALOG", "DOMAIN_CATALOG", "m_szCharSetSchema", "COLUMN_DEFAULT", "COLUMN_PROPID", "m_szConstraintCatalog", "CONSTRAINT_COLUMN_USAGE", "CONSTRAINT_CATALOG", "CConstraintColumnUsageInfo parameter class", "m_szTableSchema", "TABLE_CATALOG", "TABLE_NAME", "CONSTRAINT_NAME", "CConstraintColumnUsage typedef class", "m_nColumnPropID", "CONSTRAINT_SCHEMA", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szTableCatalog", "m_szConstraintName", "m_szTableName", "m_szConstraintSchema", "COLUMN_GUID", "m_guidColumn", "CConstraintTableUsage typedef class", "m_szConstraintCatalog", "CONSTRAINT_CATALOG", "m_szTableSchema", "CConstraintTableUsageInfo parameter class", "TABLE_CATALOG", "CONSTRAINT_TABLE_USAGE", "TABLE_NAME", "CONSTRAINT_NAME", "CONSTRAINT_SCHEMA", "TABLE_SCHEMA", "m_szTableCatalog", "m_szConstraintName", "m_szTableName", "m_szConstraintSchema", "m_szPKTableCatalog", "FK_COLUMN_GUID", "m_szPKColumnName", "m_szFKTableName", "ORDINAL data member", "m_nPKColumnPropID", "m_szDeleteRule", "DELETE_RULE", "m_guidFKColumn", "FK_COLUMN_PROPID", "m_szPKTableSchema", "m_szFKTableCatalog", "CForeignKeysInfo parameter class", "m_szFKTableSchema", "FK_TABLE_SCHEMA", "FK_COLUMN_NAME", "m_szUpdateRule", "m_szFKColumnName", "FK_TABLE_CATALOG", "m_nOrdinal", "m_szPKTableName", "CForeignKeys typedef class", "m_nFKColumnPropID", "m_guidPKColumn", "FK_TABLE_NAME", "COLUMN_PROPID", "ORDINAL_POSITION", "INDEX_CATALOG", "NULLS", "CIndexInfo parameter class", "m_szFilterCondition", "m_szIndexCatalog", "CLUSTERED", "m_nType", "FILL_FACTOR", "m_nPages", "m_nCardinality", "m_szTableSchema", "TABLE_CATALOG", "TABLE_NAME", "INDEX_SCHEMA", "m_nInitialSize", "m_nOrdinalPosition", "m_nColumnPropID", "FILTER_CONDITION", "TABLE_SCHEMA", "m_szColumnName", "INDEX_NAME", "NULL_COLLATION", "m_bUnique", "m_bSortBookmarks", "m_bAutoUpdate", "COLUMN_NAME", "INITIAL_SIZE", "m_szTableCatalog", "m_nNullCollation", "m_bClustered", "m_szTableName", "CIndexes typedef class", "m_nCollation", "COLUMN_GUID", "m_guidColumn", "m_nNulls", "m_bPrimaryKey", "m_szIndexName", "m_nFillFactor", "m_szIndexSchema", "COLUMN_PROPID", "ORDINAL_POSITION", "m_szConstraintCatalog", "CONSTRAINT_CATALOG", "m_szTableSchema", "TABLE_CATALOG", "CKeyColumnInfo parameter class", "TABLE_NAME", "CONSTRAINT_NAME", "m_nOrdinalPosition", "m_nColumnPropID", "CONSTRAINT_SCHEMA", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szTableCatalog", "m_szConstraintName", "CKeyColumns typedef class", "m_szTableName", "m_szConstraintSchema", "COLUMN_GUID", "m_guidColumn", "COLUMN_PROPID", "m_szTableSchema", "TABLE_CATALOG", "ORDINAL data member", "CPrimaryKeys typedef class", "TABLE_NAME", "m_nColumnPropID", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szTableCatalog", "m_szTableName", "m_nOrdinal", "CPrimaryKeyInfo parameter class", "COLUMN_GUID", "m_guidColumn", "NUMERIC_PRECISION", "COLUMN_PROPID", "DATA_TYPE", "ORDINAL_POSITION", "m_nMaxLength", "DESCRIPTION class data member", "m_guidType", "m_szSchema", "CHARACTER_OCTET_LENGTH", "m_szCatalog", "CProcedureColumns typedef class", "m_nPrecision", "m_nOrdinalPosition", "m_nColumnPropID", "NUMERIC_SCALE", "m_nRowsetNumber", "m_szColumnName", "COLUMN_NAME", "m_nOctetLength", "IS_NULLABLE", "m_szName", "m_bIsNullable", "m_szDescription", "m_nDataType", "m_nScale", "COLUMN_GUID", "CHARACTER_MAXIMUM_LENGTH", "m_guidColumn", "CProcedureColumnInfo parameter class", "NUMERIC_PRECISION", "DATA_TYPE", "ORDINAL_POSITION", "m_nMaxLength", "DESCRIPTION class data member", "m_szParameterName", "m_szSchema", "m_nType", "m_bHasDefault", "CHARACTER_OCTET_LENGTH", "CProcedureParameters typedef class", "m_szCatalog", "m_nPrecision", "m_nOrdinalPosition", "NUMERIC_SCALE", "m_nOctetLength", "IS_NULLABLE", "m_szName", "m_bIsNullable", "CProcedureParamInfo parameter class", "m_szDescription", "m_szDefault", "m_nDataType", "m_nScale", "CHARACTER_MAXIMUM_LENGTH", "DESCRIPTION class data member", "m_szSchema", "m_nType", "m_szCatalog", "CProcedureInfo parameter class", "m_szName", "m_szDescription", "m_szDefinition", "CProcedures typedef class", "DATA_TYPE", "MAXIMUM_SCALE", "m_nMinScale", "m_guidType", "LOCAL_TYPE_NAME", "m_bAutoUniqueValue", "m_bBestMatch", "m_bIsLong", "m_bUnsignedAttribute", "CProviderInfo parameter class", "FIXED_PREC_SCALE", "m_nColumnSize", "m_szVersion", "CProviderTypes typedef class", "m_szCreateParams", "IS_NULLABLE", "m_bIsNullable", "m_szTypeLib", "m_szLiteralPrefix", "m_nMaxScale", "m_nDataType", "m_bCaseSensitive", "m_bFixedPrecScale", "m_nSearchable", "MINIMUM_SCALE", "m_szTypeName", "m_szLocalTypeName", "IS_LONG", "LITERAL_SUFFIX", "COLUMN_SIZE", "m_szLiteralSuffix", "m_szUniqueSchema", "DESCRIPTION class data member", "m_szSchema", "CONSTRAINT_CATALOG", "CReferentialConstraints typedef class", "m_szUniqueName", "m_szCatalog", "CONSTRAINT_NAME", "m_szDeleteRule", "DELETE_RULE", "MATCH_OPTION", "CONSTRAINT_SCHEMA", "m_szName", "m_szDescription", "m_szMatchOption", "m_szUniqueCatalog", "m_szUpdateRule", "CReferentialConstraintInfo parameter class", "m_szCharName", "CSchemata typedef class", "DEFAULT_CHARACTER_SET_NAME", "m_szOwner", "CSchemataInfo parameter class", "DEFAULT_CHARACTER_SET_CATALOG", "m_szCharSchema", "m_szCatalog", "m_szName", "m_szCharCatalog", "DEFAULT_CHARACTER_SET_SCHEMA", "m_szBindingStyle", "m_szProgrammingLanguage", "m_szYear", "m_szImplementation", "m_szSource", "m_szConformance", "CSQLLanguages typedef class", "CSQLLanguageInfo parameter class", "m_szIntegrity", "m_nCardinality", "m_szTableSchema", "TABLE_CATALOG", "TABLE_NAME", "TABLE_SCHEMA", "CStatistics typedef class", "m_szTableCatalog", "m_szTableName", "CStatisticInfo parameter class", "DESCRIPTION class data member", "CTableConstraints typedef class", "IS_DEFERRABLE", "m_szSchema", "m_bInitiallyDeferred", "CONSTRAINT_CATALOG", "m_szTableSchema", "TABLE_CATALOG", "m_szType", "m_szCatalog", "TABLE_NAME", "CONSTRAINT_NAME", "CONSTRAINT_TYPE", "CONSTRAINT_SCHEMA", "TABLE_SCHEMA", "m_szName", "m_szTableCatalog", "m_szDescription", "CTableConstraintInfo parameter class", "m_szTableName", "INITIALLY_DEFERRED", "m_bIsDeferrable", "GRANTOR", "CTablePrivilegeInfo parameter class", "m_szSchema", "TABLE_CATALOG", "m_szType", "m_szCatalog", "TABLE_NAME", "IS_GRANTABLE", "TABLE_SCHEMA", "m_szName", "m_szGrantee", "CTablePrivileges typedef class", "m_szGrantor", "GRANTEE", "m_bIsGrantable", "DESCRIPTION class data member", "m_szSchema", "TABLE_CATALOG", "m_szType", "m_szCatalog", "TABLE_NAME", "TABLE_SCHEMA", "TABLE_GUID", "m_szName", "m_szDescription", "CTables typedef class", "m_guidTable", "CTableInfo parameter class", "m_szSourceSchema", "m_szSourceCatalog", "m_szSchema", "m_szTargetName", "m_szSourceName", "CTranslations typedef class", "m_szCatalog", "m_szTargetCatalog", "m_szName", "CTranslationInfo parameter class", "m_szTargetSchema", "OBJECT_NAME", "GRANTOR", "OBJECT_CATALOG", "CUsagePrivileges typedef class", "m_szPrivilegeType", "OBJECT_SCHEMA", "m_szObjectSchema", "m_szObjectType", "IS_GRANTABLE", "OBJECT_TYPE", "CUsagePrivilegeInfo parameter class", "m_szGrantee", "m_szObjectCatalog", "m_szGrantor", "GRANTEE", "m_bIsGrantable", "m_szObjectName", "COLUMN_PROPID", "m_szSchema", "m_szTableSchema", "TABLE_CATALOG", "m_szCatalog", "TABLE_NAME", "m_nColumnPropID", "CViewColumnInfo parameter class", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szName", "m_szTableCatalog", "CViewColumnUsage typedef class", "m_szTableName", "COLUMN_GUID", "m_guidColumn", "DESCRIPTION class data member", "CHECK_OPTION", "m_szTableSchema", "TABLE_CATALOG", "TABLE_NAME", "m_bCheckOption", "TABLE_SCHEMA", "m_szTableCatalog", "m_szDescription", "m_szDefinition", "m_szTableName", "CViewInfo parameter class", "m_bIsUpdatable", "IS_UPDATABLE", "CViews typedef class", "CViewTableInfo parameter class", "CViewTableUsage typedef class", "m_szSchema", "m_szTableSchema", "TABLE_CATALOG", "m_szCatalog", "TABLE_NAME", "TABLE_SCHEMA", "m_szName", "m_szTableCatalog", "m_szTableName"]
ms.assetid: 4bd881b3-26ca-4bdb-9226-d67560864f29
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Schema Rowset Classes and Typedef Classes

A schema is a collection of database objects that are owned, or have been created by, a particular user. A catalog can contain one or more schemas, but must always contain a schema called INFORMATION_SCHEMA, which contains the views and domains of the information schema. Schema information in OLE DB is retrieved using predefined schema rowsets, and includes types, tables, columns, indexes, views, assertions and constraints, statistics, character sets, collations, and domains.

Schema rowsets are predefined rowsets representing metadata. Schema rowsets are generally used in dynamic programming, where the database structure is not known at compile time. You can use these schema rowsets to obtain information about a database at run time.

Use the typedef classes to instantiate the schema rowsets. The corresponding typedef and schema rowset classes are listed below. You must call [CRestrictions::Open](../../data/oledb/crestrictions-open.md) after you have created an instance of the schema rowset. This method returns a result set based on the restrictions you specify. See [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686) for information on restriction columns associated with each schema rowset.

The following table displays each OLE DB Schema Rowset and its corresponding OLE DB Templates typedef class and info class.

|OLE DB Schema Rowset|Typedef class|Info class|
|--------------------------|-------------------|----------------|
|[ASSERTIONS](/previous-versions/windows/desktop/ms719776)|[CAssertions](#assertion)|[CAssertionInfo](#assertion)|
|[CATALOGS](/previous-versions/windows/desktop/ms721241)|[CCatalogs](#catalog)|[CCatalogInfo](#catalog)|
|[CHARACTER_SETS](/previous-versions/windows/desktop/ms722638)|[CCharacterSets](#characterset)|[CCharacterSetInfo](#characterset)|
|[COLLATIONS](/previous-versions/windows/desktop/ms715783)|[CCollations](#collation)|[CCollationInfo](#collation)|
|[COLUMN_PRIVILEGES](/previous-versions/windows/desktop/ms715800)|[CColumnPrivileges](#columnprivilege)|[CColumnPrivilegeInfo](#columnprivilege)|
|[COLUMNS](/previous-versions/windows/desktop/ms723052)|[CColumns](#columns)|[CColumnsInfo](#columns)|
|[CONSTRAINT_COLUMN_USAGE](/previous-versions/windows/desktop/ms724522)|[CConstraintColumnUsage](#constraintcolumnusage)|[CConstraintColumnUsageInfo](#constraintcolumnusage)|
|[CONSTRAINT_TABLE_USAGE](/previous-versions/windows/desktop/ms713710)|[CConstraintTableUsage](#constrainttableusage)|[CConstraintTableUsageInfo](#constrainttableusage)|
|[CHECK_CONSTRAINTS](/previous-versions/windows/desktop/ms712845)|[CCheckConstraints](#checkconstraint)|[CCheckConstraintInfo](#checkconstraint)|
|[COLUMN_DOMAIN_USAGE](/previous-versions/windows/desktop/ms711240)|[CColumnDomainUsage](#columndomainusage)|[CColumnDomainUsageInfo](#columndomainusage)|
|[FOREIGN_KEYS](/previous-versions/windows/desktop/ms711276)|[CForeignKeys](#foreignkeys)|[CForeignKeysInfo](#foreignkeys)|
|[INDEXES](/previous-versions/windows/desktop/ms709712)|[CIndexes](#index)|[CIndexInfo](#index)|
|[KEY_COLUMN_USAGE](/previous-versions/windows/desktop/ms712990)|[CKeyColumn](#keycolumn)|[CKeyColumnInfo](#keycolumn)|
|[PRIMARY_KEYS](/previous-versions/windows/desktop/ms714362)|[CPrimaryKeys](#primarykey)|[CPrimaryKeyInfo](#primarykey)|
|[PROCEDURES](/previous-versions/windows/desktop/ms724021)|[CProcedures](#procedure)|[CProcedureInfo](#procedure)|
|[PROCEDURE_COLUMNS](/previous-versions/windows/desktop/ms723092)|[CProcedureColumns](#procedurecolumn)|[CProcedureColumnInfo](#procedurecolumn)|
|[PROCEDURE_PARAMETERS](/previous-versions/windows/desktop/ms713623)|[CProcedureParameters](#procedureparam)|[CProcedureParameterInfo](#procedureparam)|
|[PROVIDER_TYPES](/previous-versions/windows/desktop/ms709785)|[CProviderTypes](#provider)|[CProviderInfo](#provider)|
|[REFERENTIAL_CONSTRAINTS](/previous-versions/windows/desktop/ms719737)|[CReferentialConstraints](#referentialconstraint)|[CReferentialConstraintInfo](#referentialconstraint)|
|[SCHEMATA](/previous-versions/windows/desktop/ms716887)|[CSchemata](#schemata)|[CSchemataInfo](#schemata)|
|[SQL_LANGUAGES](/previous-versions/windows/desktop/ms714374)|[CSQLLanguages](#sqllanguage)|[CSQLLanguageInfo](#sqllanguage)|
|[STATISTICS](/previous-versions/windows/desktop/ms715957)|[CStatistics](#statistic)|[CStatisticInfo](#statistic)|
|[TABLE_CONSTRAINTS](/previous-versions/windows/desktop/ms715921)|[CTableConstraints](#tableconstraint)|[CTableConstraintInfo](#tableconstraint)|
|[TABLES](/previous-versions/windows/desktop/ms716980)|[CTables](#table)|[CTableInfo](#table)|
|[TABLE_PRIVILEGES](/previous-versions/windows/desktop/ms725428)|[CTablePrivileges](#tableprivilege)|[CTablePrivilegeInfo](#tableprivilege)|
|[TRANSLATIONS](/previous-versions/windows/desktop/ms725365)|[CTranslations](#translation)|[CTranslationInfo](#translation)|
|[USAGE_PRIVILEGES](/previous-versions/windows/desktop/ms722743)|[CUsagePrivileges](#usageprivilege)|[CUsagePrivilegeInfo](#usageprivilege)|
|[VIEW_COLUMN_USAGE](/previous-versions/windows/desktop/ms714896)|[CViewColumnUsage](#viewcolumn)|[CViewColumnInfo](#viewcolumn)|
|[VIEWS](/previous-versions/windows/desktop/ms723122)|[CViews](#view)|[CViewInfo](#view)|
|[VIEW_TABLE_USAGE](/previous-versions/windows/desktop/ms719727)|[CViewTableUsage](#viewtable)|[CViewTableInfo](#viewtable)|

## <a name="assertion"></a> CAssertions, CAssertionInfo

Call the typedef class `CAssertions` to implement its parameter class `CAssertionInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the assertions defined in the catalog that are owned by a given user.

The following table lists the class data members for `CAssertionInfo` and their corresponding OLE DB Columns. See [ASSERTIONS Rowset](/previous-versions/windows/desktop/ms719776) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CONSTRAINT_CATALOG|
|m_szSchema|CONSTRAINT_SCHEMA|
|m_szName|CONSTRAINT_NAME|
|m_bIsDeferrable|IS_DEFERRABLE|
|m_bInitiallyDeferred|INITIALLY_DEFERRED|
|m_szDescription|DESCRIPTION|

## <a name="catalog"></a> CCatalogs, CCatalogInfo

Call the typedef class `CCatalogs` to implement its parameter class `CCatalogInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the physical attributes associated with catalogs accessible from the DBMS.

The following table lists the class data members and their corresponding OLE DB Columns. See [CATALOGS Rowset](/previous-versions/windows/desktop/ms721241) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szName|CATALOG_NAME|
|m_szDescription|DESCRIPTION|

## <a name="characterset"></a> CCharacterSets, CCharacterSetInfo

Call the typedef class `CCharacterSets` to implement its parameter class `CCharacterSetInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the character sets defined in the catalog that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [CHARACTER_SETS Rowset](/previous-versions/windows/desktop/ms722638) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CHARACTER_SET_CATALOG|
|m_szSchema|CHARACTER_SET_SCHEMA|
|m_szName|CHARACTER_SET_NAME|
|m_szFormOfUse|FORM_OF_USE|
|m_nNumCharacters|NUMBER_OF_CHARACTERS|
|m_szCollateCatalog|DEFAULT_COLLATE_CATALOG|
|m_szCollateSchema|DEFAULT_COLLATE_SCHEMA|
|m_szCollateName|DEFAULT_COLLATE_NAME|

## <a name="checkconstraint"></a> CCheckConstraints, CCheckConstraintInfo

Call the typedef class `CCheckConstraints` to implement its parameter class `CCheckConstraintInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the check constraints, defined in the catalog, that are owned by a given user. A check constraint specifies the data values or formats that are acceptable in one or more columns in a table.

The following table lists the class data members and their corresponding OLE DB Columns. See [CHECK_CONSTRAINTS Rowset](/previous-versions/windows/desktop/ms712845) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CONSTRAINT_CATALOG|
|m_szSchema|CONSTRAINT_SCHEMA|
|m_szName|CONSTRAINT_NAME|
|m_szCheckClause|CHECK_CLAUSE|
|m_szDescription|DESCRIPTION|

## <a name="collation"></a> CCollations, CCollationInfo

Call the typedef class `CCollations` to implement its parameter class `CCollationInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the character collations, defined in the catalog, that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [COLLATIONS Rowset](/previous-versions/windows/desktop/ms715783) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|COLLATION_CATALOG|
|m_szSchema|COLLATION_SCHEMA|
|m_szName|COLLATION_NAME|
|m_szCharSetCatalog|CHARACTER_SET_CATALOG|
|m_szCharSetSchema|CHARACTER_SET_SCHEMA|
|m_szCharSetName|CHARACTER_SET_NAME|
|m_szPadAttribute|PAD_ATTRIBUTE|

## <a name="columndomainusage"></a> CColumnDomainUsage, CColumnDomainUsageInfo

Call the typedef class `CColumnDomainUsage` to implement its parameter class `CColumnDomainUsageInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the columns, defined in the catalog, that are dependent on a domain defined in the catalog and owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [COLUMN_DOMAIN_USAGE Rowset](/previous-versions/windows/desktop/ms711240) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|DOMAIN_CATALOG|
|m_szSchema|DOMAIN_SCHEMA|
|m_szName|DOMAIN_NAME|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|

## <a name="columnprivilege"></a> CColumnPrivileges, CColumnPrivilegeInfo

Call the typedef class `CColumnPrivileges` to implement its parameter class `CColumnPrivilegeInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the privileges on columns of tables, defined in the catalog, that are available to or granted by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [COLUMN_PRIVILEGES Rowset](/previous-versions/windows/desktop/ms715800) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szGrantor|GRANTOR|
|m_szGrantee|GRANTEE|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_szPrivilegeType|PRIVILEGE_TYPE|
|m_bIsGrantable|IS_GRANTABLE|

## <a name="columns"></a> CColumns, CColumnsInfo

Call the typedef class `CColumns` to implement its parameter class `CColumnsInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the columns of tables defined in the catalog that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [COLUMNS Rowset](/previous-versions/windows/desktop/ms723052) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_nOrdinalPosition|ORDINAL_POSITION|
|m_bColumnHasDefault|COLUMN_HASDEFAULT|
|m_szColumnDefault|COLUMN_DEFAULT|
|m_nColumnFlags|COLUMN_FLAGS|
|m_bIsNullable|IS_NULLABLE|
|m_nDataType|DATA_TYPE|
|m_guidType|TYPE_GUID|
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|
|m_nOctetLength|CHARACTER_OCTET_LENGTH|
|m_nNumericPrecision|NUMERIC_PRECISION|
|m_nNumericScale|NUMERIC_SCALE|
|m_nDateTimePrecision|DATETIME_PRECISION|
|m_szCharSetCatalog|CHARACTER_SET_CATALOG|
|m_szCharSetSchema|CHARACTER_SET_SCHEMA|
|m_szCharSetName|CHARACTER_SET_NAME|
|m_szCollationCatalog|COLLATION_CATALOG|
|m_szCollationSchema|COLLATION_SCHEMA|
|m_szCollationName|COLLATION_NAME|
|m_szDomainCatalog|DOMAIN_CATALOG|
|m_szDomainSchema|DOMAIN_SCHEMA|
|m_szDomainName|DOMAIN_NAME|
|m_szDescription|DESCRIPTION|

## <a name="constraintcolumnusage"></a> CConstraintColumnUsage, CConstraintColumnUsageInfo

Call the typedef class `CConstraintColumnUsage` to implement its parameter class `CConstraintColumnUsageInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the columns used by referential constraints, unique constraints, check constraints, and assertions, defined in the catalog and owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [CONSTRAINT_COLUMN_USAGE Rowset](/previous-versions/windows/desktop/ms724522) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_szConstraintCatalog|CONSTRAINT_CATALOG|
|m_szConstraintSchema|CONSTRAINT_SCHEMA|
|m_szConstraintName|CONSTRAINT_NAME|

## <a name="constrainttableusage"></a> CConstraintTableUsage, CConstraintTableUsageInfo

Call the typedef class `CConstraintTableUsage` to implement its parameter class `CConstraintTableUsageInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the tables used by referential constraints, unique constraints, check constraints, and assertions, defined in the catalog and owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [CONSTRAINT_TABLE_USAGE Rowset](/previous-versions/windows/desktop/ms724522) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szConstraintCatalog|CONSTRAINT_CATALOG|
|m_szConstraintSchema|CONSTRAINT_SCHEMA|
|m_szConstraintName|CONSTRAINT_NAME|

## <a name="foreignkeys"></a> CForeignKeys, CForeignKeysInfo

Call the typedef class `CForeignKeys` to implement its parameter class `CForeignKeysInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the foreign key columns defined in the catalog by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [FOREIGN_KEYS Rowset](/previous-versions/windows/desktop/ms711276) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szPKTableCatalog|PK_TABLE_CATALOG|
|m_szPKTableSchema|PK_TABLE_SCHEMA|
|m_szPKTableName|PK_TABLE_NAME|
|m_szPKColumnName|PK_COLUMN_NAME|
|m_guidPKColumn|PK_COLUMN_GUID|
|m_nPKColumnPropID|PK_COLUMN_PROPID|
|m_szFKTableCatalog|FK_TABLE_CATALOG|
|m_szFKTableSchema|FK_TABLE_SCHEMA|
|m_szFKTableName|FK_TABLE_NAME|
|m_szFKColumnName|FK_COLUMN_NAME|
|m_guidFKColumn|FK_COLUMN_GUID|
|m_nFKColumnPropID|FK_COLUMN_PROPID|
|m_nOrdinal|ORDINAL|
|m_szUpdateRule|UPDATE_RULE|
|m_szDeleteRule|DELETE_RULE|

## <a name="index"></a> CIndexes, CIndexInfo

Call the typedef class `CIndexes` to implement its parameter class `CIndexInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the indexes, defined in the catalog, that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [INDEXES Rowset](/previous-versions/windows/desktop/ms709712) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szIndexCatalog|INDEX_CATALOG|
|m_szIndexSchema|INDEX_SCHEMA|
|m_szIndexName|INDEX_NAME|
|m_bPrimaryKey|PRIMARY_KEY|
|m_bUnique|UNIQUE|
|m_bClustered|CLUSTERED|
|m_nType|TYPE|
|m_nFillFactor|FILL_FACTOR|
|m_nInitialSize|INITIAL_SIZE|
|m_nNulls|NULLS|
|m_bSortBookmarks|SORT_BOOKMARKS|
|m_bAutoUpdate|AUTO_UPDATE|
|m_nNullCollation|NULL_COLLATION|
|m_nOrdinalPosition|ORDINAL_POSITION|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_nCollation|COLLATION|
|m_nCardinality|CARDINALITY|
|m_nPages|PAGES|
|m_szFilterCondition|FILTER_CONDITION|

## <a name="keycolumn"></a> CKeyColumns, CKeyColumnInfo

Call the typedef class `CKeyColumns` to implement its parameter class `CKeyColumnInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the columns, defined in the catalog, that are constrained as keys by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [KEY_COLUMN_USAGE Rowset](/previous-versions/windows/desktop/ms712990) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szConstraintCatalog|CONSTRAINT_CATALOG|
|m_szConstraintSchema|CONSTRAINT_SCHEMA|
|m_szConstraintName|CONSTRAINT_NAME|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_nOrdinalPosition|ORDINAL_POSITION|

## <a name="primarykey"></a> CPrimaryKeys, CPrimaryKeyInfo

Call the typedef class `CPrimaryKeys` to implement its parameter class `CPrimaryKeyInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the primary key columns defined in the catalog by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [PRIMARY_KEYS Rowset](/previous-versions/windows/desktop/ms714362) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_nOrdinal|ORDINAL|

## <a name="procedurecolumn"></a> CProcedureColumns, CProcedureColumnInfo

Call the typedef class `CProcedureColumns` to implement its parameter class `CProcedureColumnInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class returns information about the columns of rowsets returned by procedures.

The following table lists the class data members and their corresponding OLE DB Columns. See [PROCEDURE_COLUMNS Rowset](/previous-versions/windows/desktop/ms723092) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|PROCEDURE_CATALOG|
|m_szSchema|PROCEDURE_SCHEMA|
|m_szName|PROCEDURE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|
|m_nRowsetNumber|ROWSET_NUMBER|
|m_nOrdinalPosition|ORDINAL_POSITION|
|m_bIsNullable|IS_NULLABLE|
|m_nDataType|DATA_TYPE|
|m_guidType|TYPE_GUID|
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|
|m_nOctetLength|CHARACTER_OCTET_LENGTH|
|m_nPrecision|NUMERIC_PRECISION|
|m_nScale|NUMERIC_SCALE|
|m_szDescription|DESCRIPTION|

## <a name="procedureparam"></a> CProcedureParameters CProcedureParamInfo

Call the typedef class `CProcedureParameters` to implement its parameter class `CProcedureParamInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class returns information about the parameters and return codes of procedures.

The following table lists the class data members and their corresponding OLE DB Columns. See [PROCEDURE_PARAMETERS Rowset](/previous-versions/windows/desktop/ms713623) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|PROCEDURE_CATALOG|
|m_szSchema|PROCEDURE_SCHEMA|
|m_szName|PROCEDURE_NAME|
|m_szParameterName|PARAMETER_NAME|
|m_nOrdinalPosition|ORDINAL_POSITION|
|m_nType|PARAMETER_TYPE|
|m_bHasDefault|PARAMETER_HASDEFAULT|
|m_szDefault|PARAMETER_DEFAULT|
|m_bIsNullable|IS_NULLABLE|
|m_nDataType|DATA_TYPE|
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|
|m_nOctetLength|CHARACTER_OCTET_LENGTH|
|m_nPrecision|NUMERIC_PRECISION|
|m_nScale|NUMERIC_SCALE|
|m_szDescription|DESCRIPTION|

## <a name="procedure"></a> CProcedures, CProcedureInfo

Call the typedef class `CProcedures` to implement its parameter class `CProcedureInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the procedures, defined in the catalog, that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [PROCEDURES Rowset](/previous-versions/windows/desktop/ms724021) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|PROCEDURE_CATALOG|
|m_szSchema|PROCEDURE_SCHEMA|
|m_szName|PROCEDURE_NAME|
|m_nType|PROCEDURE_TYPE|
|m_szDefinition|PROCEDURE_DEFINITION|
|m_szDescription|DESCRIPTION|

## <a name="provider"></a> CProviderTypes, CProviderInfo

Call the typedef class `CProviderTypes` to implement its parameter class `CProviderInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the (base) data types supported by the data provider.

The following table lists the class data members and their corresponding OLE DB Columns. See [PROVIDER_TYPES Rowset](/previous-versions/windows/desktop/ms709785) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTypeName|TYPE_NAME|
|m_nDataType|DATA_TYPE|
|m_nColumnSize|COLUMN_SIZE|
|m_szLiteralPrefix|LITERAL_PREFIX|
|m_szLiteralSuffix|LITERAL_SUFFIX|
|m_szCreateParams|CREATE_PARAMS|
|m_bIsNullable|IS_NULLABLE|
|m_bCaseSensitive|CASE_SENSITIVE|
|m_nSearchable|SEARCHABLE|
|m_bUnsignedAttribute|UNSIGNED_ATTRIBUTE|
|m_bFixedPrecScale|FIXED_PREC_SCALE|
|m_bAutoUniqueValue|AUTO_UNIQUE_VALUE|
|m_szLocalTypeName|LOCAL_TYPE_NAME|
|m_nMinScale|MINIMUM_SCALE|
|m_nMaxScale|MAXIMUM_SCALE|
|m_guidType|GUID|
|m_szTypeLib|TYPELIB|
|m_szVersion|VERSION|
|m_bIsLong|IS_LONG|
|m_bBestMatch|BEST_MATCH|

## <a name="referentialconstraint"></a> CReferentialConstraints, CReferentialConstraintInfo

Call the typedef class `CReferentialConstraints` to implement its parameter class `CReferentialConstraintInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the referential constraints, defined in the catalog, that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [REFERENTIAL_CONSTRAINTS Rowset](/previous-versions/windows/desktop/ms719737) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CONSTRAINT_CATALOG|
|m_szSchema|CONSTRAINT_SCHEMA|
|m_szName|CONSTRAINT_NAME|
|m_szUniqueCatalog|UNIQUE_CONSTRAINT_CATALOG|
|m_szUniqueSchema|UNIQUE_CONSTRAINT_SCHEMA|
|m_szUniqueName|UNIQUE_CONSTRAINT_NAME|
|m_szMatchOption|MATCH_OPTION|
|m_szUpdateRule|UPDATE_RULE|
|m_szDeleteRule|DELETE_RULE|
|m_szDescription|DESCRIPTION|

## <a name="schemata"></a> CSchemata, CSchemataInfo

Call the typedef class `CSchemata` to implement its parameter class `CSchemataInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the schemas that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [SCHEMATA Rowset](/previous-versions/windows/desktop/ms716887) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CATALOG_NAME|
|m_szName|SCHEMA_NAME|
|m_szOwner|SCHEMA_OWNER|
|m_szCharCatalog|DEFAULT_CHARACTER_SET_CATALOG|
|m_szCharSchema|DEFAULT_CHARACTER_SET_SCHEMA|
|m_szCharName|DEFAULT_CHARACTER_SET_NAME|

## <a name="sqllanguage"></a> CSQLLanguages, CSQLLanguageInfo

Call the typedef class `CSQLLanguages` to implement its parameter class `CSQLLanguageInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the conformance levels, options, and dialects supported by the SQL-implementation processing data defined in the catalog.

The following table lists the class data members and their corresponding OLE DB Columns. See [SQL_LANGUAGES Rowset](/previous-versions/windows/desktop/ms714374) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szSource|SQL_LANGUAGE_SOURCE|
|m_szYear|SQL_LANGUAGE_YEAR|
|m_szConformance|SQL_LANGUAGE_CONFORMANCE|
|m_szIntegrity|SQL_LANGUAGE_INTEGRITY|
|m_szImplementation|SQL_LANGUAGE_IMPLEMENTATION|
|m_szBindingStyle|SQL_LANGUAGE_BINDING_STYLE|
|m_szProgrammingLanguage|SQL_LANGUAGE_PROGRAMMING_LANGUAGE|

## <a name="statistic"></a> CStatistics, CStatisticInfo

Call the typedef class `CStatistics` to implement its parameter class `CStatisticInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the statistics, defined in the catalog, that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [STATISTICS Rowset](/previous-versions/windows/desktop/ms715957) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_nCardinality|CARDINALITY|

## <a name="tableconstraint"></a> CTableConstraints, CTableConstraintInfo

Call the typedef class `CTableConstraints` to implement its parameter class `CTableConstraintInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the table constraints, defined in the catalog, that are owned by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [TABLE_CONSTRAINTS Rowset](/previous-versions/windows/desktop/ms715921) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|CONSTRAINT_CATALOG|
|m_szSchema|CONSTRAINT_SCHEMA|
|m_szName|CONSTRAINT_NAME|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szType|CONSTRAINT_TYPE|
|m_bIsDeferrable|IS_DEFERRABLE|
|m_bInitiallyDeferred|INITIALLY_DEFERRED|
|m_szDescription|DESCRIPTION|

## <a name="tableprivilege"></a> CTablePrivileges, CTablePrivilegeInfo

Call the typedef class `CTablePrivileges` to implement its parameter class `CTablePrivilegeInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the tables defined in the catalog that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [TABLE_PRIVILEGES Rowset](/previous-versions/windows/desktop/ms725428) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szGrantor|GRANTOR|
|m_szGrantee|GRANTEE|
|m_szCatalog|TABLE_CATALOG|
|m_szSchema|TABLE_SCHEMA|
|m_szName|TABLE_NAME|
|m_szType|PRIVILEGE_TYPE|
|m_bIsGrantable|IS_GRANTABLE|

## <a name="table"></a> CTables, CTableInfo

Call the typedef class `CTables` to implement its parameter class `CTableInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the privileges on tables, defined in the catalog, that are available to or granted by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [TABLES Rowset](/previous-versions/windows/desktop/ms716980) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|TABLE_CATALOG|
|m_szSchema|TABLE_SCHEMA|
|m_szName|TABLE_NAME|
|m_szType|TABLE_TYPE|
|m_guidTable|TABLE_GUID|
|m_szDescription|DESCRIPTION|

## <a name="translation"></a> CTranslations, CTranslationInfo

Call the typedef class `CTranslations` to implement its parameter class `CTranslationInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the character translations defined in the catalog that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [TRANSLATIONS Rowset](/previous-versions/windows/desktop/ms725365) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|TRANSLATION_CATALOG|
|m_szSchema|TRANSLATION_SCHEMA|
|m_szName|TRANSLATION_NAME|
|m_szSourceCatalog|SOURCE_CHARACTER_SET_CATALOG|
|m_szSourceSchema|SOURCE_CHARACTER_SET_SCHEMA|
|m_szSourceName|SOURCE_CHARACTER_SET_NAME|
|m_szTargetCatalog|TARGET_CHARACTER_SET_CATALOG|
|m_szTargetSchema|TARGET_CHARACTER_SET_SCHEMA|
|m_szTargetName|TARGET_CHARACTER_SET_NAME|

## <a name="usageprivilege"></a> CUsagePrivileges, CUsagePrivilegeInfo

Call the typedef class `CUsagePrivileges` to implement its parameter class `CUsagePrivilegeInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the USAGE privileges on objects defined in the catalog that are available to or granted by a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [USAGE_PRIVILEGES Rowset](/previous-versions/windows/desktop/ms722743) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szGrantor|GRANTOR|
|m_szGrantee|GRANTEE|
|m_szObjectCatalog|OBJECT_CATALOG|
|m_szObjectSchema|OBJECT_SCHEMA|
|m_szObjectName|OBJECT_NAME|
|m_szObjectType|OBJECT_TYPE|
|m_szPrivilegeType|PRIVILEGE_TYPE|
|m_bIsGrantable|IS_GRANTABLE|

## <a name="viewcolumn"></a> CViewColumnUsage, CViewColumnInfo

Call the typedef class `CViewColumnUsage` to implement its parameter class `CViewColumnInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the columns on which viewed tables, defined in the catalog and owned by a given user, are dependent.

The following table lists the class data members and their corresponding OLE DB Columns. See [VIEW_COLUMN_USAGE Rowset](/previous-versions/windows/desktop/ms714896) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|VIEW_CATALOG|
|m_szSchema|VIEW_SCHEMA|
|m_szName|VIEW_NAME|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szColumnName|COLUMN_NAME|
|m_guidColumn|COLUMN_GUID|
|m_nColumnPropID|COLUMN_PROPID|

## <a name="view"></a> CViews, CViewInfo

Call the typedef class `CViews` to implement its parameter class `CViewInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the tables on which viewed tables, defined in the catalog and owned by a given user, are dependent.

The following table lists the class data members and their corresponding OLE DB Columns. See [VIEWS Rowset](/previous-versions/windows/desktop/ms723122) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|
|m_szDefinition|VIEW_DEFINITION|
|m_bCheckOption|CHECK_OPTION|
|m_bIsUpdatable|IS_UPDATABLE|
|m_szDescription|DESCRIPTION|

## <a name="viewtable"></a> CViewTableUsage, CViewTableInfo

Call the typedef class `CViewTableUsage` to implement its parameter class `CViewTableInfo`.

### Remarks

See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.

This class identifies the viewed tables, defined in the catalog, that are accessible to a given user.

The following table lists the class data members and their corresponding OLE DB Columns. See [VIEW_TABLE_USAGE Rowset](/previous-versions/windows/desktop/ms719727) in the *OLE DB Programmer's Reference* for more information about the schema and columns.

|Data members|OLE DB columns|
|------------------|--------------------|
|m_szCatalog|VIEW_CATALOG|
|m_szSchema|VIEW_SCHEMA|
|m_szName|VIEW_NAME|
|m_szTableCatalog|TABLE_CATALOG|
|m_szTableSchema|TABLE_SCHEMA|
|m_szTableName|TABLE_NAME|

## Requirements

**Header:** atldbsch.h

## See Also

[CRestrictions Class](../../data/oledb/crestrictions-class.md)