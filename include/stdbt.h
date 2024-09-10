/* stdbt -- Standard base-types
   Copyright (C) 2024 The EWE Project.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <https://www.gnu.org/licenses/>. */
/* Written by netheround <myemail@email.com> */

#include <stdint.h>

/* Define stdbool.h for boolean types. */
#include <stdbool.h>

/*
 * Integer numeric types (signed, unsigned)
*/
typedef int8_t      i8;
typedef uint8_t    u8;
typedef int16_t     i16;
typedef uint16_t   u16;
typedef int32_t     i32;
typedef uint32_t   u32;
typedef int64_t     i64;
typedef uint64_t   u64;

/*
 * Compiler specific 128-bit integer types
*/
#ifdef __SIZEOF_INT128__
    typedef __int128    i128;
    typedef __uint128_t u128;
#else
    typedef struct {
        i64 low;
        i64 high;
    } i128;

    typedef struct {
        u64 low;
        u64 high;
    } u128;
#endif /* __SIZEOF_INT128__ */

/*
 * Floating-point types
*/
typedef float       f32;
typedef double      f64;

/*
 * Extended precision floating-point (usually 80-bit)
*/
typedef long double f80;

/*
 * Pointer-sized integers (platform-dependent)
*/
typedef uintptr_t    usize;
typedef intptr_t     isize;

/*
 * Void type (has no size.)
*/
typedef void nil;