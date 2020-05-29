#include "Blockchain.h"
#define MAX_BLOCKS 100000

int main() {
    Blockchain bChain = Blockchain();
    string blockData;

    for (int i = 1; i<MAX_BLOCKS; i++){
        blockData = "Block " + to_string(i) + " Data";
        cout << "Mining Block " << i << endl;
        bChain.AddBlock(Block(i, blockData));
    }
    
    return 0;
}