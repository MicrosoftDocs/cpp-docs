void SourceFunc(const CDataSource& theSource)
{
   CComVariant var;
   theSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
}