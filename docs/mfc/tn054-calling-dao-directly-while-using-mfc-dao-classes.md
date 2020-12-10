---
description: "Learn more about: TN054: Calling DAO Directly While Using MFC DAO Classes"
title: "TN054: Calling DAO Directly While Using MFC DAO Classes"
ms.date: "09/17/2019"
helpviewer_keywords: ["MFC, DAO and", "passwords [MFC], calling DAO", "security [MFC], DAO", "DAO (Data Access Objects), calling directly", "DAO (Data Access Objects), security", "security [MFC]", "TN054", "DAO (Data Access Objects), and MFC"]
ms.assetid: f7de7d85-8d6c-4426-aa05-2e617c0da957
---
# TN054: Calling DAO Directly While Using MFC DAO Classes

> [!NOTE]
> DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete. The Visual C++ environment and wizards do not support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use [OLE DB Templates](../data/oledb/ole-db-templates.md) or [ODBC and MFC](../data/odbc/odbc-and-mfc.md) for new projects. You should only use DAO in maintaining existing applications.

When using the MFC DAO database classes, there may be situations where it is necessary to use DAO directly. Usually, this will not be the case, but MFC has provided some helper mechanisms to facilitate making direct DAO calls simple when combining the use of the MFC classes with direct DAO calls. Making direct DAO calls to the methods of an MFC-managed DAO object should require only a few lines of code. If you need to create and use DAO objects that are *not* managed by MFC, you will have to do a little more work by actually calling `Release` on the object. This technical note explains when you might want to call DAO directly, what the MFC helpers can do to help you, and how to use the DAO OLE interfaces. Finally, this note provides some sample functions showing how to call DAO directly for DAO security features.

## When to Make Direct DAO Calls

The most common situations for making direct DAO calls occur when collections need to be refreshed or when you are implementing features not wrapped by MFC. The most significant feature not exposed by MFC is security. If you want to implement security features, you will need to use the DAO User(s) and Group(s) objects directly. Besides security, there are only a few other DAO features not supported by MFC. These include recordset cloning and database replication features as well as a few late additions to DAO.

## A Brief Overview of DAO and MFC's Implementation

MFC's wrapping of DAO makes using DAO easier by handling many of the details so you do not have to worry about the little things. This includes the initialization of OLE, the creation and management of the DAO objects (especially the collection objects), error checking, and providing a strongly typed, simpler interface (no **VARIANT** or `BSTR` arguments). You can make direct DAO calls and still take advantage of these features. All your code must do is call `Release` for any objects created by direct DAO calls and *not* modify any of the interface pointers that MFC may rely on internally. For example, do not modify the *m_pDAORecordset* member of an open `CDaoRecordset` object unless you understand *all* the internal ramifications. You could, however, use the *m_pDAORecordset* interface to call DAO directly to get the Fields collection. In this case the *m_pDAORecordset* member would not be modified. You simply have to call `Release` on the Fields collection object when you are finished with the object.

## Description of Helpers to Make DAO Calls Easier

The helpers provided to make calling DAO easier are the same helpers that are used internally in the MFC DAO Database classes. These helpers are used to check the return codes when making a direct DAO call, logging debug output, checking for expected errors, and throwing appropriate exceptions if necessary. There are two underlying helper functions and four macros that map to one of these two helpers. The best explanation would be to simply read the code. See **DAO_CHECK**, **DAO_CHECK_ERROR**, **DAO_CHECK_MEM**, and **DAO_TRACE** in AFXDAO.H to see the macros, and see **AfxDaoCheck** and **AfxDaoTrace** in DAOCORE.CPP.

## Using the DAO OLE Interfaces

The OLE interfaces for each object in the DAO object hierarchy are defined in the header file DBDAOINT.H, which is found in the \Program Files\Microsoft Visual Studio .NET 2003\VC7\include directory. These interfaces provide methods that allow you to manipulate the entire DAO hierarchy.

For many of the methods in the DAO interfaces, you will need to manipulate a `BSTR` object (a length-prefixed string used in OLE automation). The `BSTR` object typically is encapsulated within the **VARIANT** data type. The MFC class `COleVariant` itself inherits from the **VARIANT** data type. Depending on whether you build your project for ANSI or Unicode, the DAO interfaces will return ANSI or Unicode `BSTR`s. Two macros, V_BSTR and V_BSTRT, are useful for assuring that the DAO interface gets the `BSTR` of the expected type.

