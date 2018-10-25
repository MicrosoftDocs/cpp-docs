   static ATLCOLUMNINFO* GetColumnInfo(CCustomRowset* pRowset, DBORDINAL* pcCols)
   {
      // Add your implementation here and/or call the base class

      return CRowsetImpl::GetColumnInfo(pRowset, pcCols);
   }