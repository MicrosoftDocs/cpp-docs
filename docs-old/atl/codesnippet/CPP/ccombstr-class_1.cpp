   enum { urlASP, urlHTM, urlISAPI } urlType;
   urlType = urlASP;

   CComBSTR bstrURL = OLESTR("http://SomeSite/");
   CComBSTR bstrDEF = OLESTR("/OtherSite");
   CComBSTR bstrASP = OLESTR("default.asp");

   CComBSTR bstrTemp;
   HRESULT hr;

   switch (urlType)
   {
   case urlASP:
      // bstrURL is 'http://SomeSite/default.asp'
      hr = bstrURL.Append(bstrASP);
      break;

   case urlHTM:
      // bstrURL is 'http://SomeSite/default.htm'
      hr = bstrURL.Append(OLESTR("default.htm"));
      break;
   
   case urlISAPI:
      // bstrURL is 'http://SomeSite/default.dll?func'
      hr = bstrURL.Append(OLESTR("default.dll?func"));
      break;

   default:
      // bstrTemp is 'http://'
      hr = bstrTemp.Append(bstrURL, 7);
      // bstrURL is 'http://OtherSite'
      if (hr == S_OK)
          hr = bstrTemp.Append(bstrDEF);
      bstrURL = bstrTemp;

      break;
   }