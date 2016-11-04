            //example for CFile::Remove
            TCHAR* pFileName = _T("Remove_File.dat");
            try
            {
               CFile::Remove(pFileName);
            }
            catch (CFileException* pEx)
            {
               TRACE(_T("File %20s cannot be removed\n"), pFileName);
               pEx->Delete();
            }