#define CBINDGEN_PACKED        __attribute__ ((packed))
#define CBINDGEN_ALIGNED(n)    __attribute__ ((aligned(n)))


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct OpaquePackedStruct OpaquePackedStruct;

typedef struct OpaquePackedUnion OpaquePackedUnion;

typedef union CBINDGEN_ALIGNED(1) Align1Union {
  uintptr_t variant1;
  uint8_t *variant2;
} Align1Union;

typedef union CBINDGEN_ALIGNED(4) Align4Union {
  uintptr_t variant1;
  uint8_t *variant2;
} Align4Union;

typedef union CBINDGEN_ALIGNED(16) Align16Union {
  uintptr_t variant1;
  uint8_t *variant2;
} Align16Union;

typedef struct CBINDGEN_ALIGNED(1) Align1Struct {
  uintptr_t arg1;
  uint8_t *arg2;
} Align1Struct;

typedef struct CBINDGEN_ALIGNED(2) Align2Struct {
  uintptr_t arg1;
  uint8_t *arg2;
} Align2Struct;

typedef struct CBINDGEN_ALIGNED(4) Align4Struct {
  uintptr_t arg1;
  uint8_t *arg2;
} Align4Struct;

typedef struct CBINDGEN_ALIGNED(8) Align8Struct {
  uintptr_t arg1;
  uint8_t *arg2;
} Align8Struct;

typedef struct CBINDGEN_ALIGNED(32) Align32Struct {
  uintptr_t arg1;
  uint8_t *arg2;
} Align32Struct;
