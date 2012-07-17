#include <bitcoin/bitcoin.hpp>
using namespace libbitcoin;

int main()
{
    private_data pkey{
        0x0C, 0x28, 0xFC, 0xA3, 0x86, 0xC7, 0xA2, 0x27,
        0x60, 0x0B, 0x2F, 0xE5, 0x0B, 0x7C, 0xAE, 0x11,
        0xEC, 0x86, 0xD3, 0xBF, 0x1F, 0xBE, 0x47, 0x1B,
        0xE8, 0x98, 0x27, 0xE1, 0x9D, 0x72, 0xAA, 0x1D};
    std::string wif = "5HueCGU8rMjxEXxiPuD5BDku4MkFqeZyd4dZ1jvhTVqvbTLvyTJ";
    BITCOIN_ASSERT(private_key_to_wif(pkey) == wif);
    BITCOIN_ASSERT(wif_to_private_key(wif) == pkey);
    return 0;
}

