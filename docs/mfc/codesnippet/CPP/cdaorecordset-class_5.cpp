COleVariant varValue;
void *pField = &(rs.m_Age);
int nField = 2;

// this code is inefficient because data
// must be retrieved for both IsFieldNull
// and GetFieldValue
if (!rs.IsFieldNull(pField))
   rs.GetFieldValue(nField, varValue);

// this code is more efficient
rs.GetFieldValue(nField, varValue);
if (varValue.vt == VT_NULL)
   varValue.Attach(varNewVal); // do something