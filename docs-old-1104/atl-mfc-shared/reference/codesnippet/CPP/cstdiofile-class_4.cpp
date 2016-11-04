            CStdioFile f(stdout);
            TCHAR buf[] = _T("test string");

            f.WriteString(buf);