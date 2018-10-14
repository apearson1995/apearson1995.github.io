/*
 * Generated by dtrace(1M).
 */

#ifndef	_RUBY_PROBES_H
#define	_RUBY_PROBES_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define RUBY_DTRACE_STABILITY "___dtrace_stability$ruby$v1$6_5_5_6_5_5_6_5_5_5_5_5_5_5_5"

#define RUBY_DTRACE_TYPEDEFS "___dtrace_typedefs$ruby$v2"

#if !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED

#define	RUBY_DTRACE_ARRAY_CREATE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$array__create$v1$6c6f6e67$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_ARRAY_CREATE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$array__create$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_CMETHOD_ENTRY(arg0, arg1, arg2, arg3) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$cmethod__entry$v1$63686172202a$63686172202a$63686172202a$696e74(arg0, arg1, arg2, arg3); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_CMETHOD_ENTRY_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$cmethod__entry$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_CMETHOD_RETURN(arg0, arg1, arg2, arg3) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$cmethod__return$v1$63686172202a$63686172202a$63686172202a$696e74(arg0, arg1, arg2, arg3); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_CMETHOD_RETURN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$cmethod__return$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_FIND_REQUIRE_ENTRY(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$find__require__entry$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_FIND_REQUIRE_ENTRY_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$find__require__entry$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_FIND_REQUIRE_RETURN(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$find__require__return$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_FIND_REQUIRE_RETURN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$find__require__return$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_GC_MARK_BEGIN() \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$gc__mark__begin$v1(); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_GC_MARK_BEGIN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$gc__mark__begin$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_GC_MARK_END() \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$gc__mark__end$v1(); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_GC_MARK_END_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$gc__mark__end$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_GC_SWEEP_BEGIN() \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$gc__sweep__begin$v1(); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_GC_SWEEP_BEGIN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$gc__sweep__begin$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_GC_SWEEP_END() \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$gc__sweep__end$v1(); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_GC_SWEEP_END_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$gc__sweep__end$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_HASH_CREATE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$hash__create$v1$6c6f6e67$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_HASH_CREATE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$hash__create$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_LOAD_ENTRY(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$load__entry$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_LOAD_ENTRY_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$load__entry$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_LOAD_RETURN(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$load__return$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_LOAD_RETURN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$load__return$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_METHOD_CACHE_CLEAR(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$method__cache__clear$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_METHOD_CACHE_CLEAR_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$method__cache__clear$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_METHOD_ENTRY(arg0, arg1, arg2, arg3) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$method__entry$v1$63686172202a$63686172202a$63686172202a$696e74(arg0, arg1, arg2, arg3); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_METHOD_ENTRY_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$method__entry$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_METHOD_RETURN(arg0, arg1, arg2, arg3) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$method__return$v1$63686172202a$63686172202a$63686172202a$696e74(arg0, arg1, arg2, arg3); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_METHOD_RETURN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$method__return$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_OBJECT_CREATE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$object__create$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_OBJECT_CREATE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$object__create$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_PARSE_BEGIN(arg0, arg1) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$parse__begin$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_PARSE_BEGIN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$parse__begin$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_PARSE_END(arg0, arg1) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$parse__end$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_PARSE_END_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$parse__end$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_RAISE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$raise$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_RAISE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$raise$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_REQUIRE_ENTRY(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$require__entry$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_REQUIRE_ENTRY_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$require__entry$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_REQUIRE_RETURN(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$require__return$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_REQUIRE_RETURN_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$require__return$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_STRING_CREATE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$string__create$v1$6c6f6e67$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_STRING_CREATE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$string__create$v1(); \
		__asm__ volatile(""); \
		_r; })
