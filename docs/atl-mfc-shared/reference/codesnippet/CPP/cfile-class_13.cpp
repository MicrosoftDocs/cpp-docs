            TCHAR* pOldName = _T("Oldname_File.dat");
            TCHAR* pNewName = _T("Renamed_File.dat");

            try
            {
                CFile::Rename(pOldName, pNewName);
            }
            catch(CFileException* pEx )
            {
                TRACE(_T("File %20s not found, cause = %d\n"), pOldName, 
                   pEx->m_cause);
                pEx->Delete();
            }