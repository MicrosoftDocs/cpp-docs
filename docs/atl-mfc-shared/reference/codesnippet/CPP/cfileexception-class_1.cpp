         ASSERT(CFileException::ErrnoToException(EACCES) == 
            CFileException::accessDenied);