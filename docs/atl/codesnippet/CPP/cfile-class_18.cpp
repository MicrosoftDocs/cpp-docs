            TCHAR* pFileName = _T("ReadOnly_File.dat");
            CFileStatus status;
            CFile::GetStatus(pFileName, status);
            status.m_attribute |= CFile::readOnly;
            CFile::SetStatus(pFileName, status);         