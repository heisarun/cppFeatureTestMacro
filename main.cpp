#include<iostream>
#include<stdlib.h>

int main(){

std::cout << "https://en.cppreference.com/w/cpp/utility/feature_test \n";
std::cout << "Macro-name Value	Header	Free-standing \n";
std::cout << "Result : only headers that work on system \n";

#ifdef __cpp_lib_is_virtual_base_of
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_within_lifetime
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_jthread
 std::cout << "<stop_token> <thread>	\n " ;
#endif		

#ifdef __cpp_lib_latch
 std::cout << "<latch>	\n " ;
#endif		

#ifdef __cpp_lib_launder
 std::cout << "<new>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_linalg
 std::cout << "<linalg>	\n " ;
#endif		

#ifdef __cpp_lib_list_remove_return_type
 std::cout << "<forward_list> <list>	\n " ;
#endif		

#ifdef __cpp_lib_logical_traits
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_make_from_tuple
 std::cout << "<tuple>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_make_reverse_iterator
 std::cout << "<iterator>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_make_unique
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_map_try_emplace
 std::cout << "<map>	\n " ;
#endif		

#ifdef __cpp_lib_math_constants
 std::cout << "<numbers>	\n " ;
#endif		

#ifdef __cpp_lib_math_special_functions
 std::cout << "<cmath>		\n " ;
#endif	

#ifdef __cpp_lib_mdspan
 std::cout << "<mdspan>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_memory_resource
 std::cout << "<memory_resource>	\n " ;
#endif		

#ifdef __cpp_lib_modules
 	std::cout << "	\n " ;
#endif	

#ifdef __cpp_lib_move_iterator_concept
 std::cout << "<iterator>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_move_only_function
 std::cout << "<functional>	\n " ;
#endif		

#ifdef __cpp_lib_node_extract
 std::cout << "<map> <set> <unordered_map> <unordered_set>		\n " ;
#endif	

#ifdef __cpp_lib_nonmember_container_access
 std::cout << "<array> <deque> <forward_list> <iterator> <list> <map> <regex> <set> <string> <unordered_map> <unordered_set> <vector>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_not_fn
 std::cout << "<functional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_null_iterators
 std::cout << "<iterator>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_optional
 std::cout << "<optional>	\n " ;
#endif		

#ifdef __cpp_lib_optional_range_support
 std::cout << "<optional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_out_ptr
 std::cout << "<memory>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_parallel_algorithm
 std::cout << "<algorithm> <numeric>	\n " ;
#endif		

#ifdef __cpp_lib_philox_engine
 std::cout << "<random>		\n " ;
#endif	

#ifdef __cpp_lib_polymorphic
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_polymorphic_allocator
 std::cout << "<memory_resource>	\n " ;
#endif		

#ifdef __cpp_lib_print
 std::cout << "<print> <ostream>		\n " ;
#endif	

#ifdef __cpp_lib_quoted_string_io
 std::cout << "<iomanip>	\n " ;
#endif		

#ifdef __cpp_lib_ranges
 std::cout << "<algorithm> <functional> <iterator> <memory> <ranges>	\n " ;
#endif		

#ifdef __cpp_lib_ranges_as_const
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_as_rvalue
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_cache_latest
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_cartesian_product
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_chunk
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_chunk_by
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_concat
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_contains
 std::cout << "<algorithm>	\n " ;
#endif		

#ifdef __cpp_lib_ranges_enumerate
 std::cout << "<ranges>		\n " ;
#endif	

#ifdef __cpp_lib_ranges_find_last
 std::cout << "<algorithm>		\n " ;
#endif	

#ifdef __cpp_lib_ranges_fold
 std::cout << "<algorithm>	\n " ;
#endif		

#ifdef __cpp_lib_ranges_generate_random
 std::cout << "<random>		\n " ;
#endif	

#ifdef __cpp_lib_ranges_iota
 std::cout << "<numeric>	\n " ;
#endif		

#ifdef __cpp_lib_ranges_join_with
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_repeat
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_reserve_hint
 std::cout << "<ranges>		\n " ;
#endif	

#ifdef __cpp_lib_ranges_slide
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_starts_ends_with
 std::cout << "<algorithm>		\n " ;
#endif	

#ifdef __cpp_lib_ranges_stride
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_to_container
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_to_input
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ranges_zip
 std::cout << "<ranges> <tuple> <utility>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_ratio
 std::cout << "<ratio>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_raw_memory_algorithms
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_rcu
 std::cout << "<rcu>	\n " ;
#endif		

#ifdef __cpp_lib_reference_from_temporary
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_reference_wrapper
 std::cout << "<functional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_remove_cvref
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_result_of_sfinae
 std::cout << "<functional> <type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_robust_nonmodifying_seq_ops
 std::cout << "<algorithm>		\n " ;
#endif	

#ifdef __cpp_lib_sample
 std::cout << "<algorithm>		\n " ;
#endif	

#ifdef __cpp_lib_saturation_arithmetic
 std::cout << "<numeric>		\n " ;
#endif	

#ifdef __cpp_lib_scoped_lock
 std::cout << "<mutex>		\n " ;
#endif	

#ifdef __cpp_lib_semaphore
 std::cout << "<semaphore>		\n " ;
#endif	

#ifdef __cpp_lib_senders
 std::cout << "<execution>		\n " ;
#endif	

#ifdef __cpp_lib_shared_mutex
 std::cout << "<shared_mutex>	\n " ;
#endif		

#ifdef __cpp_lib_shared_ptr_arrays
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_shared_ptr_weak_type
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_shared_timed_mutex
 std::cout << "<shared_mutex>		\n " ;
#endif	

#ifdef __cpp_lib_shift
 std::cout << "<algorithm>	\n " ;
#endif		

#ifdef __cpp_lib_simd
 std::cout << "<simd>		\n " ;
#endif	

#ifdef __cpp_lib_simd_complex
 std::cout << "<simd>		\n " ;
#endif	

#ifdef __cpp_lib_smart_ptr_for_overwrite
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_smart_ptr_owner_equality
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_source_location
 std::cout << "<source_location>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_span
 std::cout << "<span>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_span_initializer_list
 std::cout << "<span>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_spanstream
 std::cout << "<spanstream>\n " ;
#endif		

#ifdef __cpp_lib_ssize
 std::cout << "<iterator>	Yes\n " ;
 #endif

#ifdef __cpp_lib_sstream_from_string_view
 std::cout << "<sstream>\n " ;
#endif		

#ifdef __cpp_lib_stacktrace
 std::cout << "<stacktrace>\n " ;
#endif		

#ifdef __cpp_lib_start_lifetime_as
 std::cout << "<memory>	Yes\n " ;
#endif	

#ifdef __cpp_lib_starts_ends_with
 std::cout << "<string> <string_view>\n " ;
#endif		

#ifdef __cpp_lib_stdatomic_h
 std::cout << << "stdatomics.h>\n " ;
#endif		

#ifdef __cpp_lib_string_contains
 std::cout << "<string> <string_view>	\n " ;
#endif	

#ifdef __cpp_lib_string_resize_and_overwrite
 std::cout << "<string>\n " ;
#endif		

#ifdef __cpp_lib_string_udls
 std::cout << "<string>\n " ;
#endif		

#ifdef __cpp_lib_string_view
 std::cout << "<string> <string_view>\n " ;
#endif		

#ifdef __cpp_lib_submdspan
 std::cout << "<mdspan>	Yes\n " ;
#endif	

#ifdef __cpp_lib_syncbuf
 std::cout << "<syncstream>\n " ;
#endif		

#ifdef __cpp_lib_text_encoding
 std::cout << "<text_encoding>\n " ;
#endif		

#ifdef __cpp_lib_three_way_comparison
 std::cout << "<compare>	Yes\n " ;
#endif	

#ifdef __cpp_lib_to_address
 std::cout << "<memory>	Yes\n " ;
#endif	

#ifdef __cpp_lib_to_array
 std::cout << "<array>	Yes\n " ;
#endif	

#ifdef __cpp_lib_to_chars
 std::cout << "<charconv>\n " ;
#endif		

#ifdef __cpp_lib_to_string
 std::cout << "<string>\n " ;
#endif		

#ifdef __cpp_lib_to_underlying
 std::cout << "<utility>	Yes\n " ;
#endif	

#ifdef __cpp_lib_transformation_trait_aliases
 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_transparent_operators
 std::cout << "<memory> <functional>	Yes\n " ;
#endif	

#ifdef __cpp_lib_trivially_relocatable
 std::cout << "<memory> <type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_tuple_element_t
 std::cout << "<tuple>	Yes\n " ;
#endif	

#ifdef __cpp_lib_tuple_like
 std::cout << "<utility> <tuple> <map> <unordered_map>	
 \n " ;
#endif	

#ifdef __cpp_lib_tuples_by_type
 std::cout << "<utility> <tuple>	Yes\n " ;
#endif	

#ifdef __cpp_lib_type_identity
 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_type_trait_variable_templates
 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_uncaught_exceptions
 std::cout << "<exception>	Yes\n " ;
#endif	

#ifdef __cpp_lib_unordered_map_try_emplace
 std::cout << "<unordered_map>\n " ;
#endif		

#ifdef __cpp_lib_unreachable
 std::cout << "<utility>	Yes \n " ;
#endif	

#ifdef __cpp_lib_unwrap_ref
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_variant
 std::cout << "<variant> \n " ;
#endif	

#ifdef __cpp_lib_void_t
 std::cout << "<type_traits>	Yes \n " ;
#endif

 #ifdef __cpp_lib_adaptor_iterator_pair_constructor
 std::cout << "<stack> <queue>\n " ;
#endif		
 
#ifdef __cpp_lib_addressof_constexpr
 std::cout << "<memory>	Yes\n " ;
#endif	

#ifdef __cpp_lib_algorithm_default_value_type
 std::cout << "<algorithm> <ranges> <string> <deque> <list> <forward_list> <vector>\n " ;
#endif		

#ifdef __cpp_lib_algorithm_iterator_requirements
 std::cout << "<algorithm> <numeric> <memory>\n " ;
#endif		

#ifdef __cpp_lib_aligned_accessor
 std::cout << "<mdspan>\n " ;
#endif		

#ifdef __cpp_lib_allocate_at_least
 std::cout << "<memory>	\n " ;
#endif	

#ifdef __cpp_lib_allocator_traits_is_always_equal
 std::cout << "<memory> <scoped_allocator> <string> <deque> <forward_list> <list> <vector> <map> <set> <unordered_map> <unordered_set>	Yes\n " ;
#endif	

#ifdef __cpp_lib_any
 std::cout << "<any>\n " ;
#endif		

#ifdef __cpp_lib_apply
 std::cout << "<tuple>	Yes\n " ;
#endif	



#ifdef __cpp_lib_array_constexpr
 std::cout << "<iterator> <array>\n " ;
#endif		

#ifdef __cpp_lib_as_const
 std::cout << "<utility>	Yes\n " ;
#endif	

#ifdef __cpp_lib_associative_heterogeneous_erasure
 std::cout << "<map> <set> <unordered_map> <unordered_set>\n " ;
#endif		

#ifdef __cpp_lib_associative_heterogeneous_insertion
 std::cout << "<map> <set> <unordered_map> <unordered_set>	\n " ;
#endif	

#ifdef __cpp_lib_assume_aligned
 std::cout << "<memory>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_flag_test
 std::cout << "<atomic>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_float
 std::cout << "<atomic>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_is_always_lock_free
 std::cout << "<atomic>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_lock_free_type_aliases
 std::cout << "<atomic>	\n " ;
#endif	

#ifdef __cpp_lib_atomic_min_max
 std::cout << "<atomic>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_ref
 std::cout << "<atomic>	Yes\n " ;
#endif	


#ifdef __cpp_lib_atomic_shared_ptr
 std::cout << "<memory>	\n " ;
#endif	

#ifdef __cpp_lib_atomic_value_initialization
 std::cout << "<atomic> <memory>	Yes\n " ;
#endif	

#ifdef __cpp_lib_atomic_wait
 std::cout << "<atomic>	Yes\n " ;
#endif	

#ifdef __cpp_lib_barrier
 std::cout << "<barrier>	\n " ;
#endif	

#ifdef __cpp_lib_bind_back
 std::cout << "<functional>	Yes\n " ;
#endif	

#ifdef __cpp_lib_bind_front
 std::cout << "<functional>	Yes\n " ;
#endif	

#ifdef __cpp_lib_bit_cast
 std::cout << "<bit>	Yes\n " ;
#endif

#ifdef __cpp_lib_bitops
 std::cout << "<bit>	Yes\n " ;
#endif	

#ifdef __cpp_lib_bitset
 std::cout << "<bitset>	\n " ;
#endif	



#ifdef __cpp_lib_bool_constant
 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_bounded_array_traits
 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_boyer_moore_searcher
 std::cout << "<functional>	\n " ;
#endif	

#ifdef __cpp_lib_byte
 std::cout << "<cstddef>	Yes\n " ;
#endif	

#ifdef __cpp_lib_byteswap
 std::cout << "<bit>	Yes\n " ;
#endif	

#ifdef __cpp_lib_char8_t
 std::cout << "<atomic> <filesystem> <istream> <limits> <locale> <ostream> <string> <string_view>	Yes\n " ;
#endif	

#ifdef __cpp_lib_chrono
 std::cout << "<chrono>	\n " ;
#endif	

#ifdef __cpp_lib_chrono_udls
 std::cout << "<chrono>	\n " ;
#endif	

#ifdef __cpp_lib_clamp

 std::cout << "<algorithm>	\n " ;
#endif	

#ifdef __cpp_lib_common_reference

 std::cout << "<type_traits>	Yes\n " ;
#endif	

#ifdef __cpp_lib_common_reference_wrapper

 std::cout << "<functional>	Yes\n " ;
#endif	

#ifdef __cpp_lib_complex_udls

 std::cout << "<complex>	\n " ;
#endif	

#ifdef __cpp_lib_concepts

 std::cout << "<concepts> <compare>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_algorithms

 std::cout << "<algorithm> <utility>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_atomic

 std::cout << "<atomic>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_bitset

 std::cout << "<bitset>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_charconv

 std::cout << "<charconv>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_cmath

 std::cout << "<cmath> <cstdlib>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_complex

 std::cout << "<complex>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_deque

 std::cout << "<deque>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_dynamic_alloc

 std::cout << "<memory>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_exceptions

 std::cout << "<exception> <stdexcept> <expected> <optional> <variant> <format>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_flat_map

 std::cout << "<flat_map>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_flat_set

 std::cout << "<flat_set>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_forward_list

 std::cout << "<forward_list>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_functional

 std::cout << "<functional>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_inplace_vector

 std::cout << "<inplace_vector>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_iterator

 std::cout << "<iterator>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_list
 std::cout << "<list>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_map
 std::cout << "<map>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_memory
 std::cout << "<memory>	Yes\n " ;
#endif	


#ifdef __cpp_lib_constexpr_new
 std::cout << "<new>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_numeric
 std::cout << "<numeric>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_queue
 std::cout << "<queue>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_set
 std::cout << "<set>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_stack
 std::cout << "<stack>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_string
 std::cout << "<string>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_string_view
 std::cout << "<string_view>\n " ;
#endif		

#ifdef __cpp_lib_constexpr_tuple
 std::cout << "<tuple>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_typeinfo
 std::cout << "<typeinfo>	Yes\n " ;
#endif	

#ifdef __cpp_lib_constexpr_unordered_map
 std::cout << "<unordered_map>	\n " ;
#endif	

#ifdef __cpp_lib_constexpr_unordered_set
 std::cout << "<unordered_set>		\n " ;
#endif	


#ifdef __cpp_lib_constexpr_utility
 std::cout << "<utility>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_constexpr_vector
 std::cout << "<vector>		\n " ;
#endif	


#ifdef __cpp_lib_constrained_equality
 std::cout << "<utility> <tuple> <optional> <variant> <expected>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_containers_ranges
 std::cout << "<vector> <list> <forward_list> <map> <set> <unordered_map> <unordered_set> <deque> <queue> <stack> <string>	\n " ;
#endif	
	

#ifdef __cpp_lib_contracts
 std::cout << "<contracts>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_copyable_function
 std::cout << "<functional>	\n " ;
#endif	
	

#ifdef __cpp_lib_coroutine
 std::cout << "<coroutine>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_debugging
 std::cout << "<debugging>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_destroying_delete
 std::cout << "<new>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_enable_shared_from_this
 std::cout << "<memory>	\n " ;
#endif	
	

#ifdef __cpp_lib_endian
 std::cout << "<bit>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_erase_if
 std::cout << "<string> <deque> <forward_list> <list> <vector> <map> <set> <unordered_map> <unordered_set>	\n " ;
#endif	
	

#ifdef __cpp_lib_exchange_function
 std::cout << "<utility>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_execution
 std::cout << "<execution>	\n " ;
#endif	
	

#ifdef __cpp_lib_expected
 std::cout << "<expected>	\n " ;
#endif	
	

#ifdef __cpp_lib_filesystem
 std::cout << "<filesystem>		\n " ;
#endif	


#ifdef __cpp_lib_flat_map
 std::cout << "<flat_map>	\n " ;
#endif	
	

#ifdef __cpp_lib_flat_set
 std::cout << "<flat_set>	\n " ;
#endif	
	

#ifdef __cpp_lib_format
 std::cout << "<format>	\n " ;
#endif	
	

#ifdef __cpp_lib_format_ranges
 std::cout << "<format>	\n " ;
#endif	
	

#ifdef __cpp_lib_format_path
 std::cout << "<filesystem>	\n " ;
#endif	
	

#ifdef __cpp_lib_format_uchar
 std::cout << "<format>	\n " ;
#endif	
	

#ifdef __cpp_lib_formatters
 std::cout << "<stacktrace> <thread>	\n " ;
#endif	
	

#ifdef __cpp_lib_forward_like
 std::cout << "<utility>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_algorithm
 std::cout << "<algorithm>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_array
 std::cout << "<array>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_char_traits
 std::cout << "<string>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_charconv
 std::cout << "<charconv>	Yes	\n " ;
#endif	




#ifdef __cpp_lib_freestanding_cstdlib
 std::cout << "<cstdlib> <cmath>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_cstring
 std::cout << "<cstring>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_cwchar
 std::cout << "<cwchar>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_errc
 std::cout << "<cerrno> <system_error>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_execution
 std::cout << "<execution>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_expected
 std::cout << "<expected>	Yes	\n " ;
#endif	


#ifdef __cpp_lib_freestanding_feature_test_macros
 std::cout << "	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_functional
 std::cout << "<functional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_iterator
 std::cout << "<iterator>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_mdspan
 std::cout << "<mdspan>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_memory
 std::cout << "<memory>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_numeric
 std::cout << "<numeric>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_operator_new
 	std::cout << "	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_optional
 std::cout << "<optional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_random
 std::cout << "<random>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_ranges
 std::cout << "<ranges>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_ratio
 std::cout << "<ratio>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_string_view
 std::cout << "<string_view>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_tuple
 std::cout << "<tuple>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_utility
 std::cout << "<utility>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_freestanding_variant
 std::cout << "<variant>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_fstream_native_handle
 std::cout << "<fstream>	\n " ;
#endif		

#ifdef __cpp_lib_function_ref
 std::cout << "<functional>		\n " ;
#endif	

#ifdef __cpp_lib_gcd_lcm
 std::cout << "<numeric>	\n " ;
#endif		

#ifdef __cpp_lib_generator
 std::cout << "<generator>	\n " ;
#endif		

#ifdef __cpp_lib_generic_associative_lookup
 std::cout << "<map> <set>	\n " ;
#endif		

#ifdef __cpp_lib_generic_unordered_lookup
 std::cout << "<unordered_map> <unordered_set>	\n " ;
#endif		

#ifdef __cpp_lib_hardware_interference_size
 std::cout << "<new>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_has_unique_object_representations
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_hazard_pointer
 std::cout << "<hazard_pointer>		\n " ;
#endif	

#ifdef __cpp_lib_hive
 std::cout << "<hive>	\n " ;
#endif		

#ifdef __cpp_lib_hypot
 std::cout << "<cmath>	\n " ;
#endif		

#ifdef __cpp_lib_incomplete_container_elements
 std::cout << "<forward_list> <list> <vector>	\n " ;
#endif		

#ifdef __cpp_lib_indirect
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_inplace_vector
 std::cout << "<inplace_vector>	\n " ;
#endif		

#ifdef __cpp_lib_int_pow2
 std::cout << "<bit>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_integer_comparison_functions
 std::cout << "<utility>	\n " ;
#endif		

#ifdef __cpp_lib_integer_sequence
 std::cout << "<utility>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_integral_constant_callable
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_interpolate
 std::cout << "<cmath> <numeric>	\n " ;
#endif		

#ifdef __cpp_lib_invoke
 std::cout << "<functional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_invoke_r
 std::cout << "<functional>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_ios_noreplace
 std::cout << "<ios>	\n " ;
#endif		

#ifdef __cpp_lib_is_aggregate
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_constant_evaluated
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_final
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_implicit_lifetime
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_invocable
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_layout_compatible
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_nothrow_convertible
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_null_pointer
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_pointer_interconvertible
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_scoped_enum
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

#ifdef __cpp_lib_is_sufficiently_aligned
 std::cout << "<memory>		\n " ;
#endif	

#ifdef __cpp_lib_is_swappable
 std::cout << "<type_traits>	Yes	\n " ;
#endif	

 return EXIT_SUCCESS;
}
