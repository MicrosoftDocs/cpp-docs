try
{
   CFile file(_T("\\this_file_should_not_exist.dat"), CFile::modeRead);
}
catch (CFileException* theException)
{
   if (theException->m_cause == CFileException::fileNotFound)
      TRACE("File not found\n");
   theException->Delete();
}