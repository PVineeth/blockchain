/**
 * Vineeth Penugonda
 * block.h: Defines a block
 * */

// cstdint: Fixed width integer types
#include<cstdint>
#include<iostream>
#include <sstream>

using namespace std;

class Block {
    public:
        string sPrevHash;
    
        Block(uint32_t nIndexIn, const string &sDataIn); // Pass by reference
    
        string GetHash();
    
        void MineBlock(uint32_t nDifficulty);
 

    private:
        uint32_t _nIndex;
        int64_t _nNonce; // PoW: Proof Of Work
        string _sData;
        string _sHash;
        time_t _tTime;
    
        string _CalculateHash() const; // const: Cannot modify variable values


};