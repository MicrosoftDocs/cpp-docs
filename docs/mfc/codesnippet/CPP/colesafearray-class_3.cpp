VARIANT varColInfo[3];

//initialize VARIANTs
for (int i = 0; i < 3; i++)
   VariantInit(&varColInfo[i]);

// Column Name
varColInfo[0].vt = VT_BSTR;
varColInfo[0].bstrVal = ::SysAllocString(L"Name");

// Column Type
varColInfo[1].vt = VT_UI4;
varColInfo[1].lVal = 1;

COleSafeArray sa;
//create a 1 dimensional safearray of VARIANTs
//& initialize it with varColInfo VARIANT array
sa.CreateOneDim(VT_VARIANT, 2, varColInfo);

//check that the dimension is 2
ASSERT(sa.GetOneDimSize() == 2);

//increase safearray size by 1
sa.ResizeOneDim(3);

// populate the last element of the safearray, (Column Size)
varColInfo[2].vt = VT_I4;
varColInfo[2].lVal = 30;
long el = 2;
sa.PutElement(&el, &varColInfo[2]);