V_BSTR will extract the *bstrVal* member of a `COleVariant`. This macro is typically used when you need to pass the contents of a `COleVariant` to a method of a DAO interface. The following code fragment shows both the declarations and actual use for two methods of the DAO DAOUser interface that take advantage of the V_BSTR macro:

```cpp
COleVariant varOldName;
COleVariant varNewName(_T("NewUser"), VT_BSTRT);

// Code to assign pUser to a valid value omitted DAOUser *pUser = NULL;

// These method declarations were taken from DBDAOINT.H
// STDMETHOD(get_Name) (THIS_ BSTR FAR* pbstr) PURE;
// STDMETHOD(put_Name) (THIS_ BSTR bstr) PURE;
DAO_CHECK(pUser->get_Name(&V_BSTR (&varOldName)));
DAO_CHECK(pUser->put_Name(V_BSTR (&varNewName)));
```

Note that the `VT_BSTRT` argument specified in the `COleVariant` constructor above ensures that there will be an ANSI `BSTR` in the `COleVariant` if you build an ANSI version of your application and a Unicode `BSTR` for a Unicode version of your application. This is what DAO expects.

The other macro, V_BSTRT, will extract either an ANSI or Unicode *bstrVal* member of `COleVariant` depending on the type of build (ANSI or Unicode). The following code demonstrates how to extract the `BSTR` value from a `COleVariant` into a `CString`:

```cpp
COleVariant varName(_T("MyName"), VT_BSTRT);
CString str = V_BSTRT(&varName);
```

The V_BSTRT macro, along with other techniques to open other types that are stored in `COleVariant`, is demonstrated in the DAOVIEW sample. Specifically, this translation is performed in the `CCrack::strVARIANT` method. This method, where possible, translates the value of a `COleVariant` into an instance of `CString`.

## Simple Example of a Direct Call to DAO

Situations may arise when it is necessary to refresh the underlying DAO collection objects. Normally, this should not be necessary, but it is a simple procedure if it is necessary. An example of when a collection might need to be refreshed is when operating in a multiuser environment with multiple users creating new tabledefs. In this case your tabledefs collection might become stale. To refresh the collection, you simply need to call the `Refresh` method of the particular collection object and check for errors:

```cpp
DAO_CHECK(pMyDaoDatabase->m_pDAOTableDefs->Refresh());
```

Note that currently all DAO collection object interfaces are undocumented implementation details of the MFC DAO database classes.

## Using DAO Directly for DAO Security Features

The MFC DAO database classes do not wrap DAO security features. You must call methods of DAO interfaces to use some DAO security features. The following function sets the system database and then changes the user's password. This function calls three other functions, which are subsequently defined.

```cpp
void ChangeUserPassword()
{
    // Specify path to the Microsoft Access *// system database
    CString strSystemDB =
        _T("c:\\Program Files\\MSOffice\\access\\System.mdw");

    // Set system database before MFC initilizes DAO
    // NOTE: An MFC module uses only one instance
    // of a DAO database engine object. If you have
    // called a DAO object in your application prior
    // to calling the function below, you must call
    // AfxDaoTerm to destroy the existing database
    // engine object. Otherwise, the database engine
    // object already in use will be reused, and setting
    // a system datbase will have no effect.
    //
    // If you have used a DAO object prior to calling
    // this function it is important that DAO be
    // terminated with AfxDaoTerm since an MFC
    // module only gets one copy of the database engine
    // and that engine will be reused if it hasn't been
    // terminated. In other words, if you do not call
    // AfxDaoTerm and there is currently a database
    // initialized, setting the system database will
    // have no effect.
    SetSystemDB(strSystemDB);

    // User name and password manually added
    // by using Microsoft Access
    CString strUserName = _T("NewUser");
    CString strOldPassword = _T("Password");
    CString strNewPassword = _T("NewPassword");

    // Set default user so that MFC will be able
    // to log in by default using the user name and
    // password from the system database
    SetDefaultUser(strUserName, strOldPassword);

    // Change the password. You should be able to
    // call this function from anywhere in your
    // MFC application
    ChangePassword(strUserName, strOldPassword, strNewPassword);

    // ...
}
```

