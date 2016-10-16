void Recurse(LPCTSTR pstr)
{
   CFileFind finder;

   // build a string with wildcards
   CString strWildcard(pstr);
   strWildcard += _T("\\*.*");

   // start working for files
   BOOL bWorking = finder.FindFile(strWildcard);

   while (bWorking)
   {
      bWorking = finder.FindNextFile();

      // skip . and .. files; otherwise, we'd
      // recur infinitely!

      if (finder.IsDots())
         continue;

      // if it's a directory, recursively search it

      if (finder.IsDirectory())
      {
         CString str = finder.GetFilePath();
         TRACE(_T("%s\n"), (LPCTSTR)str);
         Recurse(str);
      }
   }

   finder.Close();
}

void PrintDirs()
{
   Recurse(_T("C:"));
}