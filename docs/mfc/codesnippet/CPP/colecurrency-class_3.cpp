// even an empty COleCurrency is valid
COleCurrency cy;
ASSERT(cy.GetStatus() == COleCurrency::valid);

// always valid after being set
cy.SetCurrency(4, 500);
ASSERT(cy.GetStatus() == COleCurrency::valid);

// some conversions aren't possible and will
// cause an invalid state, like this:
CByteArray array;
COleVariant varBogus(array);
cy = varBogus;
ASSERT(cy.GetStatus() == COleCurrency::invalid);