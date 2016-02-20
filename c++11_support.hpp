#if __cplusplus==201402L
    using std_support = std;
#else
    namespace std_support
    {
    ////////// Support enable_if_t ////////
    template< bool B, class T = void > using enable_if_t = typename std::enable_if<B,T>::type;

    ////////// Support index_sequence ////////

    template<size_t... Is>
    struct index_sequence { };

    // generator of index_sequence<Is>
    template<int N, int... Is>
    struct make_index_sequence : make_index_sequence<N - 1, N - 1, Is...> { };

    template<int... Is>
    struct make_index_sequence<0, Is...> : index_sequence<Is...> { };
    }
#endif
