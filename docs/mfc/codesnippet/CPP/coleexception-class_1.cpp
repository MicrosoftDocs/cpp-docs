try
{
   SomeOleFunc();
}
catch (COleException* pe)
{
   TRACE(_T("COleException caught. SCODE = %x\n"), pe->m_sc);
   pe->Delete();
}