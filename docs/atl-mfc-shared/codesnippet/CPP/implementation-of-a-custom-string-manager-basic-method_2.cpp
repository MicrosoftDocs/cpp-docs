void PrintPowers(int nBase)
{
   int n = 1;
   for(int nPower = 0; nPower < 10; nPower++)
   {
      // Use the private string manager, instead of the default:
      CString strPower(&g_stringMgr);

      strPower.Format(_T("%d"), n);
      _tprintf_s(_T("%s\n"), strPower);
      n *= nBase;
   }
}