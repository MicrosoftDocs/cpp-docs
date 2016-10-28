void MyImportantFunction(char* psz)
{
   ATLENSURE(NULL != psz);

   char mysz[64];
   strcpy_s(mysz, sizeof(mysz), psz);
}