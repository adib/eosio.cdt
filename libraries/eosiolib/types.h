/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#pragma once

#include <stdint.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  @defgroup types Builtin Types
 *  @ingroup contractdev
 *  @brief Specifies builtin types, typedefs and aliases
 *
 *  @{
 */

/**
 * @brief Name type
 */
typedef uint64_t capi_name;

/**
 * @brief Name of a permission
 * @details Name of an account
 */
typedef uint64_t capi_permission_name;

/**
 * @brief Name of a table
 * @details Name of atable
 */
typedef uint64_t capi_table_name;

/**
 * @brief Time
 * @details Time
 */
typedef uint32_t capi_time;

/**
 * @brief Name of a scope
 * @details Name of a scope
 */
typedef uint64_t capi_scope_name;

/**
 * @brief Name of an action
 * @details Name of an action
 */
typedef uint64_t capi_action_name;

/**
 * @brief Macro to align/overalign a type to ensure calls to intrinsics with pointers/references are properly aligned
 * @details Macro to align/overalign a type to ensure calls to intrinsics with pointers/references are properly aligned
 */

typedef uint16_t capi_weight_type;

/* macro to align/overalign a type to ensure calls to intrinsics with pointers/references are properly aligned */
#define ALIGNED(X) __attribute__ ((aligned (16))) X

/**
 * @brief EOSIO Public Key
 * @details EOSIO Public Key. It is 34 bytes.
 */
struct capi_public_key {
   char data[34];
};

/**
 * @brief EOSIO Signature
 * @details EOSIO Signature. It is 66 bytes.
 */
struct capi_signature {
   uint8_t data[66];
};

/**
 * @brief 256-bit hash
 * @details 256-bit hash
 */
struct ALIGNED(capi_checksum256) {
   uint8_t hash[32];
};

/**
 * @brief 160-bit hash
 * @details 160-bit hash
 */
struct ALIGNED(capi_checksum160) {
   uint8_t hash[20];
};

/**
 * @brief 512-bit hash
 * @details 512-bit hash
 */
struct ALIGNED(capi_checksum512) {
   uint8_t hash[64];
};

/**
 * @brief Type of EOSIO Transaction Id
 * @details Type of EOSIO Transaction Id. It is 256-bit hash
 */
typedef struct checksum256 capi_transaction_id_type;
typedef struct checksum256 capi_block_id_type;

struct capi_account_permission {
   capi_name account;
   capi_permission_name permission;
};

#ifdef __cplusplus
} /// extern "C"
#endif
/// @}
