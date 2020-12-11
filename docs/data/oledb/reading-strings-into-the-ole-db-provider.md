---
description: "Learn more about: Reading Strings into the OLE DB Provider"
title: "Reading Strings into the OLE DB Provider"
ms.date: "10/13/2018"
helpviewer_keywords: ["OLE DB providers, reading strings into"]
ms.assetid: 517f322c-f37e-4eed-bf5e-dd9a412c2f98
---
# Reading Strings into the OLE DB Provider

The `CCustomRowset::Execute` function opens a file and reads strings. The consumer passes the file name to the provider by calling [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)). The provider receives the file name and stores it in the member variable `m_strCommandText`. `Execute` reads the file name from `m_strCommandText`. If the file name is invalid or the file is unavailable, `Execute` returns an error. Otherwise, it opens the file and calls `fgets` to retrieve the strings. For each set of strings it reads, `Execute` creates an instance of the user record (modified `CCustomWindowsFile` from [Storing Strings in the OLE DB Provider](../../data/oledb/storing-strings-in-the-ole-db-provider.md)) and places it into an array.

If the file can't be opened, `Execute` must return DB_E_NOTABLE. If it returns E_FAIL instead, the provider won't work with many consumers and won't pass the OLE DB [conformance tests](../../data/oledb/testing-your-provider.md).

## Example

```cpp
/////////////////////////////////////////////////////////////////////////
// CustomRS.h
class CCustomRowset : public CRowsetImpl< CCustomRowset, CCustomWindowsFile, CCustomCommand>
{
public:
    HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)
    {
        enum {
            sizeOfBuffer = 256,
            sizeOfFile = MAX_PATH
        };
        USES_CONVERSION;
        FILE* pFile = NULL;
        TCHAR szString[sizeOfBuffer];
        TCHAR szFile[sizeOfFile];
        size_t nLength;

        ObjectLock lock(this);

        // From a filename, passed in as a command text, scan the file
        // placing data in the data array.
        if (!m_strCommandText)
        {
            ATLTRACE("No filename specified");
            return E_FAIL;
        }

        // Open the file
        _tcscpy_s(szFile, sizeOfFile, m_strCommandText);
        if (szFile[0] == _T('\0') ||
            (fopen_s(&pFile, (char*)&szFile[0], "r") == 0))
        {
            ATLTRACE("Could not open file");
            return DB_E_NOTABLE;
        }

        // Scan and parse the file.
        // The file should contain two strings per record
        LONG cFiles = 0;
        while (fgets((char*)szString, sizeOfBuffer, pFile) != NULL)
        {
            nLength = strnlen((char*)szString, sizeOfBuffer);
            szString[nLength-1] = '\0';   // Strip off trailing CR/LF
            CCustomWindowsFile am;
            _tcscpy_s(am.szCommand, am.iSize, szString);
            _tcscpy_s(am.szCommand2, am.iSize, szString);

            if (fgets((char*)szString, sizeOfBuffer, pFile) != NULL)
            {
                nLength = strnlen((char*)szString, sizeOfBuffer);
                szString[nLength-1] = '\0'; // Strip off trailing CR/LF
                _tcscpy_s(am.szText, am.iSize, szString);
                _tcscpy_s(am.szText2, am.iSize, szString);
            }

            am.dwBookmark = ++cFiles;
            if (!m_rgRowData.Add(am))
            {
                ATLTRACE("Couldn't add data to array");
                fclose(pFile);
                return E_FAIL;
            }
        }

        if (pcRowsAffected != NULL)
            *pcRowsAffected = cFiles;
        return S_OK;
    }
};
```

When this is done, your provider should be ready to compile and run. To test the provider, you need a consumer with matching functionality. [Implementing a Simple Consumer](../../data/oledb/implementing-a-simple-consumer.md) shows how to create such a test consumer. Run the test consumer with the provider and verify that the test consumer retrieves the proper strings from the provider.

When you've successfully tested your provider, you might want to enhance its functionality by implementing additional interfaces. An example is shown in [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md).

## See also

[Implementing the Simple Read-Only Provider](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
