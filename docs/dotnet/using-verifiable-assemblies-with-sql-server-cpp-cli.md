---
description: "Learn more about: Using Verifiable Assemblies with SQL Server (C++/CLI)"
title: "Using Verifiable Assemblies with SQL Server (C++/CLI)"
ms.date: "10/17/2018"
helpviewer_keywords: ["verifiable assemblies [C++], with SQL Server"]
ms.assetid: 5248a60d-aa88-4ff3-b30a-b791c3ea2de9
---
# Using Verifiable Assemblies with SQL Server (C++/CLI)

Extended stored procedures, packaged as dynamic-link libraries (DLLs), provide a way to extend SQL Server functionality through functions developed with Visual C++. Extended stored procedures are implemented as functions inside DLLs. In addition to functions, extended stored procedures can also define [user-defined types](../cpp/classes-and-structs-cpp.md) and aggregate functions (such as SUM or AVG).

When a client executes an extended stored procedure, SQL Server searches for the DLL associated with the extended stored procedure and loads the DLL. SQL Server calls the requested extended stored procedure and executes it under a specified security context. The extended stored procedure then passes result sets and returns parameters back to the server.

SQL Server provides extensions to Transact-SQL (T-SQL) to allow you to install verifiable assemblies into SQL Server. The SQL Server permission set specifies the security context, with the following levels of security:

- Unrestricted mode: Run code at your own risk; code does not have to be verifiably type-safe.

- Safe mode: Run verifiably typesafe code; compiled with /clr:safe.

> [!IMPORTANT]
> Visual Studio 2015 deprecated and Visual Studio 2017 does not support the **/clr:pure** and **/clr:safe** creation of verifiable projects. If you require verifiable code, we recommend you translate your code to C#.

To create and load a verifiable assembly into SQL Server, use the Transact-SQL commands CREATE ASSEMBLY and DROP ASSEMBLY as follows:

```sql
CREATE ASSEMBLY <assemblyName> FROM <'Assembly UNC Path'> WITH
  PERMISSION_SET <permissions>
DROP ASSEMBLY <assemblyName>
```

The PERMISSION_SET command specifies the security context, and can have the values UNRESTRICTED, SAFE, or EXTENDED.

In addition, you can use the CREATE FUNCTION command to bind to method names in a class:

```sql
CREATE FUNCTION <FunctionName>(<FunctionParams>)
RETURNS returnType
[EXTERNAL NAME <AssemblyName>:<ClassName>::<StaticMethodName>]
```

## Example

The following SQL script (for example, named "MyScript.sql") loads an assembly into SQL Server and makes a method of a class available:

```sql
-- Create assembly without external access
drop assembly stockNoEA
go
create assembly stockNoEA
from
'c:\stockNoEA.dll'
with permission_set safe

-- Create function on assembly with no external access
drop function GetQuoteNoEA
go
create function GetQuoteNoEA(@sym nvarchar(10))
returns real
external name stockNoEA:StockQuotes::GetQuote
go

-- To call the function
select dbo.GetQuoteNoEA('MSFT')
go
```

SQL scripts can be executed interactively in SQL Query Analyzer or at the command line with the sqlcmd.exe utility. The following command line connects to MyServer, uses the default database, uses a trusted connection, inputs MyScript.sql, and outputs MyResult.txt.

```cmd
sqlcmd -S MyServer -E -i myScript.sql -o myResult.txt
```

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)
