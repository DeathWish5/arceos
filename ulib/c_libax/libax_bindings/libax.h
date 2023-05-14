/* Generated by cbindgen and build.rs, DO NOT edit! */

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void ax_srand(uint32_t seed);

uint32_t ax_rand_u32(void);

int ax_print_str(const char *buf, size_t count);

void ax_panic(void);

/**
 * Allocate memory and return the memory address.
 *
 * Returns 0 on failure (the current implementation does not trigger an exception)
 */
void *ax_malloc(size_t size);

/**
 * Release memory.
 *
 * (WARNING) If the address to be released does not match the allocated address, an error should
 * occur, but it will NOT be checked out. This is due to the global allocator `Buddy_system`
 * (currently used) does not check the validity of address to be released.
 */
void ax_free(void *addr);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
