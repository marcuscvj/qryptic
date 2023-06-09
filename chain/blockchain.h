#ifndef CHAIN_BLOCKCHAIN_H
#define CHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "block.h"

class Blockchain
{
    public:
        Blockchain();

        void add_block(Block block);

    private:
        uint32_t m_difficulty;
        std::vector<Block> m_chain;

        Block get_last_block() const;
};

#endif