#define	RUBY_DTRACE_SYMBOL_CREATE(arg0, arg1, arg2) \
do { \
	__asm__ volatile(".reference " RUBY_DTRACE_TYPEDEFS); \
	__dtrace_probe$ruby$symbol__create$v1$63686172202a$63686172202a$696e74(arg0, arg1, arg2); \
	__asm__ volatile(".reference " RUBY_DTRACE_STABILITY); \
} while (0)
#define	RUBY_DTRACE_SYMBOL_CREATE_ENABLED() \
	({ int _r = __dtrace_isenabled$ruby$symbol__create$v1(); \
		__asm__ volatile(""); \
		_r; })


extern void __dtrace_probe$ruby$array__create$v1$6c6f6e67$63686172202a$696e74(long, const char *, int);
extern int __dtrace_isenabled$ruby$array__create$v1(void);
extern void __dtrace_probe$ruby$cmethod__entry$v1$63686172202a$63686172202a$63686172202a$696e74(const char *, const char *, const char *, int);
extern int __dtrace_isenabled$ruby$cmethod__entry$v1(void);
extern void __dtrace_probe$ruby$cmethod__return$v1$63686172202a$63686172202a$63686172202a$696e74(const char *, const char *, const char *, int);
extern int __dtrace_isenabled$ruby$cmethod__return$v1(void);
extern void __dtrace_probe$ruby$find__require__entry$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$find__require__entry$v1(void);
extern void __dtrace_probe$ruby$find__require__return$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$find__require__return$v1(void);
extern void __dtrace_probe$ruby$gc__mark__begin$v1(void);
extern int __dtrace_isenabled$ruby$gc__mark__begin$v1(void);
extern void __dtrace_probe$ruby$gc__mark__end$v1(void);
extern int __dtrace_isenabled$ruby$gc__mark__end$v1(void);
extern void __dtrace_probe$ruby$gc__sweep__begin$v1(void);
extern int __dtrace_isenabled$ruby$gc__sweep__begin$v1(void);
extern void __dtrace_probe$ruby$gc__sweep__end$v1(void);
extern int __dtrace_isenabled$ruby$gc__sweep__end$v1(void);
extern void __dtrace_probe$ruby$hash__create$v1$6c6f6e67$63686172202a$696e74(long, const char *, int);
extern int __dtrace_isenabled$ruby$hash__create$v1(void);
extern void __dtrace_probe$ruby$load__entry$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$load__entry$v1(void);
extern void __dtrace_probe$ruby$load__return$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$load__return$v1(void);
extern void __dtrace_probe$ruby$method__cache__clear$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$method__cache__clear$v1(void);
extern void __dtrace_probe$ruby$method__entry$v1$63686172202a$63686172202a$63686172202a$696e74(const char *, const char *, const char *, int);
extern int __dtrace_isenabled$ruby$method__entry$v1(void);
extern void __dtrace_probe$ruby$method__return$v1$63686172202a$63686172202a$63686172202a$696e74(const char *, const char *, const char *, int);
extern int __dtrace_isenabled$ruby$method__return$v1(void);
extern void __dtrace_probe$ruby$object__create$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$object__create$v1(void);
extern void __dtrace_probe$ruby$parse__begin$v1$63686172202a$696e74(const char *, int);
extern int __dtrace_isenabled$ruby$parse__begin$v1(void);
extern void __dtrace_probe$ruby$parse__end$v1$63686172202a$696e74(const char *, int);
extern int __dtrace_isenabled$ruby$parse__end$v1(void);
extern void __dtrace_probe$ruby$raise$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$raise$v1(void);
extern void __dtrace_probe$ruby$require__entry$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$require__entry$v1(void);
extern void __dtrace_probe$ruby$require__return$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$require__return$v1(void);
extern void __dtrace_probe$ruby$string__create$v1$6c6f6e67$63686172202a$696e74(long, const char *, int);
extern int __dtrace_isenabled$ruby$string__create$v1(void);
extern void __dtrace_probe$ruby$symbol__create$v1$63686172202a$63686172202a$696e74(const char *, const char *, int);
extern int __dtrace_isenabled$ruby$symbol__create$v1(void);

