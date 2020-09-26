namespace boost {
  namespace algorithm {
    template<typename Range1T, typename Range2T, typename PredicateT> 
      bool starts_with(const Range1T &, const Range2T &, PredicateT);
    template<typename Range1T, typename Range2T> 
      bool starts_with(const Range1T &, const Range2T &);
    template<typename Range1T, typename Range2T> 
      bool istarts_with(const Range1T &, const Range2T &, 
                        const std::locale & = std::locale());
    template<typename Range1T, typename Range2T, typename PredicateT> 
      bool ends_with(const Range1T &, const Range2T &, PredicateT);
    template<typename Range1T, typename Range2T> 
      bool ends_with(const Range1T &, const Range2T &);
    template<typename Range1T, typename Range2T> 
      bool iends_with(const Range1T &, const Range2T &, 
                      const std::locale & = std::locale());
    template<typename Range1T, typename Range2T, typename PredicateT> 
      bool contains(const Range1T &, const Range2T &, PredicateT);
    template<typename Range1T, typename Range2T> 
      bool contains(const Range1T &, const Range2T &);
    template<typename Range1T, typename Range2T> 
      bool icontains(const Range1T &, const Range2T &, 
                     const std::locale & = std::locale());
    template<typename Range1T, typename Range2T, typename PredicateT> 
      bool equals(const Range1T &, const Range2T &, PredicateT);
    template<typename Range1T, typename Range2T> 
      bool equals(const Range1T &, const Range2T &);
    template<typename Range1T, typename Range2T> 
      bool iequals(const Range1T &, const Range2T &, 
                   const std::locale & = std::locale());
    template<typename Range1T, typename Range2T, typename PredicateT> 
      bool lexicographical_compare(const Range1T &, const Range2T &, 
                                   PredicateT);
    template<typename Range1T, typename Range2T> 
      bool lexicographical_compare(const Range1T &, const Range2T &);
    template<typename Range1T, typename Range2T> 
      bool ilexicographical_compare(const Range1T &, const Range2T &, 
                                    const std::locale & = std::locale());
    template<typename RangeT, typename PredicateT> 
      bool all(const RangeT &, PredicateT);
  }
}