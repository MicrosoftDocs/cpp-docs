#define ATL_NO_CCOMBSTR_ADDRESS_OF_ASSERT

void MyInitFunction(BSTR* pbstr)
{
   ::SysReAllocString(pbstr, OLESTR("Hello World"));
   return;
}