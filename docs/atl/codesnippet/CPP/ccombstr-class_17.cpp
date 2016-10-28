   IDataObject* pDataObj;

   // Fill in the FORMATETC struct to retrieve desired format 
   // from clipboard
   FORMATETC formatetcIn = {CF_TEXT, NULL, DVASPECT_CONTENT, -1, TYMED_ISTREAM};
   STGMEDIUM medium;
   ZeroMemory(&medium, sizeof(STGMEDIUM));

   // Get IDataObject from clipboard
   HRESULT hr = ::OleGetClipboard(&pDataObj);

   // Retrieve data from clipboard
   hr = pDataObj->GetData(&formatetcIn, &medium);

   if (SUCCEEDED(hr) && medium.tymed == TYMED_ISTREAM)
   {
      CComBSTR bstrStr;
      // Get BSTR out of the stream
      hr = bstrStr.ReadFromStream(medium.pstm);

      //release the stream
      ::ReleaseStgMedium(&medium);
   }