#else

#define	RUBY_DTRACE_ARRAY_CREATE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_ARRAY_CREATE_ENABLED() (0)
#define	RUBY_DTRACE_CMETHOD_ENTRY(arg0, arg1, arg2, arg3) \
do { \
	} while (0)
#define	RUBY_DTRACE_CMETHOD_ENTRY_ENABLED() (0)
#define	RUBY_DTRACE_CMETHOD_RETURN(arg0, arg1, arg2, arg3) \
do { \
	} while (0)
#define	RUBY_DTRACE_CMETHOD_RETURN_ENABLED() (0)
#define	RUBY_DTRACE_FIND_REQUIRE_ENTRY(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_FIND_REQUIRE_ENTRY_ENABLED() (0)
#define	RUBY_DTRACE_FIND_REQUIRE_RETURN(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_FIND_REQUIRE_RETURN_ENABLED() (0)
#define	RUBY_DTRACE_GC_MARK_BEGIN() \
do { \
	} while (0)
#define	RUBY_DTRACE_GC_MARK_BEGIN_ENABLED() (0)
#define	RUBY_DTRACE_GC_MARK_END() \
do { \
	} while (0)
#define	RUBY_DTRACE_GC_MARK_END_ENABLED() (0)
#define	RUBY_DTRACE_GC_SWEEP_BEGIN() \
do { \
	} while (0)
#define	RUBY_DTRACE_GC_SWEEP_BEGIN_ENABLED() (0)
#define	RUBY_DTRACE_GC_SWEEP_END() \
do { \
	} while (0)
#define	RUBY_DTRACE_GC_SWEEP_END_ENABLED() (0)
#define	RUBY_DTRACE_HASH_CREATE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_HASH_CREATE_ENABLED() (0)
#define	RUBY_DTRACE_LOAD_ENTRY(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_LOAD_ENTRY_ENABLED() (0)
#define	RUBY_DTRACE_LOAD_RETURN(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_LOAD_RETURN_ENABLED() (0)
#define	RUBY_DTRACE_METHOD_CACHE_CLEAR(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_METHOD_CACHE_CLEAR_ENABLED() (0)
#define	RUBY_DTRACE_METHOD_ENTRY(arg0, arg1, arg2, arg3) \
do { \
	} while (0)
#define	RUBY_DTRACE_METHOD_ENTRY_ENABLED() (0)
#define	RUBY_DTRACE_METHOD_RETURN(arg0, arg1, arg2, arg3) \
do { \
	} while (0)
#define	RUBY_DTRACE_METHOD_RETURN_ENABLED() (0)
#define	RUBY_DTRACE_OBJECT_CREATE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_OBJECT_CREATE_ENABLED() (0)
#define	RUBY_DTRACE_PARSE_BEGIN(arg0, arg1) \
do { \
	} while (0)
#define	RUBY_DTRACE_PARSE_BEGIN_ENABLED() (0)
#define	RUBY_DTRACE_PARSE_END(arg0, arg1) \
do { \
	} while (0)
#define	RUBY_DTRACE_PARSE_END_ENABLED() (0)
#define	RUBY_DTRACE_RAISE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_RAISE_ENABLED() (0)
#define	RUBY_DTRACE_REQUIRE_ENTRY(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_REQUIRE_ENTRY_ENABLED() (0)
#define	RUBY_DTRACE_REQUIRE_RETURN(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_REQUIRE_RETURN_ENABLED() (0)
#define	RUBY_DTRACE_STRING_CREATE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_STRING_CREATE_ENABLED() (0)
#define	RUBY_DTRACE_SYMBOL_CREATE(arg0, arg1, arg2) \
do { \
	} while (0)
#define	RUBY_DTRACE_SYMBOL_CREATE_ENABLED() (0)

#endif /* !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED */


#ifdef	__cplusplus
}
#endif

#endif	/* _RUBY_PROBES_H */
