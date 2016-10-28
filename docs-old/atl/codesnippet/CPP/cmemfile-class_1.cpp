            CMemFile f; // Ready to use - no Open necessary.

            BYTE * pBuf = (BYTE *)new char [1024];
            CMemFile g(pBuf, 1024, 256);
            // same as CMemFile g; g.Attach(pBuf, 1024, 256);