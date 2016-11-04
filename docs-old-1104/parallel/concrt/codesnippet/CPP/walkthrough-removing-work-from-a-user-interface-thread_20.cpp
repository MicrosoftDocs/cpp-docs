// Implements the Resource Acquisition Is Initialization (RAII) pattern 
// by calling the specified function after leaving scope.
class scope_guard 
{
public:
   explicit scope_guard(std::function<void()> f)
      : m_f(std::move(f)) { }

   // Dismisses the action.
   void dismiss() {
      m_f = nullptr;
   }

   ~scope_guard() {
      // Call the function.
      if (m_f) {
         try {
            m_f();
         }
         catch (...) {
            terminate();
         }
      }
   }

private:
   // The function to call when leaving scope.
   std::function<void()> m_f;

   // Hide copy constructor and assignment operator.
   scope_guard(const scope_guard&);
   scope_guard& operator=(const scope_guard&);
};