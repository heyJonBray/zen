#include <sc/TEMP_zendooInterface.h>

field_t* zendoo_deserialize_field(const unsigned char* field_bytes)  { return nullptr; }

void zendoo_field_free(field_t* field){ field = nullptr; }

sc_vk_t* zendoo_deserialize_sc_vk_from_file(const path_char_t* vk_path, size_t vk_path_len) { return nullptr; }

void zendoo_sc_vk_free(sc_vk_t* sc_vk) { sc_vk = nullptr; }

sc_proof_t* zendoo_deserialize_sc_proof(const unsigned char* sc_proof_bytes) { return nullptr; }

void zendoo_sc_proof_free(sc_proof_t* sc_proof){ sc_proof = nullptr; }

bool zendoo_verify_sc_proof(
    const unsigned char* end_epoch_mc_b_hash,
    const unsigned char* prev_end_epoch_mc_b_hash,
    const backward_transfer_t* bt_list,
    size_t bt_list_len,
    uint64_t quality,
    const field_t* constant,
    const field_t* proofdata,
    const sc_proof_t* sc_proof,
    const sc_vk_t* sc_vk) { return true; }