The next four examples demonstrate how to:

- Set the system DAO database (.MDW file).

- Set the default user and password.

- Change the password of a user.

- Change the password of an .MDB file.

### Setting the System Database

Below is a sample function to set the system database that will be used by an application. This function must be called before any other DAO calls are made.

```cpp
// Set the system database that the
// DAO database engine will use

void SetSystemDB(CString& strSystemMDB)
{
    COleVariant varSystemDB(strSystemMDB, VT_BSTRT);

    // Initialize DAO for MFC
    AfxDaoInit();
    DAODBEngine* pDBEngine = AfxDaoGetEngine();

    ASSERT(pDBEngine != NULL);

    // Call put_SystemDB method to set the *// system database for DAO engine
    DAO_CHECK(pDBEngine->put_SystemDB(varSystemDB.bstrVal));
}
```

### Setting the Default User and Password

To set the default user and password for a system database, use the following function:

```cpp
void SetDefaultUser(CString& strUserName,
    CString& strPassword)
{
    COleVariant varUserName(strUserName, VT_BSTRT);
    COleVariant varPassword(strPassword, VT_BSTRT);

    DAODBEngine* pDBEngine = AfxDaoGetEngine();
    ASSERT(pDBEngine != NULL);

    // Set default user:
    DAO_CHECK(pDBEngine->put_DefaultUser(varUserName.bstrVal));

    // Set default password:
    DAO_CHECK(pDBEngine->put_DefaultPassword(varPassword.bstrVal));
}
```

### Changing a User's Password

To change a user's password, use the following function:

```cpp
void ChangePassword(CString &strUserName,
    CString &strOldPassword,
    CString &strNewPassword)
{
    // Create (open) a workspace
    CDaoWorkspace wsp;
    CString strWspName = _T("Temp Workspace");

    wsp.Create(strWspName, strUserName, strOldPassword);
    wsp.Append();

    // Determine how many objects there are *// in the Users collection
    short nUserCount;
    short nCurrentUser;
    DAOUser *pUser = NULL;
    DAOUsers *pUsers = NULL;

    // Side-effect is implicit OLE AddRef()
    // on DAOUser object:
    DAO_CHECK(wsp.m_pDAOWorkspace->get_Users(&pUsers));

    // Side-effect is implicit OLE AddRef()
    // on DAOUsers object
    DAO_CHECK(pUsers->getcount(&nUserCount));

    // Traverse through the list of users
    // and change password for the userid
    // used to create/open the workspace
    for(nCurrentUser = 0; nCurrentUser <nUserCount; nCurrentUser++)
    {
        COleVariant varIndex(nCurrentUser, VT_I2);
        COleVariant varName;

        // Retrieve information for user nCurrentUser
        DAO_CHECK(pUsers->get_Item(varIndex, &pUser));

        // Retrieve name for user nCurrentUser
        DAO_CHECK(pUser->get_Name(&V_BSTR(&varName)));

        CString strTemp = V_BSTRT(&varName);

        // If there is a match, change the password
        if (strTemp == strUserName)
        {
            COleVariant varOldPwd(strOldPassword, VT_BSTRT);
            COleVariant varNewPwd(strNewPassword, VT_BSTRT);

            DAO_CHECK(pUser->NewPassword(V_BSTR(&varOldPwd),
                V_BSTR(&varNewPwd)));

            TRACE("\t Password is changed\n");
        }
    }
    // Clean up: decrement the usage count
    // on the OLE objects
    pUser->Release();
    pUsers->Release();
    wsp.Close();
}
```

### Changing the Password of an .MDB File

To change the password of an .MDB file, use the following function:

```cpp
void SetDBPassword(LPCTSTR pDB,
    LPCTSTR pszOldPassword,
    LPCTSTR pszNewPassword)
{
    CDaoDatabase db;
    CString strConnect(_T(";pwd="));

    // the database must be opened as exclusive
    // to set a password
    db.Open(pDB, TRUE, FALSE, strConnect + pszOldPassword);

    COleVariant NewPassword(pszNewPassword, VT_BSTRT),
                OldPassword(pszOldPassword, VT_BSTRT);

    DAO_CHECK(db.m_pDAODatabase->NewPassword(V_BSTR(&OldPassword),
        V_BSTR(&NewPassword)));

    db.Close();
}
```

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
