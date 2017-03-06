---
layout: LandingPage
title: Data Access in Visual C++
---
# Data Access in Visual C++

Virtually all database products, SQL and NoSQL, provide an interface for native C++ applications. The industry standard interface is ODBC which is supported by all major SQL database products and many NoSQL products. For non-Microsoft products, consult the vendor for more information. Third-party libraries with various license terms are also available.

Since 2011 Microsoft has aligned on ODBC as the standard for native applications to connecting to Microsoft SQL Server databases, both on-premises and in the cloud. For more information, see [Data Access Programming \(MFC-ATL\)](data-access-programming-mfc-atl.md). C++/CLI libraries can use either the native ODBC drivers or ADO.NET. For more information, see [Data Access Using ADO.NET (C++/CLI)](/dotnet/data-access-using-adonet-cpp-cli.md) and [Accessing data in Visual Studio](https://docs.microsoft.com/visualstudio/data-tools/accessing-data-in-visual-studio).

<ul class="panelContent cardsF">
<li>
        <a href="/azure/sql-database/sql-database-develop-cplusplus-simple">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/azure/media/index/SQLDatabase.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Connect to SQL Database using C and C++</h3>
                        <p>Connect to Azure SQL Database from C or C++ applications</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://github.com/Azure/azure-storage-cpp">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/azure/media/index/Storage.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Microsoft Azure Storage Client Library for C++</h3>
                        <p>[Azure Storage](/azure/storage/storage-introduction) is a cloud storage solution for modern applications that rely on durability, availability, and scalability to meet the needs of their customers. Connect to Azure Storage from C++ by using the Azure Storage Client Library for C++.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://blogs.msdn.microsoft.com/sqlnativeclient/2016/08/01/announcing-the-odbc-driver-13-1-for-sql-server/">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_drivers.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>ODBC Driver 13.1 for SQL Server – Windows Released</h3>
                        <p>The latest ODBC driver provides robust data access to Microsoft SQL Server 2016 Microsoft Azure SQL Database for C/C++ based applications. Provides support for features including always encrypted, Azure Active Directory, and AlwaysOn Availability Groupsi. Also available for MacOS and Linux.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://msdn.microsoft.com/library/ms130892.aspx">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_api.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>SQL Server Native Client</h3>
                        <p>SQL Server Native Client is a stand-alone data access application programming interface (API), used for both OLE DB and ODBC, that supports SQL Server 2005 through SQL Server 2014. New applications should use the ODBC Driver 13.1 for SQL Server.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/data-access-programming-mfc-atl">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_api.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Data Access Programming</h3>
                        <p>Describes legacy data access programming with Visual C++, where the preferred way is to use one of the class libraries such as the Active Template Class Library (ATL) or Microsoft Foundation Class (MFC) Library, which simplify working with the database APIs.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/odbc/open-database-connectivity-odbc">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_multi-connect.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Open Database Connectivity (ODBC)</h3>
                        <p>The Microsoft Foundation Classes (MFC) library supplies classes for programming with Open Database Connectivity (ODBC).</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/oledb/ole-db-programming">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_generic-database.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>OLE DB Programming</h3>
                        <p>Provides links to conceptual topics discussing OLE DB database technology and the OLE DB Template Library. (OLE DB is not recommended for new applications except in scenarios involving linked servers.)</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    
</ul>

---

<h2>Reference</h2>

<ul class="panelContent cardsW">
 <li>
        <a href="https://azure.microsoft.com/develop/cpp/">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>Microsoft Azure C and C++ Developer Center</h3>
                        <p>Azure makes it easy to build C++ applications with increased flexibility, scalability and reliability using tools you love.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://docs.microsoft.com/azure/storage/storage-c-plus-plus-how-to-use-blobs">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>How to use Blob Storage from C++</h3>
                        <p>Azure Blob storage is a service that stores unstructured data in the cloud as objects/blobs. Blob storage can store any type of text or binary data, such as a document, media file, or application installer. Blob storage is also referred to as object storage.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://docs.microsoft.com/sql/odbc/reference/odbc-programmer-s-reference">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>ODBC Programmer's Reference</h3>
                        <p>The ODBC interface is designed for use with the C programming language. Use of the ODBC interface spans three areas: SQL statements, ODBC function calls, and C programming.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3><a href="https://www.microsoft.com/download/details.aspx?id=53339" title="Microsoft® ODBC Driver 13.1 for SQL Server® - Windows Download Page">ODBC Driver 13.1 for SQL Server</a></h3>
                    </div>
                </div>
            </div>
        </div>        
    </li>
    
